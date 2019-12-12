// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1.op
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module gcnconv_kernel_merlin_memcpy_2_0 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        dst_address0,
        dst_ce0,
        dst_we0,
        dst_d0,
        m_axi_src_AWVALID,
        m_axi_src_AWREADY,
        m_axi_src_AWADDR,
        m_axi_src_AWID,
        m_axi_src_AWLEN,
        m_axi_src_AWSIZE,
        m_axi_src_AWBURST,
        m_axi_src_AWLOCK,
        m_axi_src_AWCACHE,
        m_axi_src_AWPROT,
        m_axi_src_AWQOS,
        m_axi_src_AWREGION,
        m_axi_src_AWUSER,
        m_axi_src_WVALID,
        m_axi_src_WREADY,
        m_axi_src_WDATA,
        m_axi_src_WSTRB,
        m_axi_src_WLAST,
        m_axi_src_WID,
        m_axi_src_WUSER,
        m_axi_src_ARVALID,
        m_axi_src_ARREADY,
        m_axi_src_ARADDR,
        m_axi_src_ARID,
        m_axi_src_ARLEN,
        m_axi_src_ARSIZE,
        m_axi_src_ARBURST,
        m_axi_src_ARLOCK,
        m_axi_src_ARCACHE,
        m_axi_src_ARPROT,
        m_axi_src_ARQOS,
        m_axi_src_ARREGION,
        m_axi_src_ARUSER,
        m_axi_src_RVALID,
        m_axi_src_RREADY,
        m_axi_src_RDATA,
        m_axi_src_RLAST,
        m_axi_src_RID,
        m_axi_src_RUSER,
        m_axi_src_RRESP,
        m_axi_src_BVALID,
        m_axi_src_BREADY,
        m_axi_src_BRESP,
        m_axi_src_BID,
        m_axi_src_BUSER,
        src_offset,
        ap_ext_blocking_n,
        ap_str_blocking_n,
        ap_int_blocking_n
);

parameter    ap_ST_fsm_state1 = 3'd1;
parameter    ap_ST_fsm_pp0_stage0 = 3'd2;
parameter    ap_ST_fsm_state12 = 3'd4;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [16:0] dst_address0;
output   dst_ce0;
output   dst_we0;
output  [31:0] dst_d0;
output   m_axi_src_AWVALID;
input   m_axi_src_AWREADY;
output  [63:0] m_axi_src_AWADDR;
output  [0:0] m_axi_src_AWID;
output  [31:0] m_axi_src_AWLEN;
output  [2:0] m_axi_src_AWSIZE;
output  [1:0] m_axi_src_AWBURST;
output  [1:0] m_axi_src_AWLOCK;
output  [3:0] m_axi_src_AWCACHE;
output  [2:0] m_axi_src_AWPROT;
output  [3:0] m_axi_src_AWQOS;
output  [3:0] m_axi_src_AWREGION;
output  [0:0] m_axi_src_AWUSER;
output   m_axi_src_WVALID;
input   m_axi_src_WREADY;
output  [511:0] m_axi_src_WDATA;
output  [63:0] m_axi_src_WSTRB;
output   m_axi_src_WLAST;
output  [0:0] m_axi_src_WID;
output  [0:0] m_axi_src_WUSER;
output   m_axi_src_ARVALID;
input   m_axi_src_ARREADY;
output  [63:0] m_axi_src_ARADDR;
output  [0:0] m_axi_src_ARID;
output  [31:0] m_axi_src_ARLEN;
output  [2:0] m_axi_src_ARSIZE;
output  [1:0] m_axi_src_ARBURST;
output  [1:0] m_axi_src_ARLOCK;
output  [3:0] m_axi_src_ARCACHE;
output  [2:0] m_axi_src_ARPROT;
output  [3:0] m_axi_src_ARQOS;
output  [3:0] m_axi_src_ARREGION;
output  [0:0] m_axi_src_ARUSER;
input   m_axi_src_RVALID;
output   m_axi_src_RREADY;
input  [511:0] m_axi_src_RDATA;
input   m_axi_src_RLAST;
input  [0:0] m_axi_src_RID;
input  [0:0] m_axi_src_RUSER;
input  [1:0] m_axi_src_RRESP;
input   m_axi_src_BVALID;
output   m_axi_src_BREADY;
input  [1:0] m_axi_src_BRESP;
input  [0:0] m_axi_src_BID;
input  [0:0] m_axi_src_BUSER;
input  [57:0] src_offset;
output   ap_ext_blocking_n;
output   ap_str_blocking_n;
output   ap_int_blocking_n;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg dst_ce0;
reg dst_we0;
reg m_axi_src_ARVALID;
reg m_axi_src_RREADY;

