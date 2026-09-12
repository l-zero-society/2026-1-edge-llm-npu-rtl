// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputeUnit.h for the primary calling header

#include "VComputeUnit__pch.h"
#include "VComputeUnit_QuantActCore.h"

VL_ATTR_COLD void VComputeUnit_QuantActCore___ctor_var_reset(VComputeUnit_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_QuantActCore___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_in_tpu = VL_RAND_RESET_I(32);
    vlSelf->io_in_direct = VL_RAND_RESET_I(10);
    vlSelf->io_input_mode = VL_RAND_RESET_I(1);
    vlSelf->io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->io_param = VL_RAND_RESET_I(32);
    vlSelf->io_act_mask = VL_RAND_RESET_I(2);
    vlSelf->io_fusion_second = VL_RAND_RESET_I(1);
    vlSelf->io_stall = VL_RAND_RESET_I(1);
    vlSelf->io_lut_wr_en = VL_RAND_RESET_I(1);
    vlSelf->io_lut_wr_addr = VL_RAND_RESET_I(6);
    vlSelf->io_lut_wr_data_0 = VL_RAND_RESET_I(8);
    vlSelf->io_lut_wr_data_1 = VL_RAND_RESET_I(8);
    vlSelf->io_lut_wr_data_2 = VL_RAND_RESET_I(8);
    vlSelf->io_lut_wr_data_3 = VL_RAND_RESET_I(8);
    vlSelf->io_lut_wr_data_4 = VL_RAND_RESET_I(8);
    vlSelf->io_lut_wr_data_5 = VL_RAND_RESET_I(8);
    vlSelf->io_lut_wr_data_6 = VL_RAND_RESET_I(8);
    vlSelf->io_lut_wr_data_7 = VL_RAND_RESET_I(8);
    vlSelf->io_lut_wr_data_8 = VL_RAND_RESET_I(8);
    vlSelf->io_lut_wr_data_9 = VL_RAND_RESET_I(8);
    vlSelf->io_lut_wr_data_10 = VL_RAND_RESET_I(8);
    vlSelf->io_lut_wr_data_11 = VL_RAND_RESET_I(8);
    vlSelf->io_lut_wr_data_12 = VL_RAND_RESET_I(8);
    vlSelf->io_lut_wr_data_13 = VL_RAND_RESET_I(8);
    vlSelf->io_lut_wr_data_14 = VL_RAND_RESET_I(8);
    vlSelf->io_lut_wr_data_15 = VL_RAND_RESET_I(8);
    vlSelf->io_out_qact = VL_RAND_RESET_I(8);
    vlSelf->io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->io_out_lookahead = VL_RAND_RESET_I(1);
    vlSelf->io_busy = VL_RAND_RESET_I(1);
    vlSelf->io_lut_ready = VL_RAND_RESET_I(1);
    vlSelf->io_sync_alert = VL_RAND_RESET_I(1);
    vlSelf->__PVT__actLut_io_rd_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__actLut_io_rd_data = VL_RAND_RESET_I(8);
    vlSelf->__PVT__s1Sub = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__s1Mult = VL_RAND_RESET_I(16);
    vlSelf->__PVT__s1Shift = VL_RAND_RESET_I(5);
    vlSelf->__PVT__s1ActEn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s1Direct = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s1Valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s2MultRes = VL_RAND_RESET_Q(49);
    vlSelf->__PVT__s2Shift = VL_RAND_RESET_I(5);
    vlSelf->__PVT__s2ActEn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s2Valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__shifted = VL_RAND_RESET_Q(49);
    vlSelf->__PVT__s3Idx = VL_RAND_RESET_I(10);
    vlSelf->__PVT__s3Linear = VL_RAND_RESET_I(8);
    vlSelf->__PVT__s3ActEn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s3Valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_22 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__linearReq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__linearDataD1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__linearValidD1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rawValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__holdValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__holdData = VL_RAND_RESET_I(8);
    vlSelf->__PVT___GEN_27 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__expectedRdValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__expectedWrValid = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_h017163a2__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_3[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_4[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_5[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_6[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_7[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_8[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_9[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_10[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_11[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_12[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_13[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_14[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = VL_RAND_RESET_I(1);
    vlSelf->__PVT__actLut__DOT__is_programmed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__actLut__DOT__last_write_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__actLut__DOT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__actLut__DOT__rd_col_delayed = VL_RAND_RESET_I(4);
    vlSelf->__PVT__actLut__DOT__io_rd_valid_REG = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void VComputeUnit_QuantActCore___configure_coverage(VComputeUnit_QuantActCore* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_QuantActCore___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
