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
#define SIZE_1 13264
#include "memcpy_512_2d.h"
#undef SIZE_1
#include <string.h> 

#include <math.h>








// Original: #pragma ACCEL kernel

void mars_kernel_0_1_node_0_stage_0(int i,int exec,merlin_uint_512 *x,float x_buf_0_0[23][64])
{
  
#pragma HLS INLINE OFF
  if (exec == 1) {
    memcpy_wide_bus_read_float_2d_64_512(x_buf_0_0,(size_t )0,(size_t )0,(merlin_uint_512 *)x,(size_t )(i * 1433 * 4),sizeof(float ) * ((unsigned long )1433),(size_t )1433L);
  }
}

void mars_kernel_0_1_node_1_stage_1(int i,int exec,float weight_buf_0[23][64][16],float x_buf_0_0[23][64],float x_mul[2708 * 16])
{
  
#pragma HLS INLINE OFF
  if (exec == 1) {
    merlinL5:
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
// Original label: matmul_k:for(int k = 0;k < 22;++k) {#pragma ACCEL PIPELINE AUTO#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulfor(int k_sub = 0;k_sub < 64;++k_sub) {#pragma ACCEL PARALLEL#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulmul += x_buf_0[k][k_sub] * weight_buf_0[k][k_sub][j];}}
      float _mul_rdc[64];
      
#pragma HLS array_partition variable=_mul_rdc complete dim=1
{
        merlinL4:
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
      merlinL3:
      for (int k = 0; k < 22; ++k) 
// Original: #pragma ACCEL parallel factor=64 reduction=mul
// Original: #pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mul
// Original: #pragma ACCEL PARALLEL FACTOR=64
// Original: #pragma ACCEL PIPELINE AUTO
{
        
#pragma HLS pipeline
        merlinL2:
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
        merlinL1:
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
        merlinL0:
// Original pragma:  ACCEL PARALLEL FACTOR=64 
        for (int k = 1408; k < 1433; ++k) 
// Original: #pragma ACCEL parallel factor=64 reduction=mul
// Original: #pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mul
// Original: #pragma ACCEL PARALLEL FACTOR=64
// Original: #pragma ACCEL PIPELINE AUTO
{
          
#pragma HLS pipeline
          mul += x_buf_0_0[22][- 1408 + k] * weight_buf_0[22][- 1408 + k][j];
        }
      }
      x_mul[i * 16 + j] = mul;
    }
// Original label: matmul_j:for(int j = 0;j < 16;++j) {#pragma ACCEL FALSE_DEPENDENCE VARIABLE=x_mulfloat mul =(float )0;matmul_k:for(int k = 0;k < 22;++k) {#pragma ACCEL PIPELINE AUTO#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulfor(int k_sub = 0;k_sub < 64;++k_sub) {#pragma ACCEL PARALLEL#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulmul += x_buf_0[k][k_sub] * weight_buf_0[k][k_sub][j];}}{for(int k = 1408;k < 1433;++k) {#pragma ACCEL PIPELINE AUTOmul += x_buf_0[22][- 1408 + k] * weight_buf_0[22][- 1408 + k][j];}}x_mul[i * 16 + j] = mul;}
  }
}

