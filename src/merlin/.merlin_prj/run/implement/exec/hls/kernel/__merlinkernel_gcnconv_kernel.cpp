#define __constant
#define __kernel
#define __global
#include "memcpy_512_1d.h"
#define SIZE_1 16
#include "memcpy_512_2d.h"
#undef SIZE_1
#include <string.h> 

#include <math.h>
#include "merlin_type_define.h"






// Original: #pragma ACCEL kernel
static int gcnconv_kernel_dummy_pos;

static void merlin_memcpy_0(int dst[2][108365],int dst_idx_0,int dst_idx_1,int src[216730],int src_idx_0,unsigned int len,unsigned int max_len)
{
  
#pragma HLS inline off
  
#pragma HLS function_instantiate variable=dst_idx_0,dst_idx_1,src_idx_0
  unsigned long i;
  unsigned long total_offset1 = (0 * 2 + dst_idx_0) * 108365 + dst_idx_1;
  unsigned long total_offset2 = 0 * 216730 + src_idx_0;
  merlinL0:
  for (i = 0; i < len / 4; ++i) {
    
#pragma HLS PIPELINE II=1
    
#pragma HLS LOOP_TRIPCOUNT max=128082
    dst[(total_offset1 + i) / 108365][(total_offset1 + i) % 108365] = src[total_offset2 + i];
  }
}

static void merlin_memcpy_1(int dst[216730],int dst_idx_0,int src[2][108365],int src_idx_0,int src_idx_1,unsigned int len,unsigned int max_len)
{
  
#pragma HLS inline off
  
#pragma HLS function_instantiate variable=dst_idx_0,src_idx_0,src_idx_1
  unsigned long i;
  unsigned long total_offset1 = 0 * 216730 + dst_idx_0;
  unsigned long total_offset2 = (0 * 2 + src_idx_0) * 108365 + src_idx_1;
  merlinL1:
  for (i = 0; i < len / 4; ++i) {
    
#pragma HLS PIPELINE II=1
    
#pragma HLS LOOP_TRIPCOUNT max=128082
    dst[total_offset1 + i] = src[(total_offset2 + i) / 108365][(total_offset2 + i) % 108365];
  }
}

static void merlin_memcpy_2(int dst[108365],int dst_idx_0,int src[216730],int src_idx_0,unsigned int len,unsigned int max_len)
{
  
#pragma HLS inline off
  
#pragma HLS function_instantiate variable=dst_idx_0,src_idx_0
  unsigned long i;
  unsigned long total_offset1 = 0 * 108365 + dst_idx_0;
  unsigned long total_offset2 = 0 * 216730 + src_idx_0;
  merlinL2:
  for (i = 0; i < len / 4; ++i) {
    
#pragma HLS PIPELINE II=1
    
#pragma HLS LOOP_TRIPCOUNT max=108365
    dst[total_offset1 + i] = src[total_offset2 + i];
  }
}

static void merlin_memcpy_3(int dst[216730],int dst_idx_0,int src[216730],int src_idx_0,unsigned int len,unsigned int max_len)
{
  
#pragma HLS inline off
  
#pragma HLS function_instantiate variable=dst_idx_0,src_idx_0
  unsigned long i;
  unsigned long total_offset1 = 0 * 216730 + dst_idx_0;
  unsigned long total_offset2 = 0 * 216730 + src_idx_0;
  merlinL3:
  for (i = 0; i < len / 4; ++i) {
    
#pragma HLS PIPELINE II=1
    
#pragma HLS LOOP_TRIPCOUNT max=216730
    dst[total_offset1 + i] = src[total_offset2 + i];
  }
}

