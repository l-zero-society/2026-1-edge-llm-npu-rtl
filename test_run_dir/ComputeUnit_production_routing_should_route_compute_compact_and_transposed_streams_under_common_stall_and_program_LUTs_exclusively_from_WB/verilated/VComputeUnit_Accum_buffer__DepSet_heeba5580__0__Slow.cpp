// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputeUnit.h for the primary calling header

#include "VComputeUnit__pch.h"
#include "VComputeUnit_Accum_buffer.h"

VL_ATTR_COLD void VComputeUnit_Accum_buffer___ctor_var_reset(VComputeUnit_Accum_buffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Accum_buffer___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_in_scalar = VL_RAND_RESET_I(32);
    vlSelf->io_accum_en = VL_RAND_RESET_I(1);
    vlSelf->io_first_tile = VL_RAND_RESET_I(1);
    vlSelf->io_snapshot = VL_RAND_RESET_I(1);
    vlSelf->io_stall = VL_RAND_RESET_I(1);
    vlSelf->io_read_en = VL_RAND_RESET_I(1);
    vlSelf->io_read_bank = VL_RAND_RESET_I(1);
    vlSelf->io_read_row = VL_RAND_RESET_I(4);
    vlSelf->io_out_scalar = VL_RAND_RESET_I(32);
    vlSelf->io_accum_alert = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bank0_0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank0_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank0_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank0_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank0_4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank0_5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank0_6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank0_7 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank0_8 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank0_9 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank0_10 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank0_11 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank0_12 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank0_13 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank0_14 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank0_15 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank1_0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank1_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank1_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank1_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank1_4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank1_5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank1_6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank1_7 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank1_8 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank1_9 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank1_10 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank1_11 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank1_12 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank1_13 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank1_14 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bank1_15 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__write_bank = VL_RAND_RESET_I(1);
    vlSelf->__PVT__row_ptr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__current_sum_full = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__lastRow = VL_RAND_RESET_I(1);
    vlSelf->__PVT___readWriteCollision_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT___row_ptr_T_1 = VL_RAND_RESET_I(4);
}

VL_ATTR_COLD void VComputeUnit_Accum_buffer___configure_coverage(VComputeUnit_Accum_buffer* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_Accum_buffer___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
