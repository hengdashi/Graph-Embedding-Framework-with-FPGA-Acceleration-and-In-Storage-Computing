#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

#include "constant.h"

using std::cout;
using std::endl;
using std::ios;
using std::string;
using std::sort;
using std::ifstream;
using std::equal;

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
    printf("File x.bin cannot be opened for read.\n");
    exit(1);
  }

  for (int i = 0; i < N_NODE; ++i) {
    fread(buffer, 4, N_WORD, ifp);
    for (int j = 0; j < N_WORD; ++j) {
      x[i * N_NODE + j] = buffer[j];
    }
  }
  fclose(ifp);

  filename = prefix + "weight_conv1.txt";
  if (!(ifp = fopen(filename.c_str(), "r"))) {
    printf("File weight_conv1.txt cannot be opened for read.\n");
    exit(1);
  }

  for (int i = 0; i < N_WORD; ++i) {
    getline(&line, &len, ifp);
    token = strtok(line, s);
    weight[i * N_WORD] = atof(token);
    for (int j = 1; j < N_CLASS; ++j) {
      token = strtok(NULL, s);
      weight[i * N_WORD + j] = atof(token);
    }
  }
  fclose(ifp);

  filename = prefix + "edge_index.txt";
  if (!(ifp = fopen(filename.c_str(), "r"))) {
    printf("File edge_index.txt cannot be opened for read.\n");
    exit(1);
  }
  for (int i = 0; i < 2; ++i) {
    getline(&line, &len, ifp);
    token = strtok(line, s);
    edge_index[i * 2] = atof(token);
    for (int j = 1; j < N_EDGE; ++j) {
      token = strtok(NULL, s);
      edge_index[i * 2 + j] = atof(token);
    }
  }
  fclose(ifp);
}

void write_data(string path, float *result) {
  FILE *ofp;
  string prefix = path + "/" + DATASET;
  string filename = prefix + "/result_merlin.txt";

  if (!(ofp = fopen(filename.c_str(), "w"))) {
    printf("File result.txt cannot be opened for write.\n");
    exit(1);
  }

  for (int i = 0; i < N_NODE; ++i) {
    for (int j = 0; j < N_CLASS; ++j) {
      fprintf(ofp, "%f ", result[i * N_NODE + j]);
    }
    fprintf(ofp, "\n");
  }
  fclose(ofp);
}

bool compare_results(string path) {
  string prefix = path + "/" + DATASET;
  string filename_seq = prefix + "/result.txt";
  string filename_merlin = prefix + "/result_merlin.txt";

  //open file at the end
  ifstream file_seq(filename_seq, ifstream::ate | ifstream::binary);
  //open file at the end
  ifstream file_merlin(filename_merlin, ifstream::ate | ifstream::binary);

  if (file_seq.tellg() != file_merlin.tellg()) {
    return false; //different file size
  }

  file_seq.seekg(0); //rewind
  file_merlin.seekg(0); //rewind

  std::istreambuf_iterator<char> begin_seq(file_seq);
  std::istreambuf_iterator<char> begin_merlin(file_merlin);

  return equal(begin_seq, std::istreambuf_iterator<char>(), begin_merlin);
  //Second argument is end-of-range iterator
}
