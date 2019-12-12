#!/bin/sh

# 
# xocc(TM)
# runme.sh: a xocc-generated Runs Script for UNIX
# Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
# 

if [ -z "$PATH" ]; then
  PATH=/opt/Xilinx/Vivado/2019.1.op2552052/bin:/opt/Xilinx/SDK/2019.1.op2552052/bin:/opt/Xilinx/SDx/2019.1.op2552052/bin
else
  PATH=/opt/Xilinx/Vivado/2019.1.op2552052/bin:/opt/Xilinx/SDK/2019.1.op2552052/bin:/opt/Xilinx/SDx/2019.1.op2552052/bin:$PATH
fi
export PATH

if [ -z "$LD_LIBRARY_PATH" ]; then
  LD_LIBRARY_PATH=
else
  LD_LIBRARY_PATH=:$LD_LIBRARY_PATH
fi
export LD_LIBRARY_PATH

HD_PWD='/home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/_x/gcnconv_kernel/gcnconv_kernel'
cd "$HD_PWD"

HD_LOG=runme.log
/bin/touch $HD_LOG

ISEStep="./ISEWrap.sh"
EAStep()
{
     $ISEStep $HD_LOG "$@" >> $HD_LOG 2>&1
     if [ $? -ne 0 ]
     then
         exit
     fi
}

EAStep vivado_hls -f gcnconv_kernel.tcl -messageDb vivado_hls.pb
