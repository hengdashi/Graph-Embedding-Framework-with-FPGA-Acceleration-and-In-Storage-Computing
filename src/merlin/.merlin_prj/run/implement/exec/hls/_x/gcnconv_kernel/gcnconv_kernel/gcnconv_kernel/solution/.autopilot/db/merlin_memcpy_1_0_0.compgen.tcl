# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 6 \
    name src \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename src \
    op interface \
    ports { src_address0 { O 18 vector } src_ce0 { O 1 bit } src_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'src'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4 \
    name dst \
    type other \
    dir IO \
    reset_level 1 \
    sync_rst true \
    corename dc_dst \
    op interface \
    ports { m_axi_dst_AWVALID { O 1 bit } m_axi_dst_AWREADY { I 1 bit } m_axi_dst_AWADDR { O 64 vector } m_axi_dst_AWID { O 1 vector } m_axi_dst_AWLEN { O 32 vector } m_axi_dst_AWSIZE { O 3 vector } m_axi_dst_AWBURST { O 2 vector } m_axi_dst_AWLOCK { O 2 vector } m_axi_dst_AWCACHE { O 4 vector } m_axi_dst_AWPROT { O 3 vector } m_axi_dst_AWQOS { O 4 vector } m_axi_dst_AWREGION { O 4 vector } m_axi_dst_AWUSER { O 1 vector } m_axi_dst_WVALID { O 1 bit } m_axi_dst_WREADY { I 1 bit } m_axi_dst_WDATA { O 512 vector } m_axi_dst_WSTRB { O 64 vector } m_axi_dst_WLAST { O 1 bit } m_axi_dst_WID { O 1 vector } m_axi_dst_WUSER { O 1 vector } m_axi_dst_ARVALID { O 1 bit } m_axi_dst_ARREADY { I 1 bit } m_axi_dst_ARADDR { O 64 vector } m_axi_dst_ARID { O 1 vector } m_axi_dst_ARLEN { O 32 vector } m_axi_dst_ARSIZE { O 3 vector } m_axi_dst_ARBURST { O 2 vector } m_axi_dst_ARLOCK { O 2 vector } m_axi_dst_ARCACHE { O 4 vector } m_axi_dst_ARPROT { O 3 vector } m_axi_dst_ARQOS { O 4 vector } m_axi_dst_ARREGION { O 4 vector } m_axi_dst_ARUSER { O 1 vector } m_axi_dst_RVALID { I 1 bit } m_axi_dst_RREADY { O 1 bit } m_axi_dst_RDATA { I 512 vector } m_axi_dst_RLAST { I 1 bit } m_axi_dst_RID { I 1 vector } m_axi_dst_RUSER { I 1 vector } m_axi_dst_RRESP { I 2 vector } m_axi_dst_BVALID { I 1 bit } m_axi_dst_BREADY { O 1 bit } m_axi_dst_BRESP { I 2 vector } m_axi_dst_BID { I 1 vector } m_axi_dst_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 5 \
    name dst_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_dst_offset \
    op interface \
    ports { dst_offset { I 58 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