static void merlin_memcpy_4(int dst[216730],int dst_idx_0,int src[216730],int src_idx_0,unsigned int len,unsigned int max_len)
{
  
#pragma HLS inline off
  
#pragma HLS function_instantiate variable=dst_idx_0,src_idx_0
  unsigned long i;
  unsigned long total_offset1 = 0 * 216730 + dst_idx_0;
  unsigned long total_offset2 = 0 * 216730 + src_idx_0;
  merlinL4:
  for (i = 0; i < len / 4; ++i) {
    
#pragma HLS PIPELINE II=1
    
#pragma HLS LOOP_TRIPCOUNT max=216730
    dst[total_offset1 + i] = src[total_offset2 + i];
  }
}
extern "C" { 

__kernel void gcnconv_kernel(merlin_uint_512 *x,merlin_uint_512 *weight,int edge_index[2 * (88648 + 19717)],merlin_uint_512 *result)
{
  
#pragma HLS INTERFACE m_axi port=edge_index offset=slave depth=216730
  
#pragma HLS INTERFACE m_axi port=result offset=slave depth=19717
  
#pragma HLS INTERFACE m_axi port=weight offset=slave depth=500
  
#pragma HLS INTERFACE m_axi port=x offset=slave depth=616157
  
#pragma HLS INTERFACE s_axilite port=edge_index bundle=control
  
#pragma HLS INTERFACE s_axilite port=result bundle=control
  
#pragma HLS INTERFACE s_axilite port=weight bundle=control
  
#pragma HLS INTERFACE s_axilite port=x bundle=control
  
#pragma HLS INTERFACE s_axilite port=return bundle=control
  
#pragma HLS DATA_PACK VARIABLE=result
  
#pragma HLS DATA_PACK VARIABLE=weight
  
#pragma HLS DATA_PACK VARIABLE=x
  float weight_buf_0[500][16];
  
#pragma HLS array_partition variable=weight_buf_0 cyclic factor=8 dim=2
  int edge_index_buf_3[216730];
  int edge_index_buf_2[2][108365];
  int edge_index_buf_1[216730];
  int edge_index_buf_0[108365];
  
#pragma ACCEL interface variable=result max_depth=315472 depth=315472
  
#pragma ACCEL interface variable=edge_index max_depth=216730 depth=216730
  
#pragma ACCEL interface variable=weight max_depth=8000 depth=8000
  
#pragma ACCEL interface variable=x max_depth=9858500 depth=9858500
  float edge_weight[88648 + 19717];
  float x_mul[19717][16];
  
#pragma HLS array_partition variable=x_mul complete dim=2
  float deg[19717];
  float deg_inv_sqrt[19717];
  float norm[88648 + 19717];
// Existing HLS partition: #pragma HLS array_partition variable=weight_buf_0 cyclic factor = 16 dim=2
  memcpy_wide_bus_read_float_2d_16_512(weight_buf_0,0,0,(merlin_uint_512 *)weight,(0 * 4),sizeof(float ) * ((unsigned long )8000),8000L);
// #pragma ACCEL pipeline
  matrixumului0:
  for (int i = 0; i < 19717; ++i) {
    float x_buf_0[500];
// Existing HLS partition: #pragma HLS array_partition variable=x_buf_0 cyclic factor = 16 dim=1
    
#pragma HLS array_partition variable=x_buf_0 cyclic factor=8 dim=1
    memcpy_wide_bus_read_float_512(&x_buf_0[0],(merlin_uint_512 *)x,(i * 500 * 4),sizeof(float ) * ((unsigned long )500),500L);
// #pragma ACCEL pipeline
// #pragma ACCEL false_dependence variable=x_mul
    matrixumuluj0:
    for (int j = 0; j < 16; ++j) {
      float mul = (float )0;
// #pragma ACCEL parallel factor=128 reduction=mul
      matrixumuluk0:
      for (int k = 0; k < 500; ++k) 
// Original: #pragma ACCEL PIPELINE AUTO
{
        
#pragma HLS pipeline
        mul += x_buf_0[k] * weight_buf_0[k][j];
      }
      x_mul[i][j] = mul;
    }
  }
  merlin_memcpy_0(edge_index_buf_2,0,0,edge_index,88648,sizeof(int ) * ((unsigned long )128082),512328UL);
// #pragma ACCEL pipeline
  assignuindexui0:
  for (int i = 0; i < 19717; ++i) 
// Original: #pragma ACCEL PIPELINE AUTO
{
    
#pragma HLS pipeline
// #pragma ACCEL parallel
    assignuindexuj0:
    for (int j = 0; j < 2; ++j) 
// Original: #pragma ACCEL PARALLEL COMPLETE
{
      
#pragma HLS unroll
      edge_index_buf_2[j][i] = i;
    }
  }
  merlin_memcpy_1(edge_index,88648,edge_index_buf_2,0,0,sizeof(int ) * ((unsigned long )128082),512328UL);
// #pragma ACCEL pipeline
  assignuweight0:
  for (int i = 0; i < 88648 + 19717; ++i) 
// Original: #pragma ACCEL PIPELINE AUTO
{
    
#pragma HLS pipeline
    edge_weight[i] = ((float )1);
  }
  merlin_memcpy_2(edge_index_buf_0,0,edge_index,0,sizeof(int ) * ((unsigned long )108365),433460UL);
// #pragma ACCEL pipeline
  incudegree0:
  for (int i = 0; i < 88648 + 19717; ++i) 
// Original: #pragma ACCEL PIPELINE AUTO
{
    
#pragma HLS pipeline
    deg[edge_index_buf_0[i]] += edge_weight[i];
  }
// #pragma ACCEL pipeline
  invert:
  for (int i = 0; i < 19717; ++i) 
// Original: #pragma ACCEL PIPELINE AUTO
{
    
#pragma HLS pipeline
    deg_inv_sqrt[i] = ((float )1) / sqrtf(deg[i]);
  }
  merlin_memcpy_3(edge_index_buf_1,0,edge_index,0,sizeof(int ) * ((unsigned long )216730L),866920UL);
// #pragma ACCEL pipeline
  assignunorm0:
  for (int i = 0; i < 88648 + 19717; ++i) 
// Original: #pragma ACCEL PIPELINE AUTO
{
    
#pragma HLS pipeline
    norm[i] = deg_inv_sqrt[edge_index_buf_1[i]] * edge_weight[i] * deg_inv_sqrt[edge_index_buf_1[108365 + i]];
  }
  merlin_memcpy_4(edge_index_buf_3,0,edge_index,0,sizeof(int ) * ((unsigned long )216730L),866920UL);
// #pragma ACCEL pipeline
  calcuresultui0:
  for (int i = 0; i < 88648 + 19717; ++i) 
// Original: #pragma ACCEL PIPELINE AUTO
{
    
#pragma HLS pipeline
// #pragma ACCEL parallel 
    calcuresultuj0:
    for (int j = 0; j < 16; ++j) 
// Original: #pragma ACCEL PARALLEL COMPLETE
{
      
#pragma HLS unroll
      float tmp_0;
      tmp_0 = memcpy_wide_bus_single_read_float_512((merlin_uint_512 *)result,((edge_index_buf_3[108365 + i] * 16 + j) * 4));
      tmp_0 += norm[i] * x_mul[edge_index_buf_3[i]][j];
      memcpy_wide_bus_single_write_float_512((merlin_uint_512 *)result,tmp_0,(4 * (edge_index_buf_3[108365 + i] * 16 + j)));
    }
  }
}
}
