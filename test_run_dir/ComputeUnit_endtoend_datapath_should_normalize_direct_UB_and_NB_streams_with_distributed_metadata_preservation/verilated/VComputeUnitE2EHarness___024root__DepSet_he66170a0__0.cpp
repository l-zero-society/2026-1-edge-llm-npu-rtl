// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputeUnitE2EHarness.h for the primary calling header

#include "VComputeUnitE2EHarness__pch.h"
#include "VComputeUnitE2EHarness___024root.h"

void VComputeUnitE2EHarness___024root___eval_triggers__ico(VComputeUnitE2EHarness___024root* vlSelf);
void VComputeUnitE2EHarness___024root___eval_ico(VComputeUnitE2EHarness___024root* vlSelf);

bool VComputeUnitE2EHarness___024root___eval_phase__ico(VComputeUnitE2EHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputeUnitE2EHarness___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VComputeUnitE2EHarness___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VComputeUnitE2EHarness___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VComputeUnitE2EHarness___024root___eval_act(VComputeUnitE2EHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputeUnitE2EHarness___024root___eval_act\n"); );
}

VL_INLINE_OPT void VComputeUnitE2EHarness___024root___nba_sequent__TOP__3(VComputeUnitE2EHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputeUnitE2EHarness___024root___nba_sequent__TOP__3\n"); );
    // Init
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_1__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_2__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_3__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_1__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_2__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_3__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_1__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_2__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_3__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_1__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_2__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_3__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_1__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_2__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_3__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_1__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_2__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_3__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_1__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_2__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_3__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_1__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_2__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_3__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_1__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_2__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_3__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_1__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_2__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_3__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_1__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_2__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_3__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_1__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_2__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_3__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_1__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_2__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_3__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_1__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_2__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_3__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_1__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_2__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_3__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_1__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_2__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_3__DOT__mul_res;
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_3__DOT__mul_res = 0;
    // Body
    if (vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__enqFire) {
        if ((0U == (IData)(vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__wrPtr))) {
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_sum_15 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_15;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_0 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_0;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_1 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_1;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_2 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_2;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_3 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_3;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_4 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_4;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_5 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_5;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_6 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_6;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_7 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_7;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_8 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_8;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_9 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_9;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_10 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_10;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_11 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_11;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_12 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_12;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_13 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_13;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_14 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_14;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_15 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_15;
        }
        if ((1U == (IData)(vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__wrPtr))) {
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_sum_0 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_0;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_sum_1 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_1;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_sum_2 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_2;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_sum_3 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_3;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_sum_4 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_4;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_sum_5 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_5;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_sum_6 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_6;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_sum_7 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_7;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_sum_8 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_8;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_sum_9 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_9;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_sum_10 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_10;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_sum_11 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_11;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_sum_12 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_12;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_sum_13 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_13;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_sum_14 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_14;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_sum_15 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_15;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_0 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_0;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_1 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_1;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_2 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_2;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_3 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_3;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_4 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_4;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_5 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_5;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_6 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_6;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_7 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_7;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_8 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_8;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_9 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_9;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_10 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_10;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_11 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_11;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_12 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_12;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_13 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_13;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_14 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_14;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_15 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_15;
        }
        if ((2U == (IData)(vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__wrPtr))) {
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_sum_0 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_0;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_sum_1 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_1;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_sum_2 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_2;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_sum_3 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_3;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_sum_4 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_4;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_sum_5 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_5;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_sum_6 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_6;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_sum_7 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_7;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_sum_8 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_8;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_sum_9 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_9;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_sum_10 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_10;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_sum_11 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_11;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_sum_12 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_12;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_sum_13 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_13;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_sum_14 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_14;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_sum_15 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_15;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_0 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_0;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_1 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_1;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_2 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_2;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_3 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_3;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_4 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_4;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_5 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_5;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_6 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_6;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_7 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_7;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_8 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_8;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_9 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_9;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_10 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_10;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_11 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_11;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_12 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_12;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_13 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_13;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_14 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_14;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_15 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_15;
        }
        if ((3U == (IData)(vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__wrPtr))) {
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_sum_0 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_0;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_sum_1 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_1;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_sum_2 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_2;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_sum_3 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_3;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_sum_4 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_4;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_sum_5 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_5;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_sum_6 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_6;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_sum_7 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_7;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_sum_8 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_8;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_sum_9 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_9;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_sum_10 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_10;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_sum_11 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_11;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_sum_12 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_12;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_sum_13 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_13;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_sum_14 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_14;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_sum_15 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_sum_15;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_0 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_0;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_1 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_1;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_2 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_2;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_3 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_3;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_4 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_4;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_5 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_5;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_6 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_6;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_7 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_7;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_8 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_8;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_9 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_9;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_10 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_10;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_11 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_11;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_12 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_12;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_13 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_13;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_14 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_14;
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_15 
                = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_enq_bits_max_15;
        }
    }
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_4__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_4__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_4__DOT__mul_res))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_4__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_4__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_4__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_4__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_4__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_4__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_4__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_4__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_4__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_4__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_4__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_4__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_4__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_4__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_4__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__deqFire 
        = ((0U != (IData)(vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__count)) 
           & (IData)(vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_ready));
    if (vlSelf->reset) {
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_0 = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_0 = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_0 = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_0__DOT__outInReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__outInReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__outInReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__outInReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__outInReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__outInReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__outInReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__outInReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__outInReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__outInReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__outInReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__outInReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__outInReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__outInReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__outInReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__outInReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__accumulator__DOT__firstByCol_1_r = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__accumulator__DOT__accumEnByCol_1_r = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_1__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__wrPtr = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__timer__DOT__kTileCounter = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__outValidReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__outWeightUpdateReg = 0U;
        vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__timer__DOT__outputRowCounter = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->io_stall)))) {
            if (vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_0_io_in_valid) {
                vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_0 = 1U;
                vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_0 
                    = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15_io_in_data;
                vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_0 
                    = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_0_io_in_tile_start;
            } else {
                vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_0 = 0U;
                vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_0 = 0U;
                vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_0 = 0U;
            }
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_0__DOT__outInReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_0_io_out_data;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__outInReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15_io_out_data;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__outInReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_14_io_out_data;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__outInReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_13_io_out_data;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__outInReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_12_io_out_data;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__outInReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_11_io_out_data;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__outInReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_10_io_out_data;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__outInReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_9_io_out_data;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__outInReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_8_io_out_data;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__outInReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_7_io_out_data;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__outInReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_6_io_out_data;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__outInReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_5_io_out_data;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__outInReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_4_io_out_data;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__outInReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_3_io_out_data;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__outInReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_2_io_out_data;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__outInReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_1_io_out_data;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__accumulator__DOT__firstByCol_1_r 
                = (0U == vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__timer__DOT__kTileCounter);
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__accumulator__DOT__accumEnByCol_1_r 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__outValidReg;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_1__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_0__DOT__outWeightUpdateReg;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_1__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__outWeightUpdateReg;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_1__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__outWeightUpdateReg;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_1__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__outWeightUpdateReg;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_1__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__outWeightUpdateReg;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_1__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__outWeightUpdateReg;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_1__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__outWeightUpdateReg;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_1__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__outWeightUpdateReg;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_1__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__outWeightUpdateReg;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_1__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__outWeightUpdateReg;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_1__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__outWeightUpdateReg;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_1__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__outWeightUpdateReg;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_1__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__outWeightUpdateReg;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_1__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__outWeightUpdateReg;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_1__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__outWeightUpdateReg;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_1__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__outWeightUpdateReg;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__outValidReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15_io_out_valid;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_0__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_0_io_out_weight_update;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15_io_out_weight_update;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_14_io_out_weight_update;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_13_io_out_weight_update;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_12_io_out_weight_update;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_11_io_out_weight_update;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_10_io_out_weight_update;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_9_io_out_weight_update;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_8_io_out_weight_update;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_7_io_out_weight_update;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_6_io_out_weight_update;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_5_io_out_weight_update;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_4_io_out_weight_update;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_3_io_out_weight_update;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_2_io_out_weight_update;
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__outWeightUpdateReg 
                = vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_1_io_out_weight_update;
        }
        if (vlSelf->io_vpu2_clr_acc) {
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__wrPtr = 0U;
        } else if (vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__enqFire) {
            vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__wrPtr 
                = ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT___wrPtr_T)
                    ? 0U : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT___wrPtr_T_2));
        }
        if (vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__timer__DOT__fire) {
            if ((0xfU == (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__timer__DOT__outputRowCounter))) {
                vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__timer__DOT__kTileCounter 
                    = ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__timer__DOT__lastKTile)
                        ? 0U : vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__timer__DOT___kTileCounter_T_1);
            }
            vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__timer__DOT__outputRowCounter 
                = ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__timer__DOT__lastRow)
                    ? 0U : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__timer__DOT___outputRowCounter_T_1));
        }
    }
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_0)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_3__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_15)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_3__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_14)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_3__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_13)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_3__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_12)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_3__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_11)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_3__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_10)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_3__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_9)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_3__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_8)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_3__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_7)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_3__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_6)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_3__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_5)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_3__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_4)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_3__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_3)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_3__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_2)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_3__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_1)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_3__DOT__active_weight))))));
    vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT___rdPtr_T 
        = (3U == (IData)(vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__rdPtr));
    vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT___rdPtr_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__rdPtr)));
    if ((3U == (IData)(vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__rdPtr))) {
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_0 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_0;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_1 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_1;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_2 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_2;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_3 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_3;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_4 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_4;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_5 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_5;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_6 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_6;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_7 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_7;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_8 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_8;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_9 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_9;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_10 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_10;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_11 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_11;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_12 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_12;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_13 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_13;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_14 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_14;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_15 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_15;
    } else if ((2U == (IData)(vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__rdPtr))) {
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_0 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_0;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_1 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_1;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_2 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_2;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_3 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_3;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_4 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_4;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_5 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_5;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_6 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_6;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_7 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_7;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_8 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_8;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_9 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_9;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_10 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_10;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_11 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_11;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_12 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_12;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_13 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_13;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_14 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_14;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_15 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_15;
    } else if ((1U == (IData)(vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__rdPtr))) {
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_0 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_0;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_1 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_1;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_2 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_2;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_3 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_3;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_4 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_4;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_5 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_5;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_6 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_6;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_7 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_7;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_8 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_8;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_9 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_9;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_10 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_10;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_11 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_11;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_12 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_12;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_13 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_13;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_14 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_14;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_15 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_15;
    } else {
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_0 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_0;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_1 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_1;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_2 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_2;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_3 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_3;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_4 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_4;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_5 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_5;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_6 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_6;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_7 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_7;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_8 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_8;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_9 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_9;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_10 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_10;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_11 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_11;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_12 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_12;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_13 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_13;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_14 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_14;
        vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_15 
            = vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_15;
    }
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_14_io_out_data 
        = ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_14_io_out_valid)
            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_13)
            : 0U);
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_13_io_out_data 
        = ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_13_io_out_valid)
            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_12)
            : 0U);
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_12_io_out_data 
        = ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_12_io_out_valid)
            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_11)
            : 0U);
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_11_io_out_data 
        = ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_11_io_out_valid)
            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_10)
            : 0U);
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_10_io_out_data 
        = ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_10_io_out_valid)
            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_9)
            : 0U);
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_9_io_out_data 
        = ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_9_io_out_valid)
            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_8)
            : 0U);
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_8_io_out_data 
        = ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_8_io_out_valid)
            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_7)
            : 0U);
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_7_io_out_data 
        = ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_7_io_out_valid)
            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_6)
            : 0U);
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_6_io_out_data 
        = ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_6_io_out_valid)
            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_5)
            : 0U);
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_5_io_out_data 
        = ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_5_io_out_valid)
            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_4)
            : 0U);
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_4_io_out_data 
        = ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_4_io_out_valid)
            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_4__DOT__dataPipe_3)
            : 0U);
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_3_io_out_data 
        = ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_3_io_out_valid)
            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_3__DOT__dataPipe_2)
            : 0U);
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_2_io_out_data 
        = ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_2_io_out_valid)
            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_2__DOT__dataPipe_1)
            : 0U);
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_1_io_out_data 
        = ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_1_io_out_valid)
            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_1__DOT__dataPipe_0)
            : 0U);
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_3__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_3__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_3__DOT__mul_res))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_3__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_3__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_3__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_3__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_3__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_3__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_3__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_3__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_3__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_3__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_3__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_3__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_3__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_3__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_3__DOT__mul_res)))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_0)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_2__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_15)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_2__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_14)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_2__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_13)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_2__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_12)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_2__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_11)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_2__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_10)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_2__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_9)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_2__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_8)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_2__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_7)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_2__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_6)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_2__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_5)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_2__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_4)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_2__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_3)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_2__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_2)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_2__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_1)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_2__DOT__active_weight))))));
    vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT___wrPtr_T 
        = (3U == (IData)(vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__wrPtr));
    vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT___wrPtr_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ComputeUnitE2EHarness__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__wrPtr)));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_14));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_2__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_2__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_2__DOT__mul_res))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_2__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_14));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_2__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_14_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_13));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_2__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_13_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_12));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_2__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_12_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_11));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_2__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_11_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_10));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_2__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_10_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_9));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_2__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_9_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_8));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_2__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_8_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_7));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_2__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_7_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_6));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_2__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_6_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_5));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_2__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_5_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_4));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_2__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_4_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_4__DOT__updatePipe_3));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_2__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_3_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_3__DOT__updatePipe_2));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_2__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_2_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_2__DOT__updatePipe_1));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_2__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_1_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_1__DOT__updatePipe_0));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__timer__DOT___kTileCounter_T_1 
        = ((IData)(1U) + vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__timer__DOT__kTileCounter);
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__timer__DOT__lastKTile 
        = (vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__timer__DOT__kTileCounter 
           == (((0U == vlSelf->io_tpu_interm_num) ? 1U
                 : vlSelf->io_tpu_interm_num) - (IData)(1U)));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15_io_out_data 
        = ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15_io_out_valid)
            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_14)
            : 0U);
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_0)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_1__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_15)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_1__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_14)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_1__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_14_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_14_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_14)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_13)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_1__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_13_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_13_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_13)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_12)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_1__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_12_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_12_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_12)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_11)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_1__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_11_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_11_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_11)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_10)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_1__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_10_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_10_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_10)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_9)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_1__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_9_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_9_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_9)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_8)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_1__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_8_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_8_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_8)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_7)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_1__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_7_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_7_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_7)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_6)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_1__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_6_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_6_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_6)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_5)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_1__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_5_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_5_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_5)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_4)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_1__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_4_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_4_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_4)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_3)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_1__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_3_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_3_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_3)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_2)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_1__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_2_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_2_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_2)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_1)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_1__DOT__active_weight))))));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_1_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_1_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_1)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__active_weight))))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__timer__DOT__fire 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__outValidReg));
    ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_15)
                                                            : (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__active_weight))))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_1__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_1__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_1__DOT__mul_res))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_1__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_1__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_1__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_1__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_1__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_1__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_1__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_1__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_1__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_1__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_1__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_1__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_1__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_1__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_1__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_0_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__mul_res)))));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__timer__DOT__lastRow 
        = (0xfU == (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__timer__DOT__outputRowCounter));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__timer__DOT___outputRowCounter_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__timer__DOT__outputRowCounter)));
    vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnitE2EHarness__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__mul_res)))));
}

