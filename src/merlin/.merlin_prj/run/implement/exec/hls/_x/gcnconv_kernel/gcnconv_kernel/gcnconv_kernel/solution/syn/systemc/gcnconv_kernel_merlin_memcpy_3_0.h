// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1.op
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _gcnconv_kernel_merlin_memcpy_3_0_HH_
#define _gcnconv_kernel_merlin_memcpy_3_0_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct gcnconv_kernel_merlin_memcpy_3_0 : public sc_module {
    // Port declarations 59
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<18> > dst_address0;
    sc_out< sc_logic > dst_ce0;
    sc_out< sc_logic > dst_we0;
    sc_out< sc_lv<32> > dst_d0;
    sc_out< sc_logic > m_axi_src_AWVALID;
    sc_in< sc_logic > m_axi_src_AWREADY;
    sc_out< sc_lv<64> > m_axi_src_AWADDR;
    sc_out< sc_lv<1> > m_axi_src_AWID;
    sc_out< sc_lv<32> > m_axi_src_AWLEN;
    sc_out< sc_lv<3> > m_axi_src_AWSIZE;
    sc_out< sc_lv<2> > m_axi_src_AWBURST;
    sc_out< sc_lv<2> > m_axi_src_AWLOCK;
    sc_out< sc_lv<4> > m_axi_src_AWCACHE;
    sc_out< sc_lv<3> > m_axi_src_AWPROT;
    sc_out< sc_lv<4> > m_axi_src_AWQOS;
    sc_out< sc_lv<4> > m_axi_src_AWREGION;
    sc_out< sc_lv<1> > m_axi_src_AWUSER;
    sc_out< sc_logic > m_axi_src_WVALID;
    sc_in< sc_logic > m_axi_src_WREADY;
    sc_out< sc_lv<512> > m_axi_src_WDATA;
    sc_out< sc_lv<64> > m_axi_src_WSTRB;
    sc_out< sc_logic > m_axi_src_WLAST;
    sc_out< sc_lv<1> > m_axi_src_WID;
    sc_out< sc_lv<1> > m_axi_src_WUSER;
    sc_out< sc_logic > m_axi_src_ARVALID;
    sc_in< sc_logic > m_axi_src_ARREADY;
    sc_out< sc_lv<64> > m_axi_src_ARADDR;
    sc_out< sc_lv<1> > m_axi_src_ARID;
    sc_out< sc_lv<32> > m_axi_src_ARLEN;
    sc_out< sc_lv<3> > m_axi_src_ARSIZE;
    sc_out< sc_lv<2> > m_axi_src_ARBURST;
    sc_out< sc_lv<2> > m_axi_src_ARLOCK;
    sc_out< sc_lv<4> > m_axi_src_ARCACHE;
    sc_out< sc_lv<3> > m_axi_src_ARPROT;
    sc_out< sc_lv<4> > m_axi_src_ARQOS;
    sc_out< sc_lv<4> > m_axi_src_ARREGION;
    sc_out< sc_lv<1> > m_axi_src_ARUSER;
    sc_in< sc_logic > m_axi_src_RVALID;
    sc_out< sc_logic > m_axi_src_RREADY;
    sc_in< sc_lv<512> > m_axi_src_RDATA;
    sc_in< sc_logic > m_axi_src_RLAST;
    sc_in< sc_lv<1> > m_axi_src_RID;
    sc_in< sc_lv<1> > m_axi_src_RUSER;
    sc_in< sc_lv<2> > m_axi_src_RRESP;
    sc_in< sc_logic > m_axi_src_BVALID;
    sc_out< sc_logic > m_axi_src_BREADY;
    sc_in< sc_lv<2> > m_axi_src_BRESP;
    sc_in< sc_lv<1> > m_axi_src_BID;
    sc_in< sc_lv<1> > m_axi_src_BUSER;
    sc_in< sc_lv<58> > src_offset;
    sc_out< sc_logic > ap_ext_blocking_n;
    sc_out< sc_logic > ap_str_blocking_n;
    sc_out< sc_logic > ap_int_blocking_n;


    // Module declarations
    gcnconv_kernel_merlin_memcpy_3_0(sc_module_name name);
    SC_HAS_PROCESS(gcnconv_kernel_merlin_memcpy_3_0);

    ~gcnconv_kernel_merlin_memcpy_3_0();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > src_blk_n_AR;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > icmp_ln88_reg_186;
    sc_signal< sc_logic > src_blk_n_R;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter8;
    sc_signal< sc_lv<1> > icmp_ln88_reg_186_pp0_iter7_reg;
    sc_signal< sc_lv<18> > i_0_reg_93;
    sc_signal< sc_lv<18> > i_0_reg_93_pp0_iter1_reg;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state3_io;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter5;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter6;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter7;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter8;
    sc_signal< bool > ap_block_state11_pp0_stage0_iter9;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<18> > i_0_reg_93_pp0_iter2_reg;
    sc_signal< sc_lv<18> > i_0_reg_93_pp0_iter3_reg;
    sc_signal< sc_lv<18> > i_0_reg_93_pp0_iter4_reg;
    sc_signal< sc_lv<18> > i_0_reg_93_pp0_iter5_reg;
    sc_signal< sc_lv<18> > i_0_reg_93_pp0_iter6_reg;
    sc_signal< sc_lv<18> > i_0_reg_93_pp0_iter7_reg;
    sc_signal< sc_lv<18> > i_0_reg_93_pp0_iter8_reg;
    sc_signal< sc_lv<1> > icmp_ln88_fu_105_p2;
    sc_signal< sc_lv<1> > icmp_ln88_reg_186_pp0_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln88_reg_186_pp0_iter2_reg;
    sc_signal< sc_lv<1> > icmp_ln88_reg_186_pp0_iter3_reg;
    sc_signal< sc_lv<1> > icmp_ln88_reg_186_pp0_iter4_reg;
    sc_signal< sc_lv<1> > icmp_ln88_reg_186_pp0_iter5_reg;
    sc_signal< sc_lv<1> > icmp_ln88_reg_186_pp0_iter6_reg;
    sc_signal< sc_lv<1> > icmp_ln88_reg_186_pp0_iter8_reg;
    sc_signal< sc_lv<18> > i_fu_111_p2;
    sc_signal< sc_lv<18> > i_reg_190;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<59> > add_ln93_fu_134_p2;
    sc_signal< sc_lv<59> > add_ln93_reg_195;
    sc_signal< sc_lv<512> > src_addr_read_reg_206;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter7;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter9;
    sc_signal< sc_lv<18> > ap_phi_mux_i_0_phi_fu_97_p4;
    sc_signal< sc_lv<64> > zext_ln88_fu_150_p1;
    sc_signal< sc_lv<64> > zext_ln93_2_fu_140_p1;
    sc_signal< sc_lv<14> > tmp_3_fu_117_p4;
    sc_signal< sc_lv<59> > zext_ln93_fu_127_p1;
    sc_signal< sc_lv<59> > zext_ln93_1_fu_131_p1;
    sc_signal< sc_lv<4> > trunc_ln93_fu_155_p1;
    sc_signal< sc_lv<9> > tmp_4_fu_159_p3;
    sc_signal< sc_lv<512> > empty_fu_167_p1;
    sc_signal< sc_lv<512> > lshr_ln93_fu_171_p2;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_logic > ap_ext_blocking_cur_n;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_pp0_stage0;
    static const sc_lv<3> ap_ST_fsm_state12;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<512> ap_const_lv512_lc_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<18> ap_const_lv18_0;
    static const sc_lv<18> ap_const_lv18_34E9A;
    static const sc_lv<18> ap_const_lv18_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<32> ap_const_lv32_2;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln93_fu_134_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state12();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state10_pp0_stage0_iter8();
    void thread_ap_block_state11_pp0_stage0_iter9();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_io();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_block_state4_pp0_stage0_iter2();
    void thread_ap_block_state5_pp0_stage0_iter3();
    void thread_ap_block_state6_pp0_stage0_iter4();
    void thread_ap_block_state7_pp0_stage0_iter5();
    void thread_ap_block_state8_pp0_stage0_iter6();
    void thread_ap_block_state9_pp0_stage0_iter7();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_ext_blocking_cur_n();
    void thread_ap_ext_blocking_n();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_int_blocking_n();
    void thread_ap_phi_mux_i_0_phi_fu_97_p4();
    void thread_ap_ready();
    void thread_ap_str_blocking_n();
    void thread_dst_address0();
    void thread_dst_ce0();
    void thread_dst_d0();
    void thread_dst_we0();
    void thread_empty_fu_167_p1();
    void thread_i_fu_111_p2();
    void thread_icmp_ln88_fu_105_p2();
    void thread_lshr_ln93_fu_171_p2();
    void thread_m_axi_src_ARADDR();
    void thread_m_axi_src_ARBURST();
    void thread_m_axi_src_ARCACHE();
    void thread_m_axi_src_ARID();
    void thread_m_axi_src_ARLEN();
    void thread_m_axi_src_ARLOCK();
    void thread_m_axi_src_ARPROT();
    void thread_m_axi_src_ARQOS();
    void thread_m_axi_src_ARREGION();
    void thread_m_axi_src_ARSIZE();
    void thread_m_axi_src_ARUSER();
    void thread_m_axi_src_ARVALID();
    void thread_m_axi_src_AWADDR();
    void thread_m_axi_src_AWBURST();
    void thread_m_axi_src_AWCACHE();
    void thread_m_axi_src_AWID();
    void thread_m_axi_src_AWLEN();
    void thread_m_axi_src_AWLOCK();
    void thread_m_axi_src_AWPROT();
    void thread_m_axi_src_AWQOS();
    void thread_m_axi_src_AWREGION();
    void thread_m_axi_src_AWSIZE();
    void thread_m_axi_src_AWUSER();
    void thread_m_axi_src_AWVALID();
    void thread_m_axi_src_BREADY();
    void thread_m_axi_src_RREADY();
    void thread_m_axi_src_WDATA();
    void thread_m_axi_src_WID();
    void thread_m_axi_src_WLAST();
    void thread_m_axi_src_WSTRB();
    void thread_m_axi_src_WUSER();
    void thread_m_axi_src_WVALID();
    void thread_src_blk_n_AR();
    void thread_src_blk_n_R();
    void thread_tmp_3_fu_117_p4();
    void thread_tmp_4_fu_159_p3();
    void thread_trunc_ln93_fu_155_p1();
    void thread_zext_ln88_fu_150_p1();
    void thread_zext_ln93_1_fu_131_p1();
    void thread_zext_ln93_2_fu_140_p1();
    void thread_zext_ln93_fu_127_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
