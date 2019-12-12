#include <iostream>
#include <string>
#include <chrono>

#include "constant.h"

using std::clog;
using std::cout;
using std::endl;
using std::string;
using std::to_string;
using std::chrono::duration_cast;
using std::chrono::microseconds;
using std::chrono::steady_clock;

#ifdef MCC_ACC
#include MCC_ACC_H_FILE
#else
void gcnconv(float *x, float *weight, int *edge_index, float *result);
#endif

// Util functions for host
void load_data(string path, float *x, float *weight, int *edge_index);
void write_data(string path, float *result);
bool compare_results(string path);

int main(int argc, char **argv) {

  float *x = (float *)malloc(sizeof(float) * (N_NODE * N_WORD));
  float *weight = (float *)malloc(sizeof(float) * (N_WORD * N_CLASS));
  int *edge_index = (int *)malloc(sizeof(int) * (2 * (N_EDGE + N_NODE)));
  float *result = (float *)malloc(sizeof(float) * (N_NODE * N_CLASS));

  if (argc < 2) {
    cout << "Usage: ./gcn <data path>" << endl;
    exit(1);
  }

#ifdef MCC_ACC
  __merlin_init(argv[argc-1]);
#endif

  string path(argv[1]);
  cout << "Start loading data" << endl;
  load_data(path, x, weight, edge_index);
  cout << "End loading data" << endl;

  // Compute
  cout << "Start computation" << endl;
  const auto begin = steady_clock::now();

#ifdef MCC_ACC
  __merlin_gcnconv_kernel(x, weight, edge_index, result);
#else
  gcnconv(x, weight, edge_index, result);
#endif

  const auto end = steady_clock::now();
  cout << "End computation" << endl;

  cout << "Start writing data" << endl;
  write_data(path, result);
  cout << "End writing data" << endl;

  if (!compare_results(path)) {
    cout << "Result is different from sequencial version." << endl;
    exit(1);
  }

  uint64_t run_time_us = duration_cast<microseconds>(end - begin).count();
  float gflops = float(N_NODE * N_CLASS * N_WORD + 4 * N_NODE + 3 * N_EDGE + 2 * (N_EDGE + N_NODE) * N_CLASS) / (run_time_us * 1e3);
  clog << "Time: " << run_time_us * 1e-6 << " s\n";
  clog << "Perf: " << gflops << " GFlops\n";

#ifdef MCC_ACC
    __merlin_release();
#endif

  free(x);
  free(weight);
  free(edge_index);
  free(result);
  return 0;
}
