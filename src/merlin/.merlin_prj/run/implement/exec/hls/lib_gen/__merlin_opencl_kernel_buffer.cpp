#include "__merlin_opencl_kernel_buffer.h"
opencl_kernel __gcnconv_kernel_kernel;
cl_event __event_gcnconv_kernel;
opencl_mem __gcnconv_kernel__edge_index_buffer;
cl_event __event___gcnconv_kernel__edge_index_buffer;
opencl_mem __gcnconv_kernel__result_buffer;
cl_event __event___gcnconv_kernel__result_buffer;
opencl_mem __gcnconv_kernel__weight_buffer;
cl_event __event___gcnconv_kernel__weight_buffer;
opencl_mem __gcnconv_kernel__x_buffer;
cl_event __event___gcnconv_kernel__x_buffer;
int __merlin_init_gcnconv_kernel(){
	printf("[Merlin Info] Start create kernel for %s....\n", "gcnconv_kernel");
	fflush(stdout);
	opencl_create_kernel(&__gcnconv_kernel_kernel, (char *)"gcnconv_kernel");
	printf("[Merlin Info] Successful create kernel for %s....\n", "gcnconv_kernel");
	fflush(stdout);
	printf("[Merlin Info] Start create buffer for %s....\n", "edge_index");
	fflush(stdout);
	opencl_create_buffer(&__gcnconv_kernel__edge_index_buffer, (int64_t)4*216730, 2);
	printf("[Merlin Info] Successful create buffer for %s....\n", "edge_index");
	fflush(stdout);
	printf("[Merlin Info] Start create buffer for %s....\n", "result");
	fflush(stdout);
	opencl_create_buffer(&__gcnconv_kernel__result_buffer, (int64_t)4*315472, 2);
	printf("[Merlin Info] Successful create buffer for %s....\n", "result");
	fflush(stdout);
	printf("[Merlin Info] Start create buffer for %s....\n", "weight");
	fflush(stdout);
	opencl_create_buffer(&__gcnconv_kernel__weight_buffer, (int64_t)4*8000, 2);
	printf("[Merlin Info] Successful create buffer for %s....\n", "weight");
	fflush(stdout);
	printf("[Merlin Info] Start create buffer for %s....\n", "x");
	fflush(stdout);
	opencl_create_buffer(&__gcnconv_kernel__x_buffer, (int64_t)4*9858500, 2);
	printf("[Merlin Info] Successful create buffer for %s....\n", "x");
	fflush(stdout);
	return 0;
}
int opencl_init_kernel_buffer(){
	int __merlin_init_gcnconv_kernel();
	return 0;
}
int __merlin_release_gcnconv_kernel(){
	if(__gcnconv_kernel_kernel) {
		opencl_release_kernel(__gcnconv_kernel_kernel);
	}
	if(__event_gcnconv_kernel) {
		opencl_release_event(__event_gcnconv_kernel);
	}
	if(__gcnconv_kernel__edge_index_buffer) {
		opencl_release_mem_object(__gcnconv_kernel__edge_index_buffer);
	}
	if(__gcnconv_kernel__result_buffer) {
		opencl_release_mem_object(__gcnconv_kernel__result_buffer);
	}
	if(__gcnconv_kernel__weight_buffer) {
		opencl_release_mem_object(__gcnconv_kernel__weight_buffer);
	}
	if(__gcnconv_kernel__x_buffer) {
		opencl_release_mem_object(__gcnconv_kernel__x_buffer);
	}
	return 0;
}
int __merlin_release_kernel_buffer(){
	int __merlin_release_gcnconv_kernel();
	return 0;
}
int __merlin_wait_kernel_gcnconv_kernel(){
	opencl_wait_event(__event_gcnconv_kernel);
	return 0;
}
int __merlin_wait_write_gcnconv_kernel(){
		opencl_wait_event(__event___gcnconv_kernel__edge_index_buffer);
	if(__gcnconv_kernel__edge_index_buffer) {
		opencl_release_mem_object(__gcnconv_kernel__edge_index_buffer);
	}
		opencl_wait_event(__event___gcnconv_kernel__result_buffer);
	if(__gcnconv_kernel__result_buffer) {
		opencl_release_mem_object(__gcnconv_kernel__result_buffer);
	}
		opencl_wait_event(__event___gcnconv_kernel__weight_buffer);
	if(__gcnconv_kernel__weight_buffer) {
		opencl_release_mem_object(__gcnconv_kernel__weight_buffer);
	}
		opencl_wait_event(__event___gcnconv_kernel__x_buffer);
	if(__gcnconv_kernel__x_buffer) {
		opencl_release_mem_object(__gcnconv_kernel__x_buffer);
	}
	return 0;
}
int __merlin_wait_read_gcnconv_kernel(){
		opencl_wait_event(__event___gcnconv_kernel__edge_index_buffer);
	if(__gcnconv_kernel__edge_index_buffer) {
		opencl_release_mem_object(__gcnconv_kernel__edge_index_buffer);
	}
		opencl_wait_event(__event___gcnconv_kernel__result_buffer);
	if(__gcnconv_kernel__result_buffer) {
		opencl_release_mem_object(__gcnconv_kernel__result_buffer);
	}
	return 0;
}
