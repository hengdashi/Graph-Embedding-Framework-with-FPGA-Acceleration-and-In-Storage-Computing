#include "memcpy_512.h"
#include <string.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include "merlin_type_define.h"
extern int __merlin_include__GB_memcpy_512_h_2;
static void __merlin_dummy_extern_int_merlin_include_G_();
static void __merlin_dummy_extern_int_merlin_include_G_();
static void __merlin_dummy_extern_int_merlin_include_G_();
static void __merlin_dummy_889();
void gcnconv_kernel(merlin_uint_512 *x,merlin_uint_512 *weight,int edge_index[2 * (88648 + 19717)],merlin_uint_512 *result);
static void __merlin_dummy_extern_int_merlin_include_L_();
#include "__merlinhead_kernel_top.h"
static void __merlin_dummy_extern_int_merlin_include_L_();

void __merlinwrapper_gcnconv_kernel(float x[19717 * 500],float weight[500 * 16],int edge_index[2 * (88648 + 19717)],float result[19717 * 16])
{
{
    
#pragma ACCEL wrapper variable=x port=x depth=9858500 max_depth=9858500 data_type=float io=RO copy=false
    
#pragma ACCEL wrapper variable=weight port=weight depth=8000 max_depth=8000 data_type=float io=RO copy=false
    
#pragma ACCEL wrapper variable=edge_index port=edge_index depth=216730 max_depth=216730 data_type=int io=RW copy=false
    
#pragma ACCEL wrapper variable=result port=result depth=315472 max_depth=315472 data_type=float io=RW copy=false
  }
  static float __m_x[9858500];
  static float __m_weight[8000];
  static int __m_edge_index[216730];
  static float __m_result[315472];
{
/*
    static float __m_x[9858500];
    static float __m_weight[8000];
    static int __m_edge_index[216730];
    static float __m_result[315472];
*/
{
      
#pragma ACCEL debug printf("[Merlin Info] Start %s data for %s, data size = %s...\n", "copy in", "x", "9858500 * sizeof(float )");
      
#pragma ACCEL debug fflush(stdout);
      if (x != 0) {
        memcpy((void *)(__m_x + 0),(const void *)x,9858500 * sizeof(float ));
      }
       else {
        printf("Error! Detected null pointer 'x' for external memory.\n");
        exit(1);
      }
      
#pragma ACCEL debug printf("[Merlin Info] Finish %s data for %s.\n", "copy in", "x");
      
#pragma ACCEL debug fflush(stdout);
    }
{
      
#pragma ACCEL debug printf("[Merlin Info] Start %s data for %s, data size = %s...\n", "copy in", "weight", "8000 * sizeof(float )");
      
#pragma ACCEL debug fflush(stdout);
      if (weight != 0) {
        memcpy((void *)(__m_weight + 0),(const void *)weight,8000 * sizeof(float ));
      }
       else {
        printf("Error! Detected null pointer 'weight' for external memory.\n");
        exit(1);
      }
      
#pragma ACCEL debug printf("[Merlin Info] Finish %s data for %s.\n", "copy in", "weight");
      
#pragma ACCEL debug fflush(stdout);
    }
{
      
#pragma ACCEL debug printf("[Merlin Info] Start %s data for %s, data size = %s...\n", "copy in", "edge_index", "216730 * sizeof(int )");
      
#pragma ACCEL debug fflush(stdout);
      if (edge_index != 0) {
        memcpy((void *)(__m_edge_index + 0),(const void *)edge_index,216730 * sizeof(int ));
      }
       else {
        printf("Error! Detected null pointer 'edge_index' for external memory.\n");
        exit(1);
      }
      
#pragma ACCEL debug printf("[Merlin Info] Finish %s data for %s.\n", "copy in", "edge_index");
      
#pragma ACCEL debug fflush(stdout);
    }
{
      
#pragma ACCEL debug printf("[Merlin Info] Start %s data for %s, data size = %s...\n", "copy in", "result", "315472 * sizeof(float )");
      
#pragma ACCEL debug fflush(stdout);
      if (result != 0) {
        memcpy((void *)(__m_result + 0),(const void *)result,315472 * sizeof(float ));
      }
       else {
        printf("Error! Detected null pointer 'result' for external memory.\n");
        exit(1);
      }
      
#pragma ACCEL debug printf("[Merlin Info] Finish %s data for %s.\n", "copy in", "result");
      
#pragma ACCEL debug fflush(stdout);
    }
  }
  
#pragma ACCEL kernel
  gcnconv_kernel((merlin_uint_512 *)__m_x,(merlin_uint_512 *)__m_weight,__m_edge_index,(merlin_uint_512 *)__m_result);
{
/*
    static float __m_x[9858500];
    static float __m_weight[8000];
    static int __m_edge_index[216730];
    static float __m_result[315472];
*/
{
      
#pragma ACCEL debug printf("[Merlin Info] Start %s data for %s, data size = %s...\n", "copy out", "edge_index", "216730 * sizeof(int )");
      
#pragma ACCEL debug fflush(stdout);
      if (edge_index != 0) {
        memcpy((void *)edge_index,(const void *)(__m_edge_index + 0),216730 * sizeof(int ));
      }
       else {
        printf("Error! Detected null pointer 'edge_index' for external memory.\n");
        exit(1);
      }
      
#pragma ACCEL debug printf("[Merlin Info] Finish %s data for %s.\n", "copy out", "edge_index");
      
#pragma ACCEL debug fflush(stdout);
    }
{
      
#pragma ACCEL debug printf("[Merlin Info] Start %s data for %s, data size = %s...\n", "copy out", "result", "315472 * sizeof(float )");
      
#pragma ACCEL debug fflush(stdout);
      if (result != 0) {
        memcpy((void *)result,(const void *)(__m_result + 0),315472 * sizeof(float ));
      }
       else {
        printf("Error! Detected null pointer 'result' for external memory.\n");
        exit(1);
      }
      
#pragma ACCEL debug printf("[Merlin Info] Finish %s data for %s.\n", "copy out", "result");
      
#pragma ACCEL debug fflush(stdout);
    }
  }
}

