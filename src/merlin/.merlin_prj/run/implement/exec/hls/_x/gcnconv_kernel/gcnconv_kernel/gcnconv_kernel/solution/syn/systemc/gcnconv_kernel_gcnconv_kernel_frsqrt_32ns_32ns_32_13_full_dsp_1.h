// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.op (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __gcnconv_kernel_gcnconv_kernel_frsqrt_32ns_32ns_32_13_full_dsp_1__HH__
#define __gcnconv_kernel_gcnconv_kernel_frsqrt_32ns_32ns_32_13_full_dsp_1__HH__
#include "ACMP_frsqrt.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int dout_WIDTH>
SC_MODULE(gcnconv_kernel_gcnconv_kernel_frsqrt_32ns_32ns_32_13_full_dsp_1) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_frsqrt<ID, 13, din0_WIDTH, din1_WIDTH, dout_WIDTH> ACMP_frsqrt_U;

    SC_CTOR(gcnconv_kernel_gcnconv_kernel_frsqrt_32ns_32ns_32_13_full_dsp_1):  ACMP_frsqrt_U ("ACMP_frsqrt_U") {
        ACMP_frsqrt_U.clk(clk);
        ACMP_frsqrt_U.reset(reset);
        ACMP_frsqrt_U.ce(ce);
        ACMP_frsqrt_U.din0(din0);
        ACMP_frsqrt_U.din1(din1);
        ACMP_frsqrt_U.dout(dout);

    }

};

#endif //