void mars_kernel_0_1(int mars_i,int mars_init,int mars_cond,float mars_weight_buf_0_1[23][64][16],merlin_uint_512 *x,float mars_x_buf_0_0_0[23][64],float mars_x_buf_0_0_1[23][64],float mars_x_mul_1[2708 * 16])
{
  
#pragma HLS INLINE OFF
  mars_kernel_0_1_node_0_stage_0(mars_i - 0,(int )((mars_i >= mars_init + 0) & (mars_i <= mars_cond + 0)),x,mars_x_buf_0_0_0);
  mars_kernel_0_1_node_1_stage_1(mars_i - 1,(int )((mars_i >= mars_init + 1) & (mars_i <= mars_cond + 1)),mars_weight_buf_0_1,mars_x_buf_0_0_1,mars_x_mul_1);
}
static int gcnconv_kernel_dummy_pos;
extern "C" { 

__kernel void gcnconv_kernel(merlin_uint_512 *x,merlin_uint_512 *weight,merlin_uint_512 *edge_index,merlin_uint_512 *result)
{
  
#pragma HLS INTERFACE m_axi port=edge_index offset=slave depth=1658
  
#pragma HLS INTERFACE m_axi port=result offset=slave depth=2708
  
#pragma HLS INTERFACE m_axi port=weight offset=slave depth=1433
  
#pragma HLS INTERFACE m_axi port=x offset=slave depth=242536
  
#pragma HLS INTERFACE s_axilite port=edge_index bundle=control
  
#pragma HLS INTERFACE s_axilite port=result bundle=control
  
#pragma HLS INTERFACE s_axilite port=weight bundle=control
  
#pragma HLS INTERFACE s_axilite port=x bundle=control
  
#pragma HLS INTERFACE s_axilite port=return bundle=control
  
#pragma HLS DATA_PACK VARIABLE=result
  
#pragma HLS DATA_PACK VARIABLE=edge_index
  
#pragma HLS DATA_PACK VARIABLE=weight
  
#pragma HLS DATA_PACK VARIABLE=x
  float weight_buf_0[23][64][16];
  
#pragma HLS array_partition variable=weight_buf_0 complete dim=3
  
#pragma HLS array_partition variable=weight_buf_0 complete dim=2
  float result_buf_0[43328];
  
#pragma HLS array_partition variable=result_buf_0 cyclic factor=16 dim=1
  int edge_index_buf_0[2][13264];
// Existing HLS partition: #pragma HLS array_partition variable=edge_index_buf_0 cyclic factor = 16 dim=2
  
#pragma HLS array_partition variable=edge_index_buf_0 cyclic factor=16 dim=2
  
#pragma HLS array_partition variable=edge_index_buf_0 complete dim=1
  memcpy_wide_bus_read_int_2d_13264_512(edge_index_buf_0,0,0,(merlin_uint_512 *)edge_index,(0 * 4),sizeof(int ) * ((unsigned long )26528),26528L);
  
#pragma ACCEL interface variable=result max_depth=43328 depth=43328
  
#pragma ACCEL interface variable=edge_index max_depth=26528 depth=26528
  
#pragma ACCEL interface variable=weight max_depth=22928 depth=22928
  
#pragma ACCEL interface variable=x max_depth=3880564 depth=3880564
  float edge_weight[10556 + 2708];
  float x_mul[2708 * 16];
  
#pragma HLS array_partition variable=x_mul cyclic factor=8 dim=1
  float deg[2708];
  float norm[10556 + 2708];
// Existing HLS partition: #pragma HLS array_partition variable=weight_buf_0 cyclic factor = 16 dim=3
  memcpy_wide_bus_read_float_3d_64_16_512(weight_buf_0,0,0,0,(merlin_uint_512 *)weight,(0 * 4),sizeof(float ) * ((unsigned long )22928),22928L);
// Original label: matmul_i:for(int i = 0;i < 2708;++i) {float x_buf_0[23][64];#pragma HLS array_partition variable=x_buf_0 cyclic factor = 16 dim=2memcpy_wide_bus_read_float_2d_64_512(x_buf_0,0,0,(merlin_uint_512 *)x,(i * 1433 * 4),sizeof(float ) *((unsigned long )1433),1433L);#pragma ACCEL PIPELINEmatmul_j:for(int j = 0;j < 16;++j) {#pragma ACCEL FALSE_DEPENDENCE VARIABLE=x_mulfloat mul =(float )0;matmul_k:for(int k = 0;k < 22;++k) {#pragma ACCEL PIPELINE AUTO#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulfor(int k_sub = 0;k_sub < 64;++k_sub) {#pragma ACCEL PARALLEL#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulmul += x_buf_0[k][k_sub] * weight_buf_0[k][k_sub][j];}}{for(int k = 1408;k < 1433;++k) {#pragma ACCEL PIPELINE AUTOmul += x_buf_0[22][- 1408 + k] * weight_buf_0[22][- 1408 + k][j];}}x_mul[i * 16 + j] = mul;}}
  float x_buf_0_0[23][64];
  int mars_count_0_1 = 0;
  float mars_kernel_0_1_x_buf_0_0_0[23][64];
// Existing HLS partition: #pragma HLS array_partition variable=mars_kernel_0_1_x_buf_0_0_0 cyclic factor=16 dim=2
  
#pragma HLS array_partition variable=mars_kernel_0_1_x_buf_0_0_0 complete dim=2
  float mars_kernel_0_1_x_buf_0_0_1[23][64];
// Existing HLS partition: #pragma HLS array_partition variable=mars_kernel_0_1_x_buf_0_0_1 cyclic factor=16 dim=2
  
#pragma HLS array_partition variable=mars_kernel_0_1_x_buf_0_0_1 complete dim=2
  merlinL13:
  for (int i = 0; i < 2708 + 1; ++i) 
// Original: #pragma ACCEL pipeline
// Original: #pragma ACCEL PIPELINE
// Original: #pragma ACCEL PIPELINE
{
    if (mars_count_0_1 == 0) 
      mars_kernel_0_1(i,0,2707,weight_buf_0,x,mars_kernel_0_1_x_buf_0_0_0,mars_kernel_0_1_x_buf_0_0_1,x_mul);
     else 
      mars_kernel_0_1(i,0,2707,weight_buf_0,x,mars_kernel_0_1_x_buf_0_0_1,mars_kernel_0_1_x_buf_0_0_0,x_mul);
    mars_count_0_1++;
    if (mars_count_0_1 == 2) 
      mars_count_0_1 = 0;
  }
// Original label: matmul_j:for(int j = 0;j < 16;++j) {#pragma ACCEL FALSE_DEPENDENCE VARIABLE=x_mulfloat mul =(float )0;matmul_k:for(int k = 0;k < 22;++k) {#pragma ACCEL PIPELINE AUTO#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulfor(int k_sub = 0;k_sub < 64;++k_sub) {#pragma ACCEL PARALLEL#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulmul += x_buf_0[k][k_sub] * weight_buf_0[k][k_sub][j];}}{for(int k = 1408;k < 1433;++k) {#pragma ACCEL PIPELINE AUTOmul += x_buf_0[22][- 1408 + k] * weight_buf_0[22][- 1408 + k][j];}}x_mul[i * 16 + j] = mul;}
// Original label: assign_index_i:for(int i = 0;i < 2708;++i) {#pragma ACCEL PIPELINEassign_index_j:for(int j = 0;j < 2;++j) {#pragma ACCEL PARALLEL COMPLETEedge_index_buf_0[j][10556 + i] = i;}}
  merlinL12:
// Original label: matmul_j:for(int j = 0;j < 16;++j) {#pragma ACCEL FALSE_DEPENDENCE VARIABLE=x_mulfloat mul =(float )0;matmul_k:for(int k = 0;k < 22;++k) {#pragma ACCEL PIPELINE AUTO#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulfor(int k_sub = 0;k_sub < 64;++k_sub) {#pragma ACCEL PARALLEL#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulmul += x_buf_0[k][k_sub] * weight_buf_0[k][k_sub][j];}}{for(int k = 1408;k < 1433;++k) {#pragma ACCEL PIPELINE AUTOmul += x_buf_0[22][- 1408 + k] * weight_buf_0[22][- 1408 + k][j];}}x_mul[i * 16 + j] = mul;}
// Original label: assign_index_i:for(int i = 0;i < 2708;++i) {#pragma ACCEL PIPELINEassign_index_j:for(int j = 0;j < 2;++j) {#pragma ACCEL PARALLEL COMPLETEedge_index_buf_0[j][10556 + i] = i;}}
  for (int i = 0; i < 2708; ++i) 
// Original: #pragma ACCEL pipeline
// Original: #pragma ACCEL PIPELINE
// Original: #pragma ACCEL PIPELINE
{
    
#pragma HLS pipeline
// Original label: assign_index_j:for(int j = 0;j < 2;++j) {#pragma ACCEL PARALLEL COMPLETEedge_index_buf_0[j][10556 + i] = i;}
    merlinL11:
// Original label: assign_index_j:for(int j = 0;j < 2;++j) {#pragma ACCEL PARALLEL COMPLETEedge_index_buf_0[j][10556 + i] = i;}
    for (int j = 0; j < 2; ++j) 
// Original: #pragma ACCEL parallel
// Original: #pragma ACCEL PARALLEL COMPLETE
// Original: #pragma ACCEL PARALLEL COMPLETE
{
      
#pragma HLS unroll
      edge_index_buf_0[j][10556 + i] = i;
    }
  }
// Original label: assign_weight:for(int i = 0;i < 10556 + 2708;++i) {#pragma ACCEL PIPELINEedge_weight[i] =((float )1);}
  merlinL10:
// Original label: assign_weight:for(int i = 0;i < 10556 + 2708;++i) {#pragma ACCEL PIPELINEedge_weight[i] =((float )1);}
  for (int i = 0; i < 10556 + 2708; ++i) 
// Original: #pragma ACCEL pipeline
// Original: #pragma ACCEL PIPELINE
// Original: #pragma ACCEL PIPELINE
{
    
#pragma HLS pipeline
    edge_weight[i] = ((float )1);
  }
// Original label: assign_degree:for(int i = 0;i < 10556 + 2708;++i) {#pragma ACCEL PIPELINEdeg[edge_index_buf_0[0][i]] += edge_weight[i];}
  merlinL9:
// Original label: assign_degree:for(int i = 0;i < 10556 + 2708;++i) {#pragma ACCEL PIPELINEdeg[edge_index_buf_0[0][i]] += edge_weight[i];}
  for (int i = 0; i < 10556 + 2708; ++i) 
// Original: #pragma ACCEL pipeline
// Original: #pragma ACCEL PIPELINE
// Original: #pragma ACCEL PIPELINE
{
    
#pragma HLS pipeline
    deg[edge_index_buf_0[0][i]] += edge_weight[i];
  }
// Original label: assign_norm:for(int i = 0;i < 10556 + 2708;++i) {#pragma ACCEL PIPELINEnorm[i] =((float )1) / sqrtf(deg[edge_index_buf_0[0][i]]) * edge_weight[i] *(((float )1) / sqrtf(deg[edge_index_buf_0[1][i]]));}
  merlinL8:
// Original label: assign_norm:for(int i = 0;i < 10556 + 2708;++i) {#pragma ACCEL PIPELINEnorm[i] =((float )1) / sqrtf(deg[edge_index_buf_0[0][i]]) * edge_weight[i] *(((float )1) / sqrtf(deg[edge_index_buf_0[1][i]]));}
  for (int i = 0; i < 10556 + 2708; ++i) 
// Original: #pragma ACCEL pipeline
// Original: #pragma ACCEL PIPELINE
// Original: #pragma ACCEL PIPELINE
{
    
#pragma HLS pipeline
    norm[i] = ((float )1) / sqrtf(deg[edge_index_buf_0[0][i]]) * edge_weight[i] * (((float )1) / sqrtf(deg[edge_index_buf_0[1][i]]));
  }
// Existing HLS partition: #pragma HLS array_partition variable=result_buf_0 cyclic factor = 16 dim=1
  memcpy_wide_bus_read_float_512(&result_buf_0[0],(merlin_uint_512 *)result,(0 * 4),sizeof(float ) * 43328UL,43328L);
// Original label: graphsum_i:for(int i = 0;i < 10556 + 2708;++i) {#pragma ACCEL PIPELINEgraphsum_j:for(int j = 0;j < 16;++j) {#pragma ACCEL PARALLEL COMPLETEresult_buf_0[edge_index_buf_0[1][i] * 16 + j] += norm[i] * x_mul[edge_index_buf_0[0][i] * 16 + j];}}
  merlinL7:
// Original label: graphsum_i:for(int i = 0;i < 10556 + 2708;++i) {#pragma ACCEL PIPELINEgraphsum_j:for(int j = 0;j < 16;++j) {#pragma ACCEL PARALLEL COMPLETEresult_buf_0[edge_index_buf_0[1][i] * 16 + j] += norm[i] * x_mul[edge_index_buf_0[0][i] * 16 + j];}}
  for (int i = 0; i < 10556 + 2708; ++i) 
// Original: #pragma ACCEL pipeline
// Original: #pragma ACCEL PIPELINE
// Original: #pragma ACCEL PIPELINE
{
    
#pragma HLS pipeline
// Original label: graphsum_j:for(int j = 0;j < 16;++j) {#pragma ACCEL PARALLEL COMPLETEresult_buf_0[edge_index_buf_0[1][i] * 16 + j] += norm[i] * x_mul[edge_index_buf_0[0][i] * 16 + j];}
    merlinL6:
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
  memcpy_wide_bus_write_float_512((merlin_uint_512 *)result,&result_buf_0[0],(4 * 0),sizeof(float ) * 43328UL,43328L);
// Existing HLS partition: #pragma HLS array_partition variable=edge_index_buf_0 cyclic factor = 16 dim=2
  memcpy_wide_bus_write_int_2d_13264_512((merlin_uint_512 *)edge_index,edge_index_buf_0,0,10556,(4 * 10556),sizeof(int ) * ((unsigned long )15972),15972L);
}
}