void VComputeUnitE2EHarness___024root___eval_triggers__act(VComputeUnitE2EHarness___024root* vlSelf);

bool VComputeUnitE2EHarness___024root___eval_phase__act(VComputeUnitE2EHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputeUnitE2EHarness___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VComputeUnitE2EHarness___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VComputeUnitE2EHarness___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VComputeUnitE2EHarness___024root___eval_nba(VComputeUnitE2EHarness___024root* vlSelf);

bool VComputeUnitE2EHarness___024root___eval_phase__nba(VComputeUnitE2EHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputeUnitE2EHarness___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VComputeUnitE2EHarness___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VComputeUnitE2EHarness___024root___dump_triggers__ico(VComputeUnitE2EHarness___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VComputeUnitE2EHarness___024root___dump_triggers__nba(VComputeUnitE2EHarness___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VComputeUnitE2EHarness___024root___dump_triggers__act(VComputeUnitE2EHarness___024root* vlSelf);
#endif  // VL_DEBUG

void VComputeUnitE2EHarness___024root___eval(VComputeUnitE2EHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputeUnitE2EHarness___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VComputeUnitE2EHarness___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("ComputeUnitE2EHarness.sv", 53322, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VComputeUnitE2EHarness___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VComputeUnitE2EHarness___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("ComputeUnitE2EHarness.sv", 53322, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VComputeUnitE2EHarness___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("ComputeUnitE2EHarness.sv", 53322, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VComputeUnitE2EHarness___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VComputeUnitE2EHarness___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VComputeUnitE2EHarness___024root___eval_debug_assertions(VComputeUnitE2EHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputeUnitE2EHarness___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_ub_valid & 0xfeU))) {
        Verilated::overWidthError("io_ub_valid");}
    if (VL_UNLIKELY((vlSelf->io_wb_valid & 0xfeU))) {
        Verilated::overWidthError("io_wb_valid");}
    if (VL_UNLIKELY((vlSelf->io_vb_valid & 0xfeU))) {
        Verilated::overWidthError("io_vb_valid");}
    if (VL_UNLIKELY((vlSelf->io_nb_valid & 0xfeU))) {
        Verilated::overWidthError("io_nb_valid");}
    if (VL_UNLIKELY((vlSelf->io_ub_transpose_en & 0xfeU))) {
        Verilated::overWidthError("io_ub_transpose_en");}
    if (VL_UNLIKELY((vlSelf->io_wb_transpose_en & 0xfeU))) {
        Verilated::overWidthError("io_wb_transpose_en");}
    if (VL_UNLIKELY((vlSelf->io_ub_stream_en & 0xfeU))) {
        Verilated::overWidthError("io_ub_stream_en");}
    if (VL_UNLIKELY((vlSelf->io_wb_stream_en & 0xfeU))) {
        Verilated::overWidthError("io_wb_stream_en");}
    if (VL_UNLIKELY((vlSelf->io_comp_stream_en & 0xfeU))) {
        Verilated::overWidthError("io_comp_stream_en");}
    if (VL_UNLIKELY((vlSelf->io_output_transpose_en 
                     & 0xfeU))) {
        Verilated::overWidthError("io_output_transpose_en");}
    if (VL_UNLIKELY((vlSelf->io_vector_compact_in & 0xfeU))) {
        Verilated::overWidthError("io_vector_compact_in");}
    if (VL_UNLIKELY((vlSelf->io_vector_compact_out 
                     & 0xfeU))) {
        Verilated::overWidthError("io_vector_compact_out");}
    if (VL_UNLIKELY((vlSelf->io_tpu_en & 0xfeU))) {
        Verilated::overWidthError("io_tpu_en");}
    if (VL_UNLIKELY((vlSelf->io_tpu_input_tile_start 
                     & 0xfeU))) {
        Verilated::overWidthError("io_tpu_input_tile_start");}
    if (VL_UNLIKELY((vlSelf->io_tpu_clear_w & 0xfeU))) {
        Verilated::overWidthError("io_tpu_clear_w");}
    if (VL_UNLIKELY((vlSelf->io_vpu1_en & 0xfeU))) {
        Verilated::overWidthError("io_vpu1_en");}
    if (VL_UNLIKELY((vlSelf->io_vpu1_input_mode & 0xfeU))) {
        Verilated::overWidthError("io_vpu1_input_mode");}
    if (VL_UNLIKELY((vlSelf->io_vpu1_output_route & 0xfcU))) {
        Verilated::overWidthError("io_vpu1_output_route");}
    if (VL_UNLIKELY((vlSelf->io_vpu1_param_mode & 0xfeU))) {
        Verilated::overWidthError("io_vpu1_param_mode");}
    if (VL_UNLIKELY((vlSelf->io_vpu1_act_mask & 0xfcU))) {
        Verilated::overWidthError("io_vpu1_act_mask");}
    if (VL_UNLIKELY((vlSelf->io_vpu1_fusion_second 
                     & 0xfeU))) {
        Verilated::overWidthError("io_vpu1_fusion_second");}
    if (VL_UNLIKELY((vlSelf->io_vpu1_alu_mode & 0xfcU))) {
        Verilated::overWidthError("io_vpu1_alu_mode");}
    if (VL_UNLIKELY((vlSelf->io_vpu1_out_shift & 0xe0U))) {
        Verilated::overWidthError("io_vpu1_out_shift");}
    if (VL_UNLIKELY((vlSelf->io_direct_row_change_update 
                     & 0xfeU))) {
        Verilated::overWidthError("io_direct_row_change_update");}
    if (VL_UNLIKELY((vlSelf->io_qb_valid & 0xfeU))) {
        Verilated::overWidthError("io_qb_valid");}
    if (VL_UNLIKELY((vlSelf->io_vpu2_en & 0xfeU))) {
        Verilated::overWidthError("io_vpu2_en");}
    if (VL_UNLIKELY((vlSelf->io_vpu2_input_sel & 0xfcU))) {
        Verilated::overWidthError("io_vpu2_input_sel");}
    if (VL_UNLIKELY((vlSelf->io_vpu2_norm_mode & 0xfcU))) {
        Verilated::overWidthError("io_vpu2_norm_mode");}
    if (VL_UNLIKELY((vlSelf->io_vpu2_norm_phase & 0xfeU))) {
        Verilated::overWidthError("io_vpu2_norm_phase");}
    if (VL_UNLIKELY((vlSelf->io_vpu2_norm_layout & 0xfeU))) {
        Verilated::overWidthError("io_vpu2_norm_layout");}
    if (VL_UNLIKELY((vlSelf->io_norm_inv_vector_length 
                     & 0xff000000U))) {
        Verilated::overWidthError("io_norm_inv_vector_length");}
    if (VL_UNLIKELY((vlSelf->io_vpu2_clr_acc & 0xfeU))) {
        Verilated::overWidthError("io_vpu2_clr_acc");}
    if (VL_UNLIKELY((vlSelf->io_vpu2_rope_en & 0xfeU))) {
        Verilated::overWidthError("io_vpu2_rope_en");}
    if (VL_UNLIKELY((vlSelf->io_rope_position_init 
                     & 0xfeU))) {
        Verilated::overWidthError("io_rope_position_init");}
    if (VL_UNLIKELY((vlSelf->io_fb_valid & 0xfeU))) {
        Verilated::overWidthError("io_fb_valid");}
    if (VL_UNLIKELY((vlSelf->io_lut_program_start & 0xfeU))) {
        Verilated::overWidthError("io_lut_program_start");}
    if (VL_UNLIKELY((vlSelf->io_lut_write & 0xe0U))) {
        Verilated::overWidthError("io_lut_write");}
    if (VL_UNLIKELY((vlSelf->io_soft_reset & 0xfeU))) {
        Verilated::overWidthError("io_soft_reset");}
    if (VL_UNLIKELY((vlSelf->io_stall & 0xfeU))) {
        Verilated::overWidthError("io_stall");}
}
#endif  // VL_DEBUG
