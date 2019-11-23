#include <string>
#include <chrono>
#include <vector>
#include <iostream>
#include <algorithm>
#include "xcl2.hpp"

#include "constant.h"

using std::clog;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::chrono::duration_cast;
using std::chrono::microseconds;
using std::chrono::steady_clock;

// Util functions for host
void load_data(string path, 
    vector<float, aligned_allocator<float>> &x,
    vector<float, aligned_allocator<float>> &weight,
    vector<int, aligned_allocator<int>> &edge_index);
void write_data(string path, vector<float, aligned_allocator<float>> &result);
bool compare_results(string path);

int main(int argc, char **argv) {

  vector<float, aligned_allocator<float>> x(N_NODE * N_WORD);
  vector<float, aligned_allocator<float>> weight(N_WORD * N_CLASS);
  vector<int, aligned_allocator<int>> edge_index(2 * (N_EDGE + N_NODE));
  vector<float, aligned_allocator<float>> result(N_NODE * N_CLASS);

  if (argc < 2) {
    cout << "Usage: ./gcn <data path>" << endl;
    exit(1);
  }

  string path(argv[1]);
  cout << "Start loading data" << endl;
  load_data(path, x, weight, edge_index);
  cout << "End loading data" << endl;

  // OpenCL host setup start
  vector<cl::Device> devices = xcl::get_xil_devices();
  cl::Device device = devices[0];

  cl::Context context(device);
  cl::CommandQueue q(context, device, CL_QUEUE_PROFILING_ENABLE);
  string device_name = device.getInfo<CL_DEVICE_NAME>(); 

  string binaryFile = xcl::find_binary_file(device_name, "gcnconv_kernel");
  cl::Program::Binaries bins = xcl::import_binary_file(binaryFile);
  devices.resize(1);
  cl::Program program(context, devices, bins);
  cl::Kernel kernel(program, "gcnconv_kernel");

  //Allocate Buffer in Global Memory
  vector<cl::Memory> inBufVec, outBufVec;
  cl::Buffer buf_in_x(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY,
                      N_NODE * N_WORD * sizeof(float), x.data());
  cl::Buffer buf_in_weight(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY,
                           N_WORD * N_CLASS * sizeof(float), weight.data());
  cl::Buffer buf_in_edge(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY,
                         2*(N_EDGE + N_NODE) * sizeof(int), edge_index.data());
  cl::Buffer buf_out(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_WRITE, 
                     N_NODE * N_CLASS * sizeof(float), result.data());
  inBufVec.push_back(buf_in_x);
  inBufVec.push_back(buf_in_weight);
  inBufVec.push_back(buf_in_edge);
  outBufVec.push_back(buf_out);

  //Copy input data to device global memory
  q.enqueueMigrateMemObjects(inBufVec, 0/* 0 means from host*/);

  auto krnl_gcnconv = cl::KernelFunctor<cl::Buffer&, cl::Buffer&, cl::Buffer&, cl::Buffer&>(kernel);

  // Compute
  cout << "Start computation" << endl;
  const auto begin = steady_clock::now();

  krnl_gcnconv(cl::EnqueueArgs(q, cl::NDRange(1, 1, 1), cl::NDRange(1, 1, 1)),
               buf_in_x, buf_in_weight, buf_in_edge, buf_out);

  // Copy Result from Device Global Memory to Host Local Memory
  q.enqueueMigrateMemObjects(outBufVec, CL_MIGRATE_MEM_OBJECT_HOST);
  q.finish();

  const auto end = steady_clock::now();
  cout << "End computation" << endl;

  cout << "Start writing data" << endl;
  write_data(path, result);
  cout << "End writing data" << endl;

  if (!compare_results(path)) {
    cout << "Result is different from sequencial version." << endl;
    return EXIT_FAILURE;
  }

  uint64_t run_time_us = duration_cast<microseconds>(end - begin).count();
  float gflops = float(N_NODE * N_CLASS * N_WORD + 4 * N_NODE + 3 * N_EDGE + 2 * (N_EDGE + N_NODE) * N_CLASS) / (run_time_us * 1e3);
  clog << "Time: " << run_time_us * 1e-6 << " s\n";
  clog << "Perf: " << gflops << " GFlops\n";

  return EXIT_SUCCESS;
}
