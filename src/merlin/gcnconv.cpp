#include <string.h>
#include <math.h>
#include <assert.h>

#define min(X,Y) ((X)<(Y)?(X):(Y))
#define max(X,Y) ((X)>(Y)?(X):(Y))

#include "constant.h"

#pragma ACCEL kernel
void gcnconv_kernel(
    float x[N_NODE*N_WORD],
    float weight[N_WORD*N_CLASS],
    int edge_index[2*(N_EDGE+N_NODE)],
    float result[N_NODE*N_CLASS]) {

  float edge_weight[N_EDGE+N_NODE];
  float x_mul[N_NODE*N_CLASS];
  float deg[N_NODE];
  float norm[N_EDGE+N_NODE];

  #pragma ACCEL pipeline
  matmul_i: for (int i = 0; i < N_NODE; ++i) {
    #pragma ACCEL parallel factor=8
    #pragma ACCEL false_dependence variable=x_mul
    matmul_j: for (int j = 0; j < N_CLASS; ++j) {
      float mul = 0;
      #pragma ACCEL parallel factor=64 reduction=mul
      matmul_k: for (int k = 0; k < N_WORD; ++k) {
        mul += (x[i * N_WORD + k] * weight[k * N_CLASS + j]);
      }
      x_mul[i * N_CLASS + j] = mul;
    }
  }

  #pragma ACCEL pipeline
  assign_index_i: for (int i = 0; i < N_NODE; ++i) {
    #pragma ACCEL parallel
    assign_index_j: for (int j = 0; j < 2; ++j) {
      edge_index[j * (N_EDGE+N_NODE) + (N_EDGE + i)] = i;
    }
  }

  #pragma ACCEL pipeline
  assign_weight: for (int i = 0; i < N_EDGE+N_NODE; ++i) {
    edge_weight[i] = 1;
  }

  #pragma ACCEL pipeline
  assign_degree: for (int i = 0; i < N_EDGE+N_NODE; ++i) {
    deg[edge_index[i]] += edge_weight[i];
  }

  #pragma ACCEL pipeline
  assign_norm: for (int i = 0; i < N_EDGE+N_NODE; ++i) {
    norm[i] = (1 / sqrtf(deg[edge_index[i]])) * edge_weight[i] * (1 / sqrtf(deg[edge_index[(N_EDGE+N_NODE) + i]]));
  }

  #pragma ACCEL pipeline
  graphsum_i: for (int i = 0; i < N_EDGE+N_NODE; ++i) {
    #pragma ACCEL parallel 
    graphsum_j: for (int j = 0; j < N_CLASS; ++j) {
      result[edge_index[(N_EDGE + N_NODE) + i] * N_CLASS + j] += norm[i] * x_mul[edge_index[i] * N_CLASS + j];
    }
  }
}
