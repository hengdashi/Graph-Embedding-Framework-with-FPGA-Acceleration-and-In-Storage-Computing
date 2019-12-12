#include <math.h>
#include "merlin_type_define.h"
extern int __merlin_include__GB_merlin_type_define_h_1;
extern int __merlin_include__GB_math_h_0;
#pragma ACCEL kernel

void gcnconv_kernel(float x[19717 * 500],float weight[500 * 16],int edge_index[2 * (88648 + 19717)],float result[19717 * 16])
{
  
#pragma ACCEL interface variable=result depth=315472
  
#pragma ACCEL interface variable=edge_index depth=216730
  
#pragma ACCEL interface variable=weight depth=8000
  
#pragma ACCEL interface variable=x depth=9858500
  float edge_weight[88648 + 19717];
  float x_mul[19717][16];
  float deg[19717];
  float deg_inv_sqrt[19717];
  float norm[88648 + 19717];
// #pragma ACCEL pipeline
  matrix_mul_i:
  for (int i = 0; i < 19717; ++i) {
// #pragma ACCEL pipeline
// #pragma ACCEL false_dependence variable=x_mul
    matrix_mul_j:
    for (int j = 0; j < 16; ++j) {
      float mul = (float )0;
// #pragma ACCEL parallel factor=128 reduction=mul
      matrix_mul_k:
      for (int k = 0; k < 500; ++k) {
        mul += x[i * 500 + k] * weight[k * 16 + j];
      }
      x_mul[i][j] = mul;
    }
  }
// #pragma ACCEL pipeline
  assign_index_i:
  for (int i = 0; i < 19717; ++i) {
// #pragma ACCEL parallel
    assign_index_j:
    for (int j = 0; j < 2; ++j) {
      edge_index[j * (88648 + 19717) + (88648 + i)] = i;
    }
  }
// #pragma ACCEL pipeline
  assign_weight:
  for (int i = 0; i < 88648 + 19717; ++i) {
    edge_weight[i] = ((float )1);
  }
// #pragma ACCEL pipeline
  inc_degree:
  for (int i = 0; i < 88648 + 19717; ++i) {
    deg[edge_index[i]] += edge_weight[i];
  }
// #pragma ACCEL pipeline
  invert:
  for (int i = 0; i < 19717; ++i) {
    deg_inv_sqrt[i] = ((float )1) / sqrtf(deg[i]);
  }
// #pragma ACCEL pipeline
  assign_norm:
  for (int i = 0; i < 88648 + 19717; ++i) {
    norm[i] = deg_inv_sqrt[edge_index[i]] * edge_weight[i] * deg_inv_sqrt[edge_index[88648 + 19717 + i]];
  }
// #pragma ACCEL pipeline
  calc_result_i:
  for (int i = 0; i < 88648 + 19717; ++i) {
// #pragma ACCEL parallel 
    calc_result_j:
    for (int j = 0; j < 16; ++j) {
      result[edge_index[88648 + 19717 + i] * 16 + j] += norm[i] * x_mul[edge_index[i]][j];
    }
  }
}
