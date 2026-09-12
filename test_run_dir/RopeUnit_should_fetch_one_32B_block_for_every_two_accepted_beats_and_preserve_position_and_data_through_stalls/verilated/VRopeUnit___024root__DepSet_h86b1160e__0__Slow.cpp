// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRopeUnit.h for the primary calling header

#include "VRopeUnit__pch.h"
#include "VRopeUnit___024root.h"

VL_ATTR_COLD void VRopeUnit___024root___eval_static(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___eval_static\n"); );
}

VL_ATTR_COLD void VRopeUnit___024root___eval_initial(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VRopeUnit___024root___eval_final(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRopeUnit___024root___dump_triggers__stl(VRopeUnit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VRopeUnit___024root___eval_phase__stl(VRopeUnit___024root* vlSelf);

VL_ATTR_COLD void VRopeUnit___024root___eval_settle(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VRopeUnit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("RopeUnit.sv", 677, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VRopeUnit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRopeUnit___024root___dump_triggers__stl(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRopeUnit___024root___eval_triggers__stl(VRopeUnit___024root* vlSelf);
VL_ATTR_COLD void VRopeUnit___024root___eval_stl(VRopeUnit___024root* vlSelf);

VL_ATTR_COLD bool VRopeUnit___024root___eval_phase__stl(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VRopeUnit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VRopeUnit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRopeUnit___024root___dump_triggers__ico(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VRopeUnit___024root___dump_triggers__act(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VRopeUnit___024root___dump_triggers__nba(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRopeUnit___024root___ctor_var_reset(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_in_vec_0 = VL_RAND_RESET_I(8);
    vlSelf->io_in_vec_1 = VL_RAND_RESET_I(8);
    vlSelf->io_in_vec_2 = VL_RAND_RESET_I(8);
    vlSelf->io_in_vec_3 = VL_RAND_RESET_I(8);
    vlSelf->io_in_vec_4 = VL_RAND_RESET_I(8);
    vlSelf->io_in_vec_5 = VL_RAND_RESET_I(8);
    vlSelf->io_in_vec_6 = VL_RAND_RESET_I(8);
    vlSelf->io_in_vec_7 = VL_RAND_RESET_I(8);
    vlSelf->io_in_vec_8 = VL_RAND_RESET_I(8);
    vlSelf->io_in_vec_9 = VL_RAND_RESET_I(8);
    vlSelf->io_in_vec_10 = VL_RAND_RESET_I(8);
    vlSelf->io_in_vec_11 = VL_RAND_RESET_I(8);
    vlSelf->io_in_vec_12 = VL_RAND_RESET_I(8);
    vlSelf->io_in_vec_13 = VL_RAND_RESET_I(8);
    vlSelf->io_in_vec_14 = VL_RAND_RESET_I(8);
    vlSelf->io_in_vec_15 = VL_RAND_RESET_I(8);
    vlSelf->io_in_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->io_in_valid_1 = VL_RAND_RESET_I(1);
    vlSelf->io_in_valid_2 = VL_RAND_RESET_I(1);
    vlSelf->io_in_valid_3 = VL_RAND_RESET_I(1);
    vlSelf->io_in_valid_4 = VL_RAND_RESET_I(1);
    vlSelf->io_in_valid_5 = VL_RAND_RESET_I(1);
    vlSelf->io_in_valid_6 = VL_RAND_RESET_I(1);
    vlSelf->io_in_valid_7 = VL_RAND_RESET_I(1);
    vlSelf->io_in_valid_8 = VL_RAND_RESET_I(1);
    vlSelf->io_in_valid_9 = VL_RAND_RESET_I(1);
    vlSelf->io_in_valid_10 = VL_RAND_RESET_I(1);
    vlSelf->io_in_valid_11 = VL_RAND_RESET_I(1);
    vlSelf->io_in_valid_12 = VL_RAND_RESET_I(1);
    vlSelf->io_in_valid_13 = VL_RAND_RESET_I(1);
    vlSelf->io_in_valid_14 = VL_RAND_RESET_I(1);
    vlSelf->io_in_valid_15 = VL_RAND_RESET_I(1);
    vlSelf->io_rope_en = VL_RAND_RESET_I(1);
    vlSelf->io_stall = VL_RAND_RESET_I(1);
    vlSelf->io_soft_reset = VL_RAND_RESET_I(1);
    vlSelf->io_row_change_update = VL_RAND_RESET_I(1);
    vlSelf->io_position_init = VL_RAND_RESET_I(1);
    vlSelf->io_base_m_in = VL_RAND_RESET_I(32);
    vlSelf->io_freq_req_block = VL_RAND_RESET_I(1);
    vlSelf->io_freq_block_in_0 = VL_RAND_RESET_I(16);
    vlSelf->io_freq_block_in_1 = VL_RAND_RESET_I(16);
    vlSelf->io_freq_block_in_2 = VL_RAND_RESET_I(16);
    vlSelf->io_freq_block_in_3 = VL_RAND_RESET_I(16);
    vlSelf->io_freq_block_in_4 = VL_RAND_RESET_I(16);
    vlSelf->io_freq_block_in_5 = VL_RAND_RESET_I(16);
    vlSelf->io_freq_block_in_6 = VL_RAND_RESET_I(16);
    vlSelf->io_freq_block_in_7 = VL_RAND_RESET_I(16);
    vlSelf->io_freq_block_in_8 = VL_RAND_RESET_I(16);
    vlSelf->io_freq_block_in_9 = VL_RAND_RESET_I(16);
    vlSelf->io_freq_block_in_10 = VL_RAND_RESET_I(16);
    vlSelf->io_freq_block_in_11 = VL_RAND_RESET_I(16);
    vlSelf->io_freq_block_in_12 = VL_RAND_RESET_I(16);
    vlSelf->io_freq_block_in_13 = VL_RAND_RESET_I(16);
    vlSelf->io_freq_block_in_14 = VL_RAND_RESET_I(16);
    vlSelf->io_freq_block_in_15 = VL_RAND_RESET_I(16);
    vlSelf->io_freq_block_valid = VL_RAND_RESET_I(1);
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
    vlSelf->io_out_vec_0 = VL_RAND_RESET_I(8);
    vlSelf->io_out_vec_1 = VL_RAND_RESET_I(8);
    vlSelf->io_out_vec_2 = VL_RAND_RESET_I(8);
    vlSelf->io_out_vec_3 = VL_RAND_RESET_I(8);
    vlSelf->io_out_vec_4 = VL_RAND_RESET_I(8);
    vlSelf->io_out_vec_5 = VL_RAND_RESET_I(8);
    vlSelf->io_out_vec_6 = VL_RAND_RESET_I(8);
    vlSelf->io_out_vec_7 = VL_RAND_RESET_I(8);
    vlSelf->io_out_vec_8 = VL_RAND_RESET_I(8);
    vlSelf->io_out_vec_9 = VL_RAND_RESET_I(8);
    vlSelf->io_out_vec_10 = VL_RAND_RESET_I(8);
    vlSelf->io_out_vec_11 = VL_RAND_RESET_I(8);
    vlSelf->io_out_vec_12 = VL_RAND_RESET_I(8);
    vlSelf->io_out_vec_13 = VL_RAND_RESET_I(8);
    vlSelf->io_out_vec_14 = VL_RAND_RESET_I(8);
    vlSelf->io_out_vec_15 = VL_RAND_RESET_I(8);
    vlSelf->io_out_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_1 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_2 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_3 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_4 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_5 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_6 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_7 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_8 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_9 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_10 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_11 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_12 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_13 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_14 = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid_15 = VL_RAND_RESET_I(1);
    vlSelf->io_prefetch_ready = VL_RAND_RESET_I(1);
    vlSelf->io_lut_ready = VL_RAND_RESET_I(1);
    vlSelf->io_sync_alert = VL_RAND_RESET_I(1);
    vlSelf->RopeUnit__DOT__pairs_0_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->RopeUnit__DOT__pairs_0_io_angle_idx = VL_RAND_RESET_I(10);
    vlSelf->RopeUnit__DOT__pairs_1_io_angle_idx = VL_RAND_RESET_I(10);
    vlSelf->RopeUnit__DOT__pairs_2_io_angle_idx = VL_RAND_RESET_I(10);
    vlSelf->RopeUnit__DOT__pairs_3_io_angle_idx = VL_RAND_RESET_I(10);
    vlSelf->RopeUnit__DOT__pairs_4_io_angle_idx = VL_RAND_RESET_I(10);
    vlSelf->RopeUnit__DOT__pairs_5_io_angle_idx = VL_RAND_RESET_I(10);
    vlSelf->RopeUnit__DOT__pairs_6_io_angle_idx = VL_RAND_RESET_I(10);
    vlSelf->RopeUnit__DOT__pairs_7_io_angle_idx = VL_RAND_RESET_I(10);
    vlSelf->RopeUnit__DOT___anyValid_T = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__inputFire = VL_RAND_RESET_I(1);
    vlSelf->RopeUnit__DOT__rowCounter = VL_RAND_RESET_I(4);
    vlSelf->RopeUnit__DOT__tileEnd = VL_RAND_RESET_I(1);
    vlSelf->RopeUnit__DOT___rowCounter_T_1 = VL_RAND_RESET_I(4);
    vlSelf->RopeUnit__DOT__activeMBase = VL_RAND_RESET_I(32);
    vlSelf->RopeUnit__DOT__shadowMBase = VL_RAND_RESET_I(32);
    vlSelf->RopeUnit__DOT__activeMValid = VL_RAND_RESET_I(1);
    vlSelf->RopeUnit__DOT__shadowMValid = VL_RAND_RESET_I(1);
    vlSelf->RopeUnit__DOT___GEN_3 = VL_RAND_RESET_I(32);
    vlSelf->RopeUnit__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->RopeUnit__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->RopeUnit__DOT___shadowMBase_T_1 = VL_RAND_RESET_I(32);
    vlSelf->RopeUnit__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->RopeUnit__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->RopeUnit__DOT__activeFreqBlock_0 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__activeFreqBlock_1 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__activeFreqBlock_2 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__activeFreqBlock_3 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__activeFreqBlock_4 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__activeFreqBlock_5 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__activeFreqBlock_6 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__activeFreqBlock_7 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__activeFreqBlock_8 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__activeFreqBlock_9 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__activeFreqBlock_10 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__activeFreqBlock_11 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__activeFreqBlock_12 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__activeFreqBlock_13 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__activeFreqBlock_14 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__activeFreqBlock_15 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__shadowFreqBlock_0 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__shadowFreqBlock_1 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__shadowFreqBlock_2 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__shadowFreqBlock_3 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__shadowFreqBlock_4 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__shadowFreqBlock_5 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__shadowFreqBlock_6 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__shadowFreqBlock_7 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__shadowFreqBlock_8 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__shadowFreqBlock_9 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__shadowFreqBlock_10 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__shadowFreqBlock_11 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__shadowFreqBlock_12 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__shadowFreqBlock_13 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__shadowFreqBlock_14 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__shadowFreqBlock_15 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT__activeFreqValid = VL_RAND_RESET_I(1);
    vlSelf->RopeUnit__DOT__shadowFreqValid = VL_RAND_RESET_I(1);
    vlSelf->RopeUnit__DOT__freqReqOutstanding = VL_RAND_RESET_I(1);
    vlSelf->RopeUnit__DOT__freqHalf = VL_RAND_RESET_I(1);
    vlSelf->RopeUnit__DOT__completesBlock = VL_RAND_RESET_I(1);
    vlSelf->RopeUnit__DOT__nextBlockAvailable = VL_RAND_RESET_I(1);
    vlSelf->RopeUnit__DOT___GEN_17 = VL_RAND_RESET_I(1);
    vlSelf->RopeUnit__DOT___GEN_35 = VL_RAND_RESET_I(1);
    vlSelf->RopeUnit__DOT___GEN_55 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_56 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_57 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_58 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_59 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_60 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_61 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_62 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_63 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_64 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_65 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_66 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_67 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_68 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_69 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_70 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_71 = VL_RAND_RESET_I(1);
    vlSelf->RopeUnit__DOT___GEN_72 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_73 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_74 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_75 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_76 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_77 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_78 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_79 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_80 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_81 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_82 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_83 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_84 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_85 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_86 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_87 = VL_RAND_RESET_I(16);
    vlSelf->RopeUnit__DOT___GEN_105 = VL_RAND_RESET_I(1);
    vlSelf->RopeUnit__DOT__primed = VL_RAND_RESET_I(1);
    vlSelf->RopeUnit__DOT___GEN_322 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void VRopeUnit___024root___configure_coverage(VRopeUnit___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
