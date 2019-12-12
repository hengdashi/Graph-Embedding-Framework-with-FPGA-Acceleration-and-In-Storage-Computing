#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/centos/CS_259/Project/GCN_FPGA/src/merlin/.merlin_prj/run/implement/exec/hls/_x/gcnconv_kernel/gcnconv_kernel/gcnconv_kernel/solution/.autopilot/db/a.g.bc ${1+"$@"}
