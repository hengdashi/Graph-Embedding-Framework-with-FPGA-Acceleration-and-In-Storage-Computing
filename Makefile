#==========================================================================
# Makefile
#==========================================================================
# @brief: A makefile the compiles and runs the gcnconv program
#
# @desc: 1. Enter "make" to compile & execute the gcnconv program
#        2. Enter "make clean" to clean up the directory (before submission)


# Extract Vivado HLS include path
VHLS_PATH := $(dir $(shell which vivado_hls))/..
VHLS_INC ?= ${VHLS_PATH}/include

COMMON_REPO := /home/centos/src/project_data/aws-fpga/SDAccel/examples/xilinx

# wide Memory Access Application
include $(COMMON_REPO)/utility/boards.mk
include $(COMMON_REPO)/libs/xcl2/xcl2.mk
include $(COMMON_REPO)/libs/opencl/opencl.mk

# dot product Host Application
gcnconv_host_SRCS=./src/hls/gcnconv_host.cpp ./src/hls/util.cpp $(xcl2_SRCS)
gcnconv_host_HDRS=$(xcl2_HDRS)
gcnconv_host_CXXFLAGS=-I./ $(xcl2_CXXFLAGS) $(opencl_CXXFLAGS) -I${VHLS_INC} -DK_CONST=3
gcnconv_host_LDFLAGS=$(opencl_LDFLAGS)

# dot product Kernels
gcnconv_kernel_SRCS=./src/hls/gcnconv.cpp
gcnconv_kernel_CLFLAGS=-k gcnconv_kernel


EXES=gcnconv_host
XCLBINS=gcnconv_kernel

XOS=gcnconv_kernel

gcnconv_kernel_XOS=gcnconv_kernel

# check
check_EXE=gcnconv_host ./data
check_XCLBINS=gcnconv_kernel

CHECKS=check

include $(COMMON_REPO)/utility/rules.mk
