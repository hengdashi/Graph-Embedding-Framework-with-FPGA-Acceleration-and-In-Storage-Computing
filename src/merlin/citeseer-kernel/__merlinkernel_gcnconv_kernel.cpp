#define __constant
#define __kernel
#define __global
#include "memcpy_512_1d.h"
#define SIZE_1 64
#include "memcpy_512_2d.h"
#undef SIZE_1
#define SIZE_1 64
#define SIZE_2 16
#include "memcpy_512_3d.h"
#undef SIZE_1
#undef SIZE_2
#include <string.h> 

#include <math.h>







// Original: #pragma ACCEL kernel

void mars_kernel_0_1_node_0_stage_0(int i,int exec,merlin_uint_512 *x,float x_buf_0_0[58][64])
{
  
#pragma HLS INLINE OFF
  if (exec == 1) {
    memcpy_wide_bus_read_float_2d_64_512(x_buf_0_0,(size_t )0,(size_t )0,(merlin_uint_512 *)x,(size_t )(i * 3703 * 4),sizeof(float ) * ((unsigned long )3703),(size_t )3703L);
  }
}

void mars_kernel_0_1_node_1_stage_1(int i,int exec,float weight_buf_0[58][64][16],float x_buf_0_0[58][64],float x_mul[3327 * 16])
{
  
#pragma HLS INLINE OFF
  if (exec == 1) {
    merlinL6:
    for (int j = 0; j < 16; ++j) 
// Original: #pragma ACCEL parallel
// Original: #pragma ACCEL false_dependence variable=x_mul
// Original: #pragma ACCEL PARALLEL COMPLETE
// Original: #pragma ACCEL FALSE_DEPENDENCE VARIABLE=x_mul
// Original: #pragma ACCEL PARALLEL COMPLETE
// Original: #pragma ACCEL FALSE_DEPENDENCE VARIABLE=x_mul
{
      
#pragma HLS dependence variable=x_mul array inter false
      float mul = (float )0;
// Original pragma:  ACCEL PARALLEL FACTOR=64 
// Original label: matmul_k:for(int k = 0;k < 57;++k) {#pragma ACCEL PIPELINE AUTO#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulfor(int k_sub = 0;k_sub < 64;++k_sub) {#pragma ACCEL PARALLEL#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulmul += x_buf_0[k][k_sub] * weight_buf_0[k][k_sub][j];}}
      float _mul_rdc[64];
      
#pragma HLS array_partition variable=_mul_rdc complete dim=1
{
        merlinL5:
        for (int k_sub = 0; k_sub < 64; ++k_sub) 
// Original: #pragma ACCEL parallel factor=64 reduction=mul
// Original: #pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mul
// Original: #pragma ACCEL PARALLEL FACTOR=64
// Original: #pragma ACCEL ARRAY_PARTITION OFF
// Original: #pragma ACCEL PARALLEL COMPLETE
{
          
#pragma HLS unroll
          _mul_rdc[k_sub] = ((float )0);
        }
      }
      merlinL4:
      for (int k = 0; k < 57; ++k) 
// Original: #pragma ACCEL parallel factor=64 reduction=mul
// Original: #pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mul
// Original: #pragma ACCEL PARALLEL FACTOR=64
// Original: #pragma ACCEL PIPELINE AUTO
{
        
#pragma HLS pipeline
        merlinL3:
        for (int k_sub = 0; k_sub < 64; ++k_sub) 
// Original: #pragma ACCEL parallel factor=64 reduction=mul
// Original: #pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mul
// Original: #pragma ACCEL PARALLEL FACTOR=64
// Original: #pragma ACCEL PARALLEL
{
          
#pragma HLS unroll
          _mul_rdc[k_sub] += x_buf_0_0[k][k_sub] * weight_buf_0[k][k_sub][j];
        }
      }
{
        merlinL2:
        for (int k_sub = 0; k_sub < 64; ++k_sub) 
// Original: #pragma ACCEL parallel factor=64 reduction=mul
// Original: #pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mul
// Original: #pragma ACCEL PARALLEL FACTOR=64
// Original: #pragma ACCEL ARRAY_PARTITION OFF
// Original: #pragma ACCEL PARALLEL COMPLETE
{
          
#pragma HLS unroll
          mul += _mul_rdc[k_sub];
        }
      }
{
// Original pragma:  ACCEL PARALLEL FACTOR=64 
        merlinL1:
// Original pragma:  ACCEL PARALLEL FACTOR=64 
        for (int k = 3648; k < 3703; ++k) 
// Original: #pragma ACCEL parallel factor=64 reduction=mul
// Original: #pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mul
// Original: #pragma ACCEL PARALLEL FACTOR=64
// Original: #pragma ACCEL PIPELINE AUTO
{
          
#pragma HLS pipeline
          mul += x_buf_0_0[57][- 3648 + k] * weight_buf_0[57][- 3648 + k][j];
        }
      }
      x_mul[i * 16 + j] = mul;
    }
// Original label: matmul_j:for(int j = 0;j < 16;++j) {#pragma ACCEL FALSE_DEPENDENCE VARIABLE=x_mulfloat mul =(float )0;matmul_k:for(int k = 0;k < 57;++k) {#pragma ACCEL PIPELINE AUTO#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulfor(int k_sub = 0;k_sub < 64;++k_sub) {#pragma ACCEL PARALLEL#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulmul += x_buf_0[k][k_sub] * weight_buf_0[k][k_sub][j];}}{for(int k = 3648;k < 3703;++k) {#pragma ACCEL PIPELINE AUTOmul += x_buf_0[57][- 3648 + k] * weight_buf_0[57][- 3648 + k][j];}}x_mul[i * 16 + j] = mul;}
  }
}

