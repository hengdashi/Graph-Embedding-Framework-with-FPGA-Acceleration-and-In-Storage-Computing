#include "memcpy_512_1d.h"
#define SIZE_1 16
#include "memcpy_512_2d.h"
#undef SIZE_1
#include <string.h> 
#include "cmost.h"
#include <math.h>
#include "merlin_type_define.h"
extern int __merlin_include__GB_memcpy_512_2d_h_1;
extern int __merlin_include__GB_memcpy_512_1d_h_0;
static void __merlin_dummy_extern_int_merlin_include_G_();
static void __merlin_dummy_extern_int_merlin_include_G_();
static void __merlin_dummy_extern_int_merlin_include_G_();
static void __merlin_dummy_kernel_pragma();
// Original: #pragma ACCEL kernel

void gcnconv_kernel(merlin_uint_512 *x,merlin_uint_512 *weight,int edge_index[2 * (88648 + 19717)],merlin_uint_512 *result)
{
  
#pragma HLS DATA_PACK VARIABLE=result
  
#pragma HLS DATA_PACK VARIABLE=weight
  
#pragma HLS DATA_PACK VARIABLE=x
  float weight_buf_0[500][16];
  int edge_index_buf_3[216730];
  int edge_index_buf_2[2][108365];
  int edge_index_buf_1[216730];
  int edge_index_buf_0[108365];
  __merlin_access_range(result,0,315471UL);
  __merlin_access_range(edge_index,0,216729UL);
  __merlin_access_range(weight,0,7999UL);
  __merlin_access_range(x,0,9858499UL);
  
#pragma ACCEL interface variable=result max_depth=315472 depth=315472
  
#pragma ACCEL interface variable=edge_index max_depth=216730 depth=216730
  
#pragma ACCEL interface variable=weight max_depth=8000 depth=8000
  
#pragma ACCEL interface variable=x max_depth=9858500 depth=9858500
  float edge_weight[88648 + 19717];
  float x_mul[19717][16];
  float deg[19717];
  float deg_inv_sqrt[19717];
  float norm[88648 + 19717];
  
#pragma  HLS array_partition  variable=weight_buf_0 cyclic factor = 16 dim=2
  memcpy_wide_bus_read_float_2d_16_512(weight_buf_0,0,0,(merlin_uint_512 *)weight,0 * 4,sizeof(float ) * ((unsigned long )8000),8000L);
// #pragma ACCEL pipeline
  matrix_mul_i:
  for (int i = 0; i < 19717; ++i) {
    float x_buf_0[500];
    
#pragma  HLS array_partition  variable=x_buf_0 cyclic factor = 16 dim=1
    memcpy_wide_bus_read_float_512(&x_buf_0[0],(merlin_uint_512 *)x,i * 500 * 4,sizeof(float ) * ((unsigned long )500),500L);
// #pragma ACCEL pipeline
// #pragma ACCEL false_dependence variable=x_mul
    matrix_mul_j:
    for (int j = 0; j < 16; ++j) {
      float mul = (float )0;
// #pragma ACCEL parallel factor=128 reduction=mul
      matrix_mul_k:
      for (int k = 0; k < 500; ++k) {
        
#pragma ACCEL PIPELINE AUTO
        mul += x_buf_0[k] * weight_buf_0[k][j];
      }
      x_mul[i][j] = mul;
    }
  }
  memcpy(edge_index_buf_2[0],(const void *)(&edge_index[88648]),sizeof(int ) * 128082);
// #pragma ACCEL pipeline
  assign_index_i:
  for (int i = 0; i < 19717; ++i) {
    
#pragma ACCEL PIPELINE AUTO
// #pragma ACCEL parallel
    assign_index_j:
    for (int j = 0; j < 2; ++j) {
      
#pragma ACCEL PARALLEL COMPLETE
      edge_index_buf_2[j][i] = i;
    }
  }
  memcpy((void *)(&edge_index[88648]),edge_index_buf_2[0],sizeof(int ) * 128082);
// #pragma ACCEL pipeline
  assign_weight:
  for (int i = 0; i < 88648 + 19717; ++i) {
    
#pragma ACCEL PIPELINE AUTO
    edge_weight[i] = ((float )1);
  }
  memcpy((void *)(&edge_index_buf_0[0]),(const void *)(&edge_index[0]),sizeof(int ) * 108365);
// #pragma ACCEL pipeline
  inc_degree:
  for (int i = 0; i < 88648 + 19717; ++i) {
    
#pragma ACCEL PIPELINE AUTO
    deg[edge_index_buf_0[i]] += edge_weight[i];
  }
// #pragma ACCEL pipeline
  invert:
  for (int i = 0; i < 19717; ++i) {
    
#pragma ACCEL PIPELINE AUTO
    deg_inv_sqrt[i] = ((float )1) / sqrtf(deg[i]);
  }
  memcpy((void *)(&edge_index_buf_1[0]),(const void *)(&edge_index[0]),sizeof(int ) * 216730L);
// #pragma ACCEL pipeline
  assign_norm:
  for (int i = 0; i < 88648 + 19717; ++i) {
    
#pragma ACCEL PIPELINE AUTO
    norm[i] = deg_inv_sqrt[edge_index_buf_1[i]] * edge_weight[i] * deg_inv_sqrt[edge_index_buf_1[108365 + i]];
  }
  memcpy((void *)(&edge_index_buf_3[0]),(const void *)(&edge_index[0]),sizeof(int ) * 216730L);
// #pragma ACCEL pipeline
  calc_result_i:
  for (int i = 0; i < 88648 + 19717; ++i) {
    
#pragma ACCEL PIPELINE AUTO
// #pragma ACCEL parallel 
    calc_result_j:
    for (int j = 0; j < 16; ++j) {
      float tmp_0;
      
#pragma ACCEL PARALLEL COMPLETE
      tmp_0 = memcpy_wide_bus_single_read_float_512((merlin_uint_512 *)result,(edge_index_buf_3[108365 + i] * 16 + j) * 4);
      tmp_0 += norm[i] * x_mul[edge_index_buf_3[i]][j];
      memcpy_wide_bus_single_write_float_512((merlin_uint_512 *)result,tmp_0,4 * (edge_index_buf_3[108365 + i] * 16 + j));
    }
  }
}
