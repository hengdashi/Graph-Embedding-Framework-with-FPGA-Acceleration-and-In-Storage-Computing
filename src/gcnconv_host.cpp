#include <vector>
//#include <limits.h>
#include <iostream>
#include <string>
#include <algorithm>
#include "xcl2.hpp"

#define NUM_IMAGES 180

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::to_string;

// Util functions for host
void read_train_file(string filename,
    vector<unsigned long, aligned_allocator<unsigned long>> &train_image,
    int offset);
void read_test_file(string filename,
    vector<unsigned long, aligned_allocator<unsigned long>> &test_image,
    vector<int, aligned_allocator<int>> &test_label);
int vote(vector<unsigned char, aligned_allocator<unsigned char>> &knn_mat);

int main(int argc, char **argv) {

  vector<unsigned long, aligned_allocator<unsigned long>> train_image(18000);
  vector<unsigned long, aligned_allocator<unsigned long>> test_image(180);
  vector<unsigned char, aligned_allocator<unsigned char>> knn_mat(30);
  vector<int, aligned_allocator<int>> test_label(180);

  if (argc < 2) {
    cout << "Usage: ./a.out <data path>" << endl;
    return 0;
  }

  string path(argv[1]);

  // Prepare data
  for (int i = 0; i < 10; ++i)
    read_train_file(path + "/training_set_" + to_string(i) + ".dat",
        train_image, i * 1800);
  read_test_file(path + "/testing_set.dat", test_image, test_label);

  // OpenCL host setup start
  vector<cl::Device> devices = xcl::get_xil_devices();
  cl::Device device = devices[0];

  cl::Context context(device);
  cl::CommandQueue q(context, device, CL_QUEUE_PROFILING_ENABLE);
  string device_name = device.getInfo<CL_DEVICE_NAME>(); 

  string binaryFile = xcl::find_binary_file(device_name, "digitrec_kernel");
  cl::Program::Binaries bins = xcl::import_binary_file(binaryFile);
  devices.resize(1);
  cl::Program program(context, devices, bins);
  cl::Kernel kernel(program, "digitrec_kernel");

  //Allocate Buffer in Global Memory
  vector<cl::Memory> inBufVec, outBufVec;
  cl::Buffer buffer_in(context,CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY,
                       18000 * sizeof(unsigned long), train_image.data());
  cl::Buffer buffer_out(context,CL_MEM_USE_HOST_PTR | CL_MEM_READ_WRITE, 
                       30 * sizeof(unsigned char), knn_mat.data());
  inBufVec.push_back(buffer_in);
  outBufVec.push_back(buffer_out);

  //Copy input data to device global memory
  q.enqueueMigrateMemObjects(inBufVec, 0/* 0 means from host*/);

  auto krnl_digitrec = cl::KernelFunctor<unsigned long,
       cl::Buffer&, cl::Buffer&>(kernel);
  // OpenCL host setup end

  // Compute
  int correct = 0;
  for (int i = 0; i < NUM_IMAGES; ++i) {
    // Launch the Kernel
    krnl_digitrec(cl::EnqueueArgs(q, cl::NDRange(1, 1, 1), cl::NDRange(1, 1, 1)),
                  test_image[i], buffer_in, buffer_out);

    // Copy Result from Device Global Memory to Host Local Memory
    q.enqueueMigrateMemObjects(outBufVec, CL_MIGRATE_MEM_OBJECT_HOST);
    q.finish();

    if (vote(knn_mat) == test_label[i])
      correct++;
  }
  cout << "Accuracy: " << 100.0 * ((float)correct / NUM_IMAGES) << "%" << endl;

  return ((correct < NUM_IMAGES / 10.0)? EXIT_FAILURE: EXIT_SUCCESS);
}