void mars_kernel_0_1(int mars_i,int mars_init,int mars_cond,float mars_weight_buf_0_1[58][64][16],merlin_uint_512 *x,float mars_x_buf_0_0_0[58][64],float mars_x_buf_0_0_1[58][64],float mars_x_mul_1[3327 * 16])
{
  
#pragma HLS INLINE OFF
  mars_kernel_0_1_node_0_stage_0(mars_i - 0,(int )((mars_i >= mars_init + 0) & (mars_i <= mars_cond + 0)),x,mars_x_buf_0_0_0);
  mars_kernel_0_1_node_1_stage_1(mars_i - 1,(int )((mars_i >= mars_init + 1) & (mars_i <= mars_cond + 1)),mars_weight_buf_0_1,mars_x_buf_0_0_1,mars_x_mul_1);
}
static int gcnconv_kernel_dummy_pos;

static void merlin_memcpy_0(int dst[2][12431],int dst_idx_0,int dst_idx_1,int src[24862],int src_idx_0,unsigned int len,unsigned int max_len)
{
  
#pragma HLS inline off
  
#pragma HLS function_instantiate variable=dst_idx_0,dst_idx_1,src_idx_0
  unsigned long i;
  unsigned long total_offset1 = (0 * 2 + dst_idx_0) * 12431 + dst_idx_1;
  unsigned long total_offset2 = 0 * 24862 + src_idx_0;
  merlinL0:
  for (i = 0; i < len / 4; ++i) {
    
#pragma HLS PIPELINE II=1
    
#pragma HLS LOOP_TRIPCOUNT max=24862
    dst[(total_offset1 + i) / 12431][(total_offset1 + i) % 12431] = src[total_offset2 + i];
  }
}

