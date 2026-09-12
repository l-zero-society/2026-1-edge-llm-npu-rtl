// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRopeUnit.h for the primary calling header

#include "VRopeUnit__pch.h"
#include "VRopeUnit_RopePairCore.h"

VL_ATTR_COLD void VRopeUnit_RopePairCore___ctor_var_reset(VRopeUnit_RopePairCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VRopeUnit_RopePairCore___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_x_even = VL_RAND_RESET_I(8);
    vlSelf->io_x_odd = VL_RAND_RESET_I(8);
    vlSelf->io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->io_angle_idx = VL_RAND_RESET_I(10);
    vlSelf->io_stall = VL_RAND_RESET_I(1);
    vlSelf->io_lut_cos_wr_en = VL_RAND_RESET_I(1);
    vlSelf->io_lut_sin_wr_en = VL_RAND_RESET_I(1);
    vlSelf->io_lut_wr_addr = VL_RAND_RESET_I(7);
    vlSelf->io_lut_wr_data_0 = VL_RAND_RESET_I(16);
    vlSelf->io_lut_wr_data_1 = VL_RAND_RESET_I(16);
    vlSelf->io_lut_wr_data_2 = VL_RAND_RESET_I(16);
    vlSelf->io_lut_wr_data_3 = VL_RAND_RESET_I(16);
    vlSelf->io_lut_wr_data_4 = VL_RAND_RESET_I(16);
    vlSelf->io_lut_wr_data_5 = VL_RAND_RESET_I(16);
    vlSelf->io_lut_wr_data_6 = VL_RAND_RESET_I(16);
    vlSelf->io_lut_wr_data_7 = VL_RAND_RESET_I(16);
    vlSelf->io_y_even = VL_RAND_RESET_I(8);
    vlSelf->io_y_odd = VL_RAND_RESET_I(8);
    vlSelf->io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->io_lut_ready = VL_RAND_RESET_I(1);
    vlSelf->io_sync_alert = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cosLut_io_rd_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__xEvenD1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__xOddD1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__coeffValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rawEven = VL_RAND_RESET_I(8);
    vlSelf->__PVT__rawOdd = VL_RAND_RESET_I(8);
    vlSelf->__PVT__holdValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__holdEven = VL_RAND_RESET_I(8);
    vlSelf->__PVT__holdOdd = VL_RAND_RESET_I(8);
    vlSelf->__PVT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__expectedRd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__expectedCosWr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__expectedSinWr = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_0[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_1[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_2[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_3[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_4[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_5[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_6[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_7[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0 = VL_RAND_RESET_I(7);
    vlSelf->__PVT__cosLut__DOT__io_wr_valid_REG = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cosLut__DOT__is_programmed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cosLut__DOT__last_write_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cosLut__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cosLut__DOT__rd_col_delayed = VL_RAND_RESET_I(3);
    vlSelf->__PVT__cosLut__DOT__io_rd_valid_REG = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_0[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_1[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_2[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_3[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_4[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_5[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_6[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_7[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__sinLut__DOT__io_wr_valid_REG = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sinLut__DOT__is_programmed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sinLut__DOT__last_write_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sinLut__DOT___GEN_12 = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void VRopeUnit_RopePairCore___configure_coverage(VRopeUnit_RopePairCore* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VRopeUnit_RopePairCore___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