(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    src_blk_n_AR;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage0;
reg   [0:0] icmp_ln69_reg_184;
reg    src_blk_n_R;
reg    ap_enable_reg_pp0_iter8;
reg   [0:0] icmp_ln69_reg_184_pp0_iter7_reg;
reg   [16:0] i_0_reg_91;
reg   [16:0] i_0_reg_91_pp0_iter1_reg;
wire    ap_block_state2_pp0_stage0_iter0;
wire    ap_block_state3_pp0_stage0_iter1;
reg    ap_block_state3_io;
wire    ap_block_state4_pp0_stage0_iter2;
wire    ap_block_state5_pp0_stage0_iter3;
wire    ap_block_state6_pp0_stage0_iter4;
wire    ap_block_state7_pp0_stage0_iter5;
wire    ap_block_state8_pp0_stage0_iter6;
wire    ap_block_state9_pp0_stage0_iter7;
reg    ap_block_state10_pp0_stage0_iter8;
wire    ap_block_state11_pp0_stage0_iter9;
reg    ap_block_pp0_stage0_11001;
reg   [16:0] i_0_reg_91_pp0_iter2_reg;
reg   [16:0] i_0_reg_91_pp0_iter3_reg;
reg   [16:0] i_0_reg_91_pp0_iter4_reg;
reg   [16:0] i_0_reg_91_pp0_iter5_reg;
reg   [16:0] i_0_reg_91_pp0_iter6_reg;
reg   [16:0] i_0_reg_91_pp0_iter7_reg;
reg   [16:0] i_0_reg_91_pp0_iter8_reg;
wire   [0:0] icmp_ln69_fu_103_p2;
reg   [0:0] icmp_ln69_reg_184_pp0_iter1_reg;
reg   [0:0] icmp_ln69_reg_184_pp0_iter2_reg;
reg   [0:0] icmp_ln69_reg_184_pp0_iter3_reg;
reg   [0:0] icmp_ln69_reg_184_pp0_iter4_reg;
reg   [0:0] icmp_ln69_reg_184_pp0_iter5_reg;
reg   [0:0] icmp_ln69_reg_184_pp0_iter6_reg;
reg   [0:0] icmp_ln69_reg_184_pp0_iter8_reg;
wire   [16:0] i_fu_109_p2;
reg   [16:0] i_reg_188;
reg    ap_enable_reg_pp0_iter0;
wire   [58:0] add_ln74_fu_132_p2;
reg   [58:0] add_ln74_reg_193;
reg   [511:0] src_addr_read_reg_204;
reg    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state2;
reg    ap_enable_reg_pp0_iter2;
reg    ap_enable_reg_pp0_iter3;
reg    ap_enable_reg_pp0_iter4;
reg    ap_enable_reg_pp0_iter5;
reg    ap_enable_reg_pp0_iter6;
reg    ap_enable_reg_pp0_iter7;
reg    ap_enable_reg_pp0_iter9;
reg   [16:0] ap_phi_mux_i_0_phi_fu_95_p4;
wire   [63:0] zext_ln69_fu_148_p1;
wire   [63:0] zext_ln74_2_fu_138_p1;
wire   [12:0] tmp_5_fu_115_p4;
wire   [58:0] zext_ln74_fu_125_p1;
wire   [58:0] zext_ln74_1_fu_129_p1;
wire   [3:0] trunc_ln74_fu_153_p1;
wire   [8:0] tmp_6_fu_157_p3;
wire   [511:0] empty_fu_165_p1;
wire   [511:0] lshr_ln74_fu_169_p2;
wire    ap_CS_fsm_state12;
reg   [2:0] ap_NS_fsm;
wire    ap_ext_blocking_cur_n;
reg    ap_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_CS_fsm = 3'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter8 = 1'b0;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter4 = 1'b0;
#0 ap_enable_reg_pp0_iter5 = 1'b0;
#0 ap_enable_reg_pp0_iter6 = 1'b0;
#0 ap_enable_reg_pp0_iter7 = 1'b0;
#0 ap_enable_reg_pp0_iter9 = 1'b0;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_condition_pp0_exit_iter0_state2) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            if ((1'b1 == ap_condition_pp0_exit_iter0_state2)) begin
                ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state2);
            end else if ((1'b1 == 1'b1)) begin
                ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter5 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter5 <= ap_enable_reg_pp0_iter4;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter6 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter6 <= ap_enable_reg_pp0_iter5;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter7 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter7 <= ap_enable_reg_pp0_iter6;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter8 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter8 <= ap_enable_reg_pp0_iter7;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter9 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter9 <= ap_enable_reg_pp0_iter8;
        end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter9 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln69_reg_184 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        i_0_reg_91 <= i_reg_188;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_0_reg_91 <= 17'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln69_fu_103_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        add_ln74_reg_193 <= add_ln74_fu_132_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        i_0_reg_91_pp0_iter1_reg <= i_0_reg_91;
        icmp_ln69_reg_184 <= icmp_ln69_fu_103_p2;
        icmp_ln69_reg_184_pp0_iter1_reg <= icmp_ln69_reg_184;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        i_0_reg_91_pp0_iter2_reg <= i_0_reg_91_pp0_iter1_reg;
        i_0_reg_91_pp0_iter3_reg <= i_0_reg_91_pp0_iter2_reg;
        i_0_reg_91_pp0_iter4_reg <= i_0_reg_91_pp0_iter3_reg;
        i_0_reg_91_pp0_iter5_reg <= i_0_reg_91_pp0_iter4_reg;
        i_0_reg_91_pp0_iter6_reg <= i_0_reg_91_pp0_iter5_reg;
        i_0_reg_91_pp0_iter7_reg <= i_0_reg_91_pp0_iter6_reg;
        i_0_reg_91_pp0_iter8_reg <= i_0_reg_91_pp0_iter7_reg;
        icmp_ln69_reg_184_pp0_iter2_reg <= icmp_ln69_reg_184_pp0_iter1_reg;
        icmp_ln69_reg_184_pp0_iter3_reg <= icmp_ln69_reg_184_pp0_iter2_reg;
        icmp_ln69_reg_184_pp0_iter4_reg <= icmp_ln69_reg_184_pp0_iter3_reg;
        icmp_ln69_reg_184_pp0_iter5_reg <= icmp_ln69_reg_184_pp0_iter4_reg;
        icmp_ln69_reg_184_pp0_iter6_reg <= icmp_ln69_reg_184_pp0_iter5_reg;
        icmp_ln69_reg_184_pp0_iter7_reg <= icmp_ln69_reg_184_pp0_iter6_reg;
        icmp_ln69_reg_184_pp0_iter8_reg <= icmp_ln69_reg_184_pp0_iter7_reg;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        i_reg_188 <= i_fu_109_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln69_reg_184_pp0_iter7_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        src_addr_read_reg_204 <= m_axi_src_RDATA;
    end