void __merlin_gcnconv_kernel(float x[19717 * 500],float weight[500 * 16],int edge_index[2 * (88648 + 19717)],float result[19717 * 16])
{
  
#pragma ACCEL string __merlin_check_opencl();
  
#pragma ACCEL string __merlin_init_gcnconv_kernel();
  __merlinwrapper_gcnconv_kernel(x,weight,edge_index,result);
  
#pragma ACCEL string __merlin_release_gcnconv_kernel();
}

void __merlin_write_buffer_gcnconv_kernel(float x[19717 * 500],float weight[500 * 16],int edge_index[2 * (88648 + 19717)],float result[19717 * 16])
{
  static float __m_x[9858500];
  static float __m_weight[8000];
  static int __m_edge_index[216730];
  static float __m_result[315472];
{
    
#pragma ACCEL debug printf("[Merlin Info] Start %s data for %s, data size = %s...\n", "copy in", "x", "9858500 * sizeof(float )");
    
#pragma ACCEL debug fflush(stdout);
    if (x != 0) {
      memcpy((void *)(__m_x + 0),(const void *)x,9858500 * sizeof(float ));
    }
     else {
      printf("Error! Detected null pointer 'x' for external memory.\n");
      exit(1);
    }
    
#pragma ACCEL debug printf("[Merlin Info] Finish %s data for %s.\n", "copy in", "x");
    
#pragma ACCEL debug fflush(stdout);
  }
{
    
#pragma ACCEL debug printf("[Merlin Info] Start %s data for %s, data size = %s...\n", "copy in", "weight", "8000 * sizeof(float )");
    
#pragma ACCEL debug fflush(stdout);
    if (weight != 0) {
      memcpy((void *)(__m_weight + 0),(const void *)weight,8000 * sizeof(float ));
    }
     else {
      printf("Error! Detected null pointer 'weight' for external memory.\n");
      exit(1);
    }
    
#pragma ACCEL debug printf("[Merlin Info] Finish %s data for %s.\n", "copy in", "weight");
    
#pragma ACCEL debug fflush(stdout);
  }
{
    
#pragma ACCEL debug printf("[Merlin Info] Start %s data for %s, data size = %s...\n", "copy in", "edge_index", "216730 * sizeof(int )");
    
#pragma ACCEL debug fflush(stdout);
    if (edge_index != 0) {
      memcpy((void *)(__m_edge_index + 0),(const void *)edge_index,216730 * sizeof(int ));
    }
     else {
      printf("Error! Detected null pointer 'edge_index' for external memory.\n");
      exit(1);
    }
    
#pragma ACCEL debug printf("[Merlin Info] Finish %s data for %s.\n", "copy in", "edge_index");
    
#pragma ACCEL debug fflush(stdout);
  }
{
    
#pragma ACCEL debug printf("[Merlin Info] Start %s data for %s, data size = %s...\n", "copy in", "result", "315472 * sizeof(float )");
    
#pragma ACCEL debug fflush(stdout);
    if (result != 0) {
      memcpy((void *)(__m_result + 0),(const void *)result,315472 * sizeof(float ));
    }
     else {
      printf("Error! Detected null pointer 'result' for external memory.\n");
      exit(1);
    }
    
#pragma ACCEL debug printf("[Merlin Info] Finish %s data for %s.\n", "copy in", "result");
    
#pragma ACCEL debug fflush(stdout);
  }
}

void __merlin_read_buffer_gcnconv_kernel(float x[19717 * 500],float weight[500 * 16],int edge_index[2 * (88648 + 19717)],float result[19717 * 16])
{
  static float __m_x[9858500];
  static float __m_weight[8000];
  static int __m_edge_index[216730];
  static float __m_result[315472];
{
    
#pragma ACCEL debug printf("[Merlin Info] Start %s data for %s, data size = %s...\n", "copy out", "edge_index", "216730 * sizeof(int )");
    
#pragma ACCEL debug fflush(stdout);
    if (edge_index != 0) {
      memcpy((void *)edge_index,(const void *)(__m_edge_index + 0),216730 * sizeof(int ));
    }
     else {
      printf("Error! Detected null pointer 'edge_index' for external memory.\n");
      exit(1);
    }
    
#pragma ACCEL debug printf("[Merlin Info] Finish %s data for %s.\n", "copy out", "edge_index");
    
#pragma ACCEL debug fflush(stdout);
  }
{
    
#pragma ACCEL debug printf("[Merlin Info] Start %s data for %s, data size = %s...\n", "copy out", "result", "315472 * sizeof(float )");
    
#pragma ACCEL debug fflush(stdout);
    if (result != 0) {
      memcpy((void *)result,(const void *)(__m_result + 0),315472 * sizeof(float ));
    }
     else {
      printf("Error! Detected null pointer 'result' for external memory.\n");
      exit(1);
    }
    
#pragma ACCEL debug printf("[Merlin Info] Finish %s data for %s.\n", "copy out", "result");
    
#pragma ACCEL debug fflush(stdout);
  }
}

void __merlin_execute_gcnconv_kernel(float x[19717 * 500],float weight[500 * 16],int edge_index[2 * (88648 + 19717)],float result[19717 * 16])
{
}
