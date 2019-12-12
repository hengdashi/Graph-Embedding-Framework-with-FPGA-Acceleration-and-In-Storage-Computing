#include "gcnconv_kernel_gcnconv_kernel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3373_reg_6779.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_2_reg_6623.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_3_reg_6723.read())))) {
        x_buf_0_7_ce0 = ap_const_logic_1;
    } else {
        x_buf_0_7_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_10_reg_6655_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_7_reg_6691_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0)))) {
        x_buf_0_7_ce1 = ap_const_logic_1;
    } else {
        x_buf_0_7_ce1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_7_d0() {
    if (esl_seteq<1,1,1>(ap_condition_257.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3373_reg_6779.read()))) {
            x_buf_0_7_d0 = bitcast_ln3376_7_fu_4932_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3559.read(), ap_const_boolean_1)) {
            x_buf_0_7_d0 = bitcast_ln3424_3_fu_4843_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3555.read(), ap_const_boolean_1)) {
            x_buf_0_7_d0 = bitcast_ln3472_7_fu_4739_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3507.read(), ap_const_boolean_1)) {
            x_buf_0_7_d0 = bitcast_ln3520_3_fu_4541_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3499.read(), ap_const_boolean_1)) {
            x_buf_0_7_d0 = bitcast_ln3556_6_fu_4438_p1.read();
        } else {
            x_buf_0_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        x_buf_0_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_7_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
            x_buf_0_7_d1 = bitcast_ln3472_15_fu_5665_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
            x_buf_0_7_d1 = bitcast_ln3424_11_fu_5541_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7319.read(), ap_const_boolean_1)) {
            x_buf_0_7_d1 = bitcast_ln3520_11_fu_5103_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7316.read(), ap_const_boolean_1)) {
            x_buf_0_7_d1 = bitcast_ln3556_14_fu_5050_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
            x_buf_0_7_d1 = bitcast_ln3376_15_fu_4981_p1.read();
        } else {
            x_buf_0_7_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        x_buf_0_7_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_7_we0() {
    if (((esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3373_reg_6779.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_2_reg_6623.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_3_reg_6723.read())))) {
        x_buf_0_7_we0 = ap_const_logic_1;
    } else {
        x_buf_0_7_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3421_reg_6605_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3373_1_reg_6792.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_10_reg_6655_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_7_reg_6691_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_11_reg_6755_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0)))) {
        x_buf_0_7_we1 = ap_const_logic_1;
    } else {
        x_buf_0_7_we1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        x_mul_0_address0 =  (sc_lv<15>) (sext_ln266_fu_6010_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        x_mul_0_address0 = x_mul_0_addr_reg_7361.read();
    } else {
        x_mul_0_address0 = "XXXXXXXXXXXXXXX";
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        x_mul_0_ce0 = ap_const_logic_1;
    } else {
        x_mul_0_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
         esl_seteq<1,4,4>(ap_const_lv4_0, trunc_ln189_fu_5815_p1.read()))) {
        x_mul_0_we0 = ap_const_logic_1;
    } else {
        x_mul_0_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        x_mul_10_address0 =  (sc_lv<15>) (sext_ln266_fu_6010_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        x_mul_10_address0 = x_mul_10_addr_reg_7411.read();
    } else {
        x_mul_10_address0 = "XXXXXXXXXXXXXXX";
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        x_mul_10_ce0 = ap_const_logic_1;
    } else {
        x_mul_10_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
         esl_seteq<1,4,4>(trunc_ln189_fu_5815_p1.read(), ap_const_lv4_A))) {
        x_mul_10_we0 = ap_const_logic_1;
    } else {
        x_mul_10_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        x_mul_11_address0 =  (sc_lv<15>) (sext_ln266_fu_6010_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        x_mul_11_address0 = x_mul_11_addr_reg_7416.read();
    } else {
        x_mul_11_address0 = "XXXXXXXXXXXXXXX";
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        x_mul_11_ce0 = ap_const_logic_1;
    } else {
        x_mul_11_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
         esl_seteq<1,4,4>(trunc_ln189_fu_5815_p1.read(), ap_const_lv4_B))) {
        x_mul_11_we0 = ap_const_logic_1;
    } else {
        x_mul_11_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        x_mul_12_address0 =  (sc_lv<15>) (sext_ln266_fu_6010_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        x_mul_12_address0 = x_mul_12_addr_reg_7421.read();
    } else {
        x_mul_12_address0 = "XXXXXXXXXXXXXXX";
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        x_mul_12_ce0 = ap_const_logic_1;
    } else {
        x_mul_12_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
         esl_seteq<1,4,4>(trunc_ln189_fu_5815_p1.read(), ap_const_lv4_C))) {
        x_mul_12_we0 = ap_const_logic_1;
    } else {
        x_mul_12_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        x_mul_13_address0 =  (sc_lv<15>) (sext_ln266_fu_6010_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        x_mul_13_address0 = x_mul_13_addr_reg_7426.read();
    } else {
        x_mul_13_address0 = "XXXXXXXXXXXXXXX";
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        x_mul_13_ce0 = ap_const_logic_1;
    } else {
        x_mul_13_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
         esl_seteq<1,4,4>(trunc_ln189_fu_5815_p1.read(), ap_const_lv4_D))) {
        x_mul_13_we0 = ap_const_logic_1;
    } else {
        x_mul_13_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        x_mul_14_address0 =  (sc_lv<15>) (sext_ln266_fu_6010_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        x_mul_14_address0 = x_mul_14_addr_reg_7431.read();
    } else {
        x_mul_14_address0 = "XXXXXXXXXXXXXXX";
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        x_mul_14_ce0 = ap_const_logic_1;
    } else {
        x_mul_14_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
         esl_seteq<1,4,4>(trunc_ln189_fu_5815_p1.read(), ap_const_lv4_E))) {
        x_mul_14_we0 = ap_const_logic_1;
    } else {
        x_mul_14_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        x_mul_15_address0 =  (sc_lv<15>) (sext_ln266_fu_6010_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        x_mul_15_address0 = x_mul_15_addr_reg_7436.read();
    } else {
        x_mul_15_address0 = "XXXXXXXXXXXXXXX";
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        x_mul_15_ce0 = ap_const_logic_1;
    } else {
        x_mul_15_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
         esl_seteq<1,4,4>(trunc_ln189_fu_5815_p1.read(), ap_const_lv4_F))) {
        x_mul_15_we0 = ap_const_logic_1;
    } else {
        x_mul_15_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        x_mul_1_address0 =  (sc_lv<15>) (sext_ln266_fu_6010_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        x_mul_1_address0 = x_mul_1_addr_reg_7366.read();
    } else {
        x_mul_1_address0 = "XXXXXXXXXXXXXXX";
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        x_mul_1_ce0 = ap_const_logic_1;
    } else {
        x_mul_1_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
         esl_seteq<1,4,4>(trunc_ln189_fu_5815_p1.read(), ap_const_lv4_1))) {
        x_mul_1_we0 = ap_const_logic_1;
    } else {
        x_mul_1_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        x_mul_2_address0 =  (sc_lv<15>) (sext_ln266_fu_6010_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        x_mul_2_address0 = x_mul_2_addr_reg_7371.read();
    } else {
        x_mul_2_address0 = "XXXXXXXXXXXXXXX";
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        x_mul_2_ce0 = ap_const_logic_1;
    } else {
        x_mul_2_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
         esl_seteq<1,4,4>(trunc_ln189_fu_5815_p1.read(), ap_const_lv4_2))) {
        x_mul_2_we0 = ap_const_logic_1;
    } else {
        x_mul_2_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        x_mul_3_address0 =  (sc_lv<15>) (sext_ln266_fu_6010_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        x_mul_3_address0 = x_mul_3_addr_reg_7376.read();
    } else {
        x_mul_3_address0 = "XXXXXXXXXXXXXXX";
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        x_mul_3_ce0 = ap_const_logic_1;
    } else {
        x_mul_3_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
         esl_seteq<1,4,4>(trunc_ln189_fu_5815_p1.read(), ap_const_lv4_3))) {
        x_mul_3_we0 = ap_const_logic_1;
    } else {
        x_mul_3_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        x_mul_4_address0 =  (sc_lv<15>) (sext_ln266_fu_6010_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        x_mul_4_address0 = x_mul_4_addr_reg_7381.read();
    } else {
        x_mul_4_address0 = "XXXXXXXXXXXXXXX";
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        x_mul_4_ce0 = ap_const_logic_1;
    } else {
        x_mul_4_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
         esl_seteq<1,4,4>(trunc_ln189_fu_5815_p1.read(), ap_const_lv4_4))) {
        x_mul_4_we0 = ap_const_logic_1;
    } else {
        x_mul_4_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        x_mul_5_address0 =  (sc_lv<15>) (sext_ln266_fu_6010_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        x_mul_5_address0 = x_mul_5_addr_reg_7386.read();
    } else {
        x_mul_5_address0 = "XXXXXXXXXXXXXXX";
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        x_mul_5_ce0 = ap_const_logic_1;
    } else {
        x_mul_5_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
         esl_seteq<1,4,4>(trunc_ln189_fu_5815_p1.read(), ap_const_lv4_5))) {
        x_mul_5_we0 = ap_const_logic_1;
    } else {
        x_mul_5_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        x_mul_6_address0 =  (sc_lv<15>) (sext_ln266_fu_6010_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        x_mul_6_address0 = x_mul_6_addr_reg_7391.read();
    } else {
        x_mul_6_address0 = "XXXXXXXXXXXXXXX";
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        x_mul_6_ce0 = ap_const_logic_1;
    } else {
        x_mul_6_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
         esl_seteq<1,4,4>(trunc_ln189_fu_5815_p1.read(), ap_const_lv4_6))) {
        x_mul_6_we0 = ap_const_logic_1;
    } else {
        x_mul_6_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        x_mul_7_address0 =  (sc_lv<15>) (sext_ln266_fu_6010_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        x_mul_7_address0 = x_mul_7_addr_reg_7396.read();
    } else {
        x_mul_7_address0 = "XXXXXXXXXXXXXXX";
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        x_mul_7_ce0 = ap_const_logic_1;
    } else {
        x_mul_7_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
         esl_seteq<1,4,4>(trunc_ln189_fu_5815_p1.read(), ap_const_lv4_7))) {
        x_mul_7_we0 = ap_const_logic_1;
    } else {
        x_mul_7_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        x_mul_8_address0 =  (sc_lv<15>) (sext_ln266_fu_6010_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        x_mul_8_address0 = x_mul_8_addr_reg_7401.read();
    } else {
        x_mul_8_address0 = "XXXXXXXXXXXXXXX";
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        x_mul_8_ce0 = ap_const_logic_1;
    } else {
        x_mul_8_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
         esl_seteq<1,4,4>(trunc_ln189_fu_5815_p1.read(), ap_const_lv4_8))) {
        x_mul_8_we0 = ap_const_logic_1;
    } else {
        x_mul_8_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        x_mul_9_address0 =  (sc_lv<15>) (sext_ln266_fu_6010_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        x_mul_9_address0 = x_mul_9_addr_reg_7406.read();
    } else {
        x_mul_9_address0 = "XXXXXXXXXXXXXXX";
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        x_mul_9_ce0 = ap_const_logic_1;
    } else {
        x_mul_9_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_mul_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
         esl_seteq<1,4,4>(trunc_ln189_fu_5815_p1.read(), ap_const_lv4_9))) {
        x_mul_9_we0 = ap_const_logic_1;
    } else {
        x_mul_9_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_xor_ln3469_fu_3419_p2() {
    xor_ln3469_fu_3419_p2 = (tmp_21_fu_3411_p3.read() ^ ap_const_lv1_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_xor_ln3553_fu_3369_p2() {
    xor_ln3553_fu_3369_p2 = (start_fu_3287_p1.read() ^ ap_const_lv64_FFFFFFFFFFFFFFFF);
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln1111_1_fu_3099_p1() {
    zext_ln1111_1_fu_3099_p1 = esl_zext<64,11>(add_ln1111_fu_3093_p2.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln1111_2_fu_3149_p1() {
    zext_ln1111_2_fu_3149_p1 = esl_zext<11,3>(or_ln1111_fu_3143_p2.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln1111_3_fu_3159_p1() {
    zext_ln1111_3_fu_3159_p1 = esl_zext<64,11>(add_ln1111_1_fu_3153_p2.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln1111_fu_3089_p1() {
    zext_ln1111_fu_3089_p1 = esl_zext<11,3>(shl_ln_fu_3081_p3.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln182_fu_5723_p1() {
    zext_ln182_fu_5723_p1 = esl_zext<11,2>(tmp_22_fu_5713_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln187_1_fu_5747_p1() {
    zext_ln187_1_fu_5747_p1 = esl_zext<11,10>(tmp_20_fu_5739_p3.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln187_2_fu_5782_p1() {
    zext_ln187_2_fu_5782_p1 = esl_zext<64,6>(lshr_ln2_fu_5772_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln187_3_fu_5756_p1() {
    zext_ln187_3_fu_5756_p1 = esl_zext<64,11>(add_ln187_fu_5751_p2.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln187_fu_5709_p1() {
    zext_ln187_fu_5709_p1 = esl_zext<32,3>(trunc_ln187_fu_5705_p1.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln189_fu_5673_p1() {
    zext_ln189_fu_5673_p1 = esl_zext<64,15>(i_0_reg_2295.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln195_fu_5831_p1() {
    zext_ln195_fu_5831_p1 = esl_zext<32,15>(i1_0_reg_2403.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln207_1_fu_5842_p1() {
    zext_ln207_1_fu_5842_p1 = esl_zext<16,15>(i1_0_reg_2403.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln207_2_fu_5856_p1() {
    zext_ln207_2_fu_5856_p1 = esl_zext<64,17>(sext_ln207_fu_5852_p1.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln207_fu_5837_p1() {
    zext_ln207_fu_5837_p1 = esl_zext<64,15>(i1_0_reg_2403.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln218_fu_5873_p1() {
    zext_ln218_fu_5873_p1 = esl_zext<64,17>(i3_0_reg_2414.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln228_fu_5890_p1() {
    zext_ln228_fu_5890_p1 = esl_zext<64,17>(ap_phi_mux_i4_0_phi_fu_2429_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln237_fu_5913_p1() {
    zext_ln237_fu_5913_p1 = esl_zext<64,15>(i5_0_reg_2436.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln242_fu_5930_p1() {
    zext_ln242_fu_5930_p1 = esl_zext<18,17>(ap_phi_mux_i6_0_phi_fu_2451_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln247_1_fu_5940_p1() {
    zext_ln247_1_fu_5940_p1 = esl_zext<64,18>(add_ln247_fu_5934_p2.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln247_fu_5945_p1() {
    zext_ln247_fu_5945_p1 = esl_zext<64,17>(i6_0_reg_2447.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln252_fu_5972_p1() {
    zext_ln252_fu_5972_p1 = esl_zext<18,17>(ap_phi_mux_i7_0_phi_fu_2463_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln265_fu_5982_p1() {
    zext_ln265_fu_5982_p1 = esl_zext<64,18>(add_ln265_fu_5976_p2.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln266_fu_5987_p1() {
    zext_ln266_fu_5987_p1 = esl_zext<64,17>(ap_phi_mux_i7_0_phi_fu_2463_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_10_fu_6030_p1() {
    zext_ln32_10_fu_6030_p1 = esl_zext<64,59>(add_ln32_8_reg_7747.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_11_fu_3697_p1() {
    zext_ln32_11_fu_3697_p1 = esl_zext<64,59>(reg_2808.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_12_fu_3719_p1() {
    zext_ln32_12_fu_3719_p1 = esl_zext<64,59>(reg_2808.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_13_fu_3587_p1() {
    zext_ln32_13_fu_3587_p1 = esl_zext<64,59>(reg_2808.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_14_fu_3745_p1() {
    zext_ln32_14_fu_3745_p1 = esl_zext<64,59>(reg_2808.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_15_fu_3620_p1() {
    zext_ln32_15_fu_3620_p1 = esl_zext<64,59>(reg_2808.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_16_fu_3653_p1() {
    zext_ln32_16_fu_3653_p1 = esl_zext<64,59>(reg_2808.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_17_fu_3686_p1() {
    zext_ln32_17_fu_3686_p1 = esl_zext<64,59>(reg_2808.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_18_fu_3708_p1() {
    zext_ln32_18_fu_3708_p1 = esl_zext<64,59>(reg_2808.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_19_fu_3576_p1() {
    zext_ln32_19_fu_3576_p1 = esl_zext<64,59>(reg_2808.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_1_fu_3555_p1() {
    zext_ln32_1_fu_3555_p1 = esl_zext<64,59>(add_ln32_reg_6783.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_20_fu_3730_p1() {
    zext_ln32_20_fu_3730_p1 = esl_zext<64,59>(reg_2808.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_21_fu_3609_p1() {
    zext_ln32_21_fu_3609_p1 = esl_zext<64,59>(reg_2808.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_22_fu_4088_p1() {
    zext_ln32_22_fu_4088_p1 = esl_zext<64,59>(reg_2808.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_23_fu_3642_p1() {
    zext_ln32_23_fu_3642_p1 = esl_zext<64,59>(reg_2808.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_24_fu_4758_p1() {
    zext_ln32_24_fu_4758_p1 = esl_zext<64,59>(add_ln32_22_reg_6922.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_25_fu_3675_p1() {
    zext_ln32_25_fu_3675_p1 = esl_zext<64,59>(reg_2808.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_26_fu_3565_p1() {
    zext_ln32_26_fu_3565_p1 = esl_zext<64,59>(reg_2808.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_2_fu_3544_p1() {
    zext_ln32_2_fu_3544_p1 = esl_zext<64,59>(reg_2804.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_3_fu_3533_p1() {
    zext_ln32_3_fu_3533_p1 = esl_zext<64,59>(reg_2804.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_4_fu_3598_p1() {
    zext_ln32_4_fu_3598_p1 = esl_zext<64,59>(reg_2808.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_5_fu_3522_p1() {
    zext_ln32_5_fu_3522_p1 = esl_zext<64,59>(reg_2804.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_6_fu_3511_p1() {
    zext_ln32_6_fu_3511_p1 = esl_zext<64,59>(reg_2804.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_7_fu_3631_p1() {
    zext_ln32_7_fu_3631_p1 = esl_zext<64,59>(reg_2808.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_8_fu_3664_p1() {
    zext_ln32_8_fu_3664_p1 = esl_zext<64,59>(reg_2808.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_9_fu_6001_p1() {
    zext_ln32_9_fu_6001_p1 = esl_zext<59,58>(sext_ln160_fu_5997_p1.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln32_fu_3502_p1() {
    zext_ln32_fu_3502_p1 = esl_zext<59,20>(add_ln3375_fu_3497_p2.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3342_fu_3307_p1() {
    zext_ln3342_fu_3307_p1 = esl_zext<64,20>(end_fu_3297_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3363_1_fu_3476_p1() {
    zext_ln3363_1_fu_3476_p1 = esl_zext<64,6>(ap_phi_mux_i_0_i28_phi_fu_2322_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3363_fu_3472_p1() {
    zext_ln3363_fu_3472_p1 = esl_zext<20,6>(ap_phi_mux_i_0_i28_phi_fu_2322_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3376_1_fu_4946_p1() {
    zext_ln3376_1_fu_4946_p1 = esl_zext<64,6>(or_ln3376_fu_4940_p2.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3376_2_fu_4991_p1() {
    zext_ln3376_2_fu_4991_p1 = esl_zext<64,6>(or_ln3376_1_fu_4985_p2.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3376_fu_4896_p1() {
    zext_ln3376_fu_4896_p1 = esl_zext<64,7>(shl_ln1_fu_4882_p3.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3424_10_fu_5625_p1() {
    zext_ln3424_10_fu_5625_p1 = esl_zext<64,7>(or_ln3424_1_fu_5619_p2.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3424_11_fu_3492_p1() {
    zext_ln3424_11_fu_3492_p1 = esl_zext<59,20>(add_ln3423_fu_3487_p2.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3424_1_fu_4813_p1() {
    zext_ln3424_1_fu_4813_p1 = esl_zext<64,7>(lshr_ln3424_1_fu_4803_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3424_2_fu_4838_p1() {
    zext_ln3424_2_fu_4838_p1 = esl_zext<64,7>(lshr_ln3424_2_fu_4828_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3424_3_fu_4863_p1() {
    zext_ln3424_3_fu_4863_p1 = esl_zext<64,7>(lshr_ln3424_3_fu_4853_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3424_4_fu_5178_p1() {
    zext_ln3424_4_fu_5178_p1 = esl_zext<64,7>(shl_ln3424_1_fu_5170_p3.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3424_5_fu_5259_p1() {
    zext_ln3424_5_fu_5259_p1 = esl_zext<64,7>(shl_ln3424_2_fu_5251_p3.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3424_6_fu_5340_p1() {
    zext_ln3424_6_fu_5340_p1 = esl_zext<64,7>(shl_ln3424_3_fu_5332_p3.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3424_7_fu_5411_p1() {
    zext_ln3424_7_fu_5411_p1 = esl_zext<64,7>(shl_ln3424_4_fu_5403_p3.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3424_8_fu_5525_p1() {
    zext_ln3424_8_fu_5525_p1 = esl_zext<64,7>(shl_ln3424_5_fu_5517_p3.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3424_9_fu_5555_p1() {
    zext_ln3424_9_fu_5555_p1 = esl_zext<64,7>(or_ln3424_fu_5549_p2.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3424_fu_4788_p1() {
    zext_ln3424_fu_4788_p1 = esl_zext<64,7>(lshr_ln1_fu_4778_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3472_10_fu_5313_p1() {
    zext_ln3472_10_fu_5313_p1 = esl_zext<64,7>(shl_ln3472_2_fu_5305_p3.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3472_11_fu_5384_p1() {
    zext_ln3472_11_fu_5384_p1 = esl_zext<64,7>(shl_ln3472_3_fu_5376_p3.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3472_12_fu_5498_p1() {
    zext_ln3472_12_fu_5498_p1 = esl_zext<64,7>(shl_ln3472_4_fu_5490_p3.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3472_13_fu_5592_p1() {
    zext_ln3472_13_fu_5592_p1 = esl_zext<64,7>(shl_ln3472_5_fu_5584_p3.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3472_14_fu_5642_p1() {
    zext_ln3472_14_fu_5642_p1 = esl_zext<64,7>(shl_ln3472_6_fu_5634_p3.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3472_15_fu_5669_p1() {
    zext_ln3472_15_fu_5669_p1 = esl_zext<64,7>(shl_ln3472_7_reg_7356.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3472_1_fu_4657_p1() {
    zext_ln3472_1_fu_4657_p1 = esl_zext<64,7>(lshr_ln3472_1_fu_4647_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3472_2_fu_4682_p1() {
    zext_ln3472_2_fu_4682_p1 = esl_zext<64,7>(lshr_ln3472_2_fu_4672_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3472_3_fu_4707_p1() {
    zext_ln3472_3_fu_4707_p1 = esl_zext<64,7>(lshr_ln3472_3_fu_4697_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3472_4_fu_4716_p1() {
    zext_ln3472_4_fu_4716_p1 = esl_zext<64,7>(grp_fu_2749_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3472_5_fu_4725_p1() {
    zext_ln3472_5_fu_4725_p1 = esl_zext<64,7>(grp_fu_2764_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3472_6_fu_4734_p1() {
    zext_ln3472_6_fu_4734_p1 = esl_zext<64,7>(grp_fu_2779_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3472_7_fu_4743_p1() {
    zext_ln3472_7_fu_4743_p1 = esl_zext<64,7>(grp_fu_2794_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3472_8_fu_5151_p1() {
    zext_ln3472_8_fu_5151_p1 = esl_zext<64,7>(shl_ln3_fu_5143_p3.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3472_9_fu_5232_p1() {
    zext_ln3472_9_fu_5232_p1 = esl_zext<64,7>(shl_ln3472_1_fu_5224_p3.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3472_fu_4632_p1() {
    zext_ln3472_fu_4632_p1 = esl_zext<64,7>(lshr_ln3_fu_4622_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3520_10_fu_5098_p1() {
    zext_ln3520_10_fu_5098_p1 = esl_zext<64,7>(grp_fu_2779_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3520_11_fu_5107_p1() {
    zext_ln3520_11_fu_5107_p1 = esl_zext<64,7>(grp_fu_2794_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3520_12_fu_5124_p1() {
    zext_ln3520_12_fu_5124_p1 = esl_zext<64,7>(shl_ln4_fu_5116_p3.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3520_13_fu_5205_p1() {
    zext_ln3520_13_fu_5205_p1 = esl_zext<64,7>(shl_ln3520_1_fu_5197_p3.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3520_14_fu_5286_p1() {
    zext_ln3520_14_fu_5286_p1 = esl_zext<64,7>(shl_ln3520_2_fu_5278_p3.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3520_15_fu_5367_p1() {
    zext_ln3520_15_fu_5367_p1 = esl_zext<64,7>(shl_ln3520_3_fu_5359_p3.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3520_1_fu_4511_p1() {
    zext_ln3520_1_fu_4511_p1 = esl_zext<64,7>(lshr_ln3520_1_fu_4501_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3520_2_fu_4536_p1() {
    zext_ln3520_2_fu_4536_p1 = esl_zext<64,7>(lshr_ln3520_2_fu_4526_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3520_3_fu_4561_p1() {
    zext_ln3520_3_fu_4561_p1 = esl_zext<64,7>(lshr_ln3520_3_fu_4551_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3520_4_fu_4570_p1() {
    zext_ln3520_4_fu_4570_p1 = esl_zext<64,7>(grp_fu_2689_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3520_5_fu_4579_p1() {
    zext_ln3520_5_fu_4579_p1 = esl_zext<64,7>(grp_fu_2704_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3520_6_fu_4588_p1() {
    zext_ln3520_6_fu_4588_p1 = esl_zext<64,7>(grp_fu_2719_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3520_7_fu_4597_p1() {
    zext_ln3520_7_fu_4597_p1 = esl_zext<64,7>(grp_fu_2734_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3520_8_fu_5080_p1() {
    zext_ln3520_8_fu_5080_p1 = esl_zext<64,7>(grp_fu_2749_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3520_9_fu_5089_p1() {
    zext_ln3520_9_fu_5089_p1 = esl_zext<64,7>(grp_fu_2764_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3520_fu_4486_p1() {
    zext_ln3520_fu_4486_p1 = esl_zext<64,7>(grp_fu_2674_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3556_10_fu_5018_p1() {
    zext_ln3556_10_fu_5018_p1 = esl_zext<64,7>(grp_fu_2734_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3556_11_fu_5027_p1() {
    zext_ln3556_11_fu_5027_p1 = esl_zext<64,7>(grp_fu_2749_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3556_12_fu_5036_p1() {
    zext_ln3556_12_fu_5036_p1 = esl_zext<64,7>(grp_fu_2764_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3556_13_fu_5045_p1() {
    zext_ln3556_13_fu_5045_p1 = esl_zext<64,7>(grp_fu_2779_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3556_14_fu_5054_p1() {
    zext_ln3556_14_fu_5054_p1 = esl_zext<64,7>(grp_fu_2794_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3556_15_fu_5071_p1() {
    zext_ln3556_15_fu_5071_p1 = esl_zext<64,7>(shl_ln5_fu_5063_p3.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3556_1_fu_4349_p1() {
    zext_ln3556_1_fu_4349_p1 = esl_zext<64,7>(lshr_ln3556_1_fu_4339_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3556_2_fu_4374_p1() {
    zext_ln3556_2_fu_4374_p1 = esl_zext<64,7>(lshr_ln3556_2_fu_4364_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3556_3_fu_4383_p1() {
    zext_ln3556_3_fu_4383_p1 = esl_zext<64,7>(grp_fu_2674_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3556_4_fu_4408_p1() {
    zext_ln3556_4_fu_4408_p1 = esl_zext<64,7>(lshr_ln3556_4_fu_4398_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3556_5_fu_4433_p1() {
    zext_ln3556_5_fu_4433_p1 = esl_zext<64,7>(lshr_ln3556_5_fu_4423_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3556_6_fu_4458_p1() {
    zext_ln3556_6_fu_4458_p1 = esl_zext<64,7>(lshr_ln3556_6_fu_4448_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3556_7_fu_4467_p1() {
    zext_ln3556_7_fu_4467_p1 = esl_zext<64,7>(grp_fu_2689_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3556_8_fu_5000_p1() {
    zext_ln3556_8_fu_5000_p1 = esl_zext<64,7>(grp_fu_2704_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3556_9_fu_5009_p1() {
    zext_ln3556_9_fu_5009_p1 = esl_zext<64,7>(grp_fu_2719_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_zext_ln3556_fu_4324_p1() {
    zext_ln3556_fu_4324_p1 = esl_zext<64,7>(lshr_ln5_fu_4314_p4.read());
}

}

