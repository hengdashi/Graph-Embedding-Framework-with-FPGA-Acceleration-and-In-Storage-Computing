#include "memcpy_512.h"
#include <string.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include "merlin_type_define.h"
static void __merlin_dummy_extern_int_merlin_include_G_();
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
  __CMOST_COMMENT__ commands;
{
    
#pragma ACCEL wrapper variable=x port=x depth=9858500 max_depth=9858500 data_type=float io=RO copy=false
    
#pragma ACCEL wrapper variable=weight port=weight depth=8000 max_depth=8000 data_type=float io=RO copy=false
    
#pragma ACCEL wrapper variable=edge_index port=edge_index depth=216730 max_depth=216730 data_type=int io=RW copy=false
    
#pragma ACCEL wrapper variable=result port=result depth=315472 max_depth=315472 data_type=float io=RW copy=false
  }
  static __CMOST_COMMENT__ __m_x;
  static __CMOST_COMMENT__ __m_weight;
  static __CMOST_COMMENT__ __m_edge_index;
  static __CMOST_COMMENT__ __m_result;
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
        __CMOST_COMMENT__ __gcnconv_kernel__x_buffer;
        opencl_write_buffer(__gcnconv_kernel__x_buffer,commands[0],0 * sizeof(float ),(float *)x,((unsigned long )9858500) * sizeof(float ));
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
        __CMOST_COMMENT__ __gcnconv_kernel__weight_buffer;
        opencl_write_buffer(__gcnconv_kernel__weight_buffer,commands[0],0 * sizeof(float ),(float *)weight,((unsigned long )8000) * sizeof(float ));
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
        __CMOST_COMMENT__ __gcnconv_kernel__edge_index_buffer;
        opencl_write_buffer(__gcnconv_kernel__edge_index_buffer,commands[0],0 * sizeof(int ),(int *)edge_index,((unsigned long )216730) * sizeof(int ));
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
        __CMOST_COMMENT__ __gcnconv_kernel__result_buffer;
        opencl_write_buffer(__gcnconv_kernel__result_buffer,commands[0],0 * sizeof(float ),(float *)result,((unsigned long )315472) * sizeof(float ));
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
{
	#pragma ACCEL debug printf("[Merlin Info] Start set kernel %s argument....\n", "gcnconv_kernel");
	#pragma ACCEL debug fflush(stdout);
	opencl_set_kernel_arg(__gcnconv_kernel_kernel, 0, sizeof(opencl_mem), &__gcnconv_kernel__x_buffer);
	opencl_set_kernel_arg(__gcnconv_kernel_kernel, 1, sizeof(opencl_mem), &__gcnconv_kernel__weight_buffer);
	opencl_set_kernel_arg(__gcnconv_kernel_kernel, 2, sizeof(opencl_mem), &__gcnconv_kernel__edge_index_buffer);
	opencl_set_kernel_arg(__gcnconv_kernel_kernel, 3, sizeof(opencl_mem), &__gcnconv_kernel__result_buffer);
	#pragma ACCEL debug printf("[Merlin Info] Finish set kernel %s argument....\n", "gcnconv_kernel");
	#pragma ACCEL debug fflush(stdout);
}
{
	#pragma ACCEL debug printf("[Merlin Info] Start execute kernel %s....\n", "gcnconv_kernel");
	#pragma ACCEL debug fflush(stdout);
	size_t __gid[1];
	__gid[0] = 1;
	opencl_enqueue_kernel(__gcnconv_kernel_kernel, commands[0], 1, __gid, &__event_gcnconv_kernel);
}
{
	clWaitForEvents(1, &__event_gcnconv_kernel);
	#pragma ACCEL debug printf("[Merlin Info] Finish execute kernel %s....\n", "gcnconv_kernel");
	#pragma ACCEL debug fflush(stdout);
	#pragma ACCEL debug cl_ulong gcnconv_kernel_start, gcnconv_kernel_end;
	#pragma ACCEL debug clGetEventProfilingInfo(__event_gcnconv_kernel, CL_PROFILING_COMMAND_START, sizeof(gcnconv_kernel_start), &gcnconv_kernel_start, NULL);
	#pragma ACCEL debug clGetEventProfilingInfo(__event_gcnconv_kernel, CL_PROFILING_COMMAND_END, sizeof(gcnconv_kernel_end), &gcnconv_kernel_end, NULL);
	#pragma ACCEL debug printf("[Merlin Info] gcnconv_kernel: Kernel execution time = %0.3fs\n", (gcnconv_kernel_end -gcnconv_kernel_start) * 1e-9);
	#pragma ACCEL debug fflush(stdout);
}
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
        __CMOST_COMMENT__ __gcnconv_kernel__edge_index_buffer;
        opencl_read_buffer(__gcnconv_kernel__edge_index_buffer,commands[0],0 * sizeof(int ),(int *)edge_index,((unsigned long )216730) * sizeof(int ));
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
        __CMOST_COMMENT__ __gcnconv_kernel__result_buffer;
        opencl_read_buffer(__gcnconv_kernel__result_buffer,commands[0],0 * sizeof(float ),(float *)result,((unsigned long )315472) * sizeof(float ));
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
      __CMOST_COMMENT__ __gcnconv_kernel__x_buffer;
      __CMOST_COMMENT__ __event___gcnconv_kernel__x_buffer;
