#include "gcnconv_kernel_gcnconv_kernel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void gcnconv_kernel_gcnconv_kernel::thread_add_ln1111_1_fu_3153_p2() {
    add_ln1111_1_fu_3153_p2 = (!tmp_17_fu_3065_p3.read().is_01() || !zext_ln1111_2_fu_3149_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_17_fu_3065_p3.read()) + sc_biguint<11>(zext_ln1111_2_fu_3149_p1.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln1111_fu_3093_p2() {
    add_ln1111_fu_3093_p2 = (!tmp_17_fu_3065_p3.read().is_01() || !zext_ln1111_fu_3089_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_17_fu_3065_p3.read()) + sc_biguint<11>(zext_ln1111_fu_3089_p1.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln169_fu_3233_p2() {
    add_ln169_fu_3233_p2 = (!phi_mul_reg_2307.read().is_01() || !ap_const_lv26_7D0.is_01())? sc_lv<26>(): (sc_biguint<26>(phi_mul_reg_2307.read()) + sc_biguint<26>(ap_const_lv26_7D0));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln187_fu_5751_p2() {
    add_ln187_fu_5751_p2 = (!zext_ln187_1_fu_5747_p1.read().is_01() || !zext_ln182_reg_7455.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln187_1_fu_5747_p1.read()) + sc_biguint<11>(zext_ln182_reg_7455.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln207_fu_5846_p2() {
    add_ln207_fu_5846_p2 = (!zext_ln207_1_fu_5842_p1.read().is_01() || !ap_const_lv16_A74D.is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln207_1_fu_5842_p1.read()) + sc_bigint<16>(ap_const_lv16_A74D));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln247_fu_5934_p2() {
    add_ln247_fu_5934_p2 = (!zext_ln242_fu_5930_p1.read().is_01() || !ap_const_lv18_1A74D.is_01())? sc_lv<18>(): (sc_biguint<18>(zext_ln242_fu_5930_p1.read()) + sc_biguint<18>(ap_const_lv18_1A74D));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln265_fu_5976_p2() {
    add_ln265_fu_5976_p2 = (!ap_const_lv18_1A74D.is_01() || !zext_ln252_fu_5972_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(ap_const_lv18_1A74D) + sc_biguint<18>(zext_ln252_fu_5972_p1.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln32_22_fu_3741_p2() {
    add_ln32_22_fu_3741_p2 = (!p_cast_reg_6379.read().is_01() || !zext_ln3424_11_reg_6609.read().is_01())? sc_lv<59>(): (sc_biguint<59>(p_cast_reg_6379.read()) + sc_biguint<59>(zext_ln3424_11_reg_6609.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln32_8_fu_6005_p2() {
    add_ln32_8_fu_6005_p2 = (!p_cast33_reg_6374.read().is_01() || !zext_ln32_9_fu_6001_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(p_cast33_reg_6374.read()) + sc_biguint<59>(zext_ln32_9_fu_6001_p1.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln32_fu_3506_p2() {
    add_ln32_fu_3506_p2 = (!p_cast_reg_6379.read().is_01() || !zext_ln32_fu_3502_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(p_cast_reg_6379.read()) + sc_biguint<59>(zext_ln32_fu_3502_p1.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln3342_fu_3291_p2() {
    add_ln3342_fu_3291_p2 = (!trunc_ln_fu_3251_p4.read().is_01() || !ap_const_lv24_203.is_01())? sc_lv<24>(): (sc_biguint<24>(trunc_ln_fu_3251_p4.read()) + sc_biguint<24>(ap_const_lv24_203));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln3375_fu_3497_p2() {
    add_ln3375_fu_3497_p2 = (!lshr_ln_reg_6500.read().is_01() || !zext_ln3363_fu_3472_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(lshr_ln_reg_6500.read()) + sc_biguint<20>(zext_ln3363_fu_3472_p1.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln3423_fu_3487_p2() {
    add_ln3423_fu_3487_p2 = (!zext_ln3363_fu_3472_p1.read().is_01() || !lshr_ln_reg_6500.read().is_01())? sc_lv<20>(): (sc_biguint<20>(zext_ln3363_fu_3472_p1.read()) + sc_biguint<20>(lshr_ln_reg_6500.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln3424_1_fu_4797_p2() {
    add_ln3424_1_fu_4797_p2 = (!ap_const_lv10_3FD.is_01() || !shl_ln2_fu_4287_p3.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_3FD) + sc_biguint<10>(shl_ln2_fu_4287_p3.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln3424_2_fu_4822_p2() {
    add_ln3424_2_fu_4822_p2 = (!ap_const_lv10_3FE.is_01() || !shl_ln2_fu_4287_p3.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_3FE) + sc_biguint<10>(shl_ln2_fu_4287_p3.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln3424_3_fu_4847_p2() {
    add_ln3424_3_fu_4847_p2 = (!ap_const_lv10_3FF.is_01() || !shl_ln2_fu_4287_p3.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_3FF) + sc_biguint<10>(shl_ln2_fu_4287_p3.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln3424_fu_4772_p2() {
    add_ln3424_fu_4772_p2 = (!ap_const_lv10_3FC.is_01() || !shl_ln2_fu_4287_p3.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_3FC) + sc_biguint<10>(shl_ln2_fu_4287_p3.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln3472_1_fu_4641_p2() {
    add_ln3472_1_fu_4641_p2 = (!ap_const_lv10_3F9.is_01() || !shl_ln2_fu_4287_p3.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_3F9) + sc_biguint<10>(shl_ln2_fu_4287_p3.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln3472_2_fu_4666_p2() {
    add_ln3472_2_fu_4666_p2 = (!ap_const_lv10_3FA.is_01() || !shl_ln2_fu_4287_p3.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_3FA) + sc_biguint<10>(shl_ln2_fu_4287_p3.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln3472_3_fu_4691_p2() {
    add_ln3472_3_fu_4691_p2 = (!ap_const_lv10_3FB.is_01() || !shl_ln2_fu_4287_p3.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_3FB) + sc_biguint<10>(shl_ln2_fu_4287_p3.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln3472_fu_4616_p2() {
    add_ln3472_fu_4616_p2 = (!ap_const_lv10_3F8.is_01() || !shl_ln2_fu_4287_p3.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_3F8) + sc_biguint<10>(shl_ln2_fu_4287_p3.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln3520_1_fu_4495_p2() {
    add_ln3520_1_fu_4495_p2 = (!ap_const_lv10_3F5.is_01() || !shl_ln2_fu_4287_p3.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_3F5) + sc_biguint<10>(shl_ln2_fu_4287_p3.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln3520_2_fu_4520_p2() {
    add_ln3520_2_fu_4520_p2 = (!ap_const_lv10_3F6.is_01() || !shl_ln2_fu_4287_p3.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_3F6) + sc_biguint<10>(shl_ln2_fu_4287_p3.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln3520_3_fu_4545_p2() {
    add_ln3520_3_fu_4545_p2 = (!ap_const_lv10_3F7.is_01() || !shl_ln2_fu_4287_p3.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_3F7) + sc_biguint<10>(shl_ln2_fu_4287_p3.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln3553_fu_3375_p2() {
    add_ln3553_fu_3375_p2 = (!zext_ln3342_fu_3307_p1.read().is_01() || !xor_ln3553_fu_3369_p2.read().is_01())? sc_lv<64>(): (sc_biguint<64>(zext_ln3342_fu_3307_p1.read()) + sc_biguint<64>(xor_ln3553_fu_3369_p2.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln3556_1_fu_4333_p2() {
    add_ln3556_1_fu_4333_p2 = (!ap_const_lv10_3F2.is_01() || !shl_ln2_fu_4287_p3.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_3F2) + sc_biguint<10>(shl_ln2_fu_4287_p3.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln3556_2_fu_4358_p2() {
    add_ln3556_2_fu_4358_p2 = (!ap_const_lv10_3F3.is_01() || !shl_ln2_fu_4287_p3.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_3F3) + sc_biguint<10>(shl_ln2_fu_4287_p3.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln3556_4_fu_4392_p2() {
    add_ln3556_4_fu_4392_p2 = (!shl_ln2_fu_4287_p3.read().is_01() || !ap_const_lv10_3F5.is_01())? sc_lv<10>(): (sc_biguint<10>(shl_ln2_fu_4287_p3.read()) + sc_bigint<10>(ap_const_lv10_3F5));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln3556_5_fu_4417_p2() {
    add_ln3556_5_fu_4417_p2 = (!shl_ln2_fu_4287_p3.read().is_01() || !ap_const_lv10_3F6.is_01())? sc_lv<10>(): (sc_biguint<10>(shl_ln2_fu_4287_p3.read()) + sc_bigint<10>(ap_const_lv10_3F6));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln3556_6_fu_4442_p2() {
    add_ln3556_6_fu_4442_p2 = (!shl_ln2_fu_4287_p3.read().is_01() || !ap_const_lv10_3F7.is_01())? sc_lv<10>(): (sc_biguint<10>(shl_ln2_fu_4287_p3.read()) + sc_bigint<10>(ap_const_lv10_3F7));
}

void gcnconv_kernel_gcnconv_kernel::thread_add_ln3556_fu_4308_p2() {
    add_ln3556_fu_4308_p2 = (!ap_const_lv10_3F1.is_01() || !shl_ln2_fu_4287_p3.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_3F1) + sc_biguint<10>(shl_ln2_fu_4287_p3.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[8];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[11];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp1_stage1() {
    ap_CS_fsm_pp1_stage1 = ap_CS_fsm.read()[12];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp1_stage2() {
    ap_CS_fsm_pp1_stage2 = ap_CS_fsm.read()[13];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp1_stage3() {
    ap_CS_fsm_pp1_stage3 = ap_CS_fsm.read()[14];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp1_stage4() {
    ap_CS_fsm_pp1_stage4 = ap_CS_fsm.read()[15];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp1_stage5() {
    ap_CS_fsm_pp1_stage5 = ap_CS_fsm.read()[16];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp1_stage6() {
    ap_CS_fsm_pp1_stage6 = ap_CS_fsm.read()[17];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp1_stage7() {
    ap_CS_fsm_pp1_stage7 = ap_CS_fsm.read()[18];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp1_stage8() {
    ap_CS_fsm_pp1_stage8 = ap_CS_fsm.read()[19];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp2_stage0() {
    ap_CS_fsm_pp2_stage0 = ap_CS_fsm.read()[22];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp2_stage1() {
    ap_CS_fsm_pp2_stage1 = ap_CS_fsm.read()[23];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp2_stage2() {
    ap_CS_fsm_pp2_stage2 = ap_CS_fsm.read()[24];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp2_stage3() {
    ap_CS_fsm_pp2_stage3 = ap_CS_fsm.read()[25];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp2_stage4() {
    ap_CS_fsm_pp2_stage4 = ap_CS_fsm.read()[26];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp2_stage5() {
    ap_CS_fsm_pp2_stage5 = ap_CS_fsm.read()[27];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp2_stage6() {
    ap_CS_fsm_pp2_stage6 = ap_CS_fsm.read()[28];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp5_stage0() {
    ap_CS_fsm_pp5_stage0 = ap_CS_fsm.read()[38];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp5_stage1() {
    ap_CS_fsm_pp5_stage1 = ap_CS_fsm.read()[39];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp5_stage2() {
    ap_CS_fsm_pp5_stage2 = ap_CS_fsm.read()[40];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp5_stage3() {
    ap_CS_fsm_pp5_stage3 = ap_CS_fsm.read()[41];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp5_stage4() {
    ap_CS_fsm_pp5_stage4 = ap_CS_fsm.read()[42];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp5_stage5() {
    ap_CS_fsm_pp5_stage5 = ap_CS_fsm.read()[43];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp5_stage6() {
    ap_CS_fsm_pp5_stage6 = ap_CS_fsm.read()[44];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp5_stage7() {
    ap_CS_fsm_pp5_stage7 = ap_CS_fsm.read()[45];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp5_stage8() {
    ap_CS_fsm_pp5_stage8 = ap_CS_fsm.read()[46];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp5_stage9() {
    ap_CS_fsm_pp5_stage9 = ap_CS_fsm.read()[47];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp6_stage0() {
    ap_CS_fsm_pp6_stage0 = ap_CS_fsm.read()[49];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp7_stage0() {
    ap_CS_fsm_pp7_stage0 = ap_CS_fsm.read()[52];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp8_stage0() {
    ap_CS_fsm_pp8_stage0 = ap_CS_fsm.read()[55];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp8_stage1() {
    ap_CS_fsm_pp8_stage1 = ap_CS_fsm.read()[56];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp8_stage10() {
    ap_CS_fsm_pp8_stage10 = ap_CS_fsm.read()[65];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp8_stage11() {
    ap_CS_fsm_pp8_stage11 = ap_CS_fsm.read()[66];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp8_stage12() {
    ap_CS_fsm_pp8_stage12 = ap_CS_fsm.read()[67];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp8_stage13() {
    ap_CS_fsm_pp8_stage13 = ap_CS_fsm.read()[68];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp8_stage14() {
    ap_CS_fsm_pp8_stage14 = ap_CS_fsm.read()[69];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp8_stage15() {
    ap_CS_fsm_pp8_stage15 = ap_CS_fsm.read()[70];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp8_stage16() {
    ap_CS_fsm_pp8_stage16 = ap_CS_fsm.read()[71];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp8_stage17() {
    ap_CS_fsm_pp8_stage17 = ap_CS_fsm.read()[72];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp8_stage18() {
    ap_CS_fsm_pp8_stage18 = ap_CS_fsm.read()[73];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp8_stage19() {
    ap_CS_fsm_pp8_stage19 = ap_CS_fsm.read()[74];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp8_stage2() {
    ap_CS_fsm_pp8_stage2 = ap_CS_fsm.read()[57];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp8_stage20() {
    ap_CS_fsm_pp8_stage20 = ap_CS_fsm.read()[75];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp8_stage3() {
    ap_CS_fsm_pp8_stage3 = ap_CS_fsm.read()[58];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp8_stage4() {
    ap_CS_fsm_pp8_stage4 = ap_CS_fsm.read()[59];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp8_stage5() {
    ap_CS_fsm_pp8_stage5 = ap_CS_fsm.read()[60];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp8_stage6() {
    ap_CS_fsm_pp8_stage6 = ap_CS_fsm.read()[61];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp8_stage7() {
    ap_CS_fsm_pp8_stage7 = ap_CS_fsm.read()[62];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp8_stage8() {
    ap_CS_fsm_pp8_stage8 = ap_CS_fsm.read()[63];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_pp8_stage9() {
    ap_CS_fsm_pp8_stage9 = ap_CS_fsm.read()[64];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[9];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_state123() {
    ap_CS_fsm_state123 = ap_CS_fsm.read()[76];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[10];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[20];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[21];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_state47() {
    ap_CS_fsm_state47 = ap_CS_fsm.read()[29];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_state48() {
    ap_CS_fsm_state48 = ap_CS_fsm.read()[30];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_state49() {
    ap_CS_fsm_state49 = ap_CS_fsm.read()[31];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_state50() {
    ap_CS_fsm_state50 = ap_CS_fsm.read()[32];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[33];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_state52() {
    ap_CS_fsm_state52 = ap_CS_fsm.read()[34];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_state53() {
    ap_CS_fsm_state53 = ap_CS_fsm.read()[35];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_state54() {
    ap_CS_fsm_state54 = ap_CS_fsm.read()[36];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_state55() {
    ap_CS_fsm_state55 = ap_CS_fsm.read()[37];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_state67() {
    ap_CS_fsm_state67 = ap_CS_fsm.read()[48];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_state84() {
    ap_CS_fsm_state84 = ap_CS_fsm.read()[50];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_state85() {
    ap_CS_fsm_state85 = ap_CS_fsm.read()[51];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_state98() {
    ap_CS_fsm_state98 = ap_CS_fsm.read()[53];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_CS_fsm_state99() {
    ap_CS_fsm_state99 = ap_CS_fsm.read()[54];
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(icmp_ln1097_reg_6387.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(icmp_ln1097_reg_6387.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
   esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op752_read_state23.read())) || 
  (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
   esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op806_read_state23.read())) || 
  (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
   esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op863_read_state23.read())) || 
  (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
   esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op899_read_state23.read())) || 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state23_io.read())));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
   esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op752_read_state23.read())) || 
  (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
   esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op806_read_state23.read())) || 
  (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
   esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op863_read_state23.read())) || 
  (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
   esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op899_read_state23.read())) || 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state23_io.read())));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage1() {
    ap_block_pp1_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage1_11001() {
    ap_block_pp1_stage1_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state15_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
  ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1053_read_state24.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1063_read_state24.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1077_read_state24.read())))));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage1_subdone() {
    ap_block_pp1_stage1_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state15_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
  ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1053_read_state24.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1063_read_state24.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1077_read_state24.read())))));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage2() {
    ap_block_pp1_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage2_11001() {
    ap_block_pp1_stage2_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state16_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
  ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1089_read_state25.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1098_read_state25.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1111_read_state25.read())))));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage2_subdone() {
    ap_block_pp1_stage2_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state16_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
  ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1089_read_state25.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1098_read_state25.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1111_read_state25.read())))));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage3() {
    ap_block_pp1_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage3_11001() {
    ap_block_pp1_stage3_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state17_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
  ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1122_read_state26.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1130_read_state26.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1142_read_state26.read())))));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage3_subdone() {
    ap_block_pp1_stage3_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state17_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
  ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1122_read_state26.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1130_read_state26.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1142_read_state26.read())))));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage4() {
    ap_block_pp1_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage4_11001() {
    ap_block_pp1_stage4_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state18_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
  ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1158_read_state27.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1169_read_state27.read())))));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage4_subdone() {
    ap_block_pp1_stage4_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state18_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
  ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1158_read_state27.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1169_read_state27.read())))));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage5() {
    ap_block_pp1_stage5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage5_11001() {
    ap_block_pp1_stage5_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state19_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
  ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1184_read_state28.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1214_read_state28.read())))));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage5_subdone() {
    ap_block_pp1_stage5_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state19_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
  ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1184_read_state28.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1214_read_state28.read())))));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage6() {
    ap_block_pp1_stage6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage6_11001() {
    ap_block_pp1_stage6_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state20_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1222_read_state29.read())));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage6_subdone() {
    ap_block_pp1_stage6_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state20_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1222_read_state29.read())));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage7() {
    ap_block_pp1_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage7_11001() {
    ap_block_pp1_stage7_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state21_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1238_read_state30.read())));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage7_subdone() {
    ap_block_pp1_stage7_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state21_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1238_read_state30.read())));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage8() {
    ap_block_pp1_stage8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage8_11001() {
    ap_block_pp1_stage8_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
   esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op619_read_state22.read())) || 
  (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
   esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op636_read_state22.read())) || 
  (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
   esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op653_read_state22.read())) || 
  (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
   esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op671_read_state22.read())) || 
  (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
   esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op682_read_state22.read())) || 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state22_io.read())));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp1_stage8_subdone() {
    ap_block_pp1_stage8_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
   esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op619_read_state22.read())) || 
  (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
   esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op636_read_state22.read())) || 
  (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
   esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op653_read_state22.read())) || 
  (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
   esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op671_read_state22.read())) || 
  (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
   esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op682_read_state22.read())) || 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state22_io.read())));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp2_stage0() {
    ap_block_pp2_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp2_stage0_11001() {
    ap_block_pp2_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp2_stage0_subdone() {
    ap_block_pp2_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp2_stage1() {
    ap_block_pp2_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp2_stage1_11001() {
    ap_block_pp2_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp2_stage1_subdone() {
    ap_block_pp2_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp2_stage2() {
    ap_block_pp2_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp2_stage2_11001() {
    ap_block_pp2_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp2_stage2_subdone() {
    ap_block_pp2_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp2_stage3_11001() {
    ap_block_pp2_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp2_stage3_subdone() {
    ap_block_pp2_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp2_stage4_11001() {
    ap_block_pp2_stage4_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp2_stage4_subdone() {
    ap_block_pp2_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp2_stage5_11001() {
    ap_block_pp2_stage5_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp2_stage5_subdone() {
    ap_block_pp2_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp2_stage6() {
    ap_block_pp2_stage6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp2_stage6_11001() {
    ap_block_pp2_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp2_stage6_subdone() {
    ap_block_pp2_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage0() {
    ap_block_pp5_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage0_11001() {
    ap_block_pp5_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage0_subdone() {
    ap_block_pp5_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage1() {
    ap_block_pp5_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage1_11001() {
    ap_block_pp5_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage1_subdone() {
    ap_block_pp5_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage2_11001() {
    ap_block_pp5_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage2_subdone() {
    ap_block_pp5_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage3() {
    ap_block_pp5_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage3_11001() {
    ap_block_pp5_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage3_subdone() {
    ap_block_pp5_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage4_11001() {
    ap_block_pp5_stage4_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage4_subdone() {
    ap_block_pp5_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage5_11001() {
    ap_block_pp5_stage5_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage5_subdone() {
    ap_block_pp5_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage6_11001() {
    ap_block_pp5_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage6_subdone() {
    ap_block_pp5_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage7_11001() {
    ap_block_pp5_stage7_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage7_subdone() {
    ap_block_pp5_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage8_11001() {
    ap_block_pp5_stage8_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage8_subdone() {
    ap_block_pp5_stage8_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage9_11001() {
    ap_block_pp5_stage9_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp5_stage9_subdone() {
    ap_block_pp5_stage9_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp6_stage0() {
    ap_block_pp6_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp6_stage0_11001() {
    ap_block_pp6_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp6_stage0_subdone() {
    ap_block_pp6_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp7_stage0() {
    ap_block_pp7_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp7_stage0_11001() {
    ap_block_pp7_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp7_stage0_subdone() {
    ap_block_pp7_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage0() {
    ap_block_pp8_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage0_11001() {
    ap_block_pp8_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage0_subdone() {
    ap_block_pp8_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage1() {
    ap_block_pp8_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage10() {
    ap_block_pp8_stage10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage10_11001() {
    ap_block_pp8_stage10_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage10_subdone() {
    ap_block_pp8_stage10_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage11_11001() {
    ap_block_pp8_stage11_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage11_subdone() {
    ap_block_pp8_stage11_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage12_11001() {
    ap_block_pp8_stage12_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage12_subdone() {
    ap_block_pp8_stage12_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage13_11001() {
    ap_block_pp8_stage13_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage13_subdone() {
    ap_block_pp8_stage13_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage14_11001() {
    ap_block_pp8_stage14_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage14_subdone() {
    ap_block_pp8_stage14_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage15_11001() {
    ap_block_pp8_stage15_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage15_subdone() {
    ap_block_pp8_stage15_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage16() {
    ap_block_pp8_stage16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage16_11001() {
    ap_block_pp8_stage16_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state116_io.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage16_subdone() {
    ap_block_pp8_stage16_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state116_io.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage17() {
    ap_block_pp8_stage17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage17_01001() {
    ap_block_pp8_stage17_01001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage17_11001() {
    ap_block_pp8_stage17_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state117_io.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage17_subdone() {
    ap_block_pp8_stage17_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state117_io.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage18_11001() {
    ap_block_pp8_stage18_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage18_subdone() {
    ap_block_pp8_stage18_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage19_11001() {
    ap_block_pp8_stage19_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage19_subdone() {
    ap_block_pp8_stage19_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage1_11001() {
    ap_block_pp8_stage1_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715_pp8_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage1_subdone() {
    ap_block_pp8_stage1_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715_pp8_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage2() {
    ap_block_pp8_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage20_11001() {
    ap_block_pp8_stage20_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage20_subdone() {
    ap_block_pp8_stage20_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage2_11001() {
    ap_block_pp8_stage2_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state102_io.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage2_subdone() {
    ap_block_pp8_stage2_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state102_io.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage3() {
    ap_block_pp8_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage3_11001() {
    ap_block_pp8_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage3_subdone() {
    ap_block_pp8_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage4() {
    ap_block_pp8_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage4_11001() {
    ap_block_pp8_stage4_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage4_subdone() {
    ap_block_pp8_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage5() {
    ap_block_pp8_stage5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage5_11001() {
    ap_block_pp8_stage5_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage5_subdone() {
    ap_block_pp8_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage6() {
    ap_block_pp8_stage6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage6_11001() {
    ap_block_pp8_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage6_subdone() {
    ap_block_pp8_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage7_11001() {
    ap_block_pp8_stage7_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage7_subdone() {
    ap_block_pp8_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage8_11001() {
    ap_block_pp8_stage8_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage8_subdone() {
    ap_block_pp8_stage8_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage9() {
    ap_block_pp8_stage9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage9_11001() {
    ap_block_pp8_stage9_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_pp8_stage9_subdone() {
    ap_block_pp8_stage9_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state100_pp8_stage0_iter0() {
    ap_block_state100_pp8_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state101_pp8_stage1_iter0() {
    ap_block_state101_pp8_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state102_io() {
    ap_block_state102_io = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state102_pp8_stage2_iter0() {
    ap_block_state102_pp8_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state103_pp8_stage3_iter0() {
    ap_block_state103_pp8_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state104_pp8_stage4_iter0() {
    ap_block_state104_pp8_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state105_pp8_stage5_iter0() {
    ap_block_state105_pp8_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state106_pp8_stage6_iter0() {
    ap_block_state106_pp8_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state107_pp8_stage7_iter0() {
    ap_block_state107_pp8_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state108_pp8_stage8_iter0() {
    ap_block_state108_pp8_stage8_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state109_pp8_stage9_iter0() {
    ap_block_state109_pp8_stage9_iter0 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state10_pp0_stage0_iter1() {
    ap_block_state10_pp0_stage0_iter1 = (esl_seteq<1,1,1>(icmp_ln1097_reg_6387.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state110_pp8_stage10_iter0() {
    ap_block_state110_pp8_stage10_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state111_pp8_stage11_iter0() {
    ap_block_state111_pp8_stage11_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state112_pp8_stage12_iter0() {
    ap_block_state112_pp8_stage12_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state113_pp8_stage13_iter0() {
    ap_block_state113_pp8_stage13_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state114_pp8_stage14_iter0() {
    ap_block_state114_pp8_stage14_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state115_pp8_stage15_iter0() {
    ap_block_state115_pp8_stage15_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state116_io() {
    ap_block_state116_io = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_AWREADY.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state116_pp8_stage16_iter0() {
    ap_block_state116_pp8_stage16_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state117_io() {
    ap_block_state117_io = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_WREADY.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state117_pp8_stage17_iter0() {
    ap_block_state117_pp8_stage17_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state118_pp8_stage18_iter0() {
    ap_block_state118_pp8_stage18_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state119_pp8_stage19_iter0() {
    ap_block_state119_pp8_stage19_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state11_pp0_stage0_iter2() {
    ap_block_state11_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state120_pp8_stage20_iter0() {
    ap_block_state120_pp8_stage20_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state121_pp8_stage0_iter1() {
    ap_block_state121_pp8_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state122_pp8_stage1_iter1() {
    ap_block_state122_pp8_stage1_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715_pp8_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state14_pp1_stage0_iter0() {
    ap_block_state14_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state15_io() {
    ap_block_state15_io = ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op457_readreq_state15.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op461_readreq_state15.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op465_readreq_state15.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op469_readreq_state15.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op473_readreq_state15.read())));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state15_pp1_stage1_iter0() {
    ap_block_state15_pp1_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state16_io() {
    ap_block_state16_io = ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op477_readreq_state16.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op481_readreq_state16.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op486_readreq_state16.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op491_readreq_state16.read())));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state16_pp1_stage2_iter0() {
    ap_block_state16_pp1_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state17_io() {
    ap_block_state17_io = ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op500_readreq_state17.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op506_readreq_state17.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op512_readreq_state17.read())));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state17_pp1_stage3_iter0() {
    ap_block_state17_pp1_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state18_io() {
    ap_block_state18_io = ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op522_readreq_state18.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op529_readreq_state18.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op536_readreq_state18.read())));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state18_pp1_stage4_iter0() {
    ap_block_state18_pp1_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state19_io() {
    ap_block_state19_io = ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op547_readreq_state19.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op554_readreq_state19.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op562_readreq_state19.read())));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state19_pp1_stage5_iter0() {
    ap_block_state19_pp1_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state20_io() {
    ap_block_state20_io = ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op579_readreq_state20.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op588_readreq_state20.read())));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state20_pp1_stage6_iter0() {
    ap_block_state20_pp1_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state21_io() {
    ap_block_state21_io = ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op606_readreq_state21.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op617_readreq_state21.read())));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state21_pp1_stage7_iter0() {
    ap_block_state21_pp1_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state22_io() {
    ap_block_state22_io = (esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op670_readreq_state22.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state22_pp1_stage8_iter0() {
    ap_block_state22_pp1_stage8_iter0 = ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op619_read_state22.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op636_read_state22.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op653_read_state22.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op671_read_state22.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op682_read_state22.read())));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state23_io() {
    ap_block_state23_io = (esl_seteq<1,1,1>(ap_const_logic_0, gmem_ARREADY.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op873_readreq_state23.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state23_pp1_stage0_iter1() {
    ap_block_state23_pp1_stage0_iter1 = ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op752_read_state23.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op806_read_state23.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op863_read_state23.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op899_read_state23.read())));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state24_pp1_stage1_iter1() {
    ap_block_state24_pp1_stage1_iter1 = ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1053_read_state24.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1063_read_state24.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1077_read_state24.read())));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state25_pp1_stage2_iter1() {
    ap_block_state25_pp1_stage2_iter1 = ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1089_read_state25.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1098_read_state25.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1111_read_state25.read())));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state26_pp1_stage3_iter1() {
    ap_block_state26_pp1_stage3_iter1 = ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1122_read_state26.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1130_read_state26.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1142_read_state26.read())));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state27_pp1_stage4_iter1() {
    ap_block_state27_pp1_stage4_iter1 = ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1158_read_state27.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1169_read_state27.read())));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state28_pp1_stage5_iter1() {
    ap_block_state28_pp1_stage5_iter1 = ((esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1184_read_state28.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1214_read_state28.read())));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state29_pp1_stage6_iter1() {
    ap_block_state29_pp1_stage6_iter1 = (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1222_read_state29.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state30_pp1_stage7_iter1() {
    ap_block_state30_pp1_stage7_iter1 = (esl_seteq<1,1,1>(ap_const_logic_0, gmem_RVALID.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1238_read_state30.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state31_pp1_stage8_iter1() {
    ap_block_state31_pp1_stage8_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state34_pp2_stage0_iter0() {
    ap_block_state34_pp2_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state35_pp2_stage1_iter0() {
    ap_block_state35_pp2_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state36_pp2_stage2_iter0() {
    ap_block_state36_pp2_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state37_pp2_stage3_iter0() {
    ap_block_state37_pp2_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state38_pp2_stage4_iter0() {
    ap_block_state38_pp2_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state39_pp2_stage5_iter0() {
    ap_block_state39_pp2_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state40_pp2_stage6_iter0() {
    ap_block_state40_pp2_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state41_pp2_stage0_iter1() {
    ap_block_state41_pp2_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state42_pp2_stage1_iter1() {
    ap_block_state42_pp2_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state43_pp2_stage2_iter1() {
    ap_block_state43_pp2_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state44_pp2_stage3_iter1() {
    ap_block_state44_pp2_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state45_pp2_stage4_iter1() {
    ap_block_state45_pp2_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state46_pp2_stage5_iter1() {
    ap_block_state46_pp2_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state56_pp5_stage0_iter0() {
    ap_block_state56_pp5_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state57_pp5_stage1_iter0() {
    ap_block_state57_pp5_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state58_pp5_stage2_iter0() {
    ap_block_state58_pp5_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state59_pp5_stage3_iter0() {
    ap_block_state59_pp5_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state60_pp5_stage4_iter0() {
    ap_block_state60_pp5_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state61_pp5_stage5_iter0() {
    ap_block_state61_pp5_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state62_pp5_stage6_iter0() {
    ap_block_state62_pp5_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state63_pp5_stage7_iter0() {
    ap_block_state63_pp5_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state64_pp5_stage8_iter0() {
    ap_block_state64_pp5_stage8_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state65_pp5_stage9_iter0() {
    ap_block_state65_pp5_stage9_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state66_pp5_stage0_iter1() {
    ap_block_state66_pp5_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state68_pp6_stage0_iter0() {
    ap_block_state68_pp6_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state69_pp6_stage0_iter1() {
    ap_block_state69_pp6_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state70_pp6_stage0_iter2() {
    ap_block_state70_pp6_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state71_pp6_stage0_iter3() {
    ap_block_state71_pp6_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state72_pp6_stage0_iter4() {
    ap_block_state72_pp6_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state73_pp6_stage0_iter5() {
    ap_block_state73_pp6_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state74_pp6_stage0_iter6() {
    ap_block_state74_pp6_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state75_pp6_stage0_iter7() {
    ap_block_state75_pp6_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state76_pp6_stage0_iter8() {
    ap_block_state76_pp6_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state77_pp6_stage0_iter9() {
    ap_block_state77_pp6_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state78_pp6_stage0_iter10() {
    ap_block_state78_pp6_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state79_pp6_stage0_iter11() {
    ap_block_state79_pp6_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state80_pp6_stage0_iter12() {
    ap_block_state80_pp6_stage0_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state81_pp6_stage0_iter13() {
    ap_block_state81_pp6_stage0_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state82_pp6_stage0_iter14() {
    ap_block_state82_pp6_stage0_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state83_pp6_stage0_iter15() {
    ap_block_state83_pp6_stage0_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state86_pp7_stage0_iter0() {
    ap_block_state86_pp7_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state87_pp7_stage0_iter1() {
    ap_block_state87_pp7_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state88_pp7_stage0_iter2() {
    ap_block_state88_pp7_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state89_pp7_stage0_iter3() {
    ap_block_state89_pp7_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state90_pp7_stage0_iter4() {
    ap_block_state90_pp7_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state91_pp7_stage0_iter5() {
    ap_block_state91_pp7_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state92_pp7_stage0_iter6() {
    ap_block_state92_pp7_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state93_pp7_stage0_iter7() {
    ap_block_state93_pp7_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state94_pp7_stage0_iter8() {
    ap_block_state94_pp7_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state95_pp7_stage0_iter9() {
    ap_block_state95_pp7_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state96_pp7_stage0_iter10() {
    ap_block_state96_pp7_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state97_pp7_stage0_iter11() {
    ap_block_state97_pp7_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_block_state9_pp0_stage0_iter0() {
    ap_block_state9_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_257() {
    ap_condition_257 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_3481() {
    ap_condition_3481 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_3491() {
    ap_condition_3491 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_reg_6615.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_3495() {
    ap_condition_3495 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_1_reg_6619.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_3499() {
    ap_condition_3499 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_2_reg_6623.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_3507() {
    ap_condition_3507 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_3543() {
    ap_condition_3543 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_reg_6711.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_3547() {
    ap_condition_3547 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_1_reg_6715.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_3551() {
    ap_condition_3551 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_2_reg_6719.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_3555() {
    ap_condition_3555 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_3_reg_6723.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_3559() {
    ap_condition_3559 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7149() {
    ap_condition_7149 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln182_reg_7460.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7162() {
    ap_condition_7162 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_11_reg_6659_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7166() {
    ap_condition_7166 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_8_reg_6695_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7170() {
    ap_condition_7170 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_4_reg_6727_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7174() {
    ap_condition_7174 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_reg_6759_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7178() {
    ap_condition_7178 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7179() {
    ap_condition_7179 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_3_reg_6627.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7186() {
    ap_condition_7186 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_reg_6663.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7192() {
    ap_condition_7192 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7196() {
    ap_condition_7196 = (esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7203() {
    ap_condition_7203 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_9_reg_6699_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7209() {
    ap_condition_7209 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_5_reg_6731_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7215() {
    ap_condition_7215 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_1_reg_6763_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7220() {
    ap_condition_7220 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_1_reg_6667.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7225() {
    ap_condition_7225 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_10_reg_6703_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7231() {
    ap_condition_7231 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_6_reg_6735_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7237() {
    ap_condition_7237 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_2_reg_6767_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7240() {
    ap_condition_7240 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_2_reg_6671.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7245() {
    ap_condition_7245 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_11_reg_6707_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7251() {
    ap_condition_7251 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_7_reg_6739_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7257() {
    ap_condition_7257 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_3_reg_6771_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7260() {
    ap_condition_7260 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_3_reg_6675.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7265() {
    ap_condition_7265 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_7_reg_6643_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7269() {
    ap_condition_7269 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_4_reg_6679_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7275() {
    ap_condition_7275 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_8_reg_6743_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7281() {
    ap_condition_7281 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3421_reg_6605_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7295() {
    ap_condition_7295 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_8_reg_6647_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7298() {
    ap_condition_7298 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_5_reg_6683_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7305() {
    ap_condition_7305 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_9_reg_6651_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7308() {
    ap_condition_7308 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_6_reg_6687_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7316() {
    ap_condition_7316 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_10_reg_6655_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_7319() {
    ap_condition_7319 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_7_reg_6691_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_pp0_exit_iter0_state9() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln1097_fu_2899_p2.read())) {
        ap_condition_pp0_exit_iter0_state9 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state9 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_pp1_exit_iter0_state14() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3363_fu_3461_p2.read())) {
        ap_condition_pp1_exit_iter0_state14 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state14 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_pp2_exit_iter0_state34() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln182_fu_5727_p2.read())) {
        ap_condition_pp2_exit_iter0_state34 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter0_state34 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_pp5_exit_iter0_state56() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln223_fu_5878_p2.read())) {
        ap_condition_pp5_exit_iter0_state56 = ap_const_logic_1;
    } else {
        ap_condition_pp5_exit_iter0_state56 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_pp6_exit_iter0_state68() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln232_fu_5901_p2.read())) {
        ap_condition_pp6_exit_iter0_state68 = ap_const_logic_1;
    } else {
        ap_condition_pp6_exit_iter0_state68 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_pp7_exit_iter0_state86() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln242_fu_5918_p2.read())) {
        ap_condition_pp7_exit_iter0_state86 = ap_const_logic_1;
    } else {
        ap_condition_pp7_exit_iter0_state86 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_condition_pp8_exit_iter0_state100() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln252_fu_5960_p2.read())) {
        ap_condition_pp8_exit_iter0_state100 = ap_const_logic_1;
    } else {
        ap_condition_pp8_exit_iter0_state100 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_enable_pp2() {
    ap_enable_pp2 = (ap_idle_pp2.read() ^ ap_const_logic_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_enable_pp5() {
    ap_enable_pp5 = (ap_idle_pp5.read() ^ ap_const_logic_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_enable_pp6() {
    ap_enable_pp6 = (ap_idle_pp6.read() ^ ap_const_logic_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_enable_pp7() {
    ap_enable_pp7 = (ap_idle_pp7.read() ^ ap_const_logic_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_enable_pp8() {
    ap_enable_pp8 = (ap_idle_pp8.read() ^ ap_const_logic_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_ext_blocking_cur_n() {
    ap_ext_blocking_cur_n = (gmem_blk_n_AR.read() & gmem_blk_n_R.read() & gmem_blk_n_AW.read() & gmem_blk_n_W.read() & gmem_blk_n_B.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_ext_blocking_n() {
    ap_ext_blocking_n = (ap_ext_blocking_cur_n.read() & ap_ext_blocking_sub_n.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_ext_blocking_sub_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, (ap_wait_0.read() & 
          ap_sub_ext_blocking_0.read())) && 
         esl_seteq<1,1,1>(ap_const_logic_1, (ap_wait_1.read() & 
          ap_sub_ext_blocking_1.read())) && 
         esl_seteq<1,1,1>(ap_const_logic_1, (ap_wait_2.read() & 
          ap_sub_ext_blocking_2.read())) && 
         esl_seteq<1,1,1>(ap_const_logic_1, (ap_wait_3.read() & 
          ap_sub_ext_blocking_3.read())) && 
         esl_seteq<1,1,1>(ap_const_logic_1, (ap_wait_4.read() & 
          ap_sub_ext_blocking_4.read())))) {
        ap_ext_blocking_sub_n = ap_const_logic_0;
    } else {
        ap_ext_blocking_sub_n = ap_const_logic_1;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_idle_pp2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter1.read()))) {
        ap_idle_pp2 = ap_const_logic_1;
    } else {
        ap_idle_pp2 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_idle_pp5() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter1.read()))) {
        ap_idle_pp5 = ap_const_logic_1;
    } else {
        ap_idle_pp5 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_idle_pp6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter15.read()))) {
        ap_idle_pp6 = ap_const_logic_1;
    } else {
        ap_idle_pp6 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_idle_pp7() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter11.read()))) {
        ap_idle_pp7 = ap_const_logic_1;
    } else {
        ap_idle_pp7 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_idle_pp8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter1.read()))) {
        ap_idle_pp8 = ap_const_logic_1;
    } else {
        ap_idle_pp8 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_int_blocking_n() {
    ap_int_blocking_n = (ap_const_logic_1 & ap_int_blocking_sub_n.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_int_blocking_sub_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, (ap_wait_0.read() & 
          ap_sub_int_blocking_0.read())) && 
         esl_seteq<1,1,1>(ap_const_logic_1, (ap_wait_1.read() & 
          ap_sub_int_blocking_1.read())) && 
         esl_seteq<1,1,1>(ap_const_logic_1, (ap_wait_2.read() & 
          ap_sub_int_blocking_2.read())) && 
         esl_seteq<1,1,1>(ap_const_logic_1, (ap_wait_3.read() & 
          ap_sub_int_blocking_3.read())) && 
         esl_seteq<1,1,1>(ap_const_logic_1, (ap_wait_4.read() & 
          ap_sub_int_blocking_4.read())))) {
        ap_int_blocking_sub_n = ap_const_logic_0;
    } else {
        ap_int_blocking_sub_n = ap_const_logic_1;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_phi_mux_i4_0_phi_fu_2429_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln223_reg_7617.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i4_0_phi_fu_2429_p4 = i_4_reg_7621.read();
    } else {
        ap_phi_mux_i4_0_phi_fu_2429_p4 = i4_0_reg_2425.read();
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_phi_mux_i6_0_phi_fu_2451_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln242_reg_7665.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i6_0_phi_fu_2451_p4 = i_6_reg_7669.read();
    } else {
        ap_phi_mux_i6_0_phi_fu_2451_p4 = i6_0_reg_2447.read();
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_phi_mux_i7_0_phi_fu_2463_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i7_0_phi_fu_2463_p4 = i_7_reg_7719.read();
    } else {
        ap_phi_mux_i7_0_phi_fu_2463_p4 = i7_0_reg_2459.read();
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_phi_mux_i_0_i28_phi_fu_2322_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_0_i28_phi_fu_2322_p4 = i_8_reg_6596.read();
    } else {
        ap_phi_mux_i_0_i28_phi_fu_2322_p4 = i_0_i28_reg_2318.read();
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_phi_mux_k_0_phi_fu_2346_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln182_reg_7460.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_0_phi_fu_2346_p4 = k_reg_7464.read();
    } else {
        ap_phi_mux_k_0_phi_fu_2346_p4 = k_0_reg_2342.read();
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op1053_read_state24() {
    ap_predicate_op1053_read_state24 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_9_reg_6699_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op1063_read_state24() {
    ap_predicate_op1063_read_state24 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_5_reg_6731_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op1077_read_state24() {
    ap_predicate_op1077_read_state24 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_1_reg_6763_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op1089_read_state25() {
    ap_predicate_op1089_read_state25 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_10_reg_6703_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op1098_read_state25() {
    ap_predicate_op1098_read_state25 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_6_reg_6735_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op1111_read_state25() {
    ap_predicate_op1111_read_state25 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_2_reg_6767_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op1122_read_state26() {
    ap_predicate_op1122_read_state26 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_11_reg_6707_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op1130_read_state26() {
    ap_predicate_op1130_read_state26 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_7_reg_6739_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op1142_read_state26() {
    ap_predicate_op1142_read_state26 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_3_reg_6771_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op1158_read_state27() {
    ap_predicate_op1158_read_state27 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_8_reg_6743_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op1169_read_state27() {
    ap_predicate_op1169_read_state27 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3421_reg_6605_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op1184_read_state28() {
    ap_predicate_op1184_read_state28 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_9_reg_6747_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op1214_read_state28() {
    ap_predicate_op1214_read_state28 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_4_reg_6775_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op1222_read_state29() {
    ap_predicate_op1222_read_state29 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_10_reg_6751_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op1238_read_state30() {
    ap_predicate_op1238_read_state30 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_11_reg_6755_pp1_iter1_reg.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op457_readreq_state15() {
    ap_predicate_op457_readreq_state15 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op461_readreq_state15() {
    ap_predicate_op461_readreq_state15 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op465_readreq_state15() {
    ap_predicate_op465_readreq_state15 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op469_readreq_state15() {
    ap_predicate_op469_readreq_state15 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op473_readreq_state15() {
    ap_predicate_op473_readreq_state15 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op477_readreq_state16() {
    ap_predicate_op477_readreq_state16 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_11_reg_6659.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op481_readreq_state16() {
    ap_predicate_op481_readreq_state16 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_8_reg_6695.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op486_readreq_state16() {
    ap_predicate_op486_readreq_state16 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_4_reg_6727.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op491_readreq_state16() {
    ap_predicate_op491_readreq_state16 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_reg_6759.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op500_readreq_state17() {
    ap_predicate_op500_readreq_state17 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_9_reg_6699.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op506_readreq_state17() {
    ap_predicate_op506_readreq_state17 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_5_reg_6731.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op512_readreq_state17() {
    ap_predicate_op512_readreq_state17 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_1_reg_6763.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op522_readreq_state18() {
    ap_predicate_op522_readreq_state18 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_10_reg_6703.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op529_readreq_state18() {
    ap_predicate_op529_readreq_state18 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_6_reg_6735.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op536_readreq_state18() {
    ap_predicate_op536_readreq_state18 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_2_reg_6767.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op547_readreq_state19() {
    ap_predicate_op547_readreq_state19 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_11_reg_6707.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op554_readreq_state19() {
    ap_predicate_op554_readreq_state19 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_7_reg_6739.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op562_readreq_state19() {
    ap_predicate_op562_readreq_state19 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_3_reg_6771.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op579_readreq_state20() {
    ap_predicate_op579_readreq_state20 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_8_reg_6743.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op588_readreq_state20() {
    ap_predicate_op588_readreq_state20 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3421_reg_6605.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op606_readreq_state21() {
    ap_predicate_op606_readreq_state21 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_9_reg_6747.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op617_readreq_state21() {
    ap_predicate_op617_readreq_state21 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_4_reg_6775.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op619_read_state22() {
    ap_predicate_op619_read_state22 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op636_read_state22() {
    ap_predicate_op636_read_state22 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op653_read_state22() {
    ap_predicate_op653_read_state22 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op670_readreq_state22() {
    ap_predicate_op670_readreq_state22 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_10_reg_6751.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op671_read_state22() {
    ap_predicate_op671_read_state22 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op682_read_state22() {
    ap_predicate_op682_read_state22 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op752_read_state23() {
    ap_predicate_op752_read_state23 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_11_reg_6659.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op806_read_state23() {
    ap_predicate_op806_read_state23 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_8_reg_6695.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op863_read_state23() {
    ap_predicate_op863_read_state23 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_4_reg_6727.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op873_readreq_state23() {
    ap_predicate_op873_readreq_state23 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_11_reg_6755.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_predicate_op899_read_state23() {
    ap_predicate_op899_read_state23 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_reg_6759.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_str_blocking_n() {
    ap_str_blocking_n = (ap_const_logic_1 & ap_str_blocking_sub_n.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_str_blocking_sub_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, (ap_wait_0.read() & 
          ap_sub_str_blocking_0.read())) && 
         esl_seteq<1,1,1>(ap_const_logic_1, (ap_wait_1.read() & 
          ap_sub_str_blocking_1.read())) && 
         esl_seteq<1,1,1>(ap_const_logic_1, (ap_wait_2.read() & 
          ap_sub_str_blocking_2.read())) && 
         esl_seteq<1,1,1>(ap_const_logic_1, (ap_wait_3.read() & 
          ap_sub_str_blocking_3.read())) && 
         esl_seteq<1,1,1>(ap_const_logic_1, (ap_wait_4.read() & 
          ap_sub_str_blocking_4.read())))) {
        ap_str_blocking_sub_n = ap_const_logic_0;
    } else {
        ap_str_blocking_sub_n = ap_const_logic_1;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_sub_ext_blocking_0() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, grp_merlin_memcpy_1_0_0_fu_2470_ap_ext_blocking_n.read())) {
        ap_sub_ext_blocking_0 = ap_const_logic_1;
    } else {
        ap_sub_ext_blocking_0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_sub_ext_blocking_1() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, grp_merlin_memcpy_0_0_fu_2478_ap_ext_blocking_n.read())) {
        ap_sub_ext_blocking_1 = ap_const_logic_1;
    } else {
        ap_sub_ext_blocking_1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_sub_ext_blocking_2() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, grp_merlin_memcpy_3_0_fu_2486_ap_ext_blocking_n.read())) {
        ap_sub_ext_blocking_2 = ap_const_logic_1;
    } else {
        ap_sub_ext_blocking_2 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_sub_ext_blocking_3() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, grp_merlin_memcpy_4_0_fu_2494_ap_ext_blocking_n.read())) {
        ap_sub_ext_blocking_3 = ap_const_logic_1;
    } else {
        ap_sub_ext_blocking_3 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_sub_ext_blocking_4() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, grp_merlin_memcpy_2_0_fu_2502_ap_ext_blocking_n.read())) {
        ap_sub_ext_blocking_4 = ap_const_logic_1;
    } else {
        ap_sub_ext_blocking_4 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_sub_int_blocking_0() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, grp_merlin_memcpy_1_0_0_fu_2470_ap_int_blocking_n.read())) {
        ap_sub_int_blocking_0 = ap_const_logic_1;
    } else {
        ap_sub_int_blocking_0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_sub_int_blocking_1() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, grp_merlin_memcpy_0_0_fu_2478_ap_int_blocking_n.read())) {
        ap_sub_int_blocking_1 = ap_const_logic_1;
    } else {
        ap_sub_int_blocking_1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_sub_int_blocking_2() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, grp_merlin_memcpy_3_0_fu_2486_ap_int_blocking_n.read())) {
        ap_sub_int_blocking_2 = ap_const_logic_1;
    } else {
        ap_sub_int_blocking_2 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_sub_int_blocking_3() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, grp_merlin_memcpy_4_0_fu_2494_ap_int_blocking_n.read())) {
        ap_sub_int_blocking_3 = ap_const_logic_1;
    } else {
        ap_sub_int_blocking_3 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_sub_int_blocking_4() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, grp_merlin_memcpy_2_0_fu_2502_ap_int_blocking_n.read())) {
        ap_sub_int_blocking_4 = ap_const_logic_1;
    } else {
        ap_sub_int_blocking_4 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_sub_str_blocking_0() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, grp_merlin_memcpy_1_0_0_fu_2470_ap_str_blocking_n.read())) {
        ap_sub_str_blocking_0 = ap_const_logic_1;
    } else {
        ap_sub_str_blocking_0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_sub_str_blocking_1() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, grp_merlin_memcpy_0_0_fu_2478_ap_str_blocking_n.read())) {
        ap_sub_str_blocking_1 = ap_const_logic_1;
    } else {
        ap_sub_str_blocking_1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_sub_str_blocking_2() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, grp_merlin_memcpy_3_0_fu_2486_ap_str_blocking_n.read())) {
        ap_sub_str_blocking_2 = ap_const_logic_1;
    } else {
        ap_sub_str_blocking_2 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_sub_str_blocking_3() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, grp_merlin_memcpy_4_0_fu_2494_ap_str_blocking_n.read())) {
        ap_sub_str_blocking_3 = ap_const_logic_1;
    } else {
        ap_sub_str_blocking_3 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_sub_str_blocking_4() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, grp_merlin_memcpy_2_0_fu_2502_ap_str_blocking_n.read())) {
        ap_sub_str_blocking_4 = ap_const_logic_1;
    } else {
        ap_sub_str_blocking_4 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_wait_0() {
    if (esl_seteq<1,77,77>(ap_ST_fsm_state52, ap_CS_fsm.read())) {
        ap_wait_0 = ap_const_logic_1;
    } else {
        ap_wait_0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_wait_1() {
    if (esl_seteq<1,77,77>(ap_ST_fsm_state49, ap_CS_fsm.read())) {
        ap_wait_1 = ap_const_logic_1;
    } else {
        ap_wait_1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_wait_2() {
    if (esl_seteq<1,77,77>(ap_ST_fsm_state85, ap_CS_fsm.read())) {
        ap_wait_2 = ap_const_logic_1;
    } else {
        ap_wait_2 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_wait_3() {
    if (esl_seteq<1,77,77>(ap_ST_fsm_state99, ap_CS_fsm.read())) {
        ap_wait_3 = ap_const_logic_1;
    } else {
        ap_wait_3 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_ap_wait_4() {
    if (esl_seteq<1,77,77>(ap_ST_fsm_state55, ap_CS_fsm.read())) {
        ap_wait_4 = ap_const_logic_1;
    } else {
        ap_wait_4 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln163_fu_6194_p1() {
    bitcast_ln163_fu_6194_p1 = trunc_ln162_reg_7969.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln177_10_fu_6289_p1() {
    bitcast_ln177_10_fu_6289_p1 = tmp_0_s_reg_8194.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln177_11_fu_6292_p1() {
    bitcast_ln177_11_fu_6292_p1 = tmp_0_10_reg_8199.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln177_12_fu_6295_p1() {
    bitcast_ln177_12_fu_6295_p1 = tmp_0_11_reg_8204.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln177_13_fu_6298_p1() {
    bitcast_ln177_13_fu_6298_p1 = tmp_0_12_reg_8209.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln177_14_fu_6301_p1() {
    bitcast_ln177_14_fu_6301_p1 = tmp_0_13_reg_8214.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln177_15_fu_6304_p1() {
    bitcast_ln177_15_fu_6304_p1 = tmp_0_14_reg_8219.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln177_1_fu_6262_p1() {
    bitcast_ln177_1_fu_6262_p1 = tmp_0_1_reg_8149.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln177_2_fu_6265_p1() {
    bitcast_ln177_2_fu_6265_p1 = tmp_0_2_reg_8154.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln177_3_fu_6268_p1() {
    bitcast_ln177_3_fu_6268_p1 = tmp_0_3_reg_8159.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln177_4_fu_6271_p1() {
    bitcast_ln177_4_fu_6271_p1 = tmp_0_4_reg_8164.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln177_5_fu_6274_p1() {
    bitcast_ln177_5_fu_6274_p1 = tmp_0_5_reg_8169.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln177_6_fu_6277_p1() {
    bitcast_ln177_6_fu_6277_p1 = tmp_0_6_reg_8174.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln177_7_fu_6280_p1() {
    bitcast_ln177_7_fu_6280_p1 = tmp_0_7_reg_8179.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln177_8_fu_6283_p1() {
    bitcast_ln177_8_fu_6283_p1 = tmp_0_8_reg_8184.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln177_9_fu_6286_p1() {
    bitcast_ln177_9_fu_6286_p1 = tmp_0_9_reg_8189.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln177_fu_6258_p1() {
    bitcast_ln177_fu_6258_p1 = reg_2819.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3376_10_fu_4961_p1() {
    bitcast_ln3376_10_fu_4961_p1 = raw_bits_2_s_reg_7184.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3376_11_fu_4965_p1() {
    bitcast_ln3376_11_fu_4965_p1 = raw_bits_2_10_reg_7189.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3376_12_fu_4969_p1() {
    bitcast_ln3376_12_fu_4969_p1 = raw_bits_2_11_reg_7194.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3376_13_fu_4973_p1() {
    bitcast_ln3376_13_fu_4973_p1 = raw_bits_2_12_reg_7199.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3376_14_fu_4977_p1() {
    bitcast_ln3376_14_fu_4977_p1 = raw_bits_2_13_reg_7204.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3376_15_fu_4981_p1() {
    bitcast_ln3376_15_fu_4981_p1 = raw_bits_2_14_reg_7209.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3376_1_fu_4908_p1() {
    bitcast_ln3376_1_fu_4908_p1 = raw_bits_2_1_reg_7139.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3376_2_fu_4912_p1() {
    bitcast_ln3376_2_fu_4912_p1 = raw_bits_2_2_reg_7144.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3376_3_fu_4916_p1() {
    bitcast_ln3376_3_fu_4916_p1 = raw_bits_2_3_reg_7149.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3376_4_fu_4920_p1() {
    bitcast_ln3376_4_fu_4920_p1 = raw_bits_2_4_reg_7154.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3376_5_fu_4924_p1() {
    bitcast_ln3376_5_fu_4924_p1 = raw_bits_2_5_reg_7159.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3376_6_fu_4928_p1() {
    bitcast_ln3376_6_fu_4928_p1 = raw_bits_2_6_reg_7164.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3376_7_fu_4932_p1() {
    bitcast_ln3376_7_fu_4932_p1 = raw_bits_2_7_reg_7169.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3376_8_fu_4936_p1() {
    bitcast_ln3376_8_fu_4936_p1 = raw_bits_2_8_reg_7174.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3376_9_fu_4957_p1() {
    bitcast_ln3376_9_fu_4957_p1 = raw_bits_2_9_reg_7179.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3376_fu_4878_p1() {
    bitcast_ln3376_fu_4878_p1 = trunc_ln3375_reg_7134.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3424_10_fu_5537_p1() {
    bitcast_ln3424_10_fu_5537_p1 = raw_bits_3_s_reg_7311.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3424_11_fu_5541_p1() {
    bitcast_ln3424_11_fu_5541_p1 = raw_bits_3_10_reg_7316.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3424_12_fu_5545_p1() {
    bitcast_ln3424_12_fu_5545_p1 = raw_bits_3_11_reg_7321.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3424_13_fu_5562_p1() {
    bitcast_ln3424_13_fu_5562_p1 = raw_bits_3_12_reg_7326.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3424_14_fu_5566_p1() {
    bitcast_ln3424_14_fu_5566_p1 = raw_bits_3_13_reg_7331.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3424_15_fu_5607_p1() {
    bitcast_ln3424_15_fu_5607_p1 = raw_bits_3_14_reg_7341.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3424_1_fu_4793_p1() {
    bitcast_ln3424_1_fu_4793_p1 = raw_bits_3_1_reg_7119.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3424_2_fu_4818_p1() {
    bitcast_ln3424_2_fu_4818_p1 = raw_bits_3_2_reg_7124.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3424_3_fu_4843_p1() {
    bitcast_ln3424_3_fu_4843_p1 = raw_bits_3_3_reg_7129.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3424_4_fu_5166_p1() {
    bitcast_ln3424_4_fu_5166_p1 = raw_bits_3_4_reg_7246.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3424_5_fu_5247_p1() {
    bitcast_ln3424_5_fu_5247_p1 = raw_bits_3_5_reg_7261.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3424_6_fu_5328_p1() {
    bitcast_ln3424_6_fu_5328_p1 = raw_bits_3_6_reg_7276.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3424_7_fu_5399_p1() {
    bitcast_ln3424_7_fu_5399_p1 = raw_bits_3_7_reg_7291.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3424_8_fu_5513_p1() {
    bitcast_ln3424_8_fu_5513_p1 = raw_bits_3_8_reg_7301.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3424_9_fu_5533_p1() {
    bitcast_ln3424_9_fu_5533_p1 = raw_bits_3_9_reg_7306.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3424_fu_4768_p1() {
    bitcast_ln3424_fu_4768_p1 = trunc_ln3423_reg_7114.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3472_10_fu_5301_p1() {
    bitcast_ln3472_10_fu_5301_p1 = raw_bits_4_s_reg_7271.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3472_11_fu_5372_p1() {
    bitcast_ln3472_11_fu_5372_p1 = raw_bits_4_10_reg_7286.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3472_12_fu_5486_p1() {
    bitcast_ln3472_12_fu_5486_p1 = raw_bits_4_11_reg_7296.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3472_13_fu_5580_p1() {
    bitcast_ln3472_13_fu_5580_p1 = raw_bits_4_12_reg_7336.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3472_14_fu_5630_p1() {
    bitcast_ln3472_14_fu_5630_p1 = raw_bits_4_13_reg_7346.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3472_15_fu_5665_p1() {
    bitcast_ln3472_15_fu_5665_p1 = raw_bits_4_14_reg_7351.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3472_1_fu_4637_p1() {
    bitcast_ln3472_1_fu_4637_p1 = raw_bits_4_1_reg_7073.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3472_2_fu_4662_p1() {
    bitcast_ln3472_2_fu_4662_p1 = raw_bits_4_2_reg_7078.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3472_3_fu_4687_p1() {
    bitcast_ln3472_3_fu_4687_p1 = raw_bits_4_3_reg_7083.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3472_4_fu_4712_p1() {
    bitcast_ln3472_4_fu_4712_p1 = raw_bits_4_4_reg_7088.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3472_5_fu_4721_p1() {
    bitcast_ln3472_5_fu_4721_p1 = raw_bits_4_5_reg_7093.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3472_6_fu_4730_p1() {
    bitcast_ln3472_6_fu_4730_p1 = raw_bits_4_6_reg_7098.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3472_7_fu_4739_p1() {
    bitcast_ln3472_7_fu_4739_p1 = raw_bits_4_7_reg_7103.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3472_8_fu_5139_p1() {
    bitcast_ln3472_8_fu_5139_p1 = raw_bits_4_8_reg_7235.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3472_9_fu_5220_p1() {
    bitcast_ln3472_9_fu_5220_p1 = raw_bits_4_9_reg_7256.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3472_fu_4612_p1() {
    bitcast_ln3472_fu_4612_p1 = trunc_ln3471_reg_7068.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3520_10_fu_5094_p1() {
    bitcast_ln3520_10_fu_5094_p1 = raw_bits_5_s_reg_7058.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3520_11_fu_5103_p1() {
    bitcast_ln3520_11_fu_5103_p1 = raw_bits_5_10_reg_7063.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3520_12_fu_5112_p1() {
    bitcast_ln3520_12_fu_5112_p1 = raw_bits_5_11_reg_7230.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3520_13_fu_5193_p1() {
    bitcast_ln3520_13_fu_5193_p1 = raw_bits_5_12_reg_7251.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3520_14_fu_5274_p1() {
    bitcast_ln3520_14_fu_5274_p1 = raw_bits_5_13_reg_7266.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3520_15_fu_5355_p1() {
    bitcast_ln3520_15_fu_5355_p1 = raw_bits_5_14_reg_7281.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3520_1_fu_4491_p1() {
    bitcast_ln3520_1_fu_4491_p1 = raw_bits_5_1_reg_7013.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3520_2_fu_4516_p1() {
    bitcast_ln3520_2_fu_4516_p1 = raw_bits_5_2_reg_7018.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3520_3_fu_4541_p1() {
    bitcast_ln3520_3_fu_4541_p1 = raw_bits_5_3_reg_7023.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3520_4_fu_4566_p1() {
    bitcast_ln3520_4_fu_4566_p1 = raw_bits_5_4_reg_7028.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3520_5_fu_4575_p1() {
    bitcast_ln3520_5_fu_4575_p1 = raw_bits_5_5_reg_7033.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3520_6_fu_4584_p1() {
    bitcast_ln3520_6_fu_4584_p1 = raw_bits_5_6_reg_7038.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3520_7_fu_4593_p1() {
    bitcast_ln3520_7_fu_4593_p1 = raw_bits_5_7_reg_7043.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3520_8_fu_5076_p1() {
    bitcast_ln3520_8_fu_5076_p1 = raw_bits_5_8_reg_7048.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3520_9_fu_5085_p1() {
    bitcast_ln3520_9_fu_5085_p1 = raw_bits_5_9_reg_7053.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3520_fu_4482_p1() {
    bitcast_ln3520_fu_4482_p1 = trunc_ln3519_reg_7008.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3556_10_fu_5014_p1() {
    bitcast_ln3556_10_fu_5014_p1 = raw_bits_6_s_reg_6983.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3556_11_fu_5023_p1() {
    bitcast_ln3556_11_fu_5023_p1 = raw_bits_6_10_reg_6988.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3556_12_fu_5032_p1() {
    bitcast_ln3556_12_fu_5032_p1 = raw_bits_6_11_reg_6993.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3556_13_fu_5041_p1() {
    bitcast_ln3556_13_fu_5041_p1 = raw_bits_6_12_reg_6998.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3556_14_fu_5050_p1() {
    bitcast_ln3556_14_fu_5050_p1 = raw_bits_6_13_reg_7003.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3556_15_fu_5059_p1() {
    bitcast_ln3556_15_fu_5059_p1 = raw_bits_6_14_reg_7225.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3556_1_fu_4329_p1() {
    bitcast_ln3556_1_fu_4329_p1 = raw_bits_6_1_reg_6938.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3556_2_fu_4354_p1() {
    bitcast_ln3556_2_fu_4354_p1 = raw_bits_6_2_reg_6943.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3556_3_fu_4379_p1() {
    bitcast_ln3556_3_fu_4379_p1 = raw_bits_6_3_reg_6948.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3556_4_fu_4388_p1() {
    bitcast_ln3556_4_fu_4388_p1 = raw_bits_6_4_reg_6953.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3556_5_fu_4413_p1() {
    bitcast_ln3556_5_fu_4413_p1 = raw_bits_6_5_reg_6958.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3556_6_fu_4438_p1() {
    bitcast_ln3556_6_fu_4438_p1 = raw_bits_6_6_reg_6963.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3556_7_fu_4463_p1() {
    bitcast_ln3556_7_fu_4463_p1 = raw_bits_6_7_reg_6968.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3556_8_fu_4996_p1() {
    bitcast_ln3556_8_fu_4996_p1 = raw_bits_6_8_reg_6973.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3556_9_fu_5005_p1() {
    bitcast_ln3556_9_fu_5005_p1 = raw_bits_6_9_reg_6978.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_bitcast_ln3556_fu_4304_p1() {
    bitcast_ln3556_fu_4304_p1 = trunc_ln3555_reg_6933.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_deg_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        deg_address0 =  (sc_lv<15>) (zext_ln237_fu_5913_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        deg_address0 = deg_addr_reg_7636.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage1.read(), ap_const_boolean_0))) {
        deg_address0 =  (sc_lv<15>) (sext_ln228_fu_5896_p1.read());
    } else {
        deg_address0 = "XXXXXXXXXXXXXXX";
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_deg_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read())))) {
        deg_ce0 = ap_const_logic_1;
    } else {
        deg_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_deg_inv_sqrt_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        deg_inv_sqrt_address0 =  (sc_lv<15>) (sext_ln247_1_fu_5950_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter15.read()))) {
        deg_inv_sqrt_address0 =  (sc_lv<15>) (zext_ln237_reg_7650_pp6_iter14_reg.read());
    } else {
        deg_inv_sqrt_address0 = "XXXXXXXXXXXXXXX";
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_deg_inv_sqrt_address1() {
    deg_inv_sqrt_address1 =  (sc_lv<15>) (sext_ln247_fu_5955_p1.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_deg_inv_sqrt_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter15.read())))) {
        deg_inv_sqrt_ce0 = ap_const_logic_1;
    } else {
        deg_inv_sqrt_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_deg_inv_sqrt_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter5.read()))) {
        deg_inv_sqrt_ce1 = ap_const_logic_1;
    } else {
        deg_inv_sqrt_ce1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_deg_inv_sqrt_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln232_reg_7641_pp6_iter14_reg.read()))) {
        deg_inv_sqrt_we0 = ap_const_logic_1;
    } else {
        deg_inv_sqrt_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_deg_we0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln223_reg_7617.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()))) {
        deg_we0 = ap_const_logic_1;
    } else {
        deg_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_index_buf_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        edge_index_buf_0_address0 =  (sc_lv<17>) (zext_ln228_fu_5890_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        edge_index_buf_0_address0 = grp_merlin_memcpy_2_0_fu_2502_dst_address0.read();
    } else {
        edge_index_buf_0_address0 =  (sc_lv<17>) ("XXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_index_buf_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0))) {
        edge_index_buf_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        edge_index_buf_0_ce0 = grp_merlin_memcpy_2_0_fu_2502_dst_ce0.read();
    } else {
        edge_index_buf_0_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_index_buf_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        edge_index_buf_0_we0 = grp_merlin_memcpy_2_0_fu_2502_dst_we0.read();
    } else {
        edge_index_buf_0_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_index_buf_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        edge_index_buf_1_address0 =  (sc_lv<18>) (zext_ln247_1_fu_5940_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read())) {
        edge_index_buf_1_address0 = grp_merlin_memcpy_3_0_fu_2486_dst_address0.read();
    } else {
        edge_index_buf_1_address0 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_index_buf_1_address1() {
    edge_index_buf_1_address1 =  (sc_lv<18>) (zext_ln247_reg_7679_pp7_iter3_reg.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_index_buf_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()))) {
        edge_index_buf_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read())) {
        edge_index_buf_1_ce0 = grp_merlin_memcpy_3_0_fu_2486_dst_ce0.read();
    } else {
        edge_index_buf_1_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_index_buf_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter4.read()))) {
        edge_index_buf_1_ce1 = ap_const_logic_1;
    } else {
        edge_index_buf_1_ce1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_index_buf_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read())) {
        edge_index_buf_1_we0 = grp_merlin_memcpy_3_0_fu_2486_dst_we0.read();
    } else {
        edge_index_buf_1_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_index_buf_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        edge_index_buf_2_address0 =  (sc_lv<18>) (zext_ln207_fu_5837_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        edge_index_buf_2_address0 = grp_merlin_memcpy_0_0_fu_2478_dst_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        edge_index_buf_2_address0 = grp_merlin_memcpy_1_0_0_fu_2470_src_address0.read();
    } else {
        edge_index_buf_2_address0 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_index_buf_2_address1() {
    edge_index_buf_2_address1 =  (sc_lv<18>) (zext_ln207_2_fu_5856_p1.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_index_buf_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        edge_index_buf_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        edge_index_buf_2_ce0 = grp_merlin_memcpy_0_0_fu_2478_dst_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        edge_index_buf_2_ce0 = grp_merlin_memcpy_1_0_0_fu_2470_src_ce0.read();
    } else {
        edge_index_buf_2_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_index_buf_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        edge_index_buf_2_ce1 = ap_const_logic_1;
    } else {
        edge_index_buf_2_ce1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_index_buf_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        edge_index_buf_2_d0 = zext_ln195_fu_5831_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        edge_index_buf_2_d0 = grp_merlin_memcpy_0_0_fu_2478_dst_d0.read();
    } else {
        edge_index_buf_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_index_buf_2_d1() {
    edge_index_buf_2_d1 = esl_zext<32,15>(i1_0_reg_2403.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_index_buf_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln195_fu_5819_p2.read()))) {
        edge_index_buf_2_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        edge_index_buf_2_we0 = grp_merlin_memcpy_0_0_fu_2478_dst_we0.read();
    } else {
        edge_index_buf_2_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_index_buf_2_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln195_fu_5819_p2.read()))) {
        edge_index_buf_2_we1 = ap_const_logic_1;
    } else {
        edge_index_buf_2_we1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_index_buf_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        edge_index_buf_3_address0 =  (sc_lv<18>) (zext_ln265_fu_5982_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        edge_index_buf_3_address0 = grp_merlin_memcpy_4_0_fu_2494_dst_address0.read();
    } else {
        edge_index_buf_3_address0 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_index_buf_3_address1() {
    edge_index_buf_3_address1 =  (sc_lv<18>) (zext_ln266_fu_5987_p1.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_index_buf_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0))) {
        edge_index_buf_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        edge_index_buf_3_ce0 = grp_merlin_memcpy_4_0_fu_2494_dst_ce0.read();
    } else {
        edge_index_buf_3_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_index_buf_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0))) {
        edge_index_buf_3_ce1 = ap_const_logic_1;
    } else {
        edge_index_buf_3_ce1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_index_buf_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        edge_index_buf_3_we0 = grp_merlin_memcpy_4_0_fu_2494_dst_we0.read();
    } else {
        edge_index_buf_3_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_weight_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        edge_weight_address0 =  (sc_lv<17>) (zext_ln247_fu_5945_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        edge_weight_address0 =  (sc_lv<17>) (zext_ln228_fu_5890_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        edge_weight_address0 =  (sc_lv<17>) (zext_ln218_fu_5873_p1.read());
    } else {
        edge_weight_address0 =  (sc_lv<17>) ("XXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_weight_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter1.read())))) {
        edge_weight_ce0 = ap_const_logic_1;
    } else {
        edge_weight_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_edge_weight_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln213_fu_5861_p2.read()))) {
        edge_weight_we0 = ap_const_logic_1;
    } else {
        edge_weight_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_empty_fu_2883_p1() {
    empty_fu_2883_p1 = esl_zext<64,58>(weight_data3_reg_6358.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_end_fu_3297_p4() {
    end_fu_3297_p4 = add_ln3342_fu_3291_p2.read().range(23, 4);
}

void gcnconv_kernel_gcnconv_kernel::thread_event_done() {
    event_done = ap_done.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_ARADDR() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage2_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_10_fu_6030_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op873_readreq_state23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_24_fu_4758_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op670_readreq_state22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_22_fu_4088_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op617_readreq_state21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_14_fu_3745_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op606_readreq_state21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_20_fu_3730_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op588_readreq_state20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_12_fu_3719_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op579_readreq_state20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_18_fu_3708_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op562_readreq_state19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_11_fu_3697_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op554_readreq_state19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_17_fu_3686_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op547_readreq_state19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_25_fu_3675_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op536_readreq_state18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_8_fu_3664_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op529_readreq_state18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_16_fu_3653_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op522_readreq_state18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_23_fu_3642_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op512_readreq_state17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_7_fu_3631_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op506_readreq_state17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_15_fu_3620_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op500_readreq_state17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_21_fu_3609_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op491_readreq_state16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_4_fu_3598_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op486_readreq_state16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_13_fu_3587_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op481_readreq_state16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_19_fu_3576_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op477_readreq_state16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_26_fu_3565_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op473_readreq_state15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_1_fu_3555_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op469_readreq_state15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_2_fu_3544_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op465_readreq_state15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_3_fu_3533_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op461_readreq_state15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_5_fu_3522_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op457_readreq_state15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0))) {
        gmem_ARADDR = zext_ln32_6_fu_3511_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(gmem_ARREADY.read(), ap_const_logic_1))) {
        gmem_ARADDR = empty_fu_2883_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()))) {
        gmem_ARADDR = grp_merlin_memcpy_2_0_fu_2502_m_axi_src_ARADDR.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        gmem_ARADDR = grp_merlin_memcpy_4_0_fu_2494_m_axi_src_ARADDR.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()))) {
        gmem_ARADDR = grp_merlin_memcpy_3_0_fu_2486_m_axi_src_ARADDR.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln169_fu_3239_p2.read())))) {
        gmem_ARADDR = grp_merlin_memcpy_0_0_fu_2478_m_axi_src_ARADDR.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_ARADDR = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_ARADDR.read();
    } else {
        gmem_ARADDR =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_ARBURST() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()))) {
        gmem_ARBURST = grp_merlin_memcpy_2_0_fu_2502_m_axi_src_ARBURST.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        gmem_ARBURST = grp_merlin_memcpy_4_0_fu_2494_m_axi_src_ARBURST.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()))) {
        gmem_ARBURST = grp_merlin_memcpy_3_0_fu_2486_m_axi_src_ARBURST.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln169_fu_3239_p2.read())))) {
        gmem_ARBURST = grp_merlin_memcpy_0_0_fu_2478_m_axi_src_ARBURST.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_ARBURST = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_ARBURST.read();
    } else {
        gmem_ARBURST = ap_const_lv2_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_ARCACHE() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()))) {
        gmem_ARCACHE = grp_merlin_memcpy_2_0_fu_2502_m_axi_src_ARCACHE.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        gmem_ARCACHE = grp_merlin_memcpy_4_0_fu_2494_m_axi_src_ARCACHE.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()))) {
        gmem_ARCACHE = grp_merlin_memcpy_3_0_fu_2486_m_axi_src_ARCACHE.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln169_fu_3239_p2.read())))) {
        gmem_ARCACHE = grp_merlin_memcpy_0_0_fu_2478_m_axi_src_ARCACHE.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_ARCACHE = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_ARCACHE.read();
    } else {
        gmem_ARCACHE = ap_const_lv4_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_ARID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()))) {
        gmem_ARID = grp_merlin_memcpy_2_0_fu_2502_m_axi_src_ARID.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        gmem_ARID = grp_merlin_memcpy_4_0_fu_2494_m_axi_src_ARID.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()))) {
        gmem_ARID = grp_merlin_memcpy_3_0_fu_2486_m_axi_src_ARID.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln169_fu_3239_p2.read())))) {
        gmem_ARID = grp_merlin_memcpy_0_0_fu_2478_m_axi_src_ARID.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_ARID = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_ARID.read();
    } else {
        gmem_ARID = ap_const_lv1_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_ARLEN() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op457_readreq_state15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op461_readreq_state15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op465_readreq_state15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op469_readreq_state15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op473_readreq_state15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op477_readreq_state16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op481_readreq_state16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op486_readreq_state16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op491_readreq_state16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op500_readreq_state17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op506_readreq_state17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op512_readreq_state17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op522_readreq_state18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op529_readreq_state18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op536_readreq_state18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op547_readreq_state19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op554_readreq_state19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op562_readreq_state19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op579_readreq_state20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op588_readreq_state20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op606_readreq_state21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op617_readreq_state21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op670_readreq_state22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op873_readreq_state23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)))) {
        gmem_ARLEN = ap_const_lv32_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(gmem_ARREADY.read(), ap_const_logic_1))) {
        gmem_ARLEN = ap_const_lv32_1F4;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()))) {
        gmem_ARLEN = grp_merlin_memcpy_2_0_fu_2502_m_axi_src_ARLEN.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        gmem_ARLEN = grp_merlin_memcpy_4_0_fu_2494_m_axi_src_ARLEN.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()))) {
        gmem_ARLEN = grp_merlin_memcpy_3_0_fu_2486_m_axi_src_ARLEN.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln169_fu_3239_p2.read())))) {
        gmem_ARLEN = grp_merlin_memcpy_0_0_fu_2478_m_axi_src_ARLEN.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_ARLEN = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_ARLEN.read();
    } else {
        gmem_ARLEN =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_ARLOCK() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()))) {
        gmem_ARLOCK = grp_merlin_memcpy_2_0_fu_2502_m_axi_src_ARLOCK.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        gmem_ARLOCK = grp_merlin_memcpy_4_0_fu_2494_m_axi_src_ARLOCK.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()))) {
        gmem_ARLOCK = grp_merlin_memcpy_3_0_fu_2486_m_axi_src_ARLOCK.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln169_fu_3239_p2.read())))) {
        gmem_ARLOCK = grp_merlin_memcpy_0_0_fu_2478_m_axi_src_ARLOCK.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_ARLOCK = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_ARLOCK.read();
    } else {
        gmem_ARLOCK = ap_const_lv2_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_ARPROT() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()))) {
        gmem_ARPROT = grp_merlin_memcpy_2_0_fu_2502_m_axi_src_ARPROT.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        gmem_ARPROT = grp_merlin_memcpy_4_0_fu_2494_m_axi_src_ARPROT.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()))) {
        gmem_ARPROT = grp_merlin_memcpy_3_0_fu_2486_m_axi_src_ARPROT.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln169_fu_3239_p2.read())))) {
        gmem_ARPROT = grp_merlin_memcpy_0_0_fu_2478_m_axi_src_ARPROT.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_ARPROT = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_ARPROT.read();
    } else {
        gmem_ARPROT = ap_const_lv3_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_ARQOS() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()))) {
        gmem_ARQOS = grp_merlin_memcpy_2_0_fu_2502_m_axi_src_ARQOS.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        gmem_ARQOS = grp_merlin_memcpy_4_0_fu_2494_m_axi_src_ARQOS.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()))) {
        gmem_ARQOS = grp_merlin_memcpy_3_0_fu_2486_m_axi_src_ARQOS.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln169_fu_3239_p2.read())))) {
        gmem_ARQOS = grp_merlin_memcpy_0_0_fu_2478_m_axi_src_ARQOS.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_ARQOS = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_ARQOS.read();
    } else {
        gmem_ARQOS = ap_const_lv4_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_ARREGION() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()))) {
        gmem_ARREGION = grp_merlin_memcpy_2_0_fu_2502_m_axi_src_ARREGION.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        gmem_ARREGION = grp_merlin_memcpy_4_0_fu_2494_m_axi_src_ARREGION.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()))) {
        gmem_ARREGION = grp_merlin_memcpy_3_0_fu_2486_m_axi_src_ARREGION.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln169_fu_3239_p2.read())))) {
        gmem_ARREGION = grp_merlin_memcpy_0_0_fu_2478_m_axi_src_ARREGION.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_ARREGION = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_ARREGION.read();
    } else {
        gmem_ARREGION = ap_const_lv4_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_ARSIZE() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()))) {
        gmem_ARSIZE = grp_merlin_memcpy_2_0_fu_2502_m_axi_src_ARSIZE.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        gmem_ARSIZE = grp_merlin_memcpy_4_0_fu_2494_m_axi_src_ARSIZE.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()))) {
        gmem_ARSIZE = grp_merlin_memcpy_3_0_fu_2486_m_axi_src_ARSIZE.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln169_fu_3239_p2.read())))) {
        gmem_ARSIZE = grp_merlin_memcpy_0_0_fu_2478_m_axi_src_ARSIZE.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_ARSIZE = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_ARSIZE.read();
    } else {
        gmem_ARSIZE = ap_const_lv3_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_ARUSER() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()))) {
        gmem_ARUSER = grp_merlin_memcpy_2_0_fu_2502_m_axi_src_ARUSER.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        gmem_ARUSER = grp_merlin_memcpy_4_0_fu_2494_m_axi_src_ARUSER.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()))) {
        gmem_ARUSER = grp_merlin_memcpy_3_0_fu_2486_m_axi_src_ARUSER.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln169_fu_3239_p2.read())))) {
        gmem_ARUSER = grp_merlin_memcpy_0_0_fu_2478_m_axi_src_ARUSER.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_ARUSER = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_ARUSER.read();
    } else {
        gmem_ARUSER = ap_const_lv1_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_ARVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(gmem_ARREADY.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op457_readreq_state15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op461_readreq_state15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op465_readreq_state15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op469_readreq_state15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op473_readreq_state15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op477_readreq_state16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op481_readreq_state16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op486_readreq_state16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op491_readreq_state16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op500_readreq_state17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op506_readreq_state17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op512_readreq_state17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op522_readreq_state18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op529_readreq_state18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op536_readreq_state18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op547_readreq_state19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op554_readreq_state19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op562_readreq_state19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op579_readreq_state20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op588_readreq_state20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op606_readreq_state21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op617_readreq_state21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op670_readreq_state22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op873_readreq_state23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)))) {
        gmem_ARVALID = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()))) {
        gmem_ARVALID = grp_merlin_memcpy_2_0_fu_2502_m_axi_src_ARVALID.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        gmem_ARVALID = grp_merlin_memcpy_4_0_fu_2494_m_axi_src_ARVALID.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()))) {
        gmem_ARVALID = grp_merlin_memcpy_3_0_fu_2486_m_axi_src_ARVALID.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln169_fu_3239_p2.read())))) {
        gmem_ARVALID = grp_merlin_memcpy_0_0_fu_2478_m_axi_src_ARVALID.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_ARVALID = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_ARVALID.read();
    } else {
        gmem_ARVALID = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_AWADDR() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage16.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage16_11001.read(), ap_const_boolean_0))) {
        gmem_AWADDR = gmem_addr_9_reg_7832.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_AWADDR = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_AWADDR.read();
    } else {
        gmem_AWADDR =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_AWBURST() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_AWBURST = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_AWBURST.read();
    } else {
        gmem_AWBURST = ap_const_lv2_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_AWCACHE() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_AWCACHE = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_AWCACHE.read();
    } else {
        gmem_AWCACHE = ap_const_lv4_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_AWID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_AWID = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_AWID.read();
    } else {
        gmem_AWID = ap_const_lv1_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_AWLEN() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage16.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage16_11001.read(), ap_const_boolean_0))) {
        gmem_AWLEN = ap_const_lv32_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_AWLEN = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_AWLEN.read();
    } else {
        gmem_AWLEN =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_AWLOCK() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_AWLOCK = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_AWLOCK.read();
    } else {
        gmem_AWLOCK = ap_const_lv2_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_AWPROT() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_AWPROT = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_AWPROT.read();
    } else {
        gmem_AWPROT = ap_const_lv3_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_AWQOS() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_AWQOS = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_AWQOS.read();
    } else {
        gmem_AWQOS = ap_const_lv4_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_AWREGION() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_AWREGION = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_AWREGION.read();
    } else {
        gmem_AWREGION = ap_const_lv4_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_AWSIZE() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_AWSIZE = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_AWSIZE.read();
    } else {
        gmem_AWSIZE = ap_const_lv3_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_AWUSER() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_AWUSER = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_AWUSER.read();
    } else {
        gmem_AWUSER = ap_const_lv1_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_AWVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage16.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage16_11001.read(), ap_const_boolean_0))) {
        gmem_AWVALID = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_AWVALID = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_AWVALID.read();
    } else {
        gmem_AWVALID = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_BREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715_pp8_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0))) {
        gmem_BREADY = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_BREADY = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_BREADY.read();
    } else {
        gmem_BREADY = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_RREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(icmp_ln1097_reg_6387.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op619_read_state22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op636_read_state22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op653_read_state22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op671_read_state22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op682_read_state22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op752_read_state23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op806_read_state23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op863_read_state23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op899_read_state23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1053_read_state24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1063_read_state24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1077_read_state24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1089_read_state25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1098_read_state25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1111_read_state25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1122_read_state26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1130_read_state26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1142_read_state26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1158_read_state27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1169_read_state27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1184_read_state28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1214_read_state28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1222_read_state29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1238_read_state30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0)))) {
        gmem_RREADY = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()))) {
        gmem_RREADY = grp_merlin_memcpy_2_0_fu_2502_m_axi_src_RREADY.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state98.read()))) {
        gmem_RREADY = grp_merlin_memcpy_4_0_fu_2494_m_axi_src_RREADY.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()))) {
        gmem_RREADY = grp_merlin_memcpy_3_0_fu_2486_m_axi_src_RREADY.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln169_fu_3239_p2.read())))) {
        gmem_RREADY = grp_merlin_memcpy_0_0_fu_2478_m_axi_src_RREADY.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_RREADY = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_RREADY.read();
    } else {
        gmem_RREADY = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_WDATA() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage17.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage17_01001.read(), ap_const_boolean_0))) {
        gmem_WDATA = tmp_16_fu_6307_p17.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_WDATA = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_WDATA.read();
    } else {
        gmem_WDATA =  (sc_lv<512>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_WID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_WID = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_WID.read();
    } else {
        gmem_WID = ap_const_lv1_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_WLAST() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_WLAST = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_WLAST.read();
    } else {
        gmem_WLAST = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_WSTRB() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage17.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage17_01001.read(), ap_const_boolean_0))) {
        gmem_WSTRB = ap_const_lv64_FFFFFFFFFFFFFFFF;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_WSTRB = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_WSTRB.read();
    } else {
        gmem_WSTRB =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_WUSER() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_WUSER = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_WUSER.read();
    } else {
        gmem_WUSER = ap_const_lv1_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_WVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage17.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage17_11001.read(), ap_const_boolean_0))) {
        gmem_WVALID = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        gmem_WVALID = grp_merlin_memcpy_1_0_0_fu_2470_m_axi_dst_WVALID.read();
    } else {
        gmem_WVALID = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_blk_n_AR() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_11_reg_6659.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_8_reg_6695.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_9_reg_6699.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_10_reg_6703.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_11_reg_6707.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_4_reg_6727.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_5_reg_6731.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_6_reg_6735.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_7_reg_6739.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_8_reg_6743.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_9_reg_6747.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_10_reg_6751.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_11_reg_6755.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_reg_6759.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_1_reg_6763.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_2_reg_6767.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_3_reg_6771.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3421_reg_6605.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_4_reg_6775.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage2.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715.read())))) {
        gmem_blk_n_AR = m_axi_gmem_ARREADY.read();
    } else {
        gmem_blk_n_AR = ap_const_logic_1;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_blk_n_AW() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage16.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage16.read(), ap_const_boolean_0))) {
        gmem_blk_n_AW = m_axi_gmem_AWREADY.read();
    } else {
        gmem_blk_n_AW = ap_const_logic_1;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_blk_n_B() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715_pp8_iter1_reg.read()))) {
        gmem_blk_n_B = m_axi_gmem_BVALID.read();
    } else {
        gmem_blk_n_B = ap_const_logic_1;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_blk_n_R() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln1097_reg_6387.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_11_reg_6659.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_8_reg_6695.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_9_reg_6699_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_10_reg_6703_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_11_reg_6707_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_4_reg_6727.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_5_reg_6731_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_6_reg_6735_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_7_reg_6739_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_8_reg_6743_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_9_reg_6747_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_10_reg_6751_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_11_reg_6755_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3363_reg_6592.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_reg_6759.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_1_reg_6763_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_2_reg_6767_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_3_reg_6771_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3421_reg_6605_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_4_reg_6775_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage9.read(), ap_const_boolean_0)))) {
        gmem_blk_n_R = m_axi_gmem_RVALID.read();
    } else {
        gmem_blk_n_R = ap_const_logic_1;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_gmem_blk_n_W() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln252_reg_7715.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage17.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage17.read(), ap_const_boolean_0))) {
        gmem_blk_n_W = m_axi_gmem_WREADY.read();
    } else {
        gmem_blk_n_W = ap_const_logic_1;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2510_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage15_11001.read(), ap_const_boolean_0)))) {
        grp_fu_2510_ce = ap_const_logic_1;
    } else {
        grp_fu_2510_ce = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2510_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage10.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage10.read(), ap_const_boolean_0))) {
        grp_fu_2510_p0 = bitcast_ln163_fu_6194_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage3.read(), ap_const_boolean_0))) {
        grp_fu_2510_p0 = reg_2831.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage6.read(), ap_const_boolean_0))) {
        grp_fu_2510_p0 = reg_2812.read();
    } else {
        grp_fu_2510_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2510_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage10.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage10.read(), ap_const_boolean_0))) {
        grp_fu_2510_p1 = reg_2812.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage3.read(), ap_const_boolean_0))) {
        grp_fu_2510_p1 = reg_2825.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage6.read(), ap_const_boolean_0))) {
        grp_fu_2510_p1 = mul_0_reg_2353.read();
    } else {
        grp_fu_2510_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2515_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage15_11001.read(), ap_const_boolean_0)))) {
        grp_fu_2515_ce = ap_const_logic_1;
    } else {
        grp_fu_2515_ce = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2515_p0() {
    grp_fu_2515_p0 = raw_bits_7_1_reg_7974.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2519_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage15_11001.read(), ap_const_boolean_0)))) {
        grp_fu_2519_ce = ap_const_logic_1;
    } else {
        grp_fu_2519_ce = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2519_p0() {
    grp_fu_2519_p0 = raw_bits_7_2_reg_7979.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2523_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage15_11001.read(), ap_const_boolean_0)))) {
        grp_fu_2523_ce = ap_const_logic_1;
    } else {
        grp_fu_2523_ce = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2523_p0() {
    grp_fu_2523_p0 = raw_bits_7_3_reg_7984.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2527_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage15_11001.read(), ap_const_boolean_0)))) {
        grp_fu_2527_ce = ap_const_logic_1;
    } else {
        grp_fu_2527_ce = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2527_p0() {
    grp_fu_2527_p0 = raw_bits_7_4_reg_7989.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2531_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage15_11001.read(), ap_const_boolean_0)))) {
        grp_fu_2531_ce = ap_const_logic_1;
    } else {
        grp_fu_2531_ce = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2531_p0() {
    grp_fu_2531_p0 = raw_bits_7_5_reg_7994.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2535_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage15_11001.read(), ap_const_boolean_0)))) {
        grp_fu_2535_ce = ap_const_logic_1;
    } else {
        grp_fu_2535_ce = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2535_p0() {
    grp_fu_2535_p0 = raw_bits_7_6_reg_7999.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2539_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage15_11001.read(), ap_const_boolean_0)))) {
        grp_fu_2539_ce = ap_const_logic_1;
    } else {
        grp_fu_2539_ce = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2539_p0() {
    grp_fu_2539_p0 = raw_bits_7_7_reg_8004.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2543_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage15_11001.read(), ap_const_boolean_0)))) {
        grp_fu_2543_ce = ap_const_logic_1;
    } else {
        grp_fu_2543_ce = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2543_p0() {
    grp_fu_2543_p0 = raw_bits_7_8_reg_8009.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2547_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage15_11001.read(), ap_const_boolean_0)))) {
        grp_fu_2547_ce = ap_const_logic_1;
    } else {
        grp_fu_2547_ce = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2547_p0() {
    grp_fu_2547_p0 = raw_bits_7_9_reg_8014.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2551_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage15_11001.read(), ap_const_boolean_0)))) {
        grp_fu_2551_ce = ap_const_logic_1;
    } else {
        grp_fu_2551_ce = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2551_p0() {
    grp_fu_2551_p0 = raw_bits_7_s_reg_8019.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2555_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage15_11001.read(), ap_const_boolean_0)))) {
        grp_fu_2555_ce = ap_const_logic_1;
    } else {
        grp_fu_2555_ce = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2555_p0() {
    grp_fu_2555_p0 = raw_bits_7_10_reg_8024.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2559_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage15_11001.read(), ap_const_boolean_0)))) {
        grp_fu_2559_ce = ap_const_logic_1;
    } else {
        grp_fu_2559_ce = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2559_p0() {
    grp_fu_2559_p0 = raw_bits_7_11_reg_8029.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2563_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage15_11001.read(), ap_const_boolean_0)))) {
        grp_fu_2563_ce = ap_const_logic_1;
    } else {
        grp_fu_2563_ce = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2563_p0() {
    grp_fu_2563_p0 = raw_bits_7_12_reg_8039.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2567_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage15_11001.read(), ap_const_boolean_0)))) {
        grp_fu_2567_ce = ap_const_logic_1;
    } else {
        grp_fu_2567_ce = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2567_p0() {
    grp_fu_2567_p0 = raw_bits_7_13_reg_8049.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2571_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage15_11001.read(), ap_const_boolean_0)))) {
        grp_fu_2571_ce = ap_const_logic_1;
    } else {
        grp_fu_2571_ce = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2571_p0() {
    grp_fu_2571_p0 = raw_bits_7_14_reg_8059.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2575_ce() {
    if (((esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage8_11001.read(), ap_const_boolean_0)))) {
        grp_fu_2575_ce = ap_const_logic_1;
    } else {
        grp_fu_2575_ce = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2575_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage6.read(), ap_const_boolean_0)))) {
        grp_fu_2575_p0 = norm_load_reg_7739.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter3.read()))) {
        grp_fu_2575_p0 = reg_2825.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2575_p0 = ap_phi_reg_pp2_iter0_phi_ln187_reg_2381.read();
    } else {
        grp_fu_2575_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2575_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage6.read(), ap_const_boolean_0))) {
        grp_fu_2575_p1 = x_mul_12_load_reg_7899.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage5.read(), ap_const_boolean_0))) {
        grp_fu_2575_p1 = x_mul_8_load_reg_7879.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage4.read(), ap_const_boolean_0))) {
        grp_fu_2575_p1 = x_mul_4_load_reg_7859.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage3.read(), ap_const_boolean_0))) {
        grp_fu_2575_p1 = x_mul_0_load_reg_7839.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter3.read()))) {
        grp_fu_2575_p1 = deg_inv_sqrt_load_1_reg_7695.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2575_p1 = tmp_12_reg_7593.read();
    } else {
        grp_fu_2575_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2580_ce() {
    if (((esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage8_11001.read(), ap_const_boolean_0)))) {
        grp_fu_2580_ce = ap_const_logic_1;
    } else {
        grp_fu_2580_ce = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2580_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage6.read(), ap_const_boolean_0)))) {
        grp_fu_2580_p0 = norm_load_reg_7739.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter7.read()))) {
        grp_fu_2580_p0 = reg_2812.read();
    } else {
        grp_fu_2580_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2580_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage6.read(), ap_const_boolean_0))) {
        grp_fu_2580_p1 = x_mul_13_load_reg_7904.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage5.read(), ap_const_boolean_0))) {
        grp_fu_2580_p1 = x_mul_9_load_reg_7884.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage4.read(), ap_const_boolean_0))) {
        grp_fu_2580_p1 = x_mul_5_load_reg_7864.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage3.read(), ap_const_boolean_0))) {
        grp_fu_2580_p1 = x_mul_1_load_reg_7844.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter7.read()))) {
        grp_fu_2580_p1 = deg_inv_sqrt_load_reg_7710.read();
    } else {
        grp_fu_2580_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2584_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage8_11001.read(), ap_const_boolean_0)))) {
        grp_fu_2584_ce = ap_const_logic_1;
    } else {
        grp_fu_2584_ce = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2584_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage6.read()) && 
             esl_seteq<1,1,1>(ap_block_pp8_stage6.read(), ap_const_boolean_0))) {
            grp_fu_2584_p1 = x_mul_14_load_reg_7909.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp8_stage5.read(), ap_const_boolean_0))) {
            grp_fu_2584_p1 = x_mul_10_load_reg_7889.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp8_stage4.read(), ap_const_boolean_0))) {
            grp_fu_2584_p1 = x_mul_6_load_reg_7869.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp8_stage3.read(), ap_const_boolean_0))) {
            grp_fu_2584_p1 = x_mul_2_load_reg_7849.read();
        } else {
            grp_fu_2584_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_2584_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2588_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage8_11001.read(), ap_const_boolean_0)))) {
        grp_fu_2588_ce = ap_const_logic_1;
    } else {
        grp_fu_2588_ce = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2588_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage6.read()) && 
             esl_seteq<1,1,1>(ap_block_pp8_stage6.read(), ap_const_boolean_0))) {
            grp_fu_2588_p1 = x_mul_15_load_reg_7914.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp8_stage5.read(), ap_const_boolean_0))) {
            grp_fu_2588_p1 = x_mul_11_load_reg_7894.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp8_stage4.read(), ap_const_boolean_0))) {
            grp_fu_2588_p1 = x_mul_7_load_reg_7874.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp8_stage3.read(), ap_const_boolean_0))) {
            grp_fu_2588_p1 = x_mul_3_load_reg_7854.read();
        } else {
            grp_fu_2588_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_2588_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2597_p2() {
    grp_fu_2597_p2 = (!zext_ln3363_1_fu_3476_p1.read().is_01() || !add_ln3553_reg_6527.read().is_01())? sc_lv<1>(): sc_lv<1>(zext_ln3363_1_fu_3476_p1.read() == add_ln3553_reg_6527.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2601_p2() {
    grp_fu_2601_p2 = (!zext_ln3424_11_fu_3492_p1.read().is_01() || !p_cast_reg_6379.read().is_01())? sc_lv<59>(): (sc_biguint<59>(zext_ln3424_11_fu_3492_p1.read()) + sc_biguint<59>(p_cast_reg_6379.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2605_p2() {
    grp_fu_2605_p2 = (grp_fu_2597_p2.read() & icmp_ln3373_1_reg_6532.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2610_p2() {
    grp_fu_2610_p2 = (grp_fu_2597_p2.read() & icmp_ln3421_1_reg_6542.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2615_p2() {
    grp_fu_2615_p2 = (grp_fu_2597_p2.read() & icmp_ln3421_2_reg_6547.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2620_p2() {
    grp_fu_2620_p2 = (grp_fu_2597_p2.read() & icmp_ln3421_3_reg_6552.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2625_p2() {
    grp_fu_2625_p2 = (grp_fu_2597_p2.read() & xor_ln3469_reg_6557.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2630_p2() {
    grp_fu_2630_p2 = (grp_fu_2597_p2.read() & icmp_ln3469_reg_6562.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2635_p2() {
    grp_fu_2635_p2 = (grp_fu_2597_p2.read() & icmp_ln3469_1_reg_6567.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2640_p2() {
    grp_fu_2640_p2 = (grp_fu_2597_p2.read() & icmp_ln3469_2_reg_6572.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2645_p2() {
    grp_fu_2645_p2 = (grp_fu_2597_p2.read() & icmp_ln3469_3_reg_6577.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2650_p2() {
    grp_fu_2650_p2 = (grp_fu_2597_p2.read() & icmp_ln3469_4_reg_6582.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2655_p2() {
    grp_fu_2655_p2 = (grp_fu_2597_p2.read() & icmp_ln3469_5_reg_6587.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2660_p2() {
    grp_fu_2660_p2 = (grp_fu_2597_p2.read() & icmp_ln3373_2_reg_6537.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2665_p2() {
    grp_fu_2665_p2 = (!p_cast_reg_6379.read().is_01() || !zext_ln3424_11_reg_6609.read().is_01())? sc_lv<59>(): (sc_biguint<59>(p_cast_reg_6379.read()) + sc_biguint<59>(zext_ln3424_11_reg_6609.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2669_p2() {
    grp_fu_2669_p2 = (!ap_const_lv10_3F4.is_01() || !shl_ln2_fu_4287_p3.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_3F4) + sc_biguint<10>(shl_ln2_fu_4287_p3.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2674_p4() {
    grp_fu_2674_p4 = grp_fu_2669_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2684_p2() {
    grp_fu_2684_p2 = (!shl_ln2_fu_4287_p3.read().is_01() || !ap_const_lv10_3F8.is_01())? sc_lv<10>(): (sc_biguint<10>(shl_ln2_fu_4287_p3.read()) + sc_bigint<10>(ap_const_lv10_3F8));
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2689_p4() {
    grp_fu_2689_p4 = grp_fu_2684_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2699_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
            grp_fu_2699_p0 = shl_ln2_reg_7214.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
            grp_fu_2699_p0 = shl_ln2_fu_4287_p3.read();
        } else {
            grp_fu_2699_p0 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        grp_fu_2699_p0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2699_p2() {
    grp_fu_2699_p2 = (!grp_fu_2699_p0.read().is_01() || !ap_const_lv10_3F9.is_01())? sc_lv<10>(): (sc_biguint<10>(grp_fu_2699_p0.read()) + sc_bigint<10>(ap_const_lv10_3F9));
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2704_p4() {
    grp_fu_2704_p4 = grp_fu_2699_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2714_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
            grp_fu_2714_p0 = shl_ln2_reg_7214.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
            grp_fu_2714_p0 = shl_ln2_fu_4287_p3.read();
        } else {
            grp_fu_2714_p0 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        grp_fu_2714_p0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2714_p2() {
    grp_fu_2714_p2 = (!grp_fu_2714_p0.read().is_01() || !ap_const_lv10_3FA.is_01())? sc_lv<10>(): (sc_biguint<10>(grp_fu_2714_p0.read()) + sc_bigint<10>(ap_const_lv10_3FA));
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2719_p4() {
    grp_fu_2719_p4 = grp_fu_2714_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2729_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
            grp_fu_2729_p0 = shl_ln2_reg_7214.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
            grp_fu_2729_p0 = shl_ln2_fu_4287_p3.read();
        } else {
            grp_fu_2729_p0 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        grp_fu_2729_p0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2729_p2() {
    grp_fu_2729_p2 = (!grp_fu_2729_p0.read().is_01() || !ap_const_lv10_3FB.is_01())? sc_lv<10>(): (sc_biguint<10>(grp_fu_2729_p0.read()) + sc_bigint<10>(ap_const_lv10_3FB));
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2734_p4() {
    grp_fu_2734_p4 = grp_fu_2729_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2744_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_7_reg_6643_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_4_reg_6679_pp1_iter1_reg.read())))) {
        grp_fu_2744_p0 = shl_ln2_reg_7214.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_2744_p0 = shl_ln2_fu_4287_p3.read();
    } else {
        grp_fu_2744_p0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2744_p2() {
    grp_fu_2744_p2 = (!grp_fu_2744_p0.read().is_01() || !ap_const_lv10_3FC.is_01())? sc_lv<10>(): (sc_biguint<10>(grp_fu_2744_p0.read()) + sc_bigint<10>(ap_const_lv10_3FC));
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2749_p4() {
    grp_fu_2749_p4 = grp_fu_2744_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2759_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_8_reg_6647_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_5_reg_6683_pp1_iter1_reg.read())))) {
        grp_fu_2759_p0 = shl_ln2_reg_7214.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_2759_p0 = shl_ln2_fu_4287_p3.read();
    } else {
        grp_fu_2759_p0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2759_p2() {
    grp_fu_2759_p2 = (!grp_fu_2759_p0.read().is_01() || !ap_const_lv10_3FD.is_01())? sc_lv<10>(): (sc_biguint<10>(grp_fu_2759_p0.read()) + sc_bigint<10>(ap_const_lv10_3FD));
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2764_p4() {
    grp_fu_2764_p4 = grp_fu_2759_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2774_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_9_reg_6651_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_6_reg_6687_pp1_iter1_reg.read())))) {
        grp_fu_2774_p0 = shl_ln2_reg_7214.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_2774_p0 = shl_ln2_fu_4287_p3.read();
    } else {
        grp_fu_2774_p0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2774_p2() {
    grp_fu_2774_p2 = (!grp_fu_2774_p0.read().is_01() || !ap_const_lv10_3FE.is_01())? sc_lv<10>(): (sc_biguint<10>(grp_fu_2774_p0.read()) + sc_bigint<10>(ap_const_lv10_3FE));
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2779_p4() {
    grp_fu_2779_p4 = grp_fu_2774_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2789_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_10_reg_6655_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_7_reg_6691_pp1_iter1_reg.read())))) {
        grp_fu_2789_p0 = shl_ln2_reg_7214.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_2789_p0 = shl_ln2_fu_4287_p3.read();
    } else {
        grp_fu_2789_p0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2789_p2() {
    grp_fu_2789_p2 = (!grp_fu_2789_p0.read().is_01() || !ap_const_lv10_3FF.is_01())? sc_lv<10>(): (sc_biguint<10>(grp_fu_2789_p0.read()) + sc_bigint<10>(ap_const_lv10_3FF));
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_fu_2794_p4() {
    grp_fu_2794_p4 = grp_fu_2789_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_merlin_memcpy_0_0_fu_2478_ap_start() {
    grp_merlin_memcpy_0_0_fu_2478_ap_start = grp_merlin_memcpy_0_0_fu_2478_ap_start_reg.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_merlin_memcpy_1_0_0_fu_2470_ap_start() {
    grp_merlin_memcpy_1_0_0_fu_2470_ap_start = grp_merlin_memcpy_1_0_0_fu_2470_ap_start_reg.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_merlin_memcpy_2_0_fu_2502_ap_start() {
    grp_merlin_memcpy_2_0_fu_2502_ap_start = grp_merlin_memcpy_2_0_fu_2502_ap_start_reg.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_merlin_memcpy_3_0_fu_2486_ap_start() {
    grp_merlin_memcpy_3_0_fu_2486_ap_start = grp_merlin_memcpy_3_0_fu_2486_ap_start_reg.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_grp_merlin_memcpy_4_0_fu_2494_ap_start() {
    grp_merlin_memcpy_4_0_fu_2494_ap_start = grp_merlin_memcpy_4_0_fu_2494_ap_start_reg.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_head_align_fu_3261_p4() {
    head_align_fu_3261_p4 = phi_mul_reg_2307.read().range(5, 2);
}

void gcnconv_kernel_gcnconv_kernel::thread_i_1_fu_5825_p2() {
    i_1_fu_5825_p2 = (!i1_0_reg_2403.read().is_01() || !ap_const_lv15_1.is_01())? sc_lv<15>(): (sc_biguint<15>(i1_0_reg_2403.read()) + sc_biguint<15>(ap_const_lv15_1));
}

void gcnconv_kernel_gcnconv_kernel::thread_i_2_fu_5867_p2() {
    i_2_fu_5867_p2 = (!i3_0_reg_2414.read().is_01() || !ap_const_lv17_1.is_01())? sc_lv<17>(): (sc_biguint<17>(i3_0_reg_2414.read()) + sc_biguint<17>(ap_const_lv17_1));
}

void gcnconv_kernel_gcnconv_kernel::thread_i_3_fu_3245_p2() {
    i_3_fu_3245_p2 = (!i_0_reg_2295.read().is_01() || !ap_const_lv15_1.is_01())? sc_lv<15>(): (sc_biguint<15>(i_0_reg_2295.read()) + sc_biguint<15>(ap_const_lv15_1));
}

void gcnconv_kernel_gcnconv_kernel::thread_i_4_fu_5884_p2() {
    i_4_fu_5884_p2 = (!ap_phi_mux_i4_0_phi_fu_2429_p4.read().is_01() || !ap_const_lv17_1.is_01())? sc_lv<17>(): (sc_biguint<17>(ap_phi_mux_i4_0_phi_fu_2429_p4.read()) + sc_biguint<17>(ap_const_lv17_1));
}

void gcnconv_kernel_gcnconv_kernel::thread_i_5_fu_5907_p2() {
    i_5_fu_5907_p2 = (!i5_0_reg_2436.read().is_01() || !ap_const_lv15_1.is_01())? sc_lv<15>(): (sc_biguint<15>(i5_0_reg_2436.read()) + sc_biguint<15>(ap_const_lv15_1));
}

void gcnconv_kernel_gcnconv_kernel::thread_i_6_fu_5924_p2() {
    i_6_fu_5924_p2 = (!ap_phi_mux_i6_0_phi_fu_2451_p4.read().is_01() || !ap_const_lv17_1.is_01())? sc_lv<17>(): (sc_biguint<17>(ap_phi_mux_i6_0_phi_fu_2451_p4.read()) + sc_biguint<17>(ap_const_lv17_1));
}

void gcnconv_kernel_gcnconv_kernel::thread_i_7_fu_5966_p2() {
    i_7_fu_5966_p2 = (!ap_phi_mux_i7_0_phi_fu_2463_p4.read().is_01() || !ap_const_lv17_1.is_01())? sc_lv<17>(): (sc_biguint<17>(ap_phi_mux_i7_0_phi_fu_2463_p4.read()) + sc_biguint<17>(ap_const_lv17_1));
}

void gcnconv_kernel_gcnconv_kernel::thread_i_8_fu_3466_p2() {
    i_8_fu_3466_p2 = (!ap_phi_mux_i_0_i28_phi_fu_2322_p4.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(ap_phi_mux_i_0_i28_phi_fu_2322_p4.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void gcnconv_kernel_gcnconv_kernel::thread_i_fu_2905_p2() {
    i_fu_2905_p2 = (!i_0_i_reg_2260.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i_0_i_reg_2260.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln1097_fu_2899_p2() {
    icmp_ln1097_fu_2899_p2 = (!i_0_i_reg_2260.read().is_01() || !ap_const_lv9_1F4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_reg_2260.read() == ap_const_lv9_1F4);
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln1113_fu_3199_p2() {
    icmp_ln1113_fu_3199_p2 = (!index1_1_i_reg_2283.read().is_01() || !ap_const_lv64_0.is_01())? sc_lv<1>(): sc_lv<1>(index1_1_i_reg_2283.read() == ap_const_lv64_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln169_fu_3239_p2() {
    icmp_ln169_fu_3239_p2 = (!i_0_reg_2295.read().is_01() || !ap_const_lv15_4D05.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_2295.read() == ap_const_lv15_4D05);
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln178_fu_5693_p2() {
    icmp_ln178_fu_5693_p2 = (!j_0_reg_2330.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_2330.read() == ap_const_lv5_10);
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln182_fu_5727_p2() {
    icmp_ln182_fu_5727_p2 = (!ap_phi_mux_k_0_phi_fu_2346_p4.read().is_01() || !ap_const_lv9_1F4.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_0_phi_fu_2346_p4.read() == ap_const_lv9_1F4);
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln195_fu_5819_p2() {
    icmp_ln195_fu_5819_p2 = (!i1_0_reg_2403.read().is_01() || !ap_const_lv15_4D05.is_01())? sc_lv<1>(): sc_lv<1>(i1_0_reg_2403.read() == ap_const_lv15_4D05);
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln213_fu_5861_p2() {
    icmp_ln213_fu_5861_p2 = (!i3_0_reg_2414.read().is_01() || !ap_const_lv17_1A74D.is_01())? sc_lv<1>(): sc_lv<1>(i3_0_reg_2414.read() == ap_const_lv17_1A74D);
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln223_fu_5878_p2() {
    icmp_ln223_fu_5878_p2 = (!ap_phi_mux_i4_0_phi_fu_2429_p4.read().is_01() || !ap_const_lv17_1A74D.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i4_0_phi_fu_2429_p4.read() == ap_const_lv17_1A74D);
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln232_fu_5901_p2() {
    icmp_ln232_fu_5901_p2 = (!i5_0_reg_2436.read().is_01() || !ap_const_lv15_4D05.is_01())? sc_lv<1>(): sc_lv<1>(i5_0_reg_2436.read() == ap_const_lv15_4D05);
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln242_fu_5918_p2() {
    icmp_ln242_fu_5918_p2 = (!ap_phi_mux_i6_0_phi_fu_2451_p4.read().is_01() || !ap_const_lv17_1A74D.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i6_0_phi_fu_2451_p4.read() == ap_const_lv17_1A74D);
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln252_fu_5960_p2() {
    icmp_ln252_fu_5960_p2 = (!ap_phi_mux_i7_0_phi_fu_2463_p4.read().is_01() || !ap_const_lv17_1A74D.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i7_0_phi_fu_2463_p4.read() == ap_const_lv17_1A74D);
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln3346_fu_3331_p2() {
    icmp_ln3346_fu_3331_p2 = (!head_align_fu_3261_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(head_align_fu_3261_p4.read() == ap_const_lv4_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln3363_fu_3461_p2() {
    icmp_ln3363_fu_3461_p2 = (!ap_phi_mux_i_0_i28_phi_fu_2322_p4.read().is_01() || !len_reg_6510.read().is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_0_i28_phi_fu_2322_p4.read() == len_reg_6510.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln3373_1_fu_3381_p2() {
    icmp_ln3373_1_fu_3381_p2 = (!tail_align_fu_3271_p2.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tail_align_fu_3271_p2.read() == ap_const_lv4_3);
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln3373_2_fu_3387_p2() {
    icmp_ln3373_2_fu_3387_p2 = (!tail_align_fu_3271_p2.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(tail_align_fu_3271_p2.read() != ap_const_lv4_F);
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln3416_fu_3351_p2() {
    icmp_ln3416_fu_3351_p2 = (!head_align_fu_3261_p4.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(head_align_fu_3261_p4.read() == ap_const_lv4_4);
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln3419_fu_3481_p2() {
    icmp_ln3419_fu_3481_p2 = (!ap_phi_mux_i_0_i28_phi_fu_2322_p4.read().is_01() || !ap_const_lv6_0.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_0_i28_phi_fu_2322_p4.read() == ap_const_lv6_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln3421_1_fu_3393_p2() {
    icmp_ln3421_1_fu_3393_p2 = (!tail_align_fu_3271_p2.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): (sc_biguint<4>(tail_align_fu_3271_p2.read()) < sc_biguint<4>(ap_const_lv4_5));
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln3421_2_fu_3399_p2() {
    icmp_ln3421_2_fu_3399_p2 = (!tail_align_fu_3271_p2.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): (sc_biguint<4>(tail_align_fu_3271_p2.read()) < sc_biguint<4>(ap_const_lv4_6));
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln3421_3_fu_3405_p2() {
    icmp_ln3421_3_fu_3405_p2 = (!tail_align_fu_3271_p2.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): (sc_biguint<4>(tail_align_fu_3271_p2.read()) < sc_biguint<4>(ap_const_lv4_7));
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln3464_fu_3357_p2() {
    icmp_ln3464_fu_3357_p2 = (!head_align_fu_3261_p4.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(head_align_fu_3261_p4.read() == ap_const_lv4_8);
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln3469_1_fu_3431_p2() {
    icmp_ln3469_1_fu_3431_p2 = (!tail_align_fu_3271_p2.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): (sc_biguint<4>(tail_align_fu_3271_p2.read()) < sc_biguint<4>(ap_const_lv4_A));
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln3469_2_fu_3437_p2() {
    icmp_ln3469_2_fu_3437_p2 = (!tail_align_fu_3271_p2.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): (sc_biguint<4>(tail_align_fu_3271_p2.read()) < sc_biguint<4>(ap_const_lv4_B));
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln3469_3_fu_3443_p2() {
    icmp_ln3469_3_fu_3443_p2 = (!tail_align_fu_3271_p2.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): (sc_biguint<4>(tail_align_fu_3271_p2.read()) < sc_biguint<4>(ap_const_lv4_C));
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln3469_4_fu_3449_p2() {
    icmp_ln3469_4_fu_3449_p2 = (!tail_align_fu_3271_p2.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): (sc_biguint<4>(tail_align_fu_3271_p2.read()) < sc_biguint<4>(ap_const_lv4_D));
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln3469_5_fu_3455_p2() {
    icmp_ln3469_5_fu_3455_p2 = (!tail_align_fu_3271_p2.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): (sc_biguint<4>(tail_align_fu_3271_p2.read()) < sc_biguint<4>(ap_const_lv4_E));
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln3469_fu_3425_p2() {
    icmp_ln3469_fu_3425_p2 = (!tail_align_fu_3271_p2.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): (sc_biguint<4>(tail_align_fu_3271_p2.read()) < sc_biguint<4>(ap_const_lv4_9));
}

void gcnconv_kernel_gcnconv_kernel::thread_icmp_ln3512_fu_3363_p2() {
    icmp_ln3512_fu_3363_p2 = (!head_align_fu_3261_p4.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(head_align_fu_3261_p4.read() == ap_const_lv4_C);
}

void gcnconv_kernel_gcnconv_kernel::thread_index1_1_fu_3225_p3() {
    index1_1_fu_3225_p3 = (!icmp_ln1113_fu_3199_p2.read()[0].is_01())? sc_lv<64>(): ((icmp_ln1113_fu_3199_p2.read()[0].to_bool())? ap_const_lv64_0: index1_fu_3211_p2.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_index1_fu_3211_p2() {
    index1_fu_3211_p2 = (!ap_const_lv64_1.is_01() || !index1_1_i_reg_2283.read().is_01())? sc_lv<64>(): (sc_biguint<64>(ap_const_lv64_1) + sc_biguint<64>(index1_1_i_reg_2283.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_index2_1_fu_3217_p3() {
    index2_1_fu_3217_p3 = (!icmp_ln1113_fu_3199_p2.read()[0].is_01())? sc_lv<10>(): ((icmp_ln1113_fu_3199_p2.read()[0].to_bool())? index2_fu_3205_p2.read(): index2_2_i_reg_2271.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_index2_fu_3205_p2() {
    index2_fu_3205_p2 = (!ap_const_lv10_1.is_01() || !index2_2_i_reg_2271.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1) + sc_biguint<10>(index2_2_i_reg_2271.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_j_fu_5699_p2() {
    j_fu_5699_p2 = (!j_0_reg_2330.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j_0_reg_2330.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void gcnconv_kernel_gcnconv_kernel::thread_k_fu_5733_p2() {
    k_fu_5733_p2 = (!ap_phi_mux_k_0_phi_fu_2346_p4.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(ap_phi_mux_k_0_phi_fu_2346_p4.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void gcnconv_kernel_gcnconv_kernel::thread_len_fu_3343_p3() {
    len_fu_3343_p3 = (!icmp_ln3346_fu_3331_p2.read()[0].is_01())? sc_lv<6>(): ((icmp_ln3346_fu_3331_p2.read()[0].to_bool())? ap_const_lv6_20: sub_ln3347_fu_3337_p2.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_lshr_ln1_fu_4778_p4() {
    lshr_ln1_fu_4778_p4 = add_ln3424_fu_4772_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_lshr_ln2_fu_5772_p4() {
    lshr_ln2_fu_5772_p4 = ap_phi_mux_k_0_phi_fu_2346_p4.read().range(8, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_lshr_ln3424_1_fu_4803_p4() {
    lshr_ln3424_1_fu_4803_p4 = add_ln3424_1_fu_4797_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_lshr_ln3424_2_fu_4828_p4() {
    lshr_ln3424_2_fu_4828_p4 = add_ln3424_2_fu_4822_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_lshr_ln3424_3_fu_4853_p4() {
    lshr_ln3424_3_fu_4853_p4 = add_ln3424_3_fu_4847_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_lshr_ln3472_1_fu_4647_p4() {
    lshr_ln3472_1_fu_4647_p4 = add_ln3472_1_fu_4641_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_lshr_ln3472_2_fu_4672_p4() {
    lshr_ln3472_2_fu_4672_p4 = add_ln3472_2_fu_4666_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_lshr_ln3472_3_fu_4697_p4() {
    lshr_ln3472_3_fu_4697_p4 = add_ln3472_3_fu_4691_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_lshr_ln3520_1_fu_4501_p4() {
    lshr_ln3520_1_fu_4501_p4 = add_ln3520_1_fu_4495_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_lshr_ln3520_2_fu_4526_p4() {
    lshr_ln3520_2_fu_4526_p4 = add_ln3520_2_fu_4520_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_lshr_ln3520_3_fu_4551_p4() {
    lshr_ln3520_3_fu_4551_p4 = add_ln3520_3_fu_4545_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_lshr_ln3556_1_fu_4339_p4() {
    lshr_ln3556_1_fu_4339_p4 = add_ln3556_1_fu_4333_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_lshr_ln3556_2_fu_4364_p4() {
    lshr_ln3556_2_fu_4364_p4 = add_ln3556_2_fu_4358_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_lshr_ln3556_4_fu_4398_p4() {
    lshr_ln3556_4_fu_4398_p4 = add_ln3556_4_fu_4392_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_lshr_ln3556_5_fu_4423_p4() {
    lshr_ln3556_5_fu_4423_p4 = add_ln3556_5_fu_4417_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_lshr_ln3556_6_fu_4448_p4() {
    lshr_ln3556_6_fu_4448_p4 = add_ln3556_6_fu_4442_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_lshr_ln3_fu_4622_p4() {
    lshr_ln3_fu_4622_p4 = add_ln3472_fu_4616_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_lshr_ln5_fu_4314_p4() {
    lshr_ln5_fu_4314_p4 = add_ln3556_fu_4308_p2.read().range(9, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_lshr_ln_fu_3277_p4() {
    lshr_ln_fu_3277_p4 = phi_mul_reg_2307.read().range(25, 6);
}

void gcnconv_kernel_gcnconv_kernel::thread_norm_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        norm_address0 =  (sc_lv<17>) (zext_ln266_fu_5987_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter11.read()))) {
        norm_address0 =  (sc_lv<17>) (zext_ln247_reg_7679_pp7_iter10_reg.read());
    } else {
        norm_address0 =  (sc_lv<17>) ("XXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_norm_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter11.read())))) {
        norm_ce0 = ap_const_logic_1;
    } else {
        norm_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_norm_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln242_reg_7665_pp7_iter10_reg.read()))) {
        norm_we0 = ap_const_logic_1;
    } else {
        norm_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_or_ln1111_fu_3143_p2() {
    or_ln1111_fu_3143_p2 = (shl_ln_fu_3081_p3.read() | ap_const_lv3_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_or_ln3376_1_fu_4985_p2() {
    or_ln3376_1_fu_4985_p2 = (shl_ln3376_fu_4890_p2.read() | ap_const_lv6_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_or_ln3376_fu_4940_p2() {
    or_ln3376_fu_4940_p2 = (shl_ln3376_fu_4890_p2.read() | ap_const_lv6_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_or_ln3424_1_fu_5619_p2() {
    or_ln3424_1_fu_5619_p2 = (shl_ln3424_6_fu_5611_p3.read() | ap_const_lv7_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_or_ln3424_fu_5549_p2() {
    or_ln3424_fu_5549_p2 = (shl_ln3424_5_fu_5517_p3.read() | ap_const_lv7_1);
}

void gcnconv_kernel_gcnconv_kernel::thread_p_cast33_fu_2893_p1() {
    p_cast33_fu_2893_p1 = esl_zext<59,58>(tmp_18_reg_6344.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_p_cast_fu_2896_p1() {
    p_cast_fu_2896_p1 = esl_zext<59,58>(tmp_19_reg_6363.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_sext_ln160_fu_5997_p1() {
    sext_ln160_fu_5997_p1 = esl_sext<58,26>(trunc_ln160_fu_5993_p1.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_sext_ln207_fu_5852_p1() {
    sext_ln207_fu_5852_p1 = esl_sext<17,16>(add_ln207_fu_5846_p2.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_sext_ln228_fu_5896_p1() {
    sext_ln228_fu_5896_p1 = esl_sext<64,32>(edge_index_buf_0_q0.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_sext_ln247_1_fu_5950_p1() {
    sext_ln247_1_fu_5950_p1 = esl_sext<64,32>(edge_index_buf_1_q0.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_sext_ln247_fu_5955_p1() {
    sext_ln247_fu_5955_p1 = esl_sext<64,32>(edge_index_buf_1_q1.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_sext_ln266_fu_6010_p1() {
    sext_ln266_fu_6010_p1 = esl_sext<64,32>(edge_index_buf_3_q1.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln1_fu_4882_p3() {
    shl_ln1_fu_4882_p3 = esl_concat<6,1>(i_0_i28_reg_2318.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln2_fu_4287_p3() {
    shl_ln2_fu_4287_p3 = esl_concat<6,4>(i_0_i28_reg_2318.read(), ap_const_lv4_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln3376_fu_4890_p2() {
    shl_ln3376_fu_4890_p2 = (!ap_const_lv6_1.is_01())? sc_lv<6>(): i_0_i28_reg_2318.read() << (unsigned short)ap_const_lv6_1.to_uint();
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln3424_1_fu_5170_p3() {
    shl_ln3424_1_fu_5170_p3 = esl_concat<6,1>(i_0_i28_reg_2318_pp1_iter1_reg.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln3424_2_fu_5251_p3() {
    shl_ln3424_2_fu_5251_p3 = esl_concat<6,1>(i_0_i28_reg_2318_pp1_iter1_reg.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln3424_3_fu_5332_p3() {
    shl_ln3424_3_fu_5332_p3 = esl_concat<6,1>(i_0_i28_reg_2318_pp1_iter1_reg.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln3424_4_fu_5403_p3() {
    shl_ln3424_4_fu_5403_p3 = esl_concat<6,1>(i_0_i28_reg_2318_pp1_iter1_reg.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln3424_5_fu_5517_p3() {
    shl_ln3424_5_fu_5517_p3 = esl_concat<6,1>(i_0_i28_reg_2318_pp1_iter1_reg.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln3424_6_fu_5611_p3() {
    shl_ln3424_6_fu_5611_p3 = esl_concat<6,1>(i_0_i28_reg_2318_pp1_iter1_reg.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln3472_1_fu_5224_p3() {
    shl_ln3472_1_fu_5224_p3 = esl_concat<6,1>(i_0_i28_reg_2318_pp1_iter1_reg.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln3472_2_fu_5305_p3() {
    shl_ln3472_2_fu_5305_p3 = esl_concat<6,1>(i_0_i28_reg_2318_pp1_iter1_reg.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln3472_3_fu_5376_p3() {
    shl_ln3472_3_fu_5376_p3 = esl_concat<6,1>(i_0_i28_reg_2318_pp1_iter1_reg.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln3472_4_fu_5490_p3() {
    shl_ln3472_4_fu_5490_p3 = esl_concat<6,1>(i_0_i28_reg_2318_pp1_iter1_reg.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln3472_5_fu_5584_p3() {
    shl_ln3472_5_fu_5584_p3 = esl_concat<6,1>(i_0_i28_reg_2318_pp1_iter1_reg.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln3472_6_fu_5634_p3() {
    shl_ln3472_6_fu_5634_p3 = esl_concat<6,1>(i_0_i28_reg_2318_pp1_iter1_reg.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln3472_7_fu_5657_p3() {
    shl_ln3472_7_fu_5657_p3 = esl_concat<6,1>(i_0_i28_reg_2318_pp1_iter1_reg.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln3520_1_fu_5197_p3() {
    shl_ln3520_1_fu_5197_p3 = esl_concat<6,1>(i_0_i28_reg_2318_pp1_iter1_reg.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln3520_2_fu_5278_p3() {
    shl_ln3520_2_fu_5278_p3 = esl_concat<6,1>(i_0_i28_reg_2318_pp1_iter1_reg.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln3520_3_fu_5359_p3() {
    shl_ln3520_3_fu_5359_p3 = esl_concat<6,1>(i_0_i28_reg_2318_pp1_iter1_reg.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln3_fu_5143_p3() {
    shl_ln3_fu_5143_p3 = esl_concat<6,1>(i_0_i28_reg_2318_pp1_iter1_reg.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln4_fu_5116_p3() {
    shl_ln4_fu_5116_p3 = esl_concat<6,1>(i_0_i28_reg_2318_pp1_iter1_reg.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln5_fu_5063_p3() {
    shl_ln5_fu_5063_p3 = esl_concat<6,1>(i_0_i28_reg_2318_pp1_iter1_reg.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_shl_ln_fu_3081_p3() {
    shl_ln_fu_3081_p3 = esl_concat<2,1>(trunc_ln1111_fu_3077_p1.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_stall_done_ext() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_ext_blocking_n_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_ext_blocking_n.read()))) {
        stall_done_ext = ap_const_logic_1;
    } else {
        stall_done_ext = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_stall_done_int() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_int_blocking_n_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_int_blocking_n.read()))) {
        stall_done_int = ap_const_logic_1;
    } else {
        stall_done_int = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_stall_done_str() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_str_blocking_n_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_str_blocking_n.read()))) {
        stall_done_str = ap_const_logic_1;
    } else {
        stall_done_str = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_stall_start_ext() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_ext_blocking_n_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_ext_blocking_n.read()))) {
        stall_start_ext = ap_const_logic_1;
    } else {
        stall_start_ext = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_stall_start_int() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_int_blocking_n_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_int_blocking_n.read()))) {
        stall_start_int = ap_const_logic_1;
    } else {
        stall_start_int = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_stall_start_str() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_str_blocking_n_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_str_blocking_n.read()))) {
        stall_start_str = ap_const_logic_1;
    } else {
        stall_start_str = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_start_fu_3287_p1() {
    start_fu_3287_p1 = esl_zext<64,20>(lshr_ln_fu_3277_p4.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_sub_ln3347_fu_3337_p2() {
    sub_ln3347_fu_3337_p2 = (!trunc_ln2_fu_3311_p4.read().is_01() || !trunc_ln3347_1_fu_3321_p4.read().is_01())? sc_lv<6>(): (sc_biguint<6>(trunc_ln2_fu_3311_p4.read()) - sc_biguint<6>(trunc_ln3347_1_fu_3321_p4.read()));
}

void gcnconv_kernel_gcnconv_kernel::thread_tail_align_fu_3271_p2() {
    tail_align_fu_3271_p2 = (head_align_fu_3261_p4.read() | ap_const_lv4_3);
}

void gcnconv_kernel_gcnconv_kernel::thread_tmp_16_fu_6307_p17() {
    tmp_16_fu_6307_p17 = esl_concat<480,32>(esl_concat<448,32>(esl_concat<416,32>(esl_concat<384,32>(esl_concat<352,32>(esl_concat<320,32>(esl_concat<288,32>(esl_concat<256,32>(esl_concat<224,32>(esl_concat<192,32>(esl_concat<160,32>(esl_concat<128,32>(esl_concat<96,32>(esl_concat<64,32>(esl_concat<32,32>(bitcast_ln177_15_fu_6304_p1.read(), bitcast_ln177_14_fu_6301_p1.read()), bitcast_ln177_13_fu_6298_p1.read()), bitcast_ln177_12_fu_6295_p1.read()), bitcast_ln177_11_fu_6292_p1.read()), bitcast_ln177_10_fu_6289_p1.read()), bitcast_ln177_9_fu_6286_p1.read()), bitcast_ln177_8_fu_6283_p1.read()), bitcast_ln177_7_fu_6280_p1.read()), bitcast_ln177_6_fu_6277_p1.read()), bitcast_ln177_5_fu_6274_p1.read()), bitcast_ln177_4_fu_6271_p1.read()), bitcast_ln177_3_fu_6268_p1.read()), bitcast_ln177_2_fu_6265_p1.read()), bitcast_ln177_1_fu_6262_p1.read()), bitcast_ln177_fu_6258_p1.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_tmp_17_fu_3065_p3() {
    tmp_17_fu_3065_p3 = esl_concat<10,1>(index2_2_i_reg_2271.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_tmp_20_fu_5739_p3() {
    tmp_20_fu_5739_p3 = esl_concat<9,1>(ap_phi_mux_k_0_phi_fu_2346_p4.read(), ap_const_lv1_0);
}

void gcnconv_kernel_gcnconv_kernel::thread_tmp_21_fu_3411_p3() {
    tmp_21_fu_3411_p3 = tail_align_fu_3271_p2.read().range(3, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_tmp_22_fu_5713_p4() {
    tmp_22_fu_5713_p4 = j_0_reg_2330.read().range(4, 3);
}

void gcnconv_kernel_gcnconv_kernel::thread_trunc_ln1110_fu_2911_p1() {
    trunc_ln1110_fu_2911_p1 = gmem_RDATA.read().range(32-1, 0);
}

void gcnconv_kernel_gcnconv_kernel::thread_trunc_ln1111_fu_3077_p1() {
    trunc_ln1111_fu_3077_p1 = index1_1_i_reg_2283.read().range(2-1, 0);
}

void gcnconv_kernel_gcnconv_kernel::thread_trunc_ln160_fu_5993_p1() {
    trunc_ln160_fu_5993_p1 = edge_index_buf_3_q0.read().range(26-1, 0);
}

void gcnconv_kernel_gcnconv_kernel::thread_trunc_ln162_fu_6040_p1() {
    trunc_ln162_fu_6040_p1 = gmem_RDATA.read().range(32-1, 0);
}

void gcnconv_kernel_gcnconv_kernel::thread_trunc_ln187_1_fu_5768_p1() {
    trunc_ln187_1_fu_5768_p1 = ap_phi_mux_k_0_phi_fu_2346_p4.read().range(3-1, 0);
}

void gcnconv_kernel_gcnconv_kernel::thread_trunc_ln187_fu_5705_p1() {
    trunc_ln187_fu_5705_p1 = j_0_reg_2330.read().range(3-1, 0);
}

void gcnconv_kernel_gcnconv_kernel::thread_trunc_ln189_fu_5815_p1() {
    trunc_ln189_fu_5815_p1 = j_0_reg_2330.read().range(4-1, 0);
}

void gcnconv_kernel_gcnconv_kernel::thread_trunc_ln2_fu_3311_p4() {
    trunc_ln2_fu_3311_p4 = add_ln3342_fu_3291_p2.read().range(9, 4);
}

void gcnconv_kernel_gcnconv_kernel::thread_trunc_ln3347_1_fu_3321_p4() {
    trunc_ln3347_1_fu_3321_p4 = phi_mul_reg_2307.read().range(11, 6);
}

void gcnconv_kernel_gcnconv_kernel::thread_trunc_ln3375_fu_4133_p1() {
    trunc_ln3375_fu_4133_p1 = gmem_RDATA.read().range(32-1, 0);
}

void gcnconv_kernel_gcnconv_kernel::thread_trunc_ln3423_fu_4099_p1() {
    trunc_ln3423_fu_4099_p1 = gmem_RDATA.read().range(32-1, 0);
}

void gcnconv_kernel_gcnconv_kernel::thread_trunc_ln3471_fu_4014_p1() {
    trunc_ln3471_fu_4014_p1 = gmem_RDATA.read().range(32-1, 0);
}

void gcnconv_kernel_gcnconv_kernel::thread_trunc_ln3519_fu_3900_p1() {
    trunc_ln3519_fu_3900_p1 = gmem_RDATA.read().range(32-1, 0);
}

void gcnconv_kernel_gcnconv_kernel::thread_trunc_ln3555_fu_3756_p1() {
    trunc_ln3555_fu_3756_p1 = gmem_RDATA.read().range(32-1, 0);
}

void gcnconv_kernel_gcnconv_kernel::thread_trunc_ln_fu_3251_p4() {
    trunc_ln_fu_3251_p4 = phi_mul_reg_2307.read().range(25, 2);
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        weight_buf_0_0_address0 =  (sc_lv<10>) (zext_ln187_3_fu_5756_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        weight_buf_0_0_address0 =  (sc_lv<10>) (zext_ln1111_1_fu_3099_p1.read());
    } else {
        weight_buf_0_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_0_address1() {
    weight_buf_0_0_address1 =  (sc_lv<10>) (zext_ln1111_3_fu_3159_p1.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_buf_0_0_ce0 = ap_const_logic_1;
    } else {
        weight_buf_0_0_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        weight_buf_0_0_ce1 = ap_const_logic_1;
    } else {
        weight_buf_0_0_ce1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_0_d0() {
    weight_buf_0_0_d0 = trunc_ln1110_reg_6396.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_0_d1() {
    weight_buf_0_0_d1 = raw_bits_8_reg_6436.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_0_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln1097_reg_6387_pp0_iter1_reg.read()))) {
        weight_buf_0_0_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_0_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_0_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln1097_reg_6387_pp0_iter1_reg.read()))) {
        weight_buf_0_0_we1 = ap_const_logic_1;
    } else {
        weight_buf_0_0_we1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        weight_buf_0_1_address0 =  (sc_lv<10>) (zext_ln187_3_fu_5756_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        weight_buf_0_1_address0 =  (sc_lv<10>) (zext_ln1111_1_fu_3099_p1.read());
    } else {
        weight_buf_0_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_1_address1() {
    weight_buf_0_1_address1 =  (sc_lv<10>) (zext_ln1111_3_fu_3159_p1.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_buf_0_1_ce0 = ap_const_logic_1;
    } else {
        weight_buf_0_1_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        weight_buf_0_1_ce1 = ap_const_logic_1;
    } else {
        weight_buf_0_1_ce1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_1_d0() {
    weight_buf_0_1_d0 = raw_bits_1_reg_6401.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_1_d1() {
    weight_buf_0_1_d1 = raw_bits_9_reg_6441.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_1_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln1097_reg_6387_pp0_iter1_reg.read()))) {
        weight_buf_0_1_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_1_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_1_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln1097_reg_6387_pp0_iter1_reg.read()))) {
        weight_buf_0_1_we1 = ap_const_logic_1;
    } else {
        weight_buf_0_1_we1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        weight_buf_0_2_address0 =  (sc_lv<10>) (zext_ln187_3_fu_5756_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        weight_buf_0_2_address0 =  (sc_lv<10>) (zext_ln1111_1_fu_3099_p1.read());
    } else {
        weight_buf_0_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_2_address1() {
    weight_buf_0_2_address1 =  (sc_lv<10>) (zext_ln1111_3_fu_3159_p1.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_buf_0_2_ce0 = ap_const_logic_1;
    } else {
        weight_buf_0_2_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        weight_buf_0_2_ce1 = ap_const_logic_1;
    } else {
        weight_buf_0_2_ce1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_2_d0() {
    weight_buf_0_2_d0 = raw_bits_s_reg_6406.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_2_d1() {
    weight_buf_0_2_d1 = raw_bits_7_reg_6446.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_2_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln1097_reg_6387_pp0_iter1_reg.read()))) {
        weight_buf_0_2_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_2_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_2_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln1097_reg_6387_pp0_iter1_reg.read()))) {
        weight_buf_0_2_we1 = ap_const_logic_1;
    } else {
        weight_buf_0_2_we1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        weight_buf_0_3_address0 =  (sc_lv<10>) (zext_ln187_3_fu_5756_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        weight_buf_0_3_address0 =  (sc_lv<10>) (zext_ln1111_1_fu_3099_p1.read());
    } else {
        weight_buf_0_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_3_address1() {
    weight_buf_0_3_address1 =  (sc_lv<10>) (zext_ln1111_3_fu_3159_p1.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_buf_0_3_ce0 = ap_const_logic_1;
    } else {
        weight_buf_0_3_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        weight_buf_0_3_ce1 = ap_const_logic_1;
    } else {
        weight_buf_0_3_ce1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_3_d0() {
    weight_buf_0_3_d0 = raw_bits_2_reg_6411.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_3_d1() {
    weight_buf_0_3_d1 = raw_bits_10_reg_6451.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_3_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln1097_reg_6387_pp0_iter1_reg.read()))) {
        weight_buf_0_3_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_3_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_3_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln1097_reg_6387_pp0_iter1_reg.read()))) {
        weight_buf_0_3_we1 = ap_const_logic_1;
    } else {
        weight_buf_0_3_we1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        weight_buf_0_4_address0 =  (sc_lv<10>) (zext_ln187_3_fu_5756_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        weight_buf_0_4_address0 =  (sc_lv<10>) (zext_ln1111_1_fu_3099_p1.read());
    } else {
        weight_buf_0_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_4_address1() {
    weight_buf_0_4_address1 =  (sc_lv<10>) (zext_ln1111_3_fu_3159_p1.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_buf_0_4_ce0 = ap_const_logic_1;
    } else {
        weight_buf_0_4_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        weight_buf_0_4_ce1 = ap_const_logic_1;
    } else {
        weight_buf_0_4_ce1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_4_d0() {
    weight_buf_0_4_d0 = raw_bits_3_reg_6416.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_4_d1() {
    weight_buf_0_4_d1 = raw_bits_11_reg_6456.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_4_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln1097_reg_6387_pp0_iter1_reg.read()))) {
        weight_buf_0_4_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_4_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_4_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln1097_reg_6387_pp0_iter1_reg.read()))) {
        weight_buf_0_4_we1 = ap_const_logic_1;
    } else {
        weight_buf_0_4_we1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        weight_buf_0_5_address0 =  (sc_lv<10>) (zext_ln187_3_fu_5756_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        weight_buf_0_5_address0 =  (sc_lv<10>) (zext_ln1111_1_fu_3099_p1.read());
    } else {
        weight_buf_0_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_5_address1() {
    weight_buf_0_5_address1 =  (sc_lv<10>) (zext_ln1111_3_fu_3159_p1.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_buf_0_5_ce0 = ap_const_logic_1;
    } else {
        weight_buf_0_5_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        weight_buf_0_5_ce1 = ap_const_logic_1;
    } else {
        weight_buf_0_5_ce1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_5_d0() {
    weight_buf_0_5_d0 = raw_bits_4_reg_6421.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_5_d1() {
    weight_buf_0_5_d1 = raw_bits_12_reg_6461.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_5_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln1097_reg_6387_pp0_iter1_reg.read()))) {
        weight_buf_0_5_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_5_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_5_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln1097_reg_6387_pp0_iter1_reg.read()))) {
        weight_buf_0_5_we1 = ap_const_logic_1;
    } else {
        weight_buf_0_5_we1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        weight_buf_0_6_address0 =  (sc_lv<10>) (zext_ln187_3_fu_5756_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        weight_buf_0_6_address0 =  (sc_lv<10>) (zext_ln1111_1_fu_3099_p1.read());
    } else {
        weight_buf_0_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_6_address1() {
    weight_buf_0_6_address1 =  (sc_lv<10>) (zext_ln1111_3_fu_3159_p1.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_buf_0_6_ce0 = ap_const_logic_1;
    } else {
        weight_buf_0_6_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        weight_buf_0_6_ce1 = ap_const_logic_1;
    } else {
        weight_buf_0_6_ce1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_6_d0() {
    weight_buf_0_6_d0 = raw_bits_5_reg_6426.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_6_d1() {
    weight_buf_0_6_d1 = raw_bits_13_reg_6466.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_6_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln1097_reg_6387_pp0_iter1_reg.read()))) {
        weight_buf_0_6_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_6_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_6_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln1097_reg_6387_pp0_iter1_reg.read()))) {
        weight_buf_0_6_we1 = ap_const_logic_1;
    } else {
        weight_buf_0_6_we1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        weight_buf_0_7_address0 =  (sc_lv<10>) (zext_ln187_3_fu_5756_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        weight_buf_0_7_address0 =  (sc_lv<10>) (zext_ln1111_1_fu_3099_p1.read());
    } else {
        weight_buf_0_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_7_address1() {
    weight_buf_0_7_address1 =  (sc_lv<10>) (zext_ln1111_3_fu_3159_p1.read());
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_buf_0_7_ce0 = ap_const_logic_1;
    } else {
        weight_buf_0_7_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        weight_buf_0_7_ce1 = ap_const_logic_1;
    } else {
        weight_buf_0_7_ce1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_7_d0() {
    weight_buf_0_7_d0 = raw_bits_6_reg_6431.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_7_d1() {
    weight_buf_0_7_d1 = raw_bits_14_reg_6471.read();
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_7_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln1097_reg_6387_pp0_iter1_reg.read()))) {
        weight_buf_0_7_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_7_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_weight_buf_0_7_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln1097_reg_6387_pp0_iter1_reg.read()))) {
        weight_buf_0_7_we1 = ap_const_logic_1;
    } else {
        weight_buf_0_7_we1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        x_buf_0_0_address0 =  (sc_lv<6>) (zext_ln187_2_fu_5782_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        x_buf_0_0_address0 =  (sc_lv<6>) (zext_ln3424_9_fu_5555_p1.read());
    } else if ((esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        x_buf_0_0_address0 =  (sc_lv<6>) (zext_ln3376_fu_4896_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()))) {
        x_buf_0_0_address0 =  (sc_lv<6>) (zext_ln3472_fu_4632_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_reg_6663.read()))) {
        x_buf_0_0_address0 =  (sc_lv<6>) (zext_ln3520_4_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_3_reg_6627.read()))) {
        x_buf_0_0_address0 =  (sc_lv<6>) (zext_ln3556_7_fu_4467_p1.read());
    } else {
        x_buf_0_0_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if (esl_seteq<1,1,1>(ap_condition_7174.read(), ap_const_boolean_1)) {
            x_buf_0_0_address1 =  (sc_lv<6>) (zext_ln3424_4_fu_5178_p1.read());
        } else if (esl_seteq<1,1,1>(ap_condition_7170.read(), ap_const_boolean_1)) {
            x_buf_0_0_address1 =  (sc_lv<6>) (zext_ln3472_8_fu_5151_p1.read());
        } else if (esl_seteq<1,1,1>(ap_condition_7166.read(), ap_const_boolean_1)) {
            x_buf_0_0_address1 =  (sc_lv<6>) (zext_ln3520_12_fu_5124_p1.read());
        } else if (esl_seteq<1,1,1>(ap_condition_7162.read(), ap_const_boolean_1)) {
            x_buf_0_0_address1 =  (sc_lv<6>) (zext_ln3556_15_fu_5071_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
            x_buf_0_0_address1 =  (sc_lv<6>) (zext_ln3376_1_fu_4946_p1.read());
        } else {
            x_buf_0_0_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        x_buf_0_0_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_3_reg_6627.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_reg_6663.read())))) {
        x_buf_0_0_ce0 = ap_const_logic_1;
    } else {
        x_buf_0_0_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_11_reg_6659_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_8_reg_6695_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_4_reg_6727_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_reg_6759_pp1_iter1_reg.read())))) {
        x_buf_0_0_ce1 = ap_const_logic_1;
    } else {
        x_buf_0_0_ce1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
            x_buf_0_0_d0 = bitcast_ln3424_12_fu_5545_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7196.read(), ap_const_boolean_1)) {
            x_buf_0_0_d0 = bitcast_ln3376_fu_4878_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7192.read(), ap_const_boolean_1)) {
            x_buf_0_0_d0 = bitcast_ln3472_fu_4612_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7186.read(), ap_const_boolean_1)) {
            x_buf_0_0_d0 = bitcast_ln3520_4_fu_4566_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7179.read(), ap_const_boolean_1)) {
            x_buf_0_0_d0 = bitcast_ln3556_7_fu_4463_p1.read();
        } else {
            x_buf_0_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        x_buf_0_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_0_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if (esl_seteq<1,1,1>(ap_condition_7174.read(), ap_const_boolean_1)) {
            x_buf_0_0_d1 = bitcast_ln3424_4_fu_5166_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7170.read(), ap_const_boolean_1)) {
            x_buf_0_0_d1 = bitcast_ln3472_8_fu_5139_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7166.read(), ap_const_boolean_1)) {
            x_buf_0_0_d1 = bitcast_ln3520_12_fu_5112_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7162.read(), ap_const_boolean_1)) {
            x_buf_0_0_d1 = bitcast_ln3556_15_fu_5059_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
            x_buf_0_0_d1 = bitcast_ln3376_8_fu_4936_p1.read();
        } else {
            x_buf_0_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        x_buf_0_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3421_reg_6605_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_3_reg_6627.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_reg_6663.read())))) {
        x_buf_0_0_we0 = ap_const_logic_1;
    } else {
        x_buf_0_0_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_0_we1() {
    if (((esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3373_reg_6779.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_11_reg_6659_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_8_reg_6695_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_4_reg_6727_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_reg_6759_pp1_iter1_reg.read())))) {
        x_buf_0_0_we1 = ap_const_logic_1;
    } else {
        x_buf_0_0_we1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        x_buf_0_1_address0 =  (sc_lv<6>) (zext_ln187_2_fu_5782_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        x_buf_0_1_address0 =  (sc_lv<6>) (zext_ln3424_9_fu_5555_p1.read());
    } else if ((esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        x_buf_0_1_address0 =  (sc_lv<6>) (zext_ln3376_fu_4896_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()))) {
        x_buf_0_1_address0 =  (sc_lv<6>) (zext_ln3472_1_fu_4657_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_1_reg_6667.read()))) {
        x_buf_0_1_address0 =  (sc_lv<6>) (zext_ln3520_5_fu_4579_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        x_buf_0_1_address0 =  (sc_lv<6>) (zext_ln3556_fu_4324_p1.read());
    } else {
        x_buf_0_1_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if (esl_seteq<1,1,1>(ap_condition_7215.read(), ap_const_boolean_1)) {
            x_buf_0_1_address1 =  (sc_lv<6>) (zext_ln3424_5_fu_5259_p1.read());
        } else if (esl_seteq<1,1,1>(ap_condition_7209.read(), ap_const_boolean_1)) {
            x_buf_0_1_address1 =  (sc_lv<6>) (zext_ln3472_9_fu_5232_p1.read());
        } else if (esl_seteq<1,1,1>(ap_condition_7203.read(), ap_const_boolean_1)) {
            x_buf_0_1_address1 =  (sc_lv<6>) (zext_ln3520_13_fu_5205_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
            x_buf_0_1_address1 =  (sc_lv<6>) (zext_ln3556_8_fu_5000_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
            x_buf_0_1_address1 =  (sc_lv<6>) (zext_ln3376_1_fu_4946_p1.read());
        } else {
            x_buf_0_1_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        x_buf_0_1_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_1_reg_6667.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)))) {
        x_buf_0_1_ce0 = ap_const_logic_1;
    } else {
        x_buf_0_1_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_9_reg_6699_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_5_reg_6731_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_1_reg_6763_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)))) {
        x_buf_0_1_ce1 = ap_const_logic_1;
    } else {
        x_buf_0_1_ce1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
            x_buf_0_1_d0 = bitcast_ln3424_13_fu_5562_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7196.read(), ap_const_boolean_1)) {
            x_buf_0_1_d0 = bitcast_ln3376_1_fu_4908_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7192.read(), ap_const_boolean_1)) {
            x_buf_0_1_d0 = bitcast_ln3472_1_fu_4637_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7220.read(), ap_const_boolean_1)) {
            x_buf_0_1_d0 = bitcast_ln3520_5_fu_4575_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7178.read(), ap_const_boolean_1)) {
            x_buf_0_1_d0 = bitcast_ln3556_fu_4304_p1.read();
        } else {
            x_buf_0_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        x_buf_0_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_1_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if (esl_seteq<1,1,1>(ap_condition_7215.read(), ap_const_boolean_1)) {
            x_buf_0_1_d1 = bitcast_ln3424_5_fu_5247_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7209.read(), ap_const_boolean_1)) {
            x_buf_0_1_d1 = bitcast_ln3472_9_fu_5220_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7203.read(), ap_const_boolean_1)) {
            x_buf_0_1_d1 = bitcast_ln3520_13_fu_5193_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
            x_buf_0_1_d1 = bitcast_ln3556_8_fu_4996_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
            x_buf_0_1_d1 = bitcast_ln3376_9_fu_4957_p1.read();
        } else {
            x_buf_0_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        x_buf_0_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_1_reg_6667.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3421_reg_6605_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)))) {
        x_buf_0_1_we0 = ap_const_logic_1;
    } else {
        x_buf_0_1_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_1_we1() {
    if (((esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3373_reg_6779.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_4_reg_6631_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_9_reg_6699_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_5_reg_6731_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_1_reg_6763_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)))) {
        x_buf_0_1_we1 = ap_const_logic_1;
    } else {
        x_buf_0_1_we1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        x_buf_0_2_address0 =  (sc_lv<6>) (zext_ln187_2_fu_5782_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        x_buf_0_2_address0 =  (sc_lv<6>) (zext_ln3424_9_fu_5555_p1.read());
    } else if ((esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        x_buf_0_2_address0 =  (sc_lv<6>) (zext_ln3376_fu_4896_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()))) {
        x_buf_0_2_address0 =  (sc_lv<6>) (zext_ln3472_2_fu_4682_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_2_reg_6671.read()))) {
        x_buf_0_2_address0 =  (sc_lv<6>) (zext_ln3520_6_fu_4588_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        x_buf_0_2_address0 =  (sc_lv<6>) (zext_ln3556_1_fu_4349_p1.read());
    } else {
        x_buf_0_2_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if (esl_seteq<1,1,1>(ap_condition_7237.read(), ap_const_boolean_1)) {
            x_buf_0_2_address1 =  (sc_lv<6>) (zext_ln3424_6_fu_5340_p1.read());
        } else if (esl_seteq<1,1,1>(ap_condition_7231.read(), ap_const_boolean_1)) {
            x_buf_0_2_address1 =  (sc_lv<6>) (zext_ln3472_10_fu_5313_p1.read());
        } else if (esl_seteq<1,1,1>(ap_condition_7225.read(), ap_const_boolean_1)) {
            x_buf_0_2_address1 =  (sc_lv<6>) (zext_ln3520_14_fu_5286_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
            x_buf_0_2_address1 =  (sc_lv<6>) (zext_ln3556_9_fu_5009_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
            x_buf_0_2_address1 =  (sc_lv<6>) (zext_ln3376_1_fu_4946_p1.read());
        } else {
            x_buf_0_2_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        x_buf_0_2_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_2_reg_6671.read())))) {
        x_buf_0_2_ce0 = ap_const_logic_1;
    } else {
        x_buf_0_2_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_10_reg_6703_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_6_reg_6735_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_2_reg_6767_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)))) {
        x_buf_0_2_ce1 = ap_const_logic_1;
    } else {
        x_buf_0_2_ce1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
            x_buf_0_2_d0 = bitcast_ln3424_14_fu_5566_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7196.read(), ap_const_boolean_1)) {
            x_buf_0_2_d0 = bitcast_ln3376_2_fu_4912_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7192.read(), ap_const_boolean_1)) {
            x_buf_0_2_d0 = bitcast_ln3472_2_fu_4662_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7240.read(), ap_const_boolean_1)) {
            x_buf_0_2_d0 = bitcast_ln3520_6_fu_4584_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7178.read(), ap_const_boolean_1)) {
            x_buf_0_2_d0 = bitcast_ln3556_1_fu_4329_p1.read();
        } else {
            x_buf_0_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        x_buf_0_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_2_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if (esl_seteq<1,1,1>(ap_condition_7237.read(), ap_const_boolean_1)) {
            x_buf_0_2_d1 = bitcast_ln3424_6_fu_5328_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7231.read(), ap_const_boolean_1)) {
            x_buf_0_2_d1 = bitcast_ln3472_10_fu_5301_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7225.read(), ap_const_boolean_1)) {
            x_buf_0_2_d1 = bitcast_ln3520_14_fu_5274_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
            x_buf_0_2_d1 = bitcast_ln3556_9_fu_5005_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
            x_buf_0_2_d1 = bitcast_ln3376_10_fu_4961_p1.read();
        } else {
            x_buf_0_2_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        x_buf_0_2_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3421_reg_6605_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_2_reg_6671.read())))) {
        x_buf_0_2_we0 = ap_const_logic_1;
    } else {
        x_buf_0_2_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_2_we1() {
    if (((esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3373_reg_6779.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_5_reg_6635_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_10_reg_6703_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_6_reg_6735_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_2_reg_6767_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)))) {
        x_buf_0_2_we1 = ap_const_logic_1;
    } else {
        x_buf_0_2_we1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        x_buf_0_3_address0 =  (sc_lv<6>) (zext_ln187_2_fu_5782_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        x_buf_0_3_address0 =  (sc_lv<6>) (zext_ln3424_10_fu_5625_p1.read());
    } else if ((esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        x_buf_0_3_address0 =  (sc_lv<6>) (zext_ln3376_fu_4896_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()))) {
        x_buf_0_3_address0 =  (sc_lv<6>) (zext_ln3472_3_fu_4707_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_3_reg_6675.read()))) {
        x_buf_0_3_address0 =  (sc_lv<6>) (zext_ln3520_7_fu_4597_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        x_buf_0_3_address0 =  (sc_lv<6>) (zext_ln3556_2_fu_4374_p1.read());
    } else {
        x_buf_0_3_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if (esl_seteq<1,1,1>(ap_condition_7257.read(), ap_const_boolean_1)) {
            x_buf_0_3_address1 =  (sc_lv<6>) (zext_ln3424_7_fu_5411_p1.read());
        } else if (esl_seteq<1,1,1>(ap_condition_7251.read(), ap_const_boolean_1)) {
            x_buf_0_3_address1 =  (sc_lv<6>) (zext_ln3472_11_fu_5384_p1.read());
        } else if (esl_seteq<1,1,1>(ap_condition_7245.read(), ap_const_boolean_1)) {
            x_buf_0_3_address1 =  (sc_lv<6>) (zext_ln3520_15_fu_5367_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
            x_buf_0_3_address1 =  (sc_lv<6>) (zext_ln3556_10_fu_5018_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
            x_buf_0_3_address1 =  (sc_lv<6>) (zext_ln3376_1_fu_4946_p1.read());
        } else {
            x_buf_0_3_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        x_buf_0_3_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_3_reg_6675.read())))) {
        x_buf_0_3_ce0 = ap_const_logic_1;
    } else {
        x_buf_0_3_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_11_reg_6707_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_7_reg_6739_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_3_reg_6771_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        x_buf_0_3_ce1 = ap_const_logic_1;
    } else {
        x_buf_0_3_ce1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
            x_buf_0_3_d0 = bitcast_ln3424_15_fu_5607_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7196.read(), ap_const_boolean_1)) {
            x_buf_0_3_d0 = bitcast_ln3376_3_fu_4916_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7192.read(), ap_const_boolean_1)) {
            x_buf_0_3_d0 = bitcast_ln3472_3_fu_4687_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7260.read(), ap_const_boolean_1)) {
            x_buf_0_3_d0 = bitcast_ln3520_7_fu_4593_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7178.read(), ap_const_boolean_1)) {
            x_buf_0_3_d0 = bitcast_ln3556_2_fu_4354_p1.read();
        } else {
            x_buf_0_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        x_buf_0_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_3_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if (esl_seteq<1,1,1>(ap_condition_7257.read(), ap_const_boolean_1)) {
            x_buf_0_3_d1 = bitcast_ln3424_7_fu_5399_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7251.read(), ap_const_boolean_1)) {
            x_buf_0_3_d1 = bitcast_ln3472_11_fu_5372_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7245.read(), ap_const_boolean_1)) {
            x_buf_0_3_d1 = bitcast_ln3520_15_fu_5355_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
            x_buf_0_3_d1 = bitcast_ln3556_10_fu_5014_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
            x_buf_0_3_d1 = bitcast_ln3376_11_fu_4965_p1.read();
        } else {
            x_buf_0_3_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        x_buf_0_3_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_3_reg_6675.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_4_reg_6775_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0)))) {
        x_buf_0_3_we0 = ap_const_logic_1;
    } else {
        x_buf_0_3_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_3_we1() {
    if (((esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3373_reg_6779.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_6_reg_6639_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_11_reg_6707_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_7_reg_6739_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3421_3_reg_6771_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        x_buf_0_3_we1 = ap_const_logic_1;
    } else {
        x_buf_0_3_we1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        x_buf_0_4_address0 =  (sc_lv<6>) (zext_ln187_2_fu_5782_p1.read());
    } else if ((esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3373_reg_6788.read()))) {
        x_buf_0_4_address0 =  (sc_lv<6>) (zext_ln3376_fu_4896_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()))) {
        x_buf_0_4_address0 =  (sc_lv<6>) (zext_ln3424_fu_4788_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_reg_6711.read()))) {
        x_buf_0_4_address0 =  (sc_lv<6>) (zext_ln3472_4_fu_4716_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()))) {
        x_buf_0_4_address0 =  (sc_lv<6>) (zext_ln3520_fu_4486_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        x_buf_0_4_address0 =  (sc_lv<6>) (zext_ln3556_3_fu_4383_p1.read());
    } else {
        x_buf_0_4_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if (esl_seteq<1,1,1>(ap_condition_7281.read(), ap_const_boolean_1)) {
            x_buf_0_4_address1 =  (sc_lv<6>) (zext_ln3424_8_fu_5525_p1.read());
        } else if (esl_seteq<1,1,1>(ap_condition_7275.read(), ap_const_boolean_1)) {
            x_buf_0_4_address1 =  (sc_lv<6>) (zext_ln3472_12_fu_5498_p1.read());
        } else if (esl_seteq<1,1,1>(ap_condition_7269.read(), ap_const_boolean_1)) {
            x_buf_0_4_address1 =  (sc_lv<6>) (zext_ln3520_8_fu_5080_p1.read());
        } else if (esl_seteq<1,1,1>(ap_condition_7265.read(), ap_const_boolean_1)) {
            x_buf_0_4_address1 =  (sc_lv<6>) (zext_ln3556_11_fu_5027_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
            x_buf_0_4_address1 =  (sc_lv<6>) (zext_ln3376_1_fu_4946_p1.read());
        } else {
            x_buf_0_4_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        x_buf_0_4_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_reg_6711.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3373_reg_6788.read())))) {
        x_buf_0_4_ce0 = ap_const_logic_1;
    } else {
        x_buf_0_4_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3421_reg_6605_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_7_reg_6643_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_4_reg_6679_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_8_reg_6743_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)))) {
        x_buf_0_4_ce1 = ap_const_logic_1;
    } else {
        x_buf_0_4_ce1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_4_d0() {
    if (esl_seteq<1,1,1>(ap_condition_257.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3373_reg_6788.read()))) {
            x_buf_0_4_d0 = bitcast_ln3376_4_fu_4920_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3559.read(), ap_const_boolean_1)) {
            x_buf_0_4_d0 = bitcast_ln3424_fu_4768_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3543.read(), ap_const_boolean_1)) {
            x_buf_0_4_d0 = bitcast_ln3472_4_fu_4712_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3507.read(), ap_const_boolean_1)) {
            x_buf_0_4_d0 = bitcast_ln3520_fu_4482_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3481.read(), ap_const_boolean_1)) {
            x_buf_0_4_d0 = bitcast_ln3556_3_fu_4379_p1.read();
        } else {
            x_buf_0_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        x_buf_0_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_4_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if (esl_seteq<1,1,1>(ap_condition_7281.read(), ap_const_boolean_1)) {
            x_buf_0_4_d1 = bitcast_ln3424_8_fu_5513_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7275.read(), ap_const_boolean_1)) {
            x_buf_0_4_d1 = bitcast_ln3472_12_fu_5486_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7269.read(), ap_const_boolean_1)) {
            x_buf_0_4_d1 = bitcast_ln3520_8_fu_5076_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7265.read(), ap_const_boolean_1)) {
            x_buf_0_4_d1 = bitcast_ln3556_11_fu_5023_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
            x_buf_0_4_d1 = bitcast_ln3376_12_fu_4969_p1.read();
        } else {
            x_buf_0_4_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        x_buf_0_4_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_reg_6711.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3373_reg_6788.read())))) {
        x_buf_0_4_we0 = ap_const_logic_1;
    } else {
        x_buf_0_4_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_4_we1() {
    if (((esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3373_reg_6779.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3421_reg_6605_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_7_reg_6643_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_4_reg_6679_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_8_reg_6743_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)))) {
        x_buf_0_4_we1 = ap_const_logic_1;
    } else {
        x_buf_0_4_we1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        x_buf_0_5_address0 =  (sc_lv<6>) (zext_ln187_2_fu_5782_p1.read());
    } else if ((esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3373_reg_6779.read()))) {
        x_buf_0_5_address0 =  (sc_lv<6>) (zext_ln3376_fu_4896_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()))) {
        x_buf_0_5_address0 =  (sc_lv<6>) (zext_ln3424_1_fu_4813_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_1_reg_6715.read()))) {
        x_buf_0_5_address0 =  (sc_lv<6>) (zext_ln3472_5_fu_4725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()))) {
        x_buf_0_5_address0 =  (sc_lv<6>) (zext_ln3520_1_fu_4511_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_reg_6615.read()))) {
        x_buf_0_5_address0 =  (sc_lv<6>) (zext_ln3556_4_fu_4408_p1.read());
    } else {
        x_buf_0_5_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
            x_buf_0_5_address1 =  (sc_lv<6>) (zext_ln3472_13_fu_5592_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
            x_buf_0_5_address1 =  (sc_lv<6>) (zext_ln3424_8_fu_5525_p1.read());
        } else if (esl_seteq<1,1,1>(ap_condition_7298.read(), ap_const_boolean_1)) {
            x_buf_0_5_address1 =  (sc_lv<6>) (zext_ln3520_9_fu_5089_p1.read());
        } else if (esl_seteq<1,1,1>(ap_condition_7295.read(), ap_const_boolean_1)) {
            x_buf_0_5_address1 =  (sc_lv<6>) (zext_ln3556_12_fu_5036_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
            x_buf_0_5_address1 =  (sc_lv<6>) (zext_ln3376_1_fu_4946_p1.read());
        } else {
            x_buf_0_5_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        x_buf_0_5_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_5_ce0() {
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
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_reg_6615.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_1_reg_6715.read())))) {
        x_buf_0_5_ce0 = ap_const_logic_1;
    } else {
        x_buf_0_5_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_8_reg_6647_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_5_reg_6683_pp1_iter1_reg.read())))) {
        x_buf_0_5_ce1 = ap_const_logic_1;
    } else {
        x_buf_0_5_ce1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_5_d0() {
    if (esl_seteq<1,1,1>(ap_condition_257.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3373_reg_6779.read()))) {
            x_buf_0_5_d0 = bitcast_ln3376_5_fu_4924_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3559.read(), ap_const_boolean_1)) {
            x_buf_0_5_d0 = bitcast_ln3424_1_fu_4793_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3547.read(), ap_const_boolean_1)) {
            x_buf_0_5_d0 = bitcast_ln3472_5_fu_4721_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3507.read(), ap_const_boolean_1)) {
            x_buf_0_5_d0 = bitcast_ln3520_1_fu_4491_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3491.read(), ap_const_boolean_1)) {
            x_buf_0_5_d0 = bitcast_ln3556_4_fu_4388_p1.read();
        } else {
            x_buf_0_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        x_buf_0_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_5_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
            x_buf_0_5_d1 = bitcast_ln3472_13_fu_5580_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
            x_buf_0_5_d1 = bitcast_ln3424_9_fu_5533_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7298.read(), ap_const_boolean_1)) {
            x_buf_0_5_d1 = bitcast_ln3520_9_fu_5085_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7295.read(), ap_const_boolean_1)) {
            x_buf_0_5_d1 = bitcast_ln3556_12_fu_5032_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
            x_buf_0_5_d1 = bitcast_ln3376_13_fu_4973_p1.read();
        } else {
            x_buf_0_5_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        x_buf_0_5_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_5_we0() {
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
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_reg_6615.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_1_reg_6715.read())))) {
        x_buf_0_5_we0 = ap_const_logic_1;
    } else {
        x_buf_0_5_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_5_we1() {
    if (((esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3373_reg_6779.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3421_reg_6605_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_8_reg_6647_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_5_reg_6683_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_9_reg_6747_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0)))) {
        x_buf_0_5_we1 = ap_const_logic_1;
    } else {
        x_buf_0_5_we1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        x_buf_0_6_address0 =  (sc_lv<6>) (zext_ln187_2_fu_5782_p1.read());
    } else if ((esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3373_reg_6779.read()))) {
        x_buf_0_6_address0 =  (sc_lv<6>) (zext_ln3376_fu_4896_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()))) {
        x_buf_0_6_address0 =  (sc_lv<6>) (zext_ln3424_2_fu_4838_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_2_reg_6719.read()))) {
        x_buf_0_6_address0 =  (sc_lv<6>) (zext_ln3472_6_fu_4734_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()))) {
        x_buf_0_6_address0 =  (sc_lv<6>) (zext_ln3520_2_fu_4536_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_1_reg_6619.read()))) {
        x_buf_0_6_address0 =  (sc_lv<6>) (zext_ln3556_5_fu_4433_p1.read());
    } else {
        x_buf_0_6_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
            x_buf_0_6_address1 =  (sc_lv<6>) (zext_ln3472_14_fu_5642_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
            x_buf_0_6_address1 =  (sc_lv<6>) (zext_ln3424_8_fu_5525_p1.read());
        } else if (esl_seteq<1,1,1>(ap_condition_7308.read(), ap_const_boolean_1)) {
            x_buf_0_6_address1 =  (sc_lv<6>) (zext_ln3520_10_fu_5098_p1.read());
        } else if (esl_seteq<1,1,1>(ap_condition_7305.read(), ap_const_boolean_1)) {
            x_buf_0_6_address1 =  (sc_lv<6>) (zext_ln3556_13_fu_5045_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
            x_buf_0_6_address1 =  (sc_lv<6>) (zext_ln3376_1_fu_4946_p1.read());
        } else {
            x_buf_0_6_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        x_buf_0_6_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_6_ce0() {
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
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_1_reg_6619.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_2_reg_6719.read())))) {
        x_buf_0_6_ce0 = ap_const_logic_1;
    } else {
        x_buf_0_6_ce0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_9_reg_6651_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_6_reg_6687_pp1_iter1_reg.read())))) {
        x_buf_0_6_ce1 = ap_const_logic_1;
    } else {
        x_buf_0_6_ce1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_6_d0() {
    if (esl_seteq<1,1,1>(ap_condition_257.read(), ap_const_boolean_1)) {
        if ((esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3373_reg_6779.read()))) {
            x_buf_0_6_d0 = bitcast_ln3376_6_fu_4928_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3559.read(), ap_const_boolean_1)) {
            x_buf_0_6_d0 = bitcast_ln3424_2_fu_4818_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3551.read(), ap_const_boolean_1)) {
            x_buf_0_6_d0 = bitcast_ln3472_6_fu_4730_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3507.read(), ap_const_boolean_1)) {
            x_buf_0_6_d0 = bitcast_ln3520_2_fu_4516_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3495.read(), ap_const_boolean_1)) {
            x_buf_0_6_d0 = bitcast_ln3556_5_fu_4413_p1.read();
        } else {
            x_buf_0_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        x_buf_0_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_6_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
            x_buf_0_6_d1 = bitcast_ln3472_14_fu_5630_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
            x_buf_0_6_d1 = bitcast_ln3424_10_fu_5537_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7308.read(), ap_const_boolean_1)) {
            x_buf_0_6_d1 = bitcast_ln3520_10_fu_5094_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_7305.read(), ap_const_boolean_1)) {
            x_buf_0_6_d1 = bitcast_ln3556_13_fu_5041_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
            x_buf_0_6_d1 = bitcast_ln3376_14_fu_4977_p1.read();
        } else {
            x_buf_0_6_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        x_buf_0_6_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_6_we0() {
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
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_1_reg_6619.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_2_reg_6719.read())))) {
        x_buf_0_6_we0 = ap_const_logic_1;
    } else {
        x_buf_0_6_we0 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_6_we1() {
    if (((esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3373_reg_6779.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3421_reg_6605_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_9_reg_6651_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3517_6_reg_6687_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_10_reg_6751_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0)))) {
        x_buf_0_6_we1 = ap_const_logic_1;
    } else {
        x_buf_0_6_we1 = ap_const_logic_0;
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        x_buf_0_7_address0 =  (sc_lv<6>) (zext_ln187_2_fu_5782_p1.read());
    } else if ((esl_seteq<1,1,1>(icmp_ln3346_reg_6506.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3373_reg_6779.read()))) {
        x_buf_0_7_address0 =  (sc_lv<6>) (zext_ln3376_fu_4896_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3416_reg_6515.read()))) {
        x_buf_0_7_address0 =  (sc_lv<6>) (zext_ln3424_3_fu_4863_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3464_reg_6519.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3469_3_reg_6723.read()))) {
        x_buf_0_7_address0 =  (sc_lv<6>) (zext_ln3472_7_fu_4743_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln3512_reg_6523.read()))) {
        x_buf_0_7_address0 =  (sc_lv<6>) (zext_ln3520_3_fu_4561_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3346_reg_6506.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3416_reg_6515.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3464_reg_6519.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3512_reg_6523.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln3419_reg_6601.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, and_ln3553_2_reg_6623.read()))) {
        x_buf_0_7_address0 =  (sc_lv<6>) (zext_ln3556_6_fu_4458_p1.read());
    } else {
        x_buf_0_7_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void gcnconv_kernel_gcnconv_kernel::thread_x_buf_0_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
            x_buf_0_7_address1 =  (sc_lv<6>) (zext_ln3472_15_fu_5669_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
            x_buf_0_7_address1 =  (sc_lv<6>) (zext_ln3424_8_fu_5525_p1.read());
        } else if (esl_seteq<1,1,1>(ap_condition_7319.read(), ap_const_boolean_1)) {
            x_buf_0_7_address1 =  (sc_lv<6>) (zext_ln3520_11_fu_5107_p1.read());
        } else if (esl_seteq<1,1,1>(ap_condition_7316.read(), ap_const_boolean_1)) {
            x_buf_0_7_address1 =  (sc_lv<6>) (zext_ln3556_14_fu_5054_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
            x_buf_0_7_address1 =  (sc_lv<6>) (zext_ln3376_2_fu_4991_p1.read());
        } else {
            x_buf_0_7_address1 =  (sc_lv<6>) ("XXXXXX");
        }
    } else {
        x_buf_0_7_address1 =  (sc_lv<6>) ("XXXXXX");
    }
}

}
