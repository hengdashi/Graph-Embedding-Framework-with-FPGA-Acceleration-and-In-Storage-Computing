#include <cmath>
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <iterator>
#include <limits.h>
#include <iostream>
#include <algorithm>
#include <exception>
#include <system_error>

#include "constant.h"

using namespace std;

void gcnconv(float *x, float *weight, int *edge_index, float *result) {
  float edge_weight[N_EDGE+N_NODE];
  float x_mul[N_NODE][N_CLASS];
  float deg[N_NODE];
  float deg_inv_sqrt[N_NODE];
  float norm[N_EDGE+N_NODE];
  float out[N_EDGE+N_NODE][N_CLASS];

  for (int i = 0; i < N_NODE; ++i) {
    for (int j = 0; j < N_CLASS; ++j) {
      x_mul[i][j] = 0;
      for (int k = 0; k < N_WORD; ++k) {
        x_mul[i][j] += (x[i * N_WORD + k] * weight[k * N_CLASS + j]);
      }
    }
  }

  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < N_NODE; ++j) {
      edge_index[i * (N_EDGE+N_NODE) + (N_EDGE + j)] = j;
    }
  }

  for (int i = 0; i < N_EDGE+N_NODE; ++i) {
    edge_weight[i] = 1;
  }

  for (int i = 0; i < N_EDGE+N_NODE; ++i) {
    deg[edge_index[i]] = deg[edge_index[i]] + edge_weight[i];
  }

  for (int i = 0; i < N_NODE; ++i) {
    deg_inv_sqrt[i] = 1 / sqrtf(deg[i]);
  }

  for (int i = 0; i < N_EDGE+N_NODE; ++i) {
    norm[i] = deg_inv_sqrt[edge_index[i]] * edge_weight[i] * deg_inv_sqrt[edge_index[(N_EDGE+N_NODE) + i]];
  }

  for (int i = 0; i < N_EDGE+N_NODE; ++i) {
    for (int j = 0; j < N_CLASS; ++j) {
      out[i][j] = norm[i] * x_mul[edge_index[i]][j];
    }
  }

  for (int i = 0; i < N_CLASS; ++i) {
    for (int j = 0; j < N_EDGE+N_NODE; ++j) {
      result[edge_index[(N_EDGE + N_NODE) + j] * N_CLASS + i] = result[edge_index[(N_EDGE + N_NODE) + j] * N_CLASS + i] + out[j][i];
    }
  }
}

void load_data(string path, float *x, float *weight, int *edge_index) {
  FILE *ifp;
  size_t len = 0;
  const char *s = " ";
  char *line = nullptr;
  char *token = nullptr;

  float buffer[N_WORD];

  string prefix = path + "/" + DATASET;

  string filename = prefix + "/x.bin";
  if (!(ifp = fopen(filename.c_str(), "rb"))) {
    cerr << "File x.bin cannot be opened for read." << endl;
    exit(1);
  }
  cout << "Start loading x" << endl;
  for (int i = 0; i < N_NODE; ++i) {
    fread(buffer, 4, N_WORD, ifp);
    for (int j = 0; j < N_WORD; ++j) {
      x[i * N_WORD + j] = buffer[j];
    }
  }
  fclose(ifp);
  cout << "End loading x" << endl;


  filename = prefix + "/weight_conv1.txt";
  if (!(ifp = fopen(filename.c_str(), "r"))) {
    cerr << "File weight_conv1.txt cannot be opened for read." << endl;
    exit(1);
  }
  cout << "Start loading weight" << endl;
  for (int i = 0; i < N_WORD; ++i) {
    getline(&line, &len, ifp);
    token = strtok(line, s);
    weight[i * N_CLASS] = atof(token);
    for (int j = 1; j < N_CLASS; ++j) {
      token = strtok(NULL, s);
      weight[i * N_CLASS + j] = atof(token);
    }
  }
  fclose(ifp);
  cout << "End loading weight" << endl;


  filename = prefix + "/edge_index.txt";
  if (!(ifp = fopen(filename.c_str(), "r"))) {
    cerr << "File edge_index.txt cannot be opened for read." << endl;
    exit(1);
  }
  cout << "Start loading edge_index" << endl;
  for (int i = 0; i < 2; ++i) {
    getline(&line, &len, ifp);
    token = strtok(line, s);
    edge_index[i * (N_EDGE+N_NODE)] = atof(token);
    for (int j = 1; j < N_EDGE; ++j) {
      token = strtok(NULL, s);
      edge_index[i * (N_EDGE+N_NODE) + j] = atof(token);
    }
  }
  fclose(ifp);
  cout << "End loading edge_index" << endl;
}

void write_data(string path, float *result) {
  FILE *ofp;
  string prefix = path + "/" + DATASET;
  string filename = prefix + "/result_merlin.txt";

  if (!(ofp = fopen(filename.c_str(), "w"))) {
    cerr << "File result.txt cannot be opened for write." << endl;
    exit(1);
  }

  for (int i = 0; i < N_NODE; ++i) {
    for (int j = 0; j < N_CLASS; ++j) {
      fprintf(ofp, "%f ", result[i * N_CLASS + j]);
    }
    fprintf(ofp, "\n");
  }
  fclose(ofp);
}

bool compare_results(string path) {
  string prefix = path + "/" + DATASET;
  string filename_seq = prefix + "/result.txt";
  string filename_merlin = prefix + "/result_merlin.txt";

  //open files
  ifstream file_seq;
  ifstream file_merlin;

  try {
    file_seq.open(filename_seq);
    if (!file_seq)
      throw system_error(errno, system_category(), "failed to open "+filename_seq);

    file_merlin.open(filename_merlin);
    if (!file_merlin)
      throw system_error(errno, system_category(), "failed to open "+filename_merlin);
  } catch (const std::system_error& e) {
    cerr << e.what() << " (" << e.code() << ")" << endl;
  }
  

  vector<float> seq;
  vector<float> merlin;

  copy(istream_iterator<float>(file_seq), istream_iterator<float>(), back_inserter(seq));
  copy(istream_iterator<float>(file_merlin), istream_iterator<float>(), back_inserter(merlin));

  file_seq.close();
  file_merlin.close();

  if (seq.size() != merlin.size()) {
    return false;
  }

  const float EPSILON = 1e-3;
  for (int i = 0; i < seq.size(); ++i) {
    if (fabs(seq[i] - merlin[i]) >= EPSILON) return false;
  }

  return true;
}