static void merlin_memcpy_1(int dst[24862],int dst_idx_0,int src[2][12431],int src_idx_0,int src_idx_1,unsigned int len,unsigned int max_len)
{
  
#pragma HLS inline off
  
#pragma HLS function_instantiate variable=dst_idx_0,src_idx_0,src_idx_1
  unsigned long i;
  unsigned long total_offset1 = 0 * 24862 + dst_idx_0;
  unsigned long total_offset2 = (0 * 2 + src_idx_0) * 12431 + src_idx_1;
  merlinL7:
  for (i = 0; i < len / 4; ++i) {
    
#pragma HLS PIPELINE II=1
    
#pragma HLS LOOP_TRIPCOUNT max=15758
    dst[total_offset1 + i] = src[(total_offset2 + i) / 12431][(total_offset2 + i) % 12431];
  }
}
extern "C" { 

__kernel void gcnconv_kernel(merlin_uint_512 *x,merlin_uint_512 *weight,int edge_index[2 * (9104 + 3327)],merlin_uint_512 *result)
{
  
#pragma HLS INTERFACE m_axi port=edge_index offset=slave depth=24862
  
#pragma HLS INTERFACE m_axi port=result offset=slave depth=3327
  
#pragma HLS INTERFACE m_axi port=weight offset=slave depth=3703
  
#pragma HLS INTERFACE m_axi port=x offset=slave depth=769993
  
#pragma HLS INTERFACE s_axilite port=edge_index bundle=control
  
#pragma HLS INTERFACE s_axilite port=result bundle=control
  
#pragma HLS INTERFACE s_axilite port=weight bundle=control
  
#pragma HLS INTERFACE s_axilite port=x bundle=control
  
#pragma HLS INTERFACE s_axilite port=return bundle=control
  
#pragma HLS DATA_PACK VARIABLE=result
  
#pragma HLS DATA_PACK VARIABLE=weight
  
#pragma HLS DATA_PACK VARIABLE=x
  float weight_buf_0[58][64][16];
  
#pragma HLS array_partition variable=weight_buf_0 complete dim=3
  
#pragma HLS array_partition variable=weight_buf_0 complete dim=2
  float result_buf_0[53232];
  
#pragma HLS array_partition variable=result_buf_0 cyclic factor=16 dim=1
  int edge_index_buf_0[2][12431];
  
#pragma HLS array_partition variable=edge_index_buf_0 complete dim=1
  merlin_memcpy_0(edge_index_buf_0,0,0,edge_index,0,sizeof(int ) * ((unsigned long )24862),99448UL);
  
#pragma ACCEL interface variable=result max_depth=53232 depth=53232
  
#pragma ACCEL interface variable=edge_index max_depth=24862 depth=24862
  
#pragma ACCEL interface variable=weight max_depth=59248 depth=59248
  
#pragma ACCEL interface variable=x max_depth=12319881 depth=12319881
  float edge_weight[9104 + 3327];
  float x_mul[3327 * 16];
  
#pragma HLS array_partition variable=x_mul cyclic factor=8 dim=1
  float deg[3327];
  float norm[9104 + 3327];
// Existing HLS partition: #pragma HLS array_partition variable=weight_buf_0 cyclic factor = 16 dim=3
  memcpy_wide_bus_read_float_3d_64_16_512(weight_buf_0,0,0,0,(merlin_uint_512 *)weight,(0 * 4),sizeof(float ) * ((unsigned long )59248),59248L);
// Original label: matmul_i:for(int i = 0;i < 3327;++i) {float x_buf_0[58][64];#pragma HLS array_partition variable=x_buf_0 cyclic factor = 16 dim=2memcpy_wide_bus_read_float_2d_64_512(x_buf_0,0,0,(merlin_uint_512 *)x,(i * 3703 * 4),sizeof(float ) *((unsigned long )3703),3703L);#pragma ACCEL PIPELINEmatmul_j:for(int j = 0;j < 16;++j) {#pragma ACCEL FALSE_DEPENDENCE VARIABLE=x_mulfloat mul =(float )0;matmul_k:for(int k = 0;k < 57;++k) {#pragma ACCEL PIPELINE AUTO#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulfor(int k_sub = 0;k_sub < 64;++k_sub) {#pragma ACCEL PARALLEL#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulmul += x_buf_0[k][k_sub] * weight_buf_0[k][k_sub][j];}}{for(int k = 3648;k < 3703;++k) {#pragma ACCEL PIPELINE AUTOmul += x_buf_0[57][- 3648 + k] * weight_buf_0[57][- 3648 + k][j];}}x_mul[i * 16 + j] = mul;}}
  float x_buf_0_0[58][64];
  int mars_count_0_1 = 0;
  float mars_kernel_0_1_x_buf_0_0_0[58][64];
// Existing HLS partition: #pragma HLS array_partition variable=mars_kernel_0_1_x_buf_0_0_0 cyclic factor=16 dim=2
  
#pragma HLS array_partition variable=mars_kernel_0_1_x_buf_0_0_0 complete dim=2
  float mars_kernel_0_1_x_buf_0_0_1[58][64];
// Existing HLS partition: #pragma HLS array_partition variable=mars_kernel_0_1_x_buf_0_0_1 cyclic factor=16 dim=2
  
#pragma HLS array_partition variable=mars_kernel_0_1_x_buf_0_0_1 complete dim=2
  merlinL15:
  for (int i = 0; i < 3327 + 1; ++i) 
// Original: #pragma ACCEL pipeline
// Original: #pragma ACCEL PIPELINE
// Original: #pragma ACCEL PIPELINE
{
    if (mars_count_0_1 == 0) 
      mars_kernel_0_1(i,0,3326,weight_buf_0,x,mars_kernel_0_1_x_buf_0_0_0,mars_kernel_0_1_x_buf_0_0_1,x_mul);
     else 
      mars_kernel_0_1(i,0,3326,weight_buf_0,x,mars_kernel_0_1_x_buf_0_0_1,mars_kernel_0_1_x_buf_0_0_0,x_mul);
    mars_count_0_1++;
    if (mars_count_0_1 == 2) 
      mars_count_0_1 = 0;
  }
// Original label: matmul_j:for(int j = 0;j < 16;++j) {#pragma ACCEL FALSE_DEPENDENCE VARIABLE=x_mulfloat mul =(float )0;matmul_k:for(int k = 0;k < 57;++k) {#pragma ACCEL PIPELINE AUTO#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulfor(int k_sub = 0;k_sub < 64;++k_sub) {#pragma ACCEL PARALLEL#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulmul += x_buf_0[k][k_sub] * weight_buf_0[k][k_sub][j];}}{for(int k = 3648;k < 3703;++k) {#pragma ACCEL PIPELINE AUTOmul += x_buf_0[57][- 3648 + k] * weight_buf_0[57][- 3648 + k][j];}}x_mul[i * 16 + j] = mul;}
// Original label: assign_index_i:for(int i = 0;i < 3327;++i) {#pragma ACCEL PIPELINEassign_index_j:for(int j = 0;j < 2;++j) {#pragma ACCEL PARALLEL COMPLETEedge_index_buf_0[j][9104 + i] = i;}}
  merlinL14:
// Original label: matmul_j:for(int j = 0;j < 16;++j) {#pragma ACCEL FALSE_DEPENDENCE VARIABLE=x_mulfloat mul =(float )0;matmul_k:for(int k = 0;k < 57;++k) {#pragma ACCEL PIPELINE AUTO#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulfor(int k_sub = 0;k_sub < 64;++k_sub) {#pragma ACCEL PARALLEL#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulmul += x_buf_0[k][k_sub] * weight_buf_0[k][k_sub][j];}}{for(int k = 3648;k < 3703;++k) {#pragma ACCEL PIPELINE AUTOmul += x_buf_0[57][- 3648 + k] * weight_buf_0[57][- 3648 + k][j];}}x_mul[i * 16 + j] = mul;}
// Original label: assign_index_i:for(int i = 0;i < 3327;++i) {#pragma ACCEL PIPELINEassign_index_j:for(int j = 0;j < 2;++j) {#pragma ACCEL PARALLEL COMPLETEedge_index_buf_0[j][9104 + i] = i;}}
  for (int i = 0; i < 3327; ++i) 
// Original: #pragma ACCEL pipeline
// Original: #pragma ACCEL PIPELINE
// Original: #pragma ACCEL PIPELINE
{
    
#pragma HLS pipeline
// Original label: assign_index_j:for(int j = 0;j < 2;++j) {#pragma ACCEL PARALLEL COMPLETEedge_index_buf_0[j][9104 + i] = i;}
    merlinL13:
// Original label: assign_index_j:for(int j = 0;j < 2;++j) {#pragma ACCEL PARALLEL COMPLETEedge_index_buf_0[j][9104 + i] = i;}
    for (int j = 0; j < 2; ++j) 
// Original: #pragma ACCEL parallel
// Original: #pragma ACCEL PARALLEL COMPLETE
// Original: #pragma ACCEL PARALLEL COMPLETE
{
      
#pragma HLS unroll
      edge_index_buf_0[j][9104 + i] = i;
    }
  }
// Original label: assign_weight:for(int i = 0;i < 9104 + 3327;++i) {#pragma ACCEL PIPELINEedge_weight[i] =((float )1);}
  merlinL12:
// Original label: assign_weight:for(int i = 0;i < 9104 + 3327;++i) {#pragma ACCEL PIPELINEedge_weight[i] =((float )1);}
  for (int i = 0; i < 9104 + 3327; ++i) 
// Original: #pragma ACCEL pipeline
// Original: #pragma ACCEL PIPELINE
// Original: #pragma ACCEL PIPELINE
{
    
#pragma HLS pipeline
    edge_weight[i] = ((float )1);
  }
// Original label: assign_degree:for(int i = 0;i < 9104 + 3327;++i) {#pragma ACCEL PIPELINEdeg[edge_index_buf_0[0][i]] += edge_weight[i];}
  merlinL11:
// Original label: assign_degree:for(int i = 0;i < 9104 + 3327;++i) {#pragma ACCEL PIPELINEdeg[edge_index_buf_0[0][i]] += edge_weight[i];}
  for (int i = 0; i < 9104 + 3327; ++i) 
// Original: #pragma ACCEL pipeline
// Original: #pragma ACCEL PIPELINE
// Original: #pragma ACCEL PIPELINE
{
    
#pragma HLS pipeline
    deg[edge_index_buf_0[0][i]] += edge_weight[i];
  }
// Original label: assign_norm:for(int i = 0;i < 9104 + 3327;++i) {#pragma ACCEL PIPELINEnorm[i] =((float )1) / sqrtf(deg[edge_index_buf_0[0][i]]) * edge_weight[i] *(((float )1) / sqrtf(deg[edge_index_buf_0[1][i]]));}
  merlinL10:
// Original label: assign_norm:for(int i = 0;i < 9104 + 3327;++i) {#pragma ACCEL PIPELINEnorm[i] =((float )1) / sqrtf(deg[edge_index_buf_0[0][i]]) * edge_weight[i] *(((float )1) / sqrtf(deg[edge_index_buf_0[1][i]]));}
  for (int i = 0; i < 9104 + 3327; ++i) 
// Original: #pragma ACCEL pipeline
// Original: #pragma ACCEL PIPELINE
// Original: #pragma ACCEL PIPELINE
{
    
#pragma HLS pipeline
    norm[i] = ((float )1) / sqrtf(deg[edge_index_buf_0[0][i]]) * edge_weight[i] * (((float )1) / sqrtf(deg[edge_index_buf_0[1][i]]));
  }
// Existing HLS partition: #pragma HLS array_partition variable=result_buf_0 cyclic factor = 16 dim=1
  memcpy_wide_bus_read_float_512(&result_buf_0[0],(merlin_uint_512 *)result,(0 * 4),sizeof(float ) * 53232UL,53232L);
// Original label: graphsum_i:for(int i = 0;i < 9104 + 3327;++i) {#pragma ACCEL PIPELINEgraphsum_j:for(int j = 0;j < 16;++j) {#pragma ACCEL PARALLEL COMPLETEresult_buf_0[edge_index_buf_0[1][i] * 16 + j] += norm[i] * x_mul[edge_index_buf_0[0][i] * 16 + j];}}
  merlinL9:
// Original label: graphsum_i:for(int i = 0;i < 9104 + 3327;++i) {#pragma ACCEL PIPELINEgraphsum_j:for(int j = 0;j < 16;++j) {#pragma ACCEL PARALLEL COMPLETEresult_buf_0[edge_index_buf_0[1][i] * 16 + j] += norm[i] * x_mul[edge_index_buf_0[0][i] * 16 + j];}}
  for (int i = 0; i < 9104 + 3327; ++i) 
// Original: #pragma ACCEL pipeline
// Original: #pragma ACCEL PIPELINE
// Original: #pragma ACCEL PIPELINE
{
    
#pragma HLS pipeline
// Original label: graphsum_j:for(int j = 0;j < 16;++j) {#pragma ACCEL PARALLEL COMPLETEresult_buf_0[edge_index_buf_0[1][i] * 16 + j] += norm[i] * x_mul[edge_index_buf_0[0][i] * 16 + j];}
    merlinL8:
// Original label: graphsum_j:for(int j = 0;j < 16;++j) {#pragma ACCEL PARALLEL COMPLETEresult_buf_0[edge_index_buf_0[1][i] * 16 + j] += norm[i] * x_mul[edge_index_buf_0[0][i] * 16 + j];}
    for (int j = 0; j < 16; ++j) 
// Original: #pragma ACCEL parallel
// Original: #pragma ACCEL PARALLEL COMPLETE
// Original: #pragma ACCEL PARALLEL COMPLETE
{
      
#pragma HLS unroll
      result_buf_0[edge_index_buf_0[1][i] * 16 + j] += norm[i] * x_mul[edge_index_buf_0[0][i] * 16 + j];
    }
  }
// Existing HLS partition: #pragma HLS array_partition variable=result_buf_0 cyclic factor = 16 dim=1
  memcpy_wide_bus_write_float_512((merlin_uint_512 *)result,&result_buf_0[0],(4 * 0),sizeof(float ) * 53232UL,53232L);
  merlin_memcpy_1(edge_index,9104,edge_index_buf_0,0,9104,sizeof(int ) * ((unsigned long )15758),63032UL);
}
}
