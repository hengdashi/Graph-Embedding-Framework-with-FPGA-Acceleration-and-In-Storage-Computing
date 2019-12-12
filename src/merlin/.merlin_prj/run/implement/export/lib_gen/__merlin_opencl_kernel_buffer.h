#include "__merlin_opencl_if.h"
int opencl_init_kernel_buffer();
int __merlin_release_kernel_buffer();
extern opencl_kernel __gcnconv_kernel_kernel;
extern cl_event __event_gcnconv_kernel;
#ifdef __cplusplus
extern "C" {
#endif
int __merlin_init_gcnconv_kernel();
int __merlin_release_gcnconv_kernel();
int __merlin_wait_kernel_gcnconv_kernel();
int __merlin_wait_write_gcnconv_kernel();
int __merlin_wait_read_gcnconv_kernel();
#ifdef __cplusplus
}
#endif
extern opencl_mem __gcnconv_kernel__edge_index_buffer;
extern cl_event __event___gcnconv_kernel__edge_index_buffer;
extern opencl_mem __gcnconv_kernel__result_buffer;
extern cl_event __event___gcnconv_kernel__result_buffer;
extern opencl_mem __gcnconv_kernel__weight_buffer;
extern cl_event __event___gcnconv_kernel__weight_buffer;
extern opencl_mem __gcnconv_kernel__x_buffer;
extern cl_event __event___gcnconv_kernel__x_buffer;
