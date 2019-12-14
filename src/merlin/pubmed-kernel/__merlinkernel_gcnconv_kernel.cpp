#define __constant
#define __kernel
#define __global
#include "memcpy_512_1d.h"
#include <string.h> 

#include <math.h>





// Original: #pragma ACCEL kernel

void mars_kernel_0_1_node_0_stage_0(int i,int exec,merlin_uint_512 *x,float x_buf_0_0[8][500])
{
  
#pragma HLS INLINE OFF
  if (exec == 1) {
    merlinL0:
    for (int j_sub = 0; j_sub < 8; ++j_sub) {
      
#pragma HLS UNROLL
      memcpy_wide_bus_read_float_512(x_buf_0_0[((long )j_sub) - 0L],(merlin_uint_512 *)x,(size_t )(i * 500 * 4),sizeof(float ) * ((unsigned long )500),(size_t )500L);
    }
  }
}

void mars_kernel_0_1_node_1_stage_1(int i,int exec,merlin_uint_512 *weight,float x_buf_0_0[8][500],float x_mul[19717 * 16])
{
  
#pragma HLS INLINE OFF
  if (exec == 1) {
    merlinL8:
    for (int j = 0; j < 2; ++j) 
// Original: #pragma ACCEL parallel factor=8
// Original: #pragma ACCEL false_dependence variable=x_mul
// Original: #pragma ACCEL PARALLEL FACTOR=8
// Original: #pragma ACCEL FALSE_DEPENDENCE VARIABLE=x_mul
// Original: #pragma ACCEL FALSE_DEPENDENCE VARIABLE=x_mul
{
      
#pragma HLS dependence variable=x_mul array inter false
      float weight_buf_0[8][7985];
      
#pragma HLS array_partition variable=weight_buf_0 cyclic factor=64 dim=2
{
        merlinL7:
        for (int j_sub = 0; j_sub < 8; ++j_sub) {
          
#pragma HLS UNROLL
// Existing HLS partition: #pragma HLS array_partition variable=weight_buf_0 cyclic factor = 16 dim=2
          memcpy_wide_bus_read_float_512(weight_buf_0[((long )j_sub) - 0L],(merlin_uint_512 *)weight,(size_t )((j * 8 + j_sub) * 4),sizeof(float ) * ((unsigned long )7985),(size_t )7985L);
        }
      }
      merlinL6:
      for (int j_sub = 0; j_sub < 8; ++j_sub) 
// Original: #pragma ACCEL parallel factor=8
// Original: #pragma ACCEL false_dependence variable=x_mul
// Original: #pragma ACCEL PARALLEL FACTOR=8
// Original: #pragma ACCEL FALSE_DEPENDENCE VARIABLE=x_mul
// Original: #pragma ACCEL PARALLEL
// Original: #pragma ACCEL FALSE_DEPENDENCE VARIABLE=x_mul
{
        
#pragma HLS dependence variable=x_mul array inter false
        float mul = (float )0;
// Original pragma:  ACCEL PARALLEL FACTOR=64 
// Original label: matmul_k:for(int k = 0;k < 7;++k) {#pragma ACCEL PIPELINE AUTO#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulfor(int k_sub = 0;k_sub < 64;++k_sub) {#pragma ACCEL PARALLEL#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulmul += x_buf_0[j_sub - 0L][k * 64 + k_sub] * weight_buf_0[j_sub - 0L][k * 1024 + k_sub * 16];}}
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
        for (int k = 0; k < 7; ++k) 
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
            _mul_rdc[k_sub] += x_buf_0_0[((long )j_sub) - 0L][k * 64 + k_sub] * weight_buf_0[((long )j_sub) - 0L][k * 1024 + k_sub * 16];
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
          for (int k = 448; k < 500; ++k) 
// Original: #pragma ACCEL parallel factor=64 reduction=mul
// Original: #pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mul
// Original: #pragma ACCEL PARALLEL FACTOR=64
// Original: #pragma ACCEL PIPELINE AUTO
{
            
#pragma HLS pipeline
            mul += x_buf_0_0[((long )j_sub) - 0L][k] * weight_buf_0[((long )j_sub) - 0L][k * 16];
          }
        }
        x_mul[i * 16 + (j * 8 + j_sub)] = mul;
      }
    }
// Original pragma:  ACCEL PARALLEL FACTOR=8 
// Original label: matmul_j:for(int j = 0;j < 2;++j) {float weight_buf_0[8][7985];{for(int j_sub = 0;j_sub < 8;++j_sub) {#pragma HLS UNROLL#pragma HLS array_partition variable=weight_buf_0 cyclic factor = 16 dim=2memcpy_wide_bus_read_float_512(weight_buf_0[((long )j_sub) - 0L],(merlin_uint_512 *)weight,((j * 8 + j_sub) * 4),sizeof(float ) *((unsigned long )7985),7985L);}}#pragma ACCEL FALSE_DEPENDENCE VARIABLE=x_mulfor(int j_sub = 0;j_sub < 8;++j_sub) {#pragma ACCEL FALSE_DEPENDENCE VARIABLE=x_mulfloat mul =(float )0;matmul_k:for(int k = 0;k < 7;++k) {#pragma ACCEL PIPELINE AUTO#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulfor(int k_sub = 0;k_sub < 64;++k_sub) {#pragma ACCEL PARALLEL#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulmul += x_buf_0[j_sub - 0L][k * 64 + k_sub] * weight_buf_0[j_sub - 0L][k * 1024 + k_sub * 16];}}{for(int k = 448;k < 500;++k) {#pragma ACCEL PIPELINE AUTOmul += x_buf_0[j_sub - 0L][k] * weight_buf_0[j_sub - 0L][k * 16];}}x_mul[i * 16 +(j * 8 + j_sub)] = mul;}}
  }
}

