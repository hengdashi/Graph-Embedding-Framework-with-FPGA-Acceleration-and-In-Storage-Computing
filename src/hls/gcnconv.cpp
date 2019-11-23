#include <string.h>
#include <math.h>
#include <assert.h>
#include <ap_int.h>

extern "C" {

void gcnconv_kernel(
    float *x,
    float *weight,
    int *edge_index,
    float *result) {
#pragma HLS interface m_axi port=x offset=slave bundle=gmem
#pragma HLS interface m_axi port=weight offset=slave bundle=gmem
#pragma HLS interface m_axi port=edge_index offset=slave bundle=gmem
#pragma HLS interface m_axi port=result offset=slave bundle=gmem2
#pragma HLS interface s_axilite port=x bundle=control
#pragma HLS interface s_axilite port=weight bundle=control
#pragma HLS interface s_axilite port=edge_index bundle=control
#pragma HLS interface s_axilite port=result bundle=control
#pragma HLS interface s_axilite port=return bundle=control

  static ap_uint<16> constant[20] = "constant.h"

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

}