end

always @ (*) begin
    if ((icmp_ln69_fu_103_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state2 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state2 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state12) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter9 == 1'b0) & (ap_enable_reg_pp0_iter7 == 1'b0) & (ap_enable_reg_pp0_iter6 == 1'b0) & (ap_enable_reg_pp0_iter5 == 1'b0) & (ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0) & (ap_enable_reg_pp0_iter8 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (icmp_ln69_reg_184 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_phi_mux_i_0_phi_fu_95_p4 = i_reg_188;
    end else begin
        ap_phi_mux_i_0_phi_fu_95_p4 = i_0_reg_91;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter9 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        dst_ce0 = 1'b1;
    end else begin
        dst_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln69_reg_184_pp0_iter8_reg == 1'd0) & (ap_enable_reg_pp0_iter9 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        dst_we0 = 1'b1;
    end else begin
        dst_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln69_reg_184 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        m_axi_src_ARVALID = 1'b1;
    end else begin
        m_axi_src_ARVALID = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln69_reg_184_pp0_iter7_reg == 1'd0) & (ap_enable_reg_pp0_iter8 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        m_axi_src_RREADY = 1'b1;
    end else begin
        m_axi_src_RREADY = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (icmp_ln69_reg_184 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        src_blk_n_AR = m_axi_src_ARREADY;
    end else begin
        src_blk_n_AR = 1'b1;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (icmp_ln69_reg_184_pp0_iter7_reg == 1'd0) & (ap_enable_reg_pp0_iter8 == 1'b1))) begin
        src_blk_n_R = m_axi_src_RVALID;
    end else begin
        src_blk_n_R = 1'b1;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (icmp_ln69_fu_103_p2 == 1'd1)) & ~((ap_enable_reg_pp0_iter9 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter8 == 1'b0)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if ((((ap_enable_reg_pp0_iter9 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter8 == 1'b0)) | ((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (icmp_ln69_fu_103_p2 == 1'd1)))) begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln74_fu_132_p2 = (zext_ln74_fu_125_p1 + zext_ln74_1_fu_129_p1);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd2];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_11001 = (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_block_state3_io)) | ((icmp_ln69_reg_184_pp0_iter7_reg == 1'd0) & (m_axi_src_RVALID == 1'b0) & (ap_enable_reg_pp0_iter8 == 1'b1)));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_block_state3_io)) | ((icmp_ln69_reg_184_pp0_iter7_reg == 1'd0) & (m_axi_src_RVALID == 1'b0) & (ap_enable_reg_pp0_iter8 == 1'b1)));
end

always @ (*) begin
    ap_block_state10_pp0_stage0_iter8 = ((icmp_ln69_reg_184_pp0_iter7_reg == 1'd0) & (m_axi_src_RVALID == 1'b0));
end

assign ap_block_state11_pp0_stage0_iter9 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state3_io = ((icmp_ln69_reg_184 == 1'd0) & (m_axi_src_ARREADY == 1'b0));
end

assign ap_block_state3_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter5 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage0_iter6 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage0_iter7 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_ext_blocking_cur_n = (src_blk_n_R & src_blk_n_AR);

assign ap_ext_blocking_n = (ap_ext_blocking_cur_n & 1'b1);

assign ap_int_blocking_n = (1'b1 & 1'b1);

assign ap_str_blocking_n = (1'b1 & 1'b1);

assign dst_address0 = zext_ln69_fu_148_p1;

assign dst_d0 = lshr_ln74_fu_169_p2[31:0];

assign empty_fu_165_p1 = tmp_6_fu_157_p3;

assign i_fu_109_p2 = (ap_phi_mux_i_0_phi_fu_95_p4 + 17'd1);

assign icmp_ln69_fu_103_p2 = ((ap_phi_mux_i_0_phi_fu_95_p4 == 17'd108365) ? 1'b1 : 1'b0);

assign lshr_ln74_fu_169_p2 = src_addr_read_reg_204 >> empty_fu_165_p1;

assign m_axi_src_ARADDR = zext_ln74_2_fu_138_p1;

assign m_axi_src_ARBURST = 2'd0;

assign m_axi_src_ARCACHE = 4'd0;

assign m_axi_src_ARID = 1'd0;

assign m_axi_src_ARLEN = 32'd1;

assign m_axi_src_ARLOCK = 2'd0;

assign m_axi_src_ARPROT = 3'd0;

assign m_axi_src_ARQOS = 4'd0;

assign m_axi_src_ARREGION = 4'd0;

assign m_axi_src_ARSIZE = 3'd0;

assign m_axi_src_ARUSER = 1'd0;

assign m_axi_src_AWADDR = 64'd0;

assign m_axi_src_AWBURST = 2'd0;

assign m_axi_src_AWCACHE = 4'd0;

assign m_axi_src_AWID = 1'd0;

assign m_axi_src_AWLEN = 32'd0;

assign m_axi_src_AWLOCK = 2'd0;

assign m_axi_src_AWPROT = 3'd0;

assign m_axi_src_AWQOS = 4'd0;

assign m_axi_src_AWREGION = 4'd0;

assign m_axi_src_AWSIZE = 3'd0;

assign m_axi_src_AWUSER = 1'd0;

assign m_axi_src_AWVALID = 1'b0;

assign m_axi_src_BREADY = 1'b0;

assign m_axi_src_WDATA = 512'd0;

assign m_axi_src_WID = 1'd0;

assign m_axi_src_WLAST = 1'b0;

assign m_axi_src_WSTRB = 64'd0;

assign m_axi_src_WUSER = 1'd0;

assign m_axi_src_WVALID = 1'b0;

assign tmp_5_fu_115_p4 = {{ap_phi_mux_i_0_phi_fu_95_p4[16:4]}};

assign tmp_6_fu_157_p3 = {{trunc_ln74_fu_153_p1}, {5'd0}};

assign trunc_ln74_fu_153_p1 = i_0_reg_91_pp0_iter8_reg[3:0];

assign zext_ln69_fu_148_p1 = i_0_reg_91_pp0_iter8_reg;

assign zext_ln74_1_fu_129_p1 = src_offset;

assign zext_ln74_2_fu_138_p1 = add_ln74_reg_193;

assign zext_ln74_fu_125_p1 = tmp_5_fu_115_p4;

endmodule //gcnconv_kernel_merlin_memcpy_2_0