// __MERLIN_EVENT_WRITE__ __event___gcnconv_kernel__x_buffer
      int __MERLIN_EVENT_WRITE____event___gcnconv_kernel__x_buffer;
      opencl_write_buffer_nb(__gcnconv_kernel__x_buffer,commands[0],0 * sizeof(float ),(float *)x,((unsigned long )9858500) * sizeof(float ),&__event___gcnconv_kernel__x_buffer);
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
      __CMOST_COMMENT__ __gcnconv_kernel__weight_buffer;
      __CMOST_COMMENT__ __event___gcnconv_kernel__weight_buffer;
// __MERLIN_EVENT_WRITE__ __event___gcnconv_kernel__weight_buffer
      int __MERLIN_EVENT_WRITE____event___gcnconv_kernel__weight_buffer;
      opencl_write_buffer_nb(__gcnconv_kernel__weight_buffer,commands[0],0 * sizeof(float ),(float *)weight,((unsigned long )8000) * sizeof(float ),&__event___gcnconv_kernel__weight_buffer);
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
      __CMOST_COMMENT__ __gcnconv_kernel__edge_index_buffer;
      __CMOST_COMMENT__ __event___gcnconv_kernel__edge_index_buffer;
// __MERLIN_EVENT_WRITE__ __event___gcnconv_kernel__edge_index_buffer
      int __MERLIN_EVENT_WRITE____event___gcnconv_kernel__edge_index_buffer;
      opencl_write_buffer_nb(__gcnconv_kernel__edge_index_buffer,commands[0],0 * sizeof(int ),(int *)edge_index,((unsigned long )216730) * sizeof(int ),&__event___gcnconv_kernel__edge_index_buffer);
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
      __CMOST_COMMENT__ __gcnconv_kernel__result_buffer;
      __CMOST_COMMENT__ __event___gcnconv_kernel__result_buffer;
// __MERLIN_EVENT_WRITE__ __event___gcnconv_kernel__result_buffer
      int __MERLIN_EVENT_WRITE____event___gcnconv_kernel__result_buffer;
      opencl_write_buffer_nb(__gcnconv_kernel__result_buffer,commands[0],0 * sizeof(float ),(float *)result,((unsigned long )315472) * sizeof(float ),&__event___gcnconv_kernel__result_buffer);
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
      __CMOST_COMMENT__ __gcnconv_kernel__edge_index_buffer;
      __CMOST_COMMENT__ __event___gcnconv_kernel__edge_index_buffer;
// __MERLIN_EVENT_READ__ __event___gcnconv_kernel__edge_index_buffer
      int __MERLIN_EVENT_READ____event___gcnconv_kernel__edge_index_buffer;
      opencl_read_buffer_nb(__gcnconv_kernel__edge_index_buffer,commands[0],0 * sizeof(int ),(int *)edge_index,((unsigned long )216730) * sizeof(int ),&__event___gcnconv_kernel__edge_index_buffer);
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
      __CMOST_COMMENT__ __gcnconv_kernel__result_buffer;
      __CMOST_COMMENT__ __event___gcnconv_kernel__result_buffer;
// __MERLIN_EVENT_READ__ __event___gcnconv_kernel__result_buffer
      int __MERLIN_EVENT_READ____event___gcnconv_kernel__result_buffer;
      opencl_read_buffer_nb(__gcnconv_kernel__result_buffer,commands[0],0 * sizeof(float ),(float *)result,((unsigned long )315472) * sizeof(float ),&__event___gcnconv_kernel__result_buffer);
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
  int i;
{
	#pragma ACCEL debug printf("[Merlin Info] Start set kernel %s argument....\n", "gcnconv_kernel");
	#pragma ACCEL debug fflush(stdout);
	opencl_set_kernel_arg(__gcnconv_kernel_kernel, 0, sizeof(opencl_mem), &__gcnconv_kernel__x_buffer);
	opencl_set_kernel_arg(__gcnconv_kernel_kernel, 1, sizeof(opencl_mem), &__gcnconv_kernel__weight_buffer);
	opencl_set_kernel_arg(__gcnconv_kernel_kernel, 2, sizeof(opencl_mem), &__gcnconv_kernel__edge_index_buffer);
	opencl_set_kernel_arg(__gcnconv_kernel_kernel, 3, sizeof(opencl_mem), &__gcnconv_kernel__result_buffer);
	#pragma ACCEL debug printf("[Merlin Info] Finish set kernel %s argument....\n", "gcnconv_kernel");
	#pragma ACCEL debug fflush(stdout);
}
{
	#pragma ACCEL debug printf("[Merlin Info] Start execute kernel %s....\n", "gcnconv_kernel");
	#pragma ACCEL debug fflush(stdout);
	size_t __gid[1];
	__gid[0] = 1;
	opencl_enqueue_kernel(__gcnconv_kernel_kernel, commands[0], 1, __gid, &__event_gcnconv_kernel);
}
}
