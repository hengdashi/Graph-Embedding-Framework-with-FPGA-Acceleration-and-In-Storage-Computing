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
    id 13 \
    name dst \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename dst \
    op interface \
    ports { dst_address0 { O 18 vector } dst_ce0 { O 1 bit } dst_we0 { O 1 bit } dst_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dst'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 14 \
    name src \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_src \
    op interface \
    ports { m_axi_src_AWVALID { O 1 bit } m_axi_src_AWREADY { I 1 bit } m_axi_src_AWADDR { O 64 vector } m_axi_src_AWID { O 1 vector } m_axi_src_AWLEN { O 32 vector } m_axi_src_AWSIZE { O 3 vector } m_axi_src_AWBURST { O 2 vector } m_axi_src_AWLOCK { O 2 vector } m_axi_src_AWCACHE { O 4 vector } m_axi_src_AWPROT { O 3 vector } m_axi_src_AWQOS { O 4 vector } m_axi_src_AWREGION { O 4 vector } m_axi_src_AWUSER { O 1 vector } m_axi_src_WVALID { O 1 bit } m_axi_src_WREADY { I 1 bit } m_axi_src_WDATA { O 512 vector } m_axi_src_WSTRB { O 64 vector } m_axi_src_WLAST { O 1 bit } m_axi_src_WID { O 1 vector } m_axi_src_WUSER { O 1 vector } m_axi_src_ARVALID { O 1 bit } m_axi_src_ARREADY { I 1 bit } m_axi_src_ARADDR { O 64 vector } m_axi_src_ARID { O 1 vector } m_axi_src_ARLEN { O 32 vector } m_axi_src_ARSIZE { O 3 vector } m_axi_src_ARBURST { O 2 vector } m_axi_src_ARLOCK { O 2 vector } m_axi_src_ARCACHE { O 4 vector } m_axi_src_ARPROT { O 3 vector } m_axi_src_ARQOS { O 4 vector } m_axi_src_ARREGION { O 4 vector } m_axi_src_ARUSER { O 1 vector } m_axi_src_RVALID { I 1 bit } m_axi_src_RREADY { O 1 bit } m_axi_src_RDATA { I 512 vector } m_axi_src_RLAST { I 1 bit } m_axi_src_RID { I 1 vector } m_axi_src_RUSER { I 1 vector } m_axi_src_RRESP { I 2 vector } m_axi_src_BVALID { I 1 bit } m_axi_src_BREADY { O 1 bit } m_axi_src_BRESP { I 2 vector } m_axi_src_BID { I 1 vector } m_axi_src_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 15 \
    name src_offset \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_src_offset \
    op interface \
    ports { src_offset { I 58 vector } } \
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


