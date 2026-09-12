// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVPU1RouteHarness.h for the primary calling header

#include "VVPU1RouteHarness__pch.h"
#include "VVPU1RouteHarness___024root.h"

VL_ATTR_COLD void VVPU1RouteHarness___024root___eval_static(VVPU1RouteHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVPU1RouteHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVPU1RouteHarness___024root___eval_static\n"); );
}

VL_ATTR_COLD void VVPU1RouteHarness___024root___eval_initial__TOP(VVPU1RouteHarness___024root* vlSelf);

VL_ATTR_COLD void VVPU1RouteHarness___024root___eval_initial(VVPU1RouteHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVPU1RouteHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVPU1RouteHarness___024root___eval_initial\n"); );
    // Body
    VVPU1RouteHarness___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VVPU1RouteHarness___024root___eval_initial__TOP(VVPU1RouteHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVPU1RouteHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVPU1RouteHarness___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->io_qparam_req = 0U;
}

VL_ATTR_COLD void VVPU1RouteHarness___024root___eval_final(VVPU1RouteHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVPU1RouteHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVPU1RouteHarness___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VVPU1RouteHarness___024root___dump_triggers__stl(VVPU1RouteHarness___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VVPU1RouteHarness___024root___eval_phase__stl(VVPU1RouteHarness___024root* vlSelf);

VL_ATTR_COLD void VVPU1RouteHarness___024root___eval_settle(VVPU1RouteHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVPU1RouteHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVPU1RouteHarness___024root___eval_settle\n"); );
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
            VVPU1RouteHarness___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("VPU1RouteHarness.sv", 3791, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VVPU1RouteHarness___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VVPU1RouteHarness___024root___dump_triggers__stl(VVPU1RouteHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVPU1RouteHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVPU1RouteHarness___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VVPU1RouteHarness___024root___eval_triggers__stl(VVPU1RouteHarness___024root* vlSelf);
VL_ATTR_COLD void VVPU1RouteHarness___024root___eval_stl(VVPU1RouteHarness___024root* vlSelf);

VL_ATTR_COLD bool VVPU1RouteHarness___024root___eval_phase__stl(VVPU1RouteHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVPU1RouteHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVPU1RouteHarness___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VVPU1RouteHarness___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VVPU1RouteHarness___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VVPU1RouteHarness___024root___dump_triggers__ico(VVPU1RouteHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVPU1RouteHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVPU1RouteHarness___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VVPU1RouteHarness___024root___dump_triggers__act(VVPU1RouteHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVPU1RouteHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVPU1RouteHarness___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VVPU1RouteHarness___024root___dump_triggers__nba(VVPU1RouteHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVPU1RouteHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVPU1RouteHarness___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VVPU1RouteHarness___024root___ctor_var_reset(VVPU1RouteHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVPU1RouteHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVPU1RouteHarness___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_tpu_0 = VL_RAND_RESET_I(32);
    vlSelf->io_tpu_1 = VL_RAND_RESET_I(32);
    vlSelf->io_tpu_2 = VL_RAND_RESET_I(32);
    vlSelf->io_tpu_3 = VL_RAND_RESET_I(32);
    vlSelf->io_tpu_4 = VL_RAND_RESET_I(32);
    vlSelf->io_tpu_5 = VL_RAND_RESET_I(32);
    vlSelf->io_tpu_6 = VL_RAND_RESET_I(32);
    vlSelf->io_tpu_7 = VL_RAND_RESET_I(32);
    vlSelf->io_tpu_8 = VL_RAND_RESET_I(32);
    vlSelf->io_tpu_9 = VL_RAND_RESET_I(32);
    vlSelf->io_tpu_10 = VL_RAND_RESET_I(32);
    vlSelf->io_tpu_11 = VL_RAND_RESET_I(32);
    vlSelf->io_tpu_12 = VL_RAND_RESET_I(32);
    vlSelf->io_tpu_13 = VL_RAND_RESET_I(32);
    vlSelf->io_tpu_14 = VL_RAND_RESET_I(32);
    vlSelf->io_tpu_15 = VL_RAND_RESET_I(32);
    vlSelf->io_tpu_valid = VL_RAND_RESET_I(1);
    vlSelf->io_ub_0 = VL_RAND_RESET_I(8);
    vlSelf->io_ub_1 = VL_RAND_RESET_I(8);
    vlSelf->io_ub_2 = VL_RAND_RESET_I(8);
    vlSelf->io_ub_3 = VL_RAND_RESET_I(8);
    vlSelf->io_ub_4 = VL_RAND_RESET_I(8);
    vlSelf->io_ub_5 = VL_RAND_RESET_I(8);
    vlSelf->io_ub_6 = VL_RAND_RESET_I(8);
    vlSelf->io_ub_7 = VL_RAND_RESET_I(8);
    vlSelf->io_ub_8 = VL_RAND_RESET_I(8);
    vlSelf->io_ub_9 = VL_RAND_RESET_I(8);
    vlSelf->io_ub_10 = VL_RAND_RESET_I(8);
    vlSelf->io_ub_11 = VL_RAND_RESET_I(8);
    vlSelf->io_ub_12 = VL_RAND_RESET_I(8);
    vlSelf->io_ub_13 = VL_RAND_RESET_I(8);
    vlSelf->io_ub_14 = VL_RAND_RESET_I(8);
    vlSelf->io_ub_15 = VL_RAND_RESET_I(8);
    vlSelf->io_wb_0 = VL_RAND_RESET_I(8);
    vlSelf->io_wb_1 = VL_RAND_RESET_I(8);
    vlSelf->io_wb_2 = VL_RAND_RESET_I(8);
    vlSelf->io_wb_3 = VL_RAND_RESET_I(8);
    vlSelf->io_wb_4 = VL_RAND_RESET_I(8);
    vlSelf->io_wb_5 = VL_RAND_RESET_I(8);
    vlSelf->io_wb_6 = VL_RAND_RESET_I(8);
    vlSelf->io_wb_7 = VL_RAND_RESET_I(8);
    vlSelf->io_wb_8 = VL_RAND_RESET_I(8);
    vlSelf->io_wb_9 = VL_RAND_RESET_I(8);
    vlSelf->io_wb_10 = VL_RAND_RESET_I(8);
    vlSelf->io_wb_11 = VL_RAND_RESET_I(8);
    vlSelf->io_wb_12 = VL_RAND_RESET_I(8);
    vlSelf->io_wb_13 = VL_RAND_RESET_I(8);
    vlSelf->io_wb_14 = VL_RAND_RESET_I(8);
    vlSelf->io_wb_15 = VL_RAND_RESET_I(8);
    vlSelf->io_ub_valid = VL_RAND_RESET_I(1);
    vlSelf->io_wb_valid = VL_RAND_RESET_I(1);
    vlSelf->io_vb_read_data_0 = VL_RAND_RESET_I(8);
    vlSelf->io_vb_read_data_1 = VL_RAND_RESET_I(8);
    vlSelf->io_vb_read_data_2 = VL_RAND_RESET_I(8);
    vlSelf->io_vb_read_data_3 = VL_RAND_RESET_I(8);
    vlSelf->io_vb_read_data_4 = VL_RAND_RESET_I(8);
    vlSelf->io_vb_read_data_5 = VL_RAND_RESET_I(8);
    vlSelf->io_vb_read_data_6 = VL_RAND_RESET_I(8);
    vlSelf->io_vb_read_data_7 = VL_RAND_RESET_I(8);
    vlSelf->io_vb_read_data_8 = VL_RAND_RESET_I(8);
    vlSelf->io_vb_read_data_9 = VL_RAND_RESET_I(8);
    vlSelf->io_vb_read_data_10 = VL_RAND_RESET_I(8);
    vlSelf->io_vb_read_data_11 = VL_RAND_RESET_I(8);
    vlSelf->io_vb_read_data_12 = VL_RAND_RESET_I(8);
    vlSelf->io_vb_read_data_13 = VL_RAND_RESET_I(8);
    vlSelf->io_vb_read_data_14 = VL_RAND_RESET_I(8);
    vlSelf->io_vb_read_data_15 = VL_RAND_RESET_I(8);
    vlSelf->io_vb_read_req = VL_RAND_RESET_I(1);
    vlSelf->io_input_mode = VL_RAND_RESET_I(1);
    vlSelf->io_output_route = VL_RAND_RESET_I(2);
    vlSelf->io_alu_mode = VL_RAND_RESET_I(2);
    vlSelf->io_out_shift = VL_RAND_RESET_I(5);
    vlSelf->io_act_mask = VL_RAND_RESET_I(2);
    vlSelf->io_fusion_second = VL_RAND_RESET_I(1);
    vlSelf->io_matrix_param = VL_RAND_RESET_I(32);
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
    vlSelf->io_result_0 = VL_RAND_RESET_I(8);
    vlSelf->io_result_1 = VL_RAND_RESET_I(8);
    vlSelf->io_result_2 = VL_RAND_RESET_I(8);
    vlSelf->io_result_3 = VL_RAND_RESET_I(8);
    vlSelf->io_result_4 = VL_RAND_RESET_I(8);
    vlSelf->io_result_5 = VL_RAND_RESET_I(8);
    vlSelf->io_result_6 = VL_RAND_RESET_I(8);
    vlSelf->io_result_7 = VL_RAND_RESET_I(8);
    vlSelf->io_result_8 = VL_RAND_RESET_I(8);
    vlSelf->io_result_9 = VL_RAND_RESET_I(8);
    vlSelf->io_result_10 = VL_RAND_RESET_I(8);
    vlSelf->io_result_11 = VL_RAND_RESET_I(8);
    vlSelf->io_result_12 = VL_RAND_RESET_I(8);
    vlSelf->io_result_13 = VL_RAND_RESET_I(8);
    vlSelf->io_result_14 = VL_RAND_RESET_I(8);
    vlSelf->io_result_15 = VL_RAND_RESET_I(8);
    vlSelf->io_vb_valid = VL_RAND_RESET_I(1);
    vlSelf->io_vpu2_valid = VL_RAND_RESET_I(1);
    vlSelf->io_compute_valid = VL_RAND_RESET_I(1);
    vlSelf->io_result_valid = VL_RAND_RESET_I(1);
    vlSelf->io_drained = VL_RAND_RESET_I(1);
    vlSelf->io_control_alert = VL_RAND_RESET_I(1);
    vlSelf->io_sync_alert = VL_RAND_RESET_I(1);
    vlSelf->io_qparam_req = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__savedMode = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__savedRoute = VL_RAND_RESET_I(2);
    vlSelf->VPU1RouteHarness__DOT__route = VL_RAND_RESET_I(2);
    vlSelf->VPU1RouteHarness__DOT__vbResponse_0 = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__vbResponse_1 = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__vbResponse_2 = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__vbResponse_3 = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__vbResponse_4 = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__vbResponse_5 = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__vbResponse_6 = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__vbResponse_7 = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__vbResponse_8 = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__vbResponse_9 = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__vbResponse_10 = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__vbResponse_11 = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__vbResponse_12 = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__vbResponse_13 = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__vbResponse_14 = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__vbResponse_15 = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT____VdfgTmp_ha4a0e0fa__0 = 0;
    vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_0_io_input_mode = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_0_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_1_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_2_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_3_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_4_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_5_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_6_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_7_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_8_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_9_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_10_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_11_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_12_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_13_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_14_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__qa__DOT__cores_15_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s1A = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s1B = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s1Shift = VL_RAND_RESET_I(5);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s1Direct = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s1Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT___result_T_1 = VL_RAND_RESET_I(9);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s2Result = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s2Shift = VL_RAND_RESET_I(5);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s2Direct = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s2Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__shifted = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s3Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__s3Direct = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__io_out_tpu_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT__io_out_direct_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_0__DOT___io_out_tpu_valid_T = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_1__DOT__s1A = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_1__DOT__s1B = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_1__DOT__s1Mode = VL_RAND_RESET_I(2);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_1__DOT__s1Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_1__DOT___result_T_1 = VL_RAND_RESET_I(9);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_1__DOT__s2Result = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_1__DOT__s2Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_1__DOT__shifted = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_1__DOT__s3Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_1__DOT__io_out_tpu_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_1__DOT__io_out_direct_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_2__DOT__s1A = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_2__DOT__s1B = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_2__DOT__s1Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_2__DOT___result_T_1 = VL_RAND_RESET_I(9);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_2__DOT__s2Result = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_2__DOT__s2Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_2__DOT__shifted = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_2__DOT__s3Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_2__DOT__io_out_tpu_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_2__DOT__io_out_direct_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_3__DOT__s1A = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_3__DOT__s1B = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_3__DOT__s1Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_3__DOT___result_T_1 = VL_RAND_RESET_I(9);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_3__DOT__s2Result = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_3__DOT__s2Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_3__DOT__shifted = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_3__DOT__s3Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_3__DOT__io_out_tpu_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_3__DOT__io_out_direct_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_4__DOT__s1A = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_4__DOT__s1B = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_4__DOT__s1Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_4__DOT___result_T_1 = VL_RAND_RESET_I(9);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_4__DOT__s2Result = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_4__DOT__s2Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_4__DOT__shifted = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_4__DOT__s3Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_4__DOT__io_out_tpu_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_4__DOT__io_out_direct_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_5__DOT__s1A = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_5__DOT__s1B = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_5__DOT__s1Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_5__DOT___result_T_1 = VL_RAND_RESET_I(9);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_5__DOT__s2Result = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_5__DOT__s2Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_5__DOT__shifted = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_5__DOT__s3Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_5__DOT__io_out_tpu_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_5__DOT__io_out_direct_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_6__DOT__s1A = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_6__DOT__s1B = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_6__DOT__s1Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_6__DOT___result_T_1 = VL_RAND_RESET_I(9);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_6__DOT__s2Result = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_6__DOT__s2Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_6__DOT__shifted = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_6__DOT__s3Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_6__DOT__io_out_tpu_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_6__DOT__io_out_direct_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_7__DOT__s1A = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_7__DOT__s1B = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_7__DOT__s1Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_7__DOT___result_T_1 = VL_RAND_RESET_I(9);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_7__DOT__s2Result = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_7__DOT__s2Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_7__DOT__shifted = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_7__DOT__s3Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_7__DOT__io_out_tpu_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_7__DOT__io_out_direct_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_8__DOT__s1A = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_8__DOT__s1B = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_8__DOT__s1Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_8__DOT___result_T_1 = VL_RAND_RESET_I(9);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_8__DOT__s2Result = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_8__DOT__s2Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_8__DOT__shifted = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_8__DOT__s3Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_8__DOT__io_out_tpu_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_8__DOT__io_out_direct_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_9__DOT__s1A = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_9__DOT__s1B = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_9__DOT__s1Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_9__DOT___result_T_1 = VL_RAND_RESET_I(9);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_9__DOT__s2Result = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_9__DOT__s2Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_9__DOT__shifted = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_9__DOT__s3Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_9__DOT__io_out_tpu_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_9__DOT__io_out_direct_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_10__DOT__s1A = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_10__DOT__s1B = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_10__DOT__s1Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_10__DOT___result_T_1 = VL_RAND_RESET_I(9);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_10__DOT__s2Result = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_10__DOT__s2Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_10__DOT__shifted = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_10__DOT__s3Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_10__DOT__io_out_tpu_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_10__DOT__io_out_direct_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_11__DOT__s1A = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_11__DOT__s1B = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_11__DOT__s1Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_11__DOT___result_T_1 = VL_RAND_RESET_I(9);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_11__DOT__s2Result = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_11__DOT__s2Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_11__DOT__shifted = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_11__DOT__s3Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_11__DOT__io_out_tpu_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_11__DOT__io_out_direct_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_12__DOT__s1A = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_12__DOT__s1B = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_12__DOT__s1Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_12__DOT___result_T_1 = VL_RAND_RESET_I(9);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_12__DOT__s2Result = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_12__DOT__s2Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_12__DOT__shifted = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_12__DOT__s3Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_12__DOT__io_out_tpu_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_12__DOT__io_out_direct_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_13__DOT__s1A = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_13__DOT__s1B = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_13__DOT__s1Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_13__DOT___result_T_1 = VL_RAND_RESET_I(9);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_13__DOT__s2Result = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_13__DOT__s2Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_13__DOT__shifted = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_13__DOT__s3Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_13__DOT__io_out_tpu_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_13__DOT__io_out_direct_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_14__DOT__s1A = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_14__DOT__s1B = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_14__DOT__s1Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_14__DOT___result_T_1 = VL_RAND_RESET_I(9);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_14__DOT__s2Result = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_14__DOT__s2Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_14__DOT__shifted = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_14__DOT__s3Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_14__DOT__io_out_tpu_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_14__DOT__io_out_direct_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_15__DOT__s1A = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_15__DOT__s1B = VL_RAND_RESET_I(8);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_15__DOT__s1Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_15__DOT___result_T_1 = VL_RAND_RESET_I(9);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_15__DOT__s2Result = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_15__DOT__s2Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_15__DOT__shifted = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_15__DOT__s3Valid = VL_RAND_RESET_I(1);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_15__DOT__io_out_tpu_r = VL_RAND_RESET_I(16);
    vlSelf->VPU1RouteHarness__DOT__alu__DOT__cores_15__DOT__io_out_direct_r = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void VVPU1RouteHarness___024root___configure_coverage(VVPU1RouteHarness___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VVPU1RouteHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVPU1RouteHarness___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