void mars_kernel_0_1_bus(int mars_i,int mars_init,int mars_cond,merlin_uint_512 *weight,merlin_uint_512 *x,float mars_x_buf_0_0_0[8][500],float mars_x_buf_0_0_1[8][500],float mars_x_mul_1[19717 * 16])
{
  
#pragma HLS INLINE OFF
  mars_kernel_0_1_node_0_stage_0(mars_i - 0,(int )((mars_i >= mars_init + 0) & (mars_i <= mars_cond + 0)),x,mars_x_buf_0_0_0);
  mars_kernel_0_1_node_1_stage_1(mars_i - 1,(int )((mars_i >= mars_init + 1) & (mars_i <= mars_cond + 1)),weight,mars_x_buf_0_0_1,mars_x_mul_1);
}

void mars_kernel_0_1_comp(int mars_i,int mars_init,int mars_cond,merlin_uint_512 *weight,merlin_uint_512 *x,float mars_x_buf_0_0_0[8][500],float mars_x_buf_0_0_1[8][500],float mars_x_mul_1[19717 * 16])
{
  
#pragma HLS INLINE OFF
}

void mars_kernel_0_1(int mars_i,int mars_init,int mars_cond,merlin_uint_512 *weight,merlin_uint_512 *x,float mars_x_buf_0_0_0[8][500],float mars_x_buf_0_0_1[8][500],float mars_x_mul_1[19717 * 16])
{
  
#pragma HLS INLINE OFF
  mars_kernel_0_1_bus(mars_i,mars_init,mars_cond,weight,x,mars_x_buf_0_0_0,mars_x_buf_0_0_1,mars_x_mul_1);
  mars_kernel_0_1_comp(mars_i,mars_init,mars_cond,weight,x,mars_x_buf_0_0_0,mars_x_buf_0_0_1,mars_x_mul_1);
}
static int gcnconv_kernel_dummy_pos;

