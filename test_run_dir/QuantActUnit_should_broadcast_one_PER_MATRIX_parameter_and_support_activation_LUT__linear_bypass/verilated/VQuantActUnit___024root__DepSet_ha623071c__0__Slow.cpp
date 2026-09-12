// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQuantActUnit.h for the primary calling header

#include "VQuantActUnit__pch.h"
#include "VQuantActUnit___024root.h"

VL_ATTR_COLD void VQuantActUnit___024root___eval_static(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___eval_static\n"); );
}

VL_ATTR_COLD void VQuantActUnit___024root___eval_initial(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VQuantActUnit___024root___eval_final(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VQuantActUnit___024root___dump_triggers__stl(VQuantActUnit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VQuantActUnit___024root___eval_phase__stl(VQuantActUnit___024root* vlSelf);

VL_ATTR_COLD void VQuantActUnit___024root___eval_settle(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___eval_settle\n"); );
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
            VQuantActUnit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("QuantActUnit.sv", 1075, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VQuantActUnit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VQuantActUnit___024root___dump_triggers__stl(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VQuantActUnit___024root___eval_triggers__stl(VQuantActUnit___024root* vlSelf);
VL_ATTR_COLD void VQuantActUnit___024root___eval_stl(VQuantActUnit___024root* vlSelf);

VL_ATTR_COLD bool VQuantActUnit___024root___eval_phase__stl(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VQuantActUnit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VQuantActUnit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VQuantActUnit___024root___dump_triggers__ico(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VQuantActUnit___024root___dump_triggers__act(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VQuantActUnit___024root___dump_triggers__nba(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VQuantActUnit___024root___ctor_var_reset(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_in_tpu_0 = VL_RAND_RESET_I(32);
    vlSelf->io_in_tpu_1 = VL_RAND_RESET_I(32);
    vlSelf->io_in_tpu_2 = VL_RAND_RESET_I(32);
    vlSelf->io_in_tpu_3 = VL_RAND_RESET_I(32);
    vlSelf->io_in_tpu_4 = VL_RAND_RESET_I(32);
    vlSelf->io_in_tpu_5 = VL_RAND_RESET_I(32);
    vlSelf->io_in_tpu_6 = VL_RAND_RESET_I(32);
    vlSelf->io_in_tpu_7 = VL_RAND_RESET_I(32);
    vlSelf->io_in_tpu_8 = VL_RAND_RESET_I(32);
    vlSelf->io_in_tpu_9 = VL_RAND_RESET_I(32);
    vlSelf->io_in_tpu_10 = VL_RAND_RESET_I(32);
    vlSelf->io_in_tpu_11 = VL_RAND_RESET_I(32);
    vlSelf->io_in_tpu_12 = VL_RAND_RESET_I(32);
    vlSelf->io_in_tpu_13 = VL_RAND_RESET_I(32);
    vlSelf->io_in_tpu_14 = VL_RAND_RESET_I(32);
    vlSelf->io_in_tpu_15 = VL_RAND_RESET_I(32);
    vlSelf->io_in_direct_0 = VL_RAND_RESET_I(10);
    vlSelf->io_in_direct_1 = VL_RAND_RESET_I(10);
    vlSelf->io_in_direct_2 = VL_RAND_RESET_I(10);
    vlSelf->io_in_direct_3 = VL_RAND_RESET_I(10);
    vlSelf->io_in_direct_4 = VL_RAND_RESET_I(10);
    vlSelf->io_in_direct_5 = VL_RAND_RESET_I(10);
    vlSelf->io_in_direct_6 = VL_RAND_RESET_I(10);
    vlSelf->io_in_direct_7 = VL_RAND_RESET_I(10);
    vlSelf->io_in_direct_8 = VL_RAND_RESET_I(10);
    vlSelf->io_in_direct_9 = VL_RAND_RESET_I(10);
    vlSelf->io_in_direct_10 = VL_RAND_RESET_I(10);
    vlSelf->io_in_direct_11 = VL_RAND_RESET_I(10);
    vlSelf->io_in_direct_12 = VL_RAND_RESET_I(10);
    vlSelf->io_in_direct_13 = VL_RAND_RESET_I(10);
    vlSelf->io_in_direct_14 = VL_RAND_RESET_I(10);
    vlSelf->io_in_direct_15 = VL_RAND_RESET_I(10);
    vlSelf->io_input_mode = VL_RAND_RESET_I(1);
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
    vlSelf->io_param_mode = VL_RAND_RESET_I(1);
    vlSelf->io_matrix_param = VL_RAND_RESET_I(32);
    vlSelf->io_act_mask = VL_RAND_RESET_I(2);
    vlSelf->io_fusion_second = VL_RAND_RESET_I(1);
    vlSelf->io_stall = VL_RAND_RESET_I(1);
    vlSelf->io_soft_reset = VL_RAND_RESET_I(1);
    vlSelf->io_qparam_req_line = VL_RAND_RESET_I(1);
    vlSelf->io_qparam_line_in_0 = VL_RAND_RESET_I(32);
    vlSelf->io_qparam_line_in_1 = VL_RAND_RESET_I(32);
    vlSelf->io_qparam_line_in_2 = VL_RAND_RESET_I(32);
    vlSelf->io_qparam_line_in_3 = VL_RAND_RESET_I(32);
    vlSelf->io_qparam_line_in_4 = VL_RAND_RESET_I(32);
    vlSelf->io_qparam_line_in_5 = VL_RAND_RESET_I(32);
    vlSelf->io_qparam_line_in_6 = VL_RAND_RESET_I(32);
    vlSelf->io_qparam_line_in_7 = VL_RAND_RESET_I(32);
    vlSelf->io_qparam_line_in_8 = VL_RAND_RESET_I(32);
    vlSelf->io_qparam_line_in_9 = VL_RAND_RESET_I(32);
    vlSelf->io_qparam_line_in_10 = VL_RAND_RESET_I(32);
    vlSelf->io_qparam_line_in_11 = VL_RAND_RESET_I(32);
    vlSelf->io_qparam_line_in_12 = VL_RAND_RESET_I(32);
    vlSelf->io_qparam_line_in_13 = VL_RAND_RESET_I(32);
    vlSelf->io_qparam_line_in_14 = VL_RAND_RESET_I(32);
    vlSelf->io_qparam_line_in_15 = VL_RAND_RESET_I(32);
    vlSelf->io_qparam_line_valid = VL_RAND_RESET_I(1);
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
    vlSelf->io_out_lookahead_0 = VL_RAND_RESET_I(1);
    vlSelf->io_out_lookahead_1 = VL_RAND_RESET_I(1);
    vlSelf->io_out_lookahead_2 = VL_RAND_RESET_I(1);
    vlSelf->io_out_lookahead_3 = VL_RAND_RESET_I(1);
    vlSelf->io_out_lookahead_4 = VL_RAND_RESET_I(1);
    vlSelf->io_out_lookahead_5 = VL_RAND_RESET_I(1);
    vlSelf->io_out_lookahead_6 = VL_RAND_RESET_I(1);
    vlSelf->io_out_lookahead_7 = VL_RAND_RESET_I(1);
    vlSelf->io_out_lookahead_8 = VL_RAND_RESET_I(1);
    vlSelf->io_out_lookahead_9 = VL_RAND_RESET_I(1);
    vlSelf->io_out_lookahead_10 = VL_RAND_RESET_I(1);
    vlSelf->io_out_lookahead_11 = VL_RAND_RESET_I(1);
    vlSelf->io_out_lookahead_12 = VL_RAND_RESET_I(1);
    vlSelf->io_out_lookahead_13 = VL_RAND_RESET_I(1);
    vlSelf->io_out_lookahead_14 = VL_RAND_RESET_I(1);
    vlSelf->io_out_lookahead_15 = VL_RAND_RESET_I(1);
    vlSelf->io_busy = VL_RAND_RESET_I(1);
    vlSelf->io_prefetch_ready = VL_RAND_RESET_I(1);
    vlSelf->io_lut_ready = VL_RAND_RESET_I(1);
    vlSelf->io_sync_alert = VL_RAND_RESET_I(1);
    vlSelf->QuantActUnit__DOT__cores_0_io_param = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__cores_1_io_param = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__cores_2_io_param = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__cores_3_io_param = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__cores_4_io_param = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__cores_5_io_param = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__cores_6_io_param = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__cores_7_io_param = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__cores_8_io_param = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__cores_9_io_param = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__cores_10_io_param = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__cores_11_io_param = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__cores_12_io_param = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__cores_13_io_param = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__cores_14_io_param = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__cores_15_io_param = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__perChannel = VL_RAND_RESET_I(1);
    vlSelf->QuantActUnit__DOT___anyValid_T = VL_RAND_RESET_I(16);
    vlSelf->QuantActUnit__DOT__inputFire = VL_RAND_RESET_I(1);
    vlSelf->QuantActUnit__DOT__rowCounter = VL_RAND_RESET_I(4);
    vlSelf->QuantActUnit__DOT__tileStart = VL_RAND_RESET_I(1);
    vlSelf->QuantActUnit__DOT__tileEnd = VL_RAND_RESET_I(1);
    vlSelf->QuantActUnit__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->QuantActUnit__DOT___rowCounter_T_1 = VL_RAND_RESET_I(4);
    vlSelf->QuantActUnit__DOT__activeParam_0 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__activeParam_1 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__activeParam_2 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__activeParam_3 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__activeParam_4 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__activeParam_5 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__activeParam_6 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__activeParam_7 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__activeParam_8 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__activeParam_9 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__activeParam_10 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__activeParam_11 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__activeParam_12 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__activeParam_13 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__activeParam_14 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__activeParam_15 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__shadowParam_0 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__shadowParam_1 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__shadowParam_2 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__shadowParam_3 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__shadowParam_4 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__shadowParam_5 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__shadowParam_6 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__shadowParam_7 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__shadowParam_8 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__shadowParam_9 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__shadowParam_10 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__shadowParam_11 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__shadowParam_12 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__shadowParam_13 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__shadowParam_14 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__shadowParam_15 = VL_RAND_RESET_I(32);
    vlSelf->QuantActUnit__DOT__activeValid = VL_RAND_RESET_I(1);
    vlSelf->QuantActUnit__DOT__shadowValid = VL_RAND_RESET_I(1);
    vlSelf->QuantActUnit__DOT__reqOutstanding = VL_RAND_RESET_I(1);
    vlSelf->QuantActUnit__DOT__consumeShadow = VL_RAND_RESET_I(1);
    vlSelf->QuantActUnit__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->QuantActUnit__DOT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->QuantActUnit__DOT___GEN_55 = VL_RAND_RESET_I(1);
    vlSelf->QuantActUnit__DOT__primed = VL_RAND_RESET_I(1);
    vlSelf->QuantActUnit__DOT___GEN_92 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void VQuantActUnit___024root___configure_coverage(VQuantActUnit___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
