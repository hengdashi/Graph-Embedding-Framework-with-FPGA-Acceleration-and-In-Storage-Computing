#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
extern "C" {
#endif
extern int __merlin_init(const char * bitstream);
extern int __merlin_release();
extern int __merlin_init_gcnconv_kernel();
extern int __merlin_release_gcnconv_kernel();
extern int __merlin_wait_kernel_gcnconv_kernel();
extern int __merlin_wait_write_gcnconv_kernel();
extern int __merlin_wait_read_gcnconv_kernel();
extern void __merlinwrapper_gcnconv_kernel(float x[19717 * 500],float weight[500 * 16],int edge_index[2 * (88648 + 19717)],float result[19717 * 16]);
extern void __merlin_write_buffer_gcnconv_kernel(float x[19717 * 500],float weight[500 * 16],int edge_index[2 * (88648 + 19717)],float result[19717 * 16]);
extern void __merlin_read_buffer_gcnconv_kernel(float x[19717 * 500],float weight[500 * 16],int edge_index[2 * (88648 + 19717)],float result[19717 * 16]);
extern void __merlin_execute_gcnconv_kernel(float x[19717 * 500],float weight[500 * 16],int edge_index[2 * (88648 + 19717)],float result[19717 * 16]);
extern void __merlin_gcnconv_kernel(float x[19717 * 500],float weight[500 * 16],int edge_index[2 * (88648 + 19717)],float result[19717 * 16]);
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
}
#endif
