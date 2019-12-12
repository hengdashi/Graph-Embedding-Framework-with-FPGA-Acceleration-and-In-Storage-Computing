#include <math.h>
#include "merlin_type_define.h"
static void __merlin_dummy_889();
void gcnconv_kernel(float x[19717 * 500],float weight[500 * 16],int edge_index[2 * (88648 + 19717)],float result[19717 * 16]);
extern int __merlin_include__LB___merlinhead_kernel_top_h_0;
#include "__merlinhead_kernel_top.h"
extern int __merlin_include__LE___merlinhead_kernel_top_h_0;

void __merlinwrapper_gcnconv_kernel(float x[19717 * 500],float weight[500 * 16],int edge_index[2 * (88648 + 19717)],float result[19717 * 16])
{
  
#pragma ACCEL kernel
  gcnconv_kernel(x,weight,edge_index,result);
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
}

void __merlin_read_buffer_gcnconv_kernel(float x[19717 * 500],float weight[500 * 16],int edge_index[2 * (88648 + 19717)],float result[19717 * 16])
{
}

void __merlin_execute_gcnconv_kernel(float x[19717 * 500],float weight[500 * 16],int edge_index[2 * (88648 + 19717)],float result[19717 * 16])
{
}