static void merlin_memcpy_0(int dst[2][108365],int dst_idx_0,int dst_idx_1,int src[216730],int src_idx_0,unsigned int len,unsigned int max_len)
{
  
#pragma HLS inline off
  
#pragma HLS function_instantiate variable=dst_idx_0,dst_idx_1,src_idx_0
  unsigned long i;
  unsigned long total_offset1 = (0 * 2 + dst_idx_0) * 108365 + dst_idx_1;
  unsigned long total_offset2 = 0 * 216730 + src_idx_0;
  merlinL9:
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
  merlinL10:
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
  merlinL11:
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
  merlinL12:
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
  merlinL13:
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
  int edge_index_buf_3[216730];
  int edge_index_buf_2[2][108365];
  int edge_index_buf_1[216730];
  int edge_index_buf_0[108365];
  
#pragma ACCEL interface variable=result max_depth=315472 depth=315472
  
#pragma ACCEL interface variable=edge_index max_depth=216730 depth=216730
  
#pragma ACCEL interface variable=weight max_depth=8000 depth=8000
  
#pragma ACCEL interface variable=x max_depth=9858500 depth=9858500
  float edge_weight[88648 + 19717];
  float x_mul[19717 * 16];
  
#pragma HLS array_partition variable=x_mul cyclic factor=8 dim=1
  float deg[19717];
  float norm[88648 + 19717];
// Original label: matmul_i:for(int i = 0;i < 19717;++i) {float x_buf_0[8][500];#pragma ACCEL PIPELINE{for(int j_sub = 0;j_sub < 8;++j_sub) {#pragma HLS UNROLL#pragma HLS array_partition variable=x_buf_0 cyclic factor = 16 dim=2memcpy_wide_bus_read_float_512(x_buf_0[((long )j_sub) - 0L],(merlin_uint_512 *)x,(i * 500 * 4),sizeof(float ) *((unsigned long )500),500L);}}matmul_j:for(int j = 0;j < 2;++j) {float weight_buf_0[8][7985];{for(int j_sub = 0;j_sub < 8;++j_sub) {#pragma HLS UNROLL#pragma HLS array_partition variable=weight_buf_0 cyclic factor = 16 dim=2memcpy_wide_bus_read_float_512(weight_buf_0[((long )j_sub) - 0L],(merlin_uint_512 *)weight,((j * 8 + j_sub) * 4),sizeof(float ) *((unsigned long )7985),7985L);}}#pragma ACCEL FALSE_DEPENDENCE VARIABLE=x_mulfor(int j_sub = 0;j_sub < 8;++j_sub) {#pragma ACCEL FALSE_DEPENDENCE VARIABLE=x_mulfloat mul =(float )0;matmul_k:for(int k = 0;k < 7;++k) {#pragma ACCEL PIPELINE AUTO#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulfor(int k_sub = 0;k_sub < 64;++k_sub) {#pragma ACCEL PARALLEL#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulmul += x_buf_0[j_sub - 0L][k * 64 + k_sub] * weight_buf_0[j_sub - 0L][k * 1024 + k_sub * 16];}}{for(int k = 448;k < 500;++k) {#pragma ACCEL PIPELINE AUTOmul += x_buf_0[j_sub - 0L][k] * weight_buf_0[j_sub - 0L][k * 16];}}x_mul[i * 16 +(j * 8 + j_sub)] = mul;}}}
  float x_buf_0_0[8][500];
  int mars_count_0_1 = 0;
  float mars_kernel_0_1_x_buf_0_0_0[8][500];
// Existing HLS partition: #pragma HLS array_partition variable=mars_kernel_0_1_x_buf_0_0_0 cyclic factor=16 dim=2
  
#pragma HLS array_partition variable=mars_kernel_0_1_x_buf_0_0_0 cyclic factor=32 dim=2
  float mars_kernel_0_1_x_buf_0_0_1[8][500];
// Existing HLS partition: #pragma HLS array_partition variable=mars_kernel_0_1_x_buf_0_0_1 cyclic factor=16 dim=2
  
#pragma HLS array_partition variable=mars_kernel_0_1_x_buf_0_0_1 cyclic factor=32 dim=2
  merlinL21:
  for (int i = 0; i < 19717 + 1; ++i) 
// Original: #pragma ACCEL pipeline
// Original: #pragma ACCEL PIPELINE
// Original: #pragma ACCEL PIPELINE
{
    if (mars_count_0_1 == 0) 
      mars_kernel_0_1(i,0,19716,weight,x,mars_kernel_0_1_x_buf_0_0_0,mars_kernel_0_1_x_buf_0_0_1,x_mul);
     else 
      mars_kernel_0_1(i,0,19716,weight,x,mars_kernel_0_1_x_buf_0_0_1,mars_kernel_0_1_x_buf_0_0_0,x_mul);
    mars_count_0_1++;
    if (mars_count_0_1 == 2) 
      mars_count_0_1 = 0;
  }
// Original pragma:  ACCEL PARALLEL FACTOR=8 
// Original label: matmul_j:for(int j = 0;j < 2;++j) {float weight_buf_0[8][7985];{for(int j_sub = 0;j_sub < 8;++j_sub) {#pragma HLS UNROLL#pragma HLS array_partition variable=weight_buf_0 cyclic factor = 16 dim=2memcpy_wide_bus_read_float_512(weight_buf_0[((long )j_sub) - 0L],(merlin_uint_512 *)weight,((j * 8 + j_sub) * 4),sizeof(float ) *((unsigned long )7985),7985L);}}#pragma ACCEL FALSE_DEPENDENCE VARIABLE=x_mulfor(int j_sub = 0;j_sub < 8;++j_sub) {#pragma ACCEL FALSE_DEPENDENCE VARIABLE=x_mulfloat mul =(float )0;matmul_k:for(int k = 0;k < 7;++k) {#pragma ACCEL PIPELINE AUTO#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulfor(int k_sub = 0;k_sub < 64;++k_sub) {#pragma ACCEL PARALLEL#pragma ACCEL REDUCTION SCHEME=auto VARIABLE=mulmul += x_buf_0[j_sub - 0L][k * 64 + k_sub] * weight_buf_0[j_sub - 0L][k * 1024 + k_sub * 16];}}{for(int k = 448;k < 500;++k) {#pragma ACCEL PIPELINE AUTOmul += x_buf_0[j_sub - 0L][k] * weight_buf_0[j_sub - 0L][k * 16];}}x_mul[i * 16 +(j * 8 + j_sub)] = mul;}}
  merlin_memcpy_0(edge_index_buf_2,0,0,edge_index,88648,sizeof(int ) * ((unsigned long )128082),512328UL);
// Original label: assign_index_i:for(int i = 0;i < 19717;++i) {#pragma ACCEL PIPELINEassign_index_j:for(int j = 0;j < 2;++j) {#pragma ACCEL PARALLEL COMPLETEedge_index_buf_2[j][i] = i;}}
  merlinL20:
// Original label: assign_index_i:for(int i = 0;i < 19717;++i) {#pragma ACCEL PIPELINEassign_index_j:for(int j = 0;j < 2;++j) {#pragma ACCEL PARALLEL COMPLETEedge_index_buf_2[j][i] = i;}}
  for (int i = 0; i < 19717; ++i) 
// Original: #pragma ACCEL pipeline
// Original: #pragma ACCEL PIPELINE
// Original: #pragma ACCEL PIPELINE
{
    
#pragma HLS pipeline
// Original label: assign_index_j:for(int j = 0;j < 2;++j) {#pragma ACCEL PARALLEL COMPLETEedge_index_buf_2[j][i] = i;}
    merlinL19:
// Original label: assign_index_j:for(int j = 0;j < 2;++j) {#pragma ACCEL PARALLEL COMPLETEedge_index_buf_2[j][i] = i;}
    for (int j = 0; j < 2; ++j) 
// Original: #pragma ACCEL parallel
// Original: #pragma ACCEL PARALLEL COMPLETE
// Original: #pragma ACCEL PARALLEL COMPLETE
{
      
#pragma HLS unroll
      edge_index_buf_2[j][i] = i;
    }
  }
  merlin_memcpy_1(edge_index,88648,edge_index_buf_2,0,0,sizeof(int ) * ((unsigned long )128082),512328UL);
// Original label: assign_weight:for(int i = 0;i < 88648 + 19717;++i) {#pragma ACCEL PIPELINEedge_weight[i] =((float )1);}
  merlinL18:
// Original label: assign_weight:for(int i = 0;i < 88648 + 19717;++i) {#pragma ACCEL PIPELINEedge_weight[i] =((float )1);}
  for (int i = 0; i < 88648 + 19717; ++i) 
// Original: #pragma ACCEL pipeline
// Original: #pragma ACCEL PIPELINE
// Original: #pragma ACCEL PIPELINE
{
    
#pragma HLS pipeline
    edge_weight[i] = ((float )1);
  }
  merlin_memcpy_2(edge_index_buf_0,0,edge_index,0,sizeof(int ) * ((unsigned long )108365),433460UL);
// Original label: assign_degree:for(int i = 0;i < 88648 + 19717;++i) {#pragma ACCEL PIPELINEdeg[edge_index_buf_0[i]] += edge_weight[i];}
  merlinL17:
// Original label: assign_degree:for(int i = 0;i < 88648 + 19717;++i) {#pragma ACCEL PIPELINEdeg[edge_index_buf_0[i]] += edge_weight[i];}
  for (int i = 0; i < 88648 + 19717; ++i) 
// Original: #pragma ACCEL pipeline
// Original: #pragma ACCEL PIPELINE
// Original: #pragma ACCEL PIPELINE
{
    
#pragma HLS pipeline
    deg[edge_index_buf_0[i]] += edge_weight[i];
  }
  merlin_memcpy_3(edge_index_buf_1,0,edge_index,0,sizeof(int ) * ((unsigned long )216730L),866920UL);
// Original label: assign_norm:for(int i = 0;i < 88648 + 19717;++i) {#pragma ACCEL PIPELINEnorm[i] =((float )1) / sqrtf(deg[edge_index_buf_1[i]]) * edge_weight[i] *(((float )1) / sqrtf(deg[edge_index_buf_1[108365 + i]]));}
  merlinL16:
// Original label: assign_norm:for(int i = 0;i < 88648 + 19717;++i) {#pragma ACCEL PIPELINEnorm[i] =((float )1) / sqrtf(deg[edge_index_buf_1[i]]) * edge_weight[i] *(((float )1) / sqrtf(deg[edge_index_buf_1[108365 + i]]));}
  for (int i = 0; i < 88648 + 19717; ++i) 
// Original: #pragma ACCEL pipeline
// Original: #pragma ACCEL PIPELINE
// Original: #pragma ACCEL PIPELINE
{
    
#pragma HLS pipeline
    norm[i] = ((float )1) / sqrtf(deg[edge_index_buf_1[i]]) * edge_weight[i] * (((float )1) / sqrtf(deg[edge_index_buf_1[108365 + i]]));
  }
  merlin_memcpy_4(edge_index_buf_3,0,edge_index,0,sizeof(int ) * ((unsigned long )216730L),866920UL);
// Original label: graphsum_i:for(int i = 0;i < 88648 + 19717;++i) {#pragma ACCEL PIPELINEgraphsum_j:for(int j = 0;j < 16;++j) {float tmp_0;#pragma ACCEL PARALLEL COMPLETEtmp_0 = memcpy_wide_bus_single_read_float_512((merlin_uint_512 *)result,((edge_index_buf_3[108365 + i] * 16 + j) * 4));tmp_0 += norm[i] * x_mul[edge_index_buf_3[i] * 16 + j];memcpy_wide_bus_single_write_float_512((merlin_uint_512 *)result,tmp_0,(4 *(edge_index_buf_3[108365 + i] * 16 + j)));}}
  merlinL15:
// Original label: graphsum_i:for(int i = 0;i < 88648 + 19717;++i) {#pragma ACCEL PIPELINEgraphsum_j:for(int j = 0;j < 16;++j) {float tmp_0;#pragma ACCEL PARALLEL COMPLETEtmp_0 = memcpy_wide_bus_single_read_float_512((merlin_uint_512 *)result,((edge_index_buf_3[108365 + i] * 16 + j) * 4));tmp_0 += norm[i] * x_mul[edge_index_buf_3[i] * 16 + j];memcpy_wide_bus_single_write_float_512((merlin_uint_512 *)result,tmp_0,(4 *(edge_index_buf_3[108365 + i] * 16 + j)));}}
  for (int i = 0; i < 88648 + 19717; ++i) 
// Original: #pragma ACCEL pipeline
// Original: #pragma ACCEL PIPELINE
// Original: #pragma ACCEL PIPELINE
{
    
#pragma HLS pipeline
// Original label: graphsum_j:for(int j = 0;j < 16;++j) {float tmp_0;#pragma ACCEL PARALLEL COMPLETEtmp_0 = memcpy_wide_bus_single_read_float_512((merlin_uint_512 *)result,((edge_index_buf_3[108365 + i] * 16 + j) * 4));tmp_0 += norm[i] * x_mul[edge_index_buf_3[i] * 16 + j];memcpy_wide_bus_single_write_float_512((merlin_uint_512 *)result,tmp_0,(4 *(edge_index_buf_3[108365 + i] * 16 + j)));}
    merlinL14:
// Original label: graphsum_j:for(int j = 0;j < 16;++j) {float tmp_0;#pragma ACCEL PARALLEL COMPLETEtmp_0 = memcpy_wide_bus_single_read_float_512((merlin_uint_512 *)result,((edge_index_buf_3[108365 + i] * 16 + j) * 4));tmp_0 += norm[i] * x_mul[edge_index_buf_3[i] * 16 + j];memcpy_wide_bus_single_write_float_512((merlin_uint_512 *)result,tmp_0,(4 *(edge_index_buf_3[108365 + i] * 16 + j)));}
    for (int j = 0; j < 16; ++j) 
// Original: #pragma ACCEL parallel
// Original: #pragma ACCEL PARALLEL COMPLETE
// Original: #pragma ACCEL PARALLEL COMPLETE
{
      
#pragma HLS unroll
      float tmp_0;
      tmp_0 = memcpy_wide_bus_single_read_float_512((merlin_uint_512 *)result,(size_t )((edge_index_buf_3[108365 + i] * 16 + j) * 4));
      tmp_0 += norm[i] * x_mul[edge_index_buf_3[i] * 16 + j];
      memcpy_wide_bus_single_write_float_512((merlin_uint_512 *)result,tmp_0,(size_t )(4 * (edge_index_buf_3[108365 + i] * 16 + j)));
    }
  }
}
}
