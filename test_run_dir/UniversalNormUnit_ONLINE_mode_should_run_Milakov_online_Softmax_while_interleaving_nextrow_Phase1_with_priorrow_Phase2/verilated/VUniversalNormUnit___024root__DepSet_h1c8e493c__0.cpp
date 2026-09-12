// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUniversalNormUnit.h for the primary calling header

#include "VUniversalNormUnit__pch.h"
#include "VUniversalNormUnit___024root.h"

void VUniversalNormUnit___024root___ico_sequent__TOP__0(VUniversalNormUnit___024root* vlSelf);

void VUniversalNormUnit___024root___eval_ico(VUniversalNormUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUniversalNormUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUniversalNormUnit___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VUniversalNormUnit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VUniversalNormUnit___024root___eval_triggers__ico(VUniversalNormUnit___024root* vlSelf);

bool VUniversalNormUnit___024root___eval_phase__ico(VUniversalNormUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUniversalNormUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUniversalNormUnit___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VUniversalNormUnit___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VUniversalNormUnit___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VUniversalNormUnit___024root___eval_act(VUniversalNormUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUniversalNormUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUniversalNormUnit___024root___eval_act\n"); );
}

VL_INLINE_OPT void VUniversalNormUnit___024root___nba_sequent__TOP__1(VUniversalNormUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUniversalNormUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUniversalNormUnit___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__enqFire) {
        if ((2U == (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__wrPtr))) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_11 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_11;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_12 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_12;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_13 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_13;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_14 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_14;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_15 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_15;
        }
        if ((3U == (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__wrPtr))) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_sum_0 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_0;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_sum_1 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_1;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_sum_2 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_2;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_sum_3 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_3;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_sum_4 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_4;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_sum_5 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_5;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_sum_6 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_6;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_sum_7 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_7;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_sum_8 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_8;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_sum_9 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_9;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_sum_10 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_10;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_sum_11 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_11;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_sum_12 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_12;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_sum_13 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_13;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_sum_14 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_14;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_sum_15 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_15;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_0 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_0;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_1 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_1;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_2 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_2;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_3 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_3;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_4 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_4;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_5 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_5;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_6 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_6;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_7 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_7;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_8 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_8;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_9 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_9;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_10 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_10;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_11 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_11;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_12 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_12;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_13 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_13;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_14 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_14;
            vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_15 
                = vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_15;
        }
    }
    vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__deqFire 
        = ((0U != (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__count)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_ready));
    vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT___rdPtr_T 
        = (3U == (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__rdPtr));
    vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT___rdPtr_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__rdPtr)));
    if ((3U == (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__rdPtr))) {
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_0 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_0;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_1 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_1;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_2 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_2;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_3 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_3;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_4 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_4;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_5 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_5;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_6 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_6;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_7 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_7;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_8 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_8;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_9 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_9;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_10 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_10;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_11 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_11;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_12 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_12;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_13 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_13;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_14 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_14;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_15 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_3_max_15;
    } else if ((2U == (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__rdPtr))) {
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_0 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_0;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_1 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_1;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_2 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_2;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_3 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_3;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_4 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_4;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_5 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_5;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_6 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_6;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_7 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_7;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_8 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_8;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_9 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_9;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_10 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_10;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_11 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_11;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_12 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_12;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_13 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_13;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_14 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_14;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_15 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_2_max_15;
    } else if ((1U == (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__rdPtr))) {
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_0 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_0;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_1 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_1;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_2 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_2;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_3 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_3;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_4 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_4;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_5 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_5;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_6 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_6;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_7 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_7;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_8 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_8;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_9 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_9;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_10 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_10;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_11 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_11;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_12 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_12;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_13 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_13;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_14 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_14;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_15 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_1_max_15;
    } else {
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_0 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_0;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_1 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_1;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_2 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_2;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_3 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_3;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_4 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_4;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_5 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_5;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_6 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_6;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_7 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_7;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_8 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_8;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_9 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_9;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_10 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_10;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_11 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_11;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_12 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_12;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_13 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_13;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_14 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_14;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_bits_max_15 
            = vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__mem_0_max_15;
    }
    if (vlSelf->reset) {
        vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__wrPtr = 0U;
    } else if (vlSelf->io_clr_acc) {
        vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__wrPtr = 0U;
    } else if (vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__enqFire) {
        vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__wrPtr 
            = ((IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT___wrPtr_T)
                ? 0U : (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT___wrPtr_T_2));
    }
    vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT___wrPtr_T 
        = (3U == (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__wrPtr));
    vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT___wrPtr_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__wrPtr)));
}

VL_INLINE_OPT void VUniversalNormUnit___024root___nba_sequent__TOP__3(VUniversalNormUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUniversalNormUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUniversalNormUnit___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*0:0*/ UniversalNormUnit__DOT__softContextFifo_io_enq_valid;
    UniversalNormUnit__DOT__softContextFifo_io_enq_valid = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__distPhase2ContextFifo_io_deq_ready;
    UniversalNormUnit__DOT__distPhase2ContextFifo_io_deq_ready = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__distPhase2ContextFifo_io_underflow;
    UniversalNormUnit__DOT__distPhase2ContextFifo_io_underflow = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__distributedLastBeat;
    UniversalNormUnit__DOT__distributedLastBeat = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats;
    UniversalNormUnit__DOT__validForStats = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_1;
    UniversalNormUnit__DOT__validForStats_1 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_2;
    UniversalNormUnit__DOT__validForStats_2 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_3;
    UniversalNormUnit__DOT__validForStats_3 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_4;
    UniversalNormUnit__DOT__validForStats_4 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_5;
    UniversalNormUnit__DOT__validForStats_5 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_6;
    UniversalNormUnit__DOT__validForStats_6 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_7;
    UniversalNormUnit__DOT__validForStats_7 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_8;
    UniversalNormUnit__DOT__validForStats_8 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_9;
    UniversalNormUnit__DOT__validForStats_9 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_10;
    UniversalNormUnit__DOT__validForStats_10 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_11;
    UniversalNormUnit__DOT__validForStats_11 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_12;
    UniversalNormUnit__DOT__validForStats_12 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_13;
    UniversalNormUnit__DOT__validForStats_13 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_14;
    UniversalNormUnit__DOT__validForStats_14 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__validForStats_15;
    UniversalNormUnit__DOT__validForStats_15 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT___T_35;
    UniversalNormUnit__DOT___T_35 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__scaleLookupFire;
    UniversalNormUnit__DOT__scaleLookupFire = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_1;
    UniversalNormUnit__DOT__layerPair_1 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2;
    UniversalNormUnit__DOT__layerPair_ex2 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq;
    UniversalNormUnit__DOT__layerPair_meanSq = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat;
    UniversalNormUnit__DOT__stat = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz;
    UniversalNormUnit__DOT__normPair_lz = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_1;
    UniversalNormUnit__DOT__layerPair_ex2_1 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_1;
    UniversalNormUnit__DOT__layerPair_meanSq_1 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_1;
    UniversalNormUnit__DOT__stat_1 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_1;
    UniversalNormUnit__DOT__normPair_lz_1 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_2;
    UniversalNormUnit__DOT__layerPair_ex2_2 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_2;
    UniversalNormUnit__DOT__layerPair_meanSq_2 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_2;
    UniversalNormUnit__DOT__stat_2 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_2;
    UniversalNormUnit__DOT__normPair_lz_2 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_3;
    UniversalNormUnit__DOT__layerPair_ex2_3 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_3;
    UniversalNormUnit__DOT__layerPair_meanSq_3 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_3;
    UniversalNormUnit__DOT__stat_3 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_3;
    UniversalNormUnit__DOT__normPair_lz_3 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_4;
    UniversalNormUnit__DOT__layerPair_ex2_4 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_4;
    UniversalNormUnit__DOT__layerPair_meanSq_4 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_4;
    UniversalNormUnit__DOT__stat_4 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_4;
    UniversalNormUnit__DOT__normPair_lz_4 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_5;
    UniversalNormUnit__DOT__layerPair_ex2_5 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_5;
    UniversalNormUnit__DOT__layerPair_meanSq_5 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_5;
    UniversalNormUnit__DOT__stat_5 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_5;
    UniversalNormUnit__DOT__normPair_lz_5 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_6;
    UniversalNormUnit__DOT__layerPair_ex2_6 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_6;
    UniversalNormUnit__DOT__layerPair_meanSq_6 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_6;
    UniversalNormUnit__DOT__stat_6 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_6;
    UniversalNormUnit__DOT__normPair_lz_6 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_7;
    UniversalNormUnit__DOT__layerPair_ex2_7 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_7;
    UniversalNormUnit__DOT__layerPair_meanSq_7 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_7;
    UniversalNormUnit__DOT__stat_7 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_7;
    UniversalNormUnit__DOT__normPair_lz_7 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_8;
    UniversalNormUnit__DOT__layerPair_ex2_8 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_8;
    UniversalNormUnit__DOT__layerPair_meanSq_8 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_8;
    UniversalNormUnit__DOT__stat_8 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_8;
    UniversalNormUnit__DOT__normPair_lz_8 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_9;
    UniversalNormUnit__DOT__layerPair_ex2_9 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_9;
    UniversalNormUnit__DOT__layerPair_meanSq_9 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_9;
    UniversalNormUnit__DOT__stat_9 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_9;
    UniversalNormUnit__DOT__normPair_lz_9 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_10;
    UniversalNormUnit__DOT__layerPair_ex2_10 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_10;
    UniversalNormUnit__DOT__layerPair_meanSq_10 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_10;
    UniversalNormUnit__DOT__stat_10 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_10;
    UniversalNormUnit__DOT__normPair_lz_10 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_11;
    UniversalNormUnit__DOT__layerPair_ex2_11 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_11;
    UniversalNormUnit__DOT__layerPair_meanSq_11 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_11;
    UniversalNormUnit__DOT__stat_11 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_11;
    UniversalNormUnit__DOT__normPair_lz_11 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_12;
    UniversalNormUnit__DOT__layerPair_ex2_12 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_12;
    UniversalNormUnit__DOT__layerPair_meanSq_12 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_12;
    UniversalNormUnit__DOT__stat_12 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_12;
    UniversalNormUnit__DOT__normPair_lz_12 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_13;
    UniversalNormUnit__DOT__layerPair_ex2_13 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_13;
    UniversalNormUnit__DOT__layerPair_meanSq_13 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_13;
    UniversalNormUnit__DOT__stat_13 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_13;
    UniversalNormUnit__DOT__normPair_lz_13 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_14;
    UniversalNormUnit__DOT__layerPair_ex2_14 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_14;
    UniversalNormUnit__DOT__layerPair_meanSq_14 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_14;
    UniversalNormUnit__DOT__stat_14 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_14;
    UniversalNormUnit__DOT__normPair_lz_14 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_ex2_15;
    UniversalNormUnit__DOT__layerPair_ex2_15 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__layerPair_meanSq_15;
    UniversalNormUnit__DOT__layerPair_meanSq_15 = 0;
    IData/*31:0*/ UniversalNormUnit__DOT__stat_15;
    UniversalNormUnit__DOT__stat_15 = 0;
    CData/*4:0*/ UniversalNormUnit__DOT__normPair_lz_15;
    UniversalNormUnit__DOT__normPair_lz_15 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__distributedPhase2Max;
    UniversalNormUnit__DOT__distributedPhase2Max = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max;
    UniversalNormUnit__DOT__phase2Max = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_1;
    UniversalNormUnit__DOT__phase2Max_1 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_2;
    UniversalNormUnit__DOT__phase2Max_2 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_3;
    UniversalNormUnit__DOT__phase2Max_3 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_4;
    UniversalNormUnit__DOT__phase2Max_4 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_5;
    UniversalNormUnit__DOT__phase2Max_5 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_6;
    UniversalNormUnit__DOT__phase2Max_6 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_7;
    UniversalNormUnit__DOT__phase2Max_7 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_8;
    UniversalNormUnit__DOT__phase2Max_8 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_9;
    UniversalNormUnit__DOT__phase2Max_9 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_10;
    UniversalNormUnit__DOT__phase2Max_10 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_11;
    UniversalNormUnit__DOT__phase2Max_11 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_12;
    UniversalNormUnit__DOT__phase2Max_12 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_13;
    UniversalNormUnit__DOT__phase2Max_13 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_14;
    UniversalNormUnit__DOT__phase2Max_14 = 0;
    CData/*7:0*/ UniversalNormUnit__DOT__phase2Max_15;
    UniversalNormUnit__DOT__phase2Max_15 = 0;
    CData/*0:0*/ UniversalNormUnit__DOT__rawOutValid;
    UniversalNormUnit__DOT__rawOutValid = 0;
    // Body
    vlSelf->UniversalNormUnit__DOT__distributedSoftScaleLookup 
        = ((~ (IData)(vlSelf->io_stall)) & ((IData)(vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__v4) 
                                            & (IData)(vlSelf->__VdfgTmp_h1872b661__0)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_0_io_rd_en 
        = ((~ (IData)(vlSelf->io_stall)) & ((IData)(vlSelf->UniversalNormUnit__DOT__softMaxTree__DOT__v4) 
                                            & (IData)(vlSelf->__VdfgTmp_h1872b661__0)));
    vlSelf->UniversalNormUnit__DOT___T_151 = ((IData)(vlSelf->UniversalNormUnit__DOT__p2ValidD1) 
                                              & (IData)(vlSelf->UniversalNormUnit__DOT___T));
    vlSelf->UniversalNormUnit__DOT__distributedNormalScaleLookup 
        = ((~ (IData)(vlSelf->io_stall)) & ((IData)(vlSelf->UniversalNormUnit__DOT__statTree__DOT__v4) 
                                            & (IData)(vlSelf->__VdfgTmp_h3500f09b__0)));
    vlSelf->UniversalNormUnit__DOT__metaFifo__DOT__deqFire 
        = ((0U != (IData)(vlSelf->UniversalNormUnit__DOT__metaFifo__DOT__count)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_deq_ready));
    UniversalNormUnit__DOT__distributedLastBeat = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                                   & ((IData)(vlSelf->io_layout_mode) 
                                                      & (vlSelf->UniversalNormUnit__DOT__distributedBeatCounter 
                                                         == 
                                                         (0xfffffffU 
                                                          & ((((IData)(0xfU) 
                                                               + vlSelf->UniversalNormUnit__DOT__logicalLengthSafe) 
                                                              >> 4U) 
                                                             - (IData)(1U))))));
    vlSelf->UniversalNormUnit__DOT__metaFifo__DOT__mem_MPORT_en 
        = ((0x100U != (IData)(vlSelf->UniversalNormUnit__DOT__metaFifo__DOT__count)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid));
    vlSelf->UniversalNormUnit__DOT__distributedPhase2VectorLast 
        = ((IData)(vlSelf->UniversalNormUnit__DOT___distributedPhase2VectorStart_T) 
           & (vlSelf->UniversalNormUnit__DOT__distributedPhase2BeatCounter 
              == (0xfffffffU & ((((IData)(0xfU) + vlSelf->UniversalNormUnit__DOT__logicalLengthSafe) 
                                 >> 4U) - (IData)(1U)))));
    UniversalNormUnit__DOT__distPhase2ContextFifo_io_deq_ready 
        = ((IData)(vlSelf->UniversalNormUnit__DOT___distributedPhase2VectorStart_T) 
           & (0U == vlSelf->UniversalNormUnit__DOT__distributedPhase2BeatCounter));
    vlSelf->UniversalNormUnit__DOT___GEN_2 = ((IData)(vlSelf->UniversalNormUnit__DOT__onlineLastBeat)
                                               ? 0U
                                               : ((IData)(1U) 
                                                  + vlSelf->UniversalNormUnit__DOT__onlineElementCounter));
    vlSelf->UniversalNormUnit__DOT___GEN_1583 = ((IData)(vlSelf->UniversalNormUnit__DOT___T_151) 
                                                 & (IData)(vlSelf->UniversalNormUnit__DOT___rawOutMeta_T));
    UniversalNormUnit__DOT__rawOutValid = ((IData)(vlSelf->UniversalNormUnit__DOT___T_154) 
                                           | ((IData)(vlSelf->UniversalNormUnit__DOT___T_152) 
                                              | (IData)(vlSelf->UniversalNormUnit__DOT___T_151)));
    if (vlSelf->UniversalNormUnit__DOT__outHoldValid) {
        vlSelf->io_phase2_out_vec_0 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_0));
        vlSelf->io_phase2_out_vec_1 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_1));
        vlSelf->io_phase2_out_vec_2 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_2));
        vlSelf->io_phase2_out_vec_3 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_3));
        vlSelf->io_phase2_out_vec_4 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_4));
        vlSelf->io_phase2_out_vec_5 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_5));
        vlSelf->io_phase2_out_vec_6 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_6));
        vlSelf->io_phase2_out_vec_7 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_7));
        vlSelf->io_phase2_out_vec_8 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_8));
        vlSelf->io_phase2_out_vec_9 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_9));
        vlSelf->io_phase2_out_vec_10 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_10));
        vlSelf->io_phase2_out_vec_11 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_11));
        vlSelf->io_phase2_out_vec_12 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_12));
        vlSelf->io_phase2_out_vec_13 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_13));
        vlSelf->io_phase2_out_vec_14 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_14));
        vlSelf->io_phase2_out_vec_15 = (0xffU & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldVec_15));
    } else if (vlSelf->UniversalNormUnit__DOT___T_154) {
        vlSelf->io_phase2_out_vec_0 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_0));
        vlSelf->io_phase2_out_vec_1 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_1));
        vlSelf->io_phase2_out_vec_2 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_2));
        vlSelf->io_phase2_out_vec_3 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_3));
        vlSelf->io_phase2_out_vec_4 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_4));
        vlSelf->io_phase2_out_vec_5 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_5));
        vlSelf->io_phase2_out_vec_6 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_6));
        vlSelf->io_phase2_out_vec_7 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_7));
        vlSelf->io_phase2_out_vec_8 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_8));
        vlSelf->io_phase2_out_vec_9 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_9));
        vlSelf->io_phase2_out_vec_10 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_10));
        vlSelf->io_phase2_out_vec_11 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_11));
        vlSelf->io_phase2_out_vec_12 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_12));
        vlSelf->io_phase2_out_vec_13 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_13));
        vlSelf->io_phase2_out_vec_14 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_14));
        vlSelf->io_phase2_out_vec_15 = (0xffU & (IData)(vlSelf->io_phase2_in_vec_15));
    } else if (vlSelf->UniversalNormUnit__DOT___T_152) {
        vlSelf->io_phase2_out_vec_0 = (0xffU & ((0xffU 
                                                 < (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_32 
                                                            >> 0x14U)))
                                                 ? 0xffU
                                                 : (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_32 
                                                            >> 0x14U))));
        vlSelf->io_phase2_out_vec_1 = (0xffU & ((0xffU 
                                                 < (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_33 
                                                            >> 0x14U)))
                                                 ? 0xffU
                                                 : (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_33 
                                                            >> 0x14U))));
        vlSelf->io_phase2_out_vec_2 = (0xffU & ((0xffU 
                                                 < (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_34 
                                                            >> 0x14U)))
                                                 ? 0xffU
                                                 : (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_34 
                                                            >> 0x14U))));
        vlSelf->io_phase2_out_vec_3 = (0xffU & ((0xffU 
                                                 < (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_35 
                                                            >> 0x14U)))
                                                 ? 0xffU
                                                 : (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_35 
                                                            >> 0x14U))));
        vlSelf->io_phase2_out_vec_4 = (0xffU & ((0xffU 
                                                 < (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_36 
                                                            >> 0x14U)))
                                                 ? 0xffU
                                                 : (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_36 
                                                            >> 0x14U))));
        vlSelf->io_phase2_out_vec_5 = (0xffU & ((0xffU 
                                                 < (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_37 
                                                            >> 0x14U)))
                                                 ? 0xffU
                                                 : (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_37 
                                                            >> 0x14U))));
        vlSelf->io_phase2_out_vec_6 = (0xffU & ((0xffU 
                                                 < (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_38 
                                                            >> 0x14U)))
                                                 ? 0xffU
                                                 : (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_38 
                                                            >> 0x14U))));
        vlSelf->io_phase2_out_vec_7 = (0xffU & ((0xffU 
                                                 < (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_39 
                                                            >> 0x14U)))
                                                 ? 0xffU
                                                 : (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_39 
                                                            >> 0x14U))));
        vlSelf->io_phase2_out_vec_8 = (0xffU & ((0xffU 
                                                 < (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_40 
                                                            >> 0x14U)))
                                                 ? 0xffU
                                                 : (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_40 
                                                            >> 0x14U))));
        vlSelf->io_phase2_out_vec_9 = (0xffU & ((0xffU 
                                                 < (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_41 
                                                            >> 0x14U)))
                                                 ? 0xffU
                                                 : (IData)(
                                                           (vlSelf->UniversalNormUnit__DOT__product_41 
                                                            >> 0x14U))));
        vlSelf->io_phase2_out_vec_10 = (0xffU & ((0xffU 
                                                  < (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_42 
                                                             >> 0x14U)))
                                                  ? 0xffU
                                                  : (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_42 
                                                             >> 0x14U))));
        vlSelf->io_phase2_out_vec_11 = (0xffU & ((0xffU 
                                                  < (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_43 
                                                             >> 0x14U)))
                                                  ? 0xffU
                                                  : (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_43 
                                                             >> 0x14U))));
        vlSelf->io_phase2_out_vec_12 = (0xffU & ((0xffU 
                                                  < (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_44 
                                                             >> 0x14U)))
                                                  ? 0xffU
                                                  : (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_44 
                                                             >> 0x14U))));
        vlSelf->io_phase2_out_vec_13 = (0xffU & ((0xffU 
                                                  < (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_45 
                                                             >> 0x14U)))
                                                  ? 0xffU
                                                  : (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_45 
                                                             >> 0x14U))));
        vlSelf->io_phase2_out_vec_14 = (0xffU & ((0xffU 
                                                  < (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_46 
                                                             >> 0x14U)))
                                                  ? 0xffU
                                                  : (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_46 
                                                             >> 0x14U))));
        vlSelf->io_phase2_out_vec_15 = (0xffU & ((0xffU 
                                                  < (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_47 
                                                             >> 0x14U)))
                                                  ? 0xffU
                                                  : (IData)(
                                                            (vlSelf->UniversalNormUnit__DOT__product_47 
                                                             >> 0x14U))));
    } else if (vlSelf->UniversalNormUnit__DOT___T_151) {
        vlSelf->io_phase2_out_vec_0 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                           (0x7fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_16[2U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_16[1U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_16[0U])) 
                                                                     >> 0xeU)))))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_16[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_16[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_16[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x80U
                                                  : 
                                                 ((vlSelf->UniversalNormUnit__DOT__product_16[0U] 
                                                   << 0x12U) 
                                                  | (vlSelf->UniversalNormUnit__DOT__product_16[0U] 
                                                     >> 0xeU)))));
        vlSelf->io_phase2_out_vec_1 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                           (0x7fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_17[2U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_17[1U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_17[0U])) 
                                                                     >> 0xeU)))))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_17[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_17[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_17[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x80U
                                                  : 
                                                 ((vlSelf->UniversalNormUnit__DOT__product_17[0U] 
                                                   << 0x12U) 
                                                  | (vlSelf->UniversalNormUnit__DOT__product_17[0U] 
                                                     >> 0xeU)))));
        vlSelf->io_phase2_out_vec_2 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                           (0x7fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_18[2U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_18[1U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_18[0U])) 
                                                                     >> 0xeU)))))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_18[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_18[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_18[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x80U
                                                  : 
                                                 ((vlSelf->UniversalNormUnit__DOT__product_18[0U] 
                                                   << 0x12U) 
                                                  | (vlSelf->UniversalNormUnit__DOT__product_18[0U] 
                                                     >> 0xeU)))));
        vlSelf->io_phase2_out_vec_3 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                           (0x7fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_19[2U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_19[1U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_19[0U])) 
                                                                     >> 0xeU)))))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_19[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_19[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_19[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x80U
                                                  : 
                                                 ((vlSelf->UniversalNormUnit__DOT__product_19[0U] 
                                                   << 0x12U) 
                                                  | (vlSelf->UniversalNormUnit__DOT__product_19[0U] 
                                                     >> 0xeU)))));
        vlSelf->io_phase2_out_vec_4 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                           (0x7fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_20[2U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_20[1U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_20[0U])) 
                                                                     >> 0xeU)))))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_20[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_20[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_20[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x80U
                                                  : 
                                                 ((vlSelf->UniversalNormUnit__DOT__product_20[0U] 
                                                   << 0x12U) 
                                                  | (vlSelf->UniversalNormUnit__DOT__product_20[0U] 
                                                     >> 0xeU)))));
        vlSelf->io_phase2_out_vec_5 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                           (0x7fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_21[2U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_21[1U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_21[0U])) 
                                                                     >> 0xeU)))))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_21[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_21[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_21[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x80U
                                                  : 
                                                 ((vlSelf->UniversalNormUnit__DOT__product_21[0U] 
                                                   << 0x12U) 
                                                  | (vlSelf->UniversalNormUnit__DOT__product_21[0U] 
                                                     >> 0xeU)))));
        vlSelf->io_phase2_out_vec_6 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                           (0x7fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_22[2U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_22[1U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_22[0U])) 
                                                                     >> 0xeU)))))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_22[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_22[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_22[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x80U
                                                  : 
                                                 ((vlSelf->UniversalNormUnit__DOT__product_22[0U] 
                                                   << 0x12U) 
                                                  | (vlSelf->UniversalNormUnit__DOT__product_22[0U] 
                                                     >> 0xeU)))));
        vlSelf->io_phase2_out_vec_7 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                           (0x7fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_23[2U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_23[1U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_23[0U])) 
                                                                     >> 0xeU)))))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_23[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_23[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_23[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x80U
                                                  : 
                                                 ((vlSelf->UniversalNormUnit__DOT__product_23[0U] 
                                                   << 0x12U) 
                                                  | (vlSelf->UniversalNormUnit__DOT__product_23[0U] 
                                                     >> 0xeU)))));
        vlSelf->io_phase2_out_vec_8 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                           (0x7fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_24[2U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_24[1U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_24[0U])) 
                                                                     >> 0xeU)))))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_24[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_24[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_24[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x80U
                                                  : 
                                                 ((vlSelf->UniversalNormUnit__DOT__product_24[0U] 
                                                   << 0x12U) 
                                                  | (vlSelf->UniversalNormUnit__DOT__product_24[0U] 
                                                     >> 0xeU)))));
        vlSelf->io_phase2_out_vec_9 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                           (0x7fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_25[2U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_25[1U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_25[0U])) 
                                                                     >> 0xeU)))))
                                                 ? 0x7fU
                                                 : 
                                                (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_25[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_25[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_25[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x80U
                                                  : 
                                                 ((vlSelf->UniversalNormUnit__DOT__product_25[0U] 
                                                   << 0x12U) 
                                                  | (vlSelf->UniversalNormUnit__DOT__product_25[0U] 
                                                     >> 0xeU)))));
        vlSelf->io_phase2_out_vec_10 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_26[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_26[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_26[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x7fU
                                                  : 
                                                 (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                             (0x7fffffffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_26[2U])) 
                                                                  << 0x32U) 
                                                                 | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_26[1U])) 
                                                                     << 0x12U) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_26[0U])) 
                                                                       >> 0xeU)))))
                                                   ? 0x80U
                                                   : 
                                                  ((vlSelf->UniversalNormUnit__DOT__product_26[0U] 
                                                    << 0x12U) 
                                                   | (vlSelf->UniversalNormUnit__DOT__product_26[0U] 
                                                      >> 0xeU)))));
        vlSelf->io_phase2_out_vec_11 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_27[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_27[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_27[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x7fU
                                                  : 
                                                 (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                             (0x7fffffffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_27[2U])) 
                                                                  << 0x32U) 
                                                                 | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_27[1U])) 
                                                                     << 0x12U) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_27[0U])) 
                                                                       >> 0xeU)))))
                                                   ? 0x80U
                                                   : 
                                                  ((vlSelf->UniversalNormUnit__DOT__product_27[0U] 
                                                    << 0x12U) 
                                                   | (vlSelf->UniversalNormUnit__DOT__product_27[0U] 
                                                      >> 0xeU)))));
        vlSelf->io_phase2_out_vec_12 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_28[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_28[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_28[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x7fU
                                                  : 
                                                 (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                             (0x7fffffffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_28[2U])) 
                                                                  << 0x32U) 
                                                                 | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_28[1U])) 
                                                                     << 0x12U) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_28[0U])) 
                                                                       >> 0xeU)))))
                                                   ? 0x80U
                                                   : 
                                                  ((vlSelf->UniversalNormUnit__DOT__product_28[0U] 
                                                    << 0x12U) 
                                                   | (vlSelf->UniversalNormUnit__DOT__product_28[0U] 
                                                      >> 0xeU)))));
        vlSelf->io_phase2_out_vec_13 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_29[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_29[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_29[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x7fU
                                                  : 
                                                 (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                             (0x7fffffffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_29[2U])) 
                                                                  << 0x32U) 
                                                                 | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_29[1U])) 
                                                                     << 0x12U) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_29[0U])) 
                                                                       >> 0xeU)))))
                                                   ? 0x80U
                                                   : 
                                                  ((vlSelf->UniversalNormUnit__DOT__product_29[0U] 
                                                    << 0x12U) 
                                                   | (vlSelf->UniversalNormUnit__DOT__product_29[0U] 
                                                      >> 0xeU)))));
        vlSelf->io_phase2_out_vec_14 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_30[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_30[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_30[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x7fU
                                                  : 
                                                 (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                             (0x7fffffffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_30[2U])) 
                                                                  << 0x32U) 
                                                                 | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_30[1U])) 
                                                                     << 0x12U) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_30[0U])) 
                                                                       >> 0xeU)))))
                                                   ? 0x80U
                                                   : 
                                                  ((vlSelf->UniversalNormUnit__DOT__product_30[0U] 
                                                    << 0x12U) 
                                                   | (vlSelf->UniversalNormUnit__DOT__product_30[0U] 
                                                      >> 0xeU)))));
        vlSelf->io_phase2_out_vec_15 = (0xffU & (VL_LTS_IQQ(55, 0x7fULL, 
                                                            (0x7fffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_31[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_31[1U])) 
                                                                    << 0x12U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_31[0U])) 
                                                                      >> 0xeU)))))
                                                  ? 0x7fU
                                                  : 
                                                 (VL_GTS_IQQ(55, 0x7fffffffffff80ULL, 
                                                             (0x7fffffffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_31[2U])) 
                                                                  << 0x32U) 
                                                                 | (((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_31[1U])) 
                                                                     << 0x12U) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->UniversalNormUnit__DOT__product_31[0U])) 
                                                                       >> 0xeU)))))
                                                   ? 0x80U
                                                   : 
                                                  ((vlSelf->UniversalNormUnit__DOT__product_31[0U] 
                                                    << 0x12U) 
                                                   | (vlSelf->UniversalNormUnit__DOT__product_31[0U] 
                                                      >> 0xeU)))));
    } else {
        vlSelf->io_phase2_out_vec_0 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_1 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_2 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_3 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_4 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_5 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_6 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_7 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_8 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_9 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_10 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_11 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_12 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_13 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_14 = (0xffU & 0U);
        vlSelf->io_phase2_out_vec_15 = (0xffU & 0U);
    }
    vlSelf->UniversalNormUnit__DOT___GEN_0 = ((IData)(UniversalNormUnit__DOT__distributedLastBeat)
                                               ? 0U
                                               : ((IData)(1U) 
                                                  + vlSelf->UniversalNormUnit__DOT__distributedBeatCounter));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_1 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (1U < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_2 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (2U < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_3 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (3U < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_4 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (4U < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_5 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (5U < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_6 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (6U < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_7 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (7U < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_8 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (8U < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_9 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (9U < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_10 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (0xaU < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_11 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (0xbU < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_12 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (0xcU < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_13 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (0xdU < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_14 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (0xeU < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_15 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (0xfU < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__statLaneValid_0 
        = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                 | ((~ (IData)(UniversalNormUnit__DOT__distributedLastBeat)) 
                    | (0U < (IData)(vlSelf->UniversalNormUnit__DOT__validLanesOnLastBeat)))));
    vlSelf->UniversalNormUnit__DOT__phase1Last = ((IData)(vlSelf->UniversalNormUnit__DOT__onlineLastBeat) 
                                                  | (IData)(UniversalNormUnit__DOT__distributedLastBeat));
    UniversalNormUnit__DOT__distPhase2ContextFifo_io_underflow 
        = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo_io_deq_valid)) 
           & (IData)(UniversalNormUnit__DOT__distPhase2ContextFifo_io_deq_ready));
    vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__deqFire 
        = ((IData)(UniversalNormUnit__DOT__distPhase2ContextFifo_io_deq_ready) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo_io_deq_valid));
    vlSelf->UniversalNormUnit__DOT___T_157 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__outHoldValid)) 
                                              & ((IData)(vlSelf->io_stall) 
                                                 & (IData)(UniversalNormUnit__DOT__rawOutValid)));
    vlSelf->io_phase2_out_valid_vec_0 = ((~ (IData)(vlSelf->io_stall)) 
                                         & ((IData)(vlSelf->UniversalNormUnit__DOT__outHoldValid) 
                                            | (IData)(UniversalNormUnit__DOT__rawOutValid)));
    UniversalNormUnit__DOT__validForStats_1 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                               & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_1));
    vlSelf->UniversalNormUnit__DOT__takeSample_1 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_1));
    UniversalNormUnit__DOT__validForStats_2 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                               & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_2));
    vlSelf->UniversalNormUnit__DOT__takeSample_2 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_2));
    UniversalNormUnit__DOT__validForStats_3 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                               & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_3));
    vlSelf->UniversalNormUnit__DOT__takeSample_3 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_3));
    UniversalNormUnit__DOT__validForStats_4 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                               & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_4));
    vlSelf->UniversalNormUnit__DOT__takeSample_4 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_4));
    UniversalNormUnit__DOT__validForStats_5 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                               & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_5));
    vlSelf->UniversalNormUnit__DOT__takeSample_5 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_5));
    UniversalNormUnit__DOT__validForStats_6 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                               & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_6));
    vlSelf->UniversalNormUnit__DOT__takeSample_6 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_6));
    UniversalNormUnit__DOT__validForStats_7 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                               & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_7));
    vlSelf->UniversalNormUnit__DOT__takeSample_7 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_7));
    UniversalNormUnit__DOT__validForStats_8 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                               & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_8));
    vlSelf->UniversalNormUnit__DOT__takeSample_8 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_8));
    UniversalNormUnit__DOT__validForStats_9 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                               & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_9));
    vlSelf->UniversalNormUnit__DOT__takeSample_9 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_9));
    UniversalNormUnit__DOT__validForStats_10 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                                & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_10));
    vlSelf->UniversalNormUnit__DOT__takeSample_10 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_10));
    UniversalNormUnit__DOT__validForStats_11 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                                & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_11));
    vlSelf->UniversalNormUnit__DOT__takeSample_11 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_11));
    UniversalNormUnit__DOT__validForStats_12 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                                & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_12));
    vlSelf->UniversalNormUnit__DOT__takeSample_12 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_12));
    UniversalNormUnit__DOT__validForStats_13 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                                & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_13));
    vlSelf->UniversalNormUnit__DOT__takeSample_13 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_13));
    UniversalNormUnit__DOT__validForStats_14 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                                & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_14));
    vlSelf->UniversalNormUnit__DOT__takeSample_14 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_14));
    UniversalNormUnit__DOT__validForStats_15 = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                                & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_15));
    vlSelf->UniversalNormUnit__DOT__takeSample_15 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
         & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_15));
    vlSelf->UniversalNormUnit__DOT__takeSample = ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
                                                  & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_0));
    UniversalNormUnit__DOT__validForStats = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                             & (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_0));
    vlSelf->io_phase1_vector_done = ((~ (IData)(vlSelf->io_stall)) 
                                     & (IData)(vlSelf->UniversalNormUnit__DOT__phase1Last));
    UniversalNormUnit__DOT___T_35 = ((IData)(vlSelf->UniversalNormUnit__DOT___takeSample_T) 
                                     & ((IData)(vlSelf->io_layout_mode) 
                                        & (IData)(vlSelf->UniversalNormUnit__DOT__phase1Last)));
    vlSelf->UniversalNormUnit__DOT___launchDistributedNormal_T 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__phase1Last));
    vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__storedDeq 
        = ((0U != (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__count)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__deqFire));
    vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__storeEnq 
        = ((~ ((0U == (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__count)) 
               & ((IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo_io_enq_valid) 
                  & (IData)(UniversalNormUnit__DOT__distPhase2ContextFifo_io_deq_ready)))) 
           & ((IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo_io_enq_valid) 
              & ((4U != (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__count)) 
                 | (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__deqFire))));
    UniversalNormUnit__DOT__distributedPhase2Max = 
        (((IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__deqFire) 
          & (3U == (IData)(vlSelf->io_mode_sel))) ? (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo_io_deq_bits_max)
          : (IData)(vlSelf->UniversalNormUnit__DOT__globalSoftMaxReg));
    vlSelf->UniversalNormUnit__DOT___GEN_1638 = ((IData)(vlSelf->UniversalNormUnit__DOT___T_157) 
                                                 | ((~ 
                                                     ((~ (IData)(vlSelf->io_stall)) 
                                                      & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldValid))) 
                                                    & (IData)(vlSelf->UniversalNormUnit__DOT__outHoldValid)));
    vlSelf->io_phase2_out_valid_vec_1 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_2 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_3 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_4 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_5 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_6 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_7 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_8 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_9 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_10 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_11 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_12 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_13 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_14 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_out_valid_vec_15 = vlSelf->io_phase2_out_valid_vec_0;
    vlSelf->io_phase2_row_change_update_out = ((IData)(vlSelf->io_phase2_out_valid_vec_0) 
                                               & ((IData)(vlSelf->UniversalNormUnit__DOT__outHoldValid)
                                                   ? (IData)(vlSelf->UniversalNormUnit__DOT__outHoldMeta)
                                                   : 
                                                  ((~ (IData)(vlSelf->UniversalNormUnit__DOT___T_154)) 
                                                   & ((IData)(vlSelf->UniversalNormUnit__DOT___T_152)
                                                       ? (IData)(vlSelf->UniversalNormUnit__DOT___rawOutMeta_T)
                                                       : (IData)(vlSelf->UniversalNormUnit__DOT___GEN_1583)))));
    if (UniversalNormUnit__DOT__validForStats_1) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_1 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_1 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_1))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_1)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_1 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_1))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_1) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_1))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_1 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_1;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_1 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_1;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_1) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_1) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_1_io_rd_addr 
                = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_1), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_1))
                             ? ((IData)(vlSelf->io_phase1_in_vec_1) 
                                - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_1))
                             : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_1) 
                                - (IData)(vlSelf->io_phase1_in_vec_1))));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_1_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_1_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_1_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_1_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_1_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_2) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_2 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_2 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_2))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_2)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_2 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_2))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_2) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_2))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_2 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_2;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_2 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_2;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_2) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_2) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_2_io_rd_addr 
                = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_2), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_2))
                             ? ((IData)(vlSelf->io_phase1_in_vec_2) 
                                - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_2))
                             : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_2) 
                                - (IData)(vlSelf->io_phase1_in_vec_2))));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_2_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_2_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_2_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_2_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_2_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_3) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_3 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_3 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_3))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_3)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_3 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_3))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_3) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_3))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_3 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_3;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_3 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_3;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_3) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_3) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_3_io_rd_addr 
                = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_3), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_3))
                             ? ((IData)(vlSelf->io_phase1_in_vec_3) 
                                - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_3))
                             : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_3) 
                                - (IData)(vlSelf->io_phase1_in_vec_3))));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_3_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_3_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_3_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_3_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_3_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_4) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_4 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_4 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_4))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_4)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_4 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_4))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_4) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_4))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_4 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_4;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_4 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_4;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_4) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_4) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_4_io_rd_addr 
                = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_4), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_4))
                             ? ((IData)(vlSelf->io_phase1_in_vec_4) 
                                - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_4))
                             : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_4) 
                                - (IData)(vlSelf->io_phase1_in_vec_4))));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_4_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_4_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_4_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_4_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_4_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_5) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_5 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_5 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_5))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_5)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_5 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_5))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_5) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_5))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_5 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_5;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_5 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_5;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_5) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_5) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_5_io_rd_addr 
                = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_5), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_5))
                             ? ((IData)(vlSelf->io_phase1_in_vec_5) 
                                - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_5))
                             : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_5) 
                                - (IData)(vlSelf->io_phase1_in_vec_5))));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_5_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_5_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_5_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_5_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_5_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_6) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_6 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_6 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_6))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_6)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_6 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_6))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_6) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_6))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_6 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_6;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_6 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_6;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_6) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_6) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_6_io_rd_addr 
                = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_6), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_6))
                             ? ((IData)(vlSelf->io_phase1_in_vec_6) 
                                - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_6))
                             : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_6) 
                                - (IData)(vlSelf->io_phase1_in_vec_6))));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_6_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_6_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_6_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_6_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_6_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_7) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_7 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_7 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_7))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_7)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_7 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_7))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_7) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_7))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_7 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_7;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_7 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_7;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_7) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_7) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_7_io_rd_addr 
                = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_7), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_7))
                             ? ((IData)(vlSelf->io_phase1_in_vec_7) 
                                - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_7))
                             : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_7) 
                                - (IData)(vlSelf->io_phase1_in_vec_7))));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_7_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_7_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_7_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_7_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_7_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_8) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_8 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_8 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_8))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_8)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_8 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_8))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_8) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_8))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_8 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_8;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_8 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_8;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_8) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_8) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_8_io_rd_addr 
                = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_8), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_8))
                             ? ((IData)(vlSelf->io_phase1_in_vec_8) 
                                - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_8))
                             : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_8) 
                                - (IData)(vlSelf->io_phase1_in_vec_8))));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_8_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_8_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_8_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_8_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_8_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_9) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_9 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_9 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_9))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_9)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_9 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_9))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_9) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_9))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_9 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_9;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_9 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_9;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_9) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_9) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_9_io_rd_addr 
                = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_9), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_9))
                             ? ((IData)(vlSelf->io_phase1_in_vec_9) 
                                - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_9))
                             : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_9) 
                                - (IData)(vlSelf->io_phase1_in_vec_9))));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_9_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_9_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_9_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_9_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_9_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_10) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_10 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_10 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_10))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_10)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_10 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_10))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_10) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_10))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_10 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_10;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_10 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_10;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_10) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_10) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_10_io_rd_addr 
                = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_10), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_10))
                             ? ((IData)(vlSelf->io_phase1_in_vec_10) 
                                - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_10))
                             : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_10) 
                                - (IData)(vlSelf->io_phase1_in_vec_10))));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_10_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_10_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_10_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_10_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_10_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_11) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_11 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_11 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_11))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_11)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_11 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_11))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_11) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_11))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_11 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_11;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_11 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_11;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_11) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_11) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_11_io_rd_addr 
                = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_11), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_11))
                             ? ((IData)(vlSelf->io_phase1_in_vec_11) 
                                - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_11))
                             : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_11) 
                                - (IData)(vlSelf->io_phase1_in_vec_11))));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_11_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_11_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_11_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_11_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_11_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_12) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_12 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_12 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_12))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_12)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_12 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_12))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_12) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_12))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_12 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_12;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_12 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_12;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_12) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_12) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_12_io_rd_addr 
                = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_12), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_12))
                             ? ((IData)(vlSelf->io_phase1_in_vec_12) 
                                - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_12))
                             : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_12) 
                                - (IData)(vlSelf->io_phase1_in_vec_12))));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_12_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_12_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_12_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_12_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_12_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_13) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_13 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_13 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_13))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_13)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_13 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_13))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_13) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_13))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_13 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_13;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_13 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_13;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_13) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_13) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_13_io_rd_addr 
                = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_13), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_13))
                             ? ((IData)(vlSelf->io_phase1_in_vec_13) 
                                - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_13))
                             : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_13) 
                                - (IData)(vlSelf->io_phase1_in_vec_13))));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_13_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_13_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_13_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_13_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_13_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_14) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_14 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_14 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_14))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_14)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_14 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_14))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_14) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_14))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_14 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_14;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_14 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_14;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_14) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_14) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_14_io_rd_addr 
                = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_14), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_14))
                             ? ((IData)(vlSelf->io_phase1_in_vec_14) 
                                - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_14))
                             : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_14) 
                                - (IData)(vlSelf->io_phase1_in_vec_14))));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_14_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_14_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_14_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_14_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_14_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats_15) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_15 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_15 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_15))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_15)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_15 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_15))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_15) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_15))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_15 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_15;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_15 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_15;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample_15) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_15) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_15_io_rd_addr 
                = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_15), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_15))
                             ? ((IData)(vlSelf->io_phase1_in_vec_15) 
                                - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_15))
                             : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_15) 
                                - (IData)(vlSelf->io_phase1_in_vec_15))));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_15_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_15_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_15_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_15_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_15_io_rd_en = 0U;
    }
    if (vlSelf->UniversalNormUnit__DOT__takeSample) {
        if (vlSelf->UniversalNormUnit__DOT__softBaseSeen_0) {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_0_io_rd_addr 
                = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_0), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_0))
                             ? ((IData)(vlSelf->io_phase1_in_vec_0) 
                                - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_0))
                             : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_0) 
                                - (IData)(vlSelf->io_phase1_in_vec_0))));
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_0_io_rd_en = 1U;
        } else {
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_0_io_rd_addr = 0U;
            vlSelf->UniversalNormUnit__DOT__streamExpLuts_0_io_rd_en = 0U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_0_io_rd_addr = 0U;
        vlSelf->UniversalNormUnit__DOT__streamExpLuts_0_io_rd_en = 0U;
    }
    if (UniversalNormUnit__DOT__validForStats) {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_0 
            = (vlSelf->UniversalNormUnit__DOT__sqSumRegs_0 
               + (IData)((QData)((IData)((0xffffU & 
                                          VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_0))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSelf->io_phase1_in_vec_0)))))))));
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_0 
            = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->UniversalNormUnit__DOT__sumRegs_0))) 
               + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->io_phase1_in_vec_0) 
                                                                          >> 7U)))) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->io_phase1_in_vec_0))))));
    } else {
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_0 
            = vlSelf->UniversalNormUnit__DOT__sqSumRegs_0;
        vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_0 
            = vlSelf->UniversalNormUnit__DOT__sumRegs_0;
    }
    vlSelf->UniversalNormUnit__DOT___T_37 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_0)) 
                                             & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_43 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_1)) 
                                             & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_49 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_2)) 
                                             & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_55 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_3)) 
                                             & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_61 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_4)) 
                                             & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_67 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_5)) 
                                             & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_73 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_6)) 
                                             & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_79 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_7)) 
                                             & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_85 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_8)) 
                                             & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_91 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_9)) 
                                             & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_97 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_10)) 
                                             & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_103 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_11)) 
                                              & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_109 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_12)) 
                                              & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_115 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_13)) 
                                              & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_121 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_14)) 
                                              & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT___T_127 = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__statLaneValid_15)) 
                                              & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT__distMultiBeatFinal 
        = ((1U != (((IData)(0xfU) + vlSelf->UniversalNormUnit__DOT__logicalLengthSafe) 
                   >> 4U)) & (IData)(UniversalNormUnit__DOT___T_35));
    vlSelf->UniversalNormUnit__DOT__distDirectFinal 
        = ((IData)(UniversalNormUnit__DOT___T_35) & 
           (1U == (((IData)(0xfU) + vlSelf->UniversalNormUnit__DOT__logicalLengthSafe) 
                   >> 4U)));
    vlSelf->UniversalNormUnit__DOT__onlineNormalScaleLookup 
        = ((~ (IData)(vlSelf->io_layout_mode)) & ((IData)(vlSelf->UniversalNormUnit__DOT___launchDistributedNormal_T) 
                                                  & (IData)(vlSelf->UniversalNormUnit__DOT___T)));
    if (vlSelf->io_layout_mode) {
        UniversalNormUnit__DOT__phase2Max = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_1 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_2 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_3 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_4 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_5 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_6 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_7 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_8 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_9 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_10 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_11 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_12 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_13 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_14 = UniversalNormUnit__DOT__distributedPhase2Max;
        UniversalNormUnit__DOT__phase2Max_15 = UniversalNormUnit__DOT__distributedPhase2Max;
    } else {
        UniversalNormUnit__DOT__phase2Max = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_0;
        UniversalNormUnit__DOT__phase2Max_1 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_1;
        UniversalNormUnit__DOT__phase2Max_2 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_2;
        UniversalNormUnit__DOT__phase2Max_3 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_3;
        UniversalNormUnit__DOT__phase2Max_4 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_4;
        UniversalNormUnit__DOT__phase2Max_5 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_5;
        UniversalNormUnit__DOT__phase2Max_6 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_6;
        UniversalNormUnit__DOT__phase2Max_7 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_7;
        UniversalNormUnit__DOT__phase2Max_8 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_8;
        UniversalNormUnit__DOT__phase2Max_9 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_9;
        UniversalNormUnit__DOT__phase2Max_10 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_10;
        UniversalNormUnit__DOT__phase2Max_11 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_11;
        UniversalNormUnit__DOT__phase2Max_12 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_12;
        UniversalNormUnit__DOT__phase2Max_13 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_13;
        UniversalNormUnit__DOT__phase2Max_14 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_14;
        UniversalNormUnit__DOT__phase2Max_15 = vlSelf->UniversalNormUnit__DOT__onlineMaxRegs_15;
    }
    UniversalNormUnit__DOT__layerPair_ex2_1 = (IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_1)) 
                                                           * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                          >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_1 = (IData)(
                                                            (0x1fffffffffULL 
                                                             & (VL_MULS_QQQ(57, 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_1)), 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                                                >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_2 = (IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_2)) 
                                                           * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                          >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_2 = (IData)(
                                                            (0x1fffffffffULL 
                                                             & (VL_MULS_QQQ(57, 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_2)), 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                                                >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_3 = (IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_3)) 
                                                           * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                          >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_3 = (IData)(
                                                            (0x1fffffffffULL 
                                                             & (VL_MULS_QQQ(57, 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_3)), 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                                                >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_4 = (IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_4)) 
                                                           * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                          >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_4 = (IData)(
                                                            (0x1fffffffffULL 
                                                             & (VL_MULS_QQQ(57, 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_4)), 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                                                >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_5 = (IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_5)) 
                                                           * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                          >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_5 = (IData)(
                                                            (0x1fffffffffULL 
                                                             & (VL_MULS_QQQ(57, 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_5)), 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                                                >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_6 = (IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_6)) 
                                                           * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                          >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_6 = (IData)(
                                                            (0x1fffffffffULL 
                                                             & (VL_MULS_QQQ(57, 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_6)), 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                                                >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_7 = (IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_7)) 
                                                           * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                          >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_7 = (IData)(
                                                            (0x1fffffffffULL 
                                                             & (VL_MULS_QQQ(57, 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_7)), 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                                                >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_8 = (IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_8)) 
                                                           * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                          >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_8 = (IData)(
                                                            (0x1fffffffffULL 
                                                             & (VL_MULS_QQQ(57, 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_8)), 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                                                >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_9 = (IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_9)) 
                                                           * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                          >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_9 = (IData)(
                                                            (0x1fffffffffULL 
                                                             & (VL_MULS_QQQ(57, 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_9)), 
                                                                            (0x1ffffffffffffffULL 
                                                                             & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                                                >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_10 = (IData)(
                                                       (0xfffffffffULL 
                                                        & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_10)) 
                                                            * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                           >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_10 
        = (IData)((0x1fffffffffULL & (VL_MULS_QQQ(57, 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_10)), 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                      >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_11 = (IData)(
                                                       (0xfffffffffULL 
                                                        & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_11)) 
                                                            * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                           >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_11 
        = (IData)((0x1fffffffffULL & (VL_MULS_QQQ(57, 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_11)), 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                      >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_12 = (IData)(
                                                       (0xfffffffffULL 
                                                        & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_12)) 
                                                            * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                           >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_12 
        = (IData)((0x1fffffffffULL & (VL_MULS_QQQ(57, 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_12)), 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                      >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_13 = (IData)(
                                                       (0xfffffffffULL 
                                                        & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_13)) 
                                                            * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                           >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_13 
        = (IData)((0x1fffffffffULL & (VL_MULS_QQQ(57, 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_13)), 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                      >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_14 = (IData)(
                                                       (0xfffffffffULL 
                                                        & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_14)) 
                                                            * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                           >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_14 
        = (IData)((0x1fffffffffULL & (VL_MULS_QQQ(57, 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_14)), 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                      >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2_15 = (IData)(
                                                       (0xfffffffffULL 
                                                        & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_15)) 
                                                            * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                           >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT__layerPair_1_15 
        = (IData)((0x1fffffffffULL & (VL_MULS_QQQ(57, 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_15)), 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                      >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_ex2 = (IData)(
                                                    (0xfffffffffULL 
                                                     & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__statTree_io_in_sqsum_0)) 
                                                         * (QData)((IData)(vlSelf->io_inv_vector_length))) 
                                                        >> 0x14U)));
    UniversalNormUnit__DOT__layerPair_1 = (IData)((0x1fffffffffULL 
                                                   & (VL_MULS_QQQ(57, 
                                                                  (0x1ffffffffffffffULL 
                                                                   & VL_EXTENDS_QI(57,32, vlSelf->UniversalNormUnit__DOT__statTree_io_in_sum_0)), 
                                                                  (0x1ffffffffffffffULL 
                                                                   & VL_EXTENDS_QI(57,25, vlSelf->io_inv_vector_length))) 
                                                      >> 0x14U)));
    vlSelf->UniversalNormUnit__DOT___GEN_1035 = ((IData)(vlSelf->UniversalNormUnit__DOT__distMultiBeatFinal) 
                                                 | (IData)(vlSelf->UniversalNormUnit__DOT__distFinalAwaitingResp));
    UniversalNormUnit__DOT__softContextFifo_io_enq_valid 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__distFinalRespReady) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__distDirectFinal));
    if (vlSelf->UniversalNormUnit__DOT__distFinalRespReady) {
        if (vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_0) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_0 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_0;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_0 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_0;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_0 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseSum_0;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_0 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_0;
        }
        if (vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_1) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_1 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_1;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_1 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_1;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_1 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseSum_1;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_1 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_1;
        }
        if (vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_2) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_2 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_2;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_2 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_2;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_2 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseSum_2;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_2 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_2;
        }
        if (vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_3) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_3 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_3;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_3 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_3;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_3 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseSum_3;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_3 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_3;
        }
        if (vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_4) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_4 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_4;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_4 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_4;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_4 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseSum_4;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_4 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_4;
        }
        if (vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_5) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_5 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_5;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_5 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_5;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_5 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseSum_5;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_5 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_5;
        }
        if (vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_6) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_6 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_6;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_6 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_6;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_6 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseSum_6;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_6 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_6;
        }
        if (vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_7) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_7 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_7;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_7 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_7;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_7 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseSum_7;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_7 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_7;
        }
        if (vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_8) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_8 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_8;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_8 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_8;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_8 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseSum_8;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_8 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_8;
        }
        if (vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_9) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_9 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_9;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_9 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_9;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_9 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseSum_9;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_9 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_9;
        }
        if (vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_10) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_10 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_10;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_10 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_10;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_10 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseSum_10;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_10 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_10;
        }
        if (vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_11) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_11 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_11;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_11 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_11;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_11 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseSum_11;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_11 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_11;
        }
        if (vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_12) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_12 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_12;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_12 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_12;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_12 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseSum_12;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_12 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_12;
        }
        if (vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_13) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_13 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_13;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_13 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_13;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_13 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseSum_13;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_13 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_13;
        }
        if (vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_14) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_14 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_14;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_14 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_14;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_14 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseSum_14;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_14 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_14;
        }
        if (vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_15) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_15 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_15;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_15 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_15;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_15 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseSum_15;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_15 
                = vlSelf->UniversalNormUnit__DOT__distFinalBaseMax_15;
        }
    } else if (vlSelf->UniversalNormUnit__DOT__distDirectFinal) {
        if (vlSelf->UniversalNormUnit__DOT__statLaneValid_0) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_0 = 0x4000U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_0 
                = vlSelf->io_phase1_in_vec_0;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_0 = 0U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_0 = 0x80U;
        }
        if (vlSelf->UniversalNormUnit__DOT__statLaneValid_1) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_1 = 0x4000U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_1 
                = vlSelf->io_phase1_in_vec_1;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_1 = 0U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_1 = 0x80U;
        }
        if (vlSelf->UniversalNormUnit__DOT__statLaneValid_2) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_2 = 0x4000U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_2 
                = vlSelf->io_phase1_in_vec_2;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_2 = 0U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_2 = 0x80U;
        }
        if (vlSelf->UniversalNormUnit__DOT__statLaneValid_3) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_3 = 0x4000U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_3 
                = vlSelf->io_phase1_in_vec_3;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_3 = 0U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_3 = 0x80U;
        }
        if (vlSelf->UniversalNormUnit__DOT__statLaneValid_4) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_4 = 0x4000U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_4 
                = vlSelf->io_phase1_in_vec_4;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_4 = 0U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_4 = 0x80U;
        }
        if (vlSelf->UniversalNormUnit__DOT__statLaneValid_5) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_5 = 0x4000U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_5 
                = vlSelf->io_phase1_in_vec_5;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_5 = 0U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_5 = 0x80U;
        }
        if (vlSelf->UniversalNormUnit__DOT__statLaneValid_6) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_6 = 0x4000U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_6 
                = vlSelf->io_phase1_in_vec_6;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_6 = 0U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_6 = 0x80U;
        }
        if (vlSelf->UniversalNormUnit__DOT__statLaneValid_7) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_7 = 0x4000U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_7 
                = vlSelf->io_phase1_in_vec_7;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_7 = 0U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_7 = 0x80U;
        }
        if (vlSelf->UniversalNormUnit__DOT__statLaneValid_8) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_8 = 0x4000U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_8 
                = vlSelf->io_phase1_in_vec_8;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_8 = 0U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_8 = 0x80U;
        }
        if (vlSelf->UniversalNormUnit__DOT__statLaneValid_9) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_9 = 0x4000U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_9 
                = vlSelf->io_phase1_in_vec_9;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_9 = 0U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_9 = 0x80U;
        }
        if (vlSelf->UniversalNormUnit__DOT__statLaneValid_10) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_10 = 0x4000U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_10 
                = vlSelf->io_phase1_in_vec_10;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_10 = 0U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_10 = 0x80U;
        }
        if (vlSelf->UniversalNormUnit__DOT__statLaneValid_11) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_11 = 0x4000U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_11 
                = vlSelf->io_phase1_in_vec_11;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_11 = 0U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_11 = 0x80U;
        }
        if (vlSelf->UniversalNormUnit__DOT__statLaneValid_12) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_12 = 0x4000U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_12 
                = vlSelf->io_phase1_in_vec_12;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_12 = 0U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_12 = 0x80U;
        }
        if (vlSelf->UniversalNormUnit__DOT__statLaneValid_13) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_13 = 0x4000U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_13 
                = vlSelf->io_phase1_in_vec_13;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_13 = 0U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_13 = 0x80U;
        }
        if (vlSelf->UniversalNormUnit__DOT__statLaneValid_14) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_14 = 0x4000U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_14 
                = vlSelf->io_phase1_in_vec_14;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_14 = 0U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_14 = 0x80U;
        }
        if (vlSelf->UniversalNormUnit__DOT__statLaneValid_15) {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_15 = 0x4000U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_15 
                = vlSelf->io_phase1_in_vec_15;
        } else {
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_15 = 0U;
            vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_15 = 0x80U;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_0 = 0U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_1 = 0U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_2 = 0U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_3 = 0U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_4 = 0U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_5 = 0U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_6 = 0U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_7 = 0U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_8 = 0U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_9 = 0U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_10 = 0U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_11 = 0U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_12 = 0U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_13 = 0U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_14 = 0U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_sum_15 = 0U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_0 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_1 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_2 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_3 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_4 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_5 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_6 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_7 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_8 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_9 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_10 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_11 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_12 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_13 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_14 = 0x80U;
        vlSelf->UniversalNormUnit__DOT__softContextFifo_io_enq_bits_max_15 = 0x80U;
    }
    vlSelf->UniversalNormUnit__DOT__scaleLuts_1_io_rd_en 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__launchOnlineSoftFinal) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__onlineNormalScaleLookup));
    vlSelf->UniversalNormUnit__DOT__scaleLuts_0_io_rd_en 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__distributedSoftScaleLookup) 
           | ((IData)(vlSelf->UniversalNormUnit__DOT__launchOnlineSoftFinal) 
              | ((IData)(vlSelf->UniversalNormUnit__DOT__distributedNormalScaleLookup) 
                 | (IData)(vlSelf->UniversalNormUnit__DOT__onlineNormalScaleLookup))));
    UniversalNormUnit__DOT__scaleLookupFire = ((IData)(vlSelf->UniversalNormUnit__DOT__onlineNormalScaleLookup) 
                                               | ((IData)(vlSelf->UniversalNormUnit__DOT__distributedNormalScaleLookup) 
                                                  | ((IData)(vlSelf->UniversalNormUnit__DOT__launchOnlineSoftFinal) 
                                                     | (IData)(vlSelf->UniversalNormUnit__DOT__distributedSoftScaleLookup))));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_0_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max), (IData)(vlSelf->io_phase2_in_vec_0))
                     ? ((IData)(UniversalNormUnit__DOT__phase2Max) 
                        - (IData)(vlSelf->io_phase2_in_vec_0))
                     : ((IData)(vlSelf->io_phase2_in_vec_0) 
                        - (IData)(UniversalNormUnit__DOT__phase2Max))));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_1_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_1), (IData)(vlSelf->io_phase2_in_vec_1))
                     ? ((IData)(UniversalNormUnit__DOT__phase2Max_1) 
                        - (IData)(vlSelf->io_phase2_in_vec_1))
                     : ((IData)(vlSelf->io_phase2_in_vec_1) 
                        - (IData)(UniversalNormUnit__DOT__phase2Max_1))));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_2_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_2), (IData)(vlSelf->io_phase2_in_vec_2))
                     ? ((IData)(UniversalNormUnit__DOT__phase2Max_2) 
                        - (IData)(vlSelf->io_phase2_in_vec_2))
                     : ((IData)(vlSelf->io_phase2_in_vec_2) 
                        - (IData)(UniversalNormUnit__DOT__phase2Max_2))));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_3_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_3), (IData)(vlSelf->io_phase2_in_vec_3))
                     ? ((IData)(UniversalNormUnit__DOT__phase2Max_3) 
                        - (IData)(vlSelf->io_phase2_in_vec_3))
                     : ((IData)(vlSelf->io_phase2_in_vec_3) 
                        - (IData)(UniversalNormUnit__DOT__phase2Max_3))));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_4_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_4), (IData)(vlSelf->io_phase2_in_vec_4))
                     ? ((IData)(UniversalNormUnit__DOT__phase2Max_4) 
                        - (IData)(vlSelf->io_phase2_in_vec_4))
                     : ((IData)(vlSelf->io_phase2_in_vec_4) 
                        - (IData)(UniversalNormUnit__DOT__phase2Max_4))));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_5_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_5), (IData)(vlSelf->io_phase2_in_vec_5))
                     ? ((IData)(UniversalNormUnit__DOT__phase2Max_5) 
                        - (IData)(vlSelf->io_phase2_in_vec_5))
                     : ((IData)(vlSelf->io_phase2_in_vec_5) 
                        - (IData)(UniversalNormUnit__DOT__phase2Max_5))));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_6_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_6), (IData)(vlSelf->io_phase2_in_vec_6))
                     ? ((IData)(UniversalNormUnit__DOT__phase2Max_6) 
                        - (IData)(vlSelf->io_phase2_in_vec_6))
                     : ((IData)(vlSelf->io_phase2_in_vec_6) 
                        - (IData)(UniversalNormUnit__DOT__phase2Max_6))));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_7_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_7), (IData)(vlSelf->io_phase2_in_vec_7))
                     ? ((IData)(UniversalNormUnit__DOT__phase2Max_7) 
                        - (IData)(vlSelf->io_phase2_in_vec_7))
                     : ((IData)(vlSelf->io_phase2_in_vec_7) 
                        - (IData)(UniversalNormUnit__DOT__phase2Max_7))));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_8_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_8), (IData)(vlSelf->io_phase2_in_vec_8))
                     ? ((IData)(UniversalNormUnit__DOT__phase2Max_8) 
                        - (IData)(vlSelf->io_phase2_in_vec_8))
                     : ((IData)(vlSelf->io_phase2_in_vec_8) 
                        - (IData)(UniversalNormUnit__DOT__phase2Max_8))));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_9_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_9), (IData)(vlSelf->io_phase2_in_vec_9))
                     ? ((IData)(UniversalNormUnit__DOT__phase2Max_9) 
                        - (IData)(vlSelf->io_phase2_in_vec_9))
                     : ((IData)(vlSelf->io_phase2_in_vec_9) 
                        - (IData)(UniversalNormUnit__DOT__phase2Max_9))));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_10_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_10), (IData)(vlSelf->io_phase2_in_vec_10))
                     ? ((IData)(UniversalNormUnit__DOT__phase2Max_10) 
                        - (IData)(vlSelf->io_phase2_in_vec_10))
                     : ((IData)(vlSelf->io_phase2_in_vec_10) 
                        - (IData)(UniversalNormUnit__DOT__phase2Max_10))));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_11_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_11), (IData)(vlSelf->io_phase2_in_vec_11))
                     ? ((IData)(UniversalNormUnit__DOT__phase2Max_11) 
                        - (IData)(vlSelf->io_phase2_in_vec_11))
                     : ((IData)(vlSelf->io_phase2_in_vec_11) 
                        - (IData)(UniversalNormUnit__DOT__phase2Max_11))));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_12_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_12), (IData)(vlSelf->io_phase2_in_vec_12))
                     ? ((IData)(UniversalNormUnit__DOT__phase2Max_12) 
                        - (IData)(vlSelf->io_phase2_in_vec_12))
                     : ((IData)(vlSelf->io_phase2_in_vec_12) 
                        - (IData)(UniversalNormUnit__DOT__phase2Max_12))));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_13_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_13), (IData)(vlSelf->io_phase2_in_vec_13))
                     ? ((IData)(UniversalNormUnit__DOT__phase2Max_13) 
                        - (IData)(vlSelf->io_phase2_in_vec_13))
                     : ((IData)(vlSelf->io_phase2_in_vec_13) 
                        - (IData)(UniversalNormUnit__DOT__phase2Max_13))));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_14_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_14), (IData)(vlSelf->io_phase2_in_vec_14))
                     ? ((IData)(UniversalNormUnit__DOT__phase2Max_14) 
                        - (IData)(vlSelf->io_phase2_in_vec_14))
                     : ((IData)(vlSelf->io_phase2_in_vec_14) 
                        - (IData)(UniversalNormUnit__DOT__phase2Max_14))));
    vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_15_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(UniversalNormUnit__DOT__phase2Max_15), (IData)(vlSelf->io_phase2_in_vec_15))
                     ? ((IData)(UniversalNormUnit__DOT__phase2Max_15) 
                        - (IData)(vlSelf->io_phase2_in_vec_15))
                     : ((IData)(vlSelf->io_phase2_in_vec_15) 
                        - (IData)(UniversalNormUnit__DOT__phase2Max_15))));
    UniversalNormUnit__DOT__layerPair_meanSq_1 = (IData)(
                                                         VL_MULS_QQQ(64, 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_1), 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_1)));
    UniversalNormUnit__DOT__layerPair_meanSq_2 = (IData)(
                                                         VL_MULS_QQQ(64, 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_2), 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_2)));
    UniversalNormUnit__DOT__layerPair_meanSq_3 = (IData)(
                                                         VL_MULS_QQQ(64, 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_3), 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_3)));
    UniversalNormUnit__DOT__layerPair_meanSq_4 = (IData)(
                                                         VL_MULS_QQQ(64, 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_4), 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_4)));
    UniversalNormUnit__DOT__layerPair_meanSq_5 = (IData)(
                                                         VL_MULS_QQQ(64, 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_5), 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_5)));
    UniversalNormUnit__DOT__layerPair_meanSq_6 = (IData)(
                                                         VL_MULS_QQQ(64, 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_6), 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_6)));
    UniversalNormUnit__DOT__layerPair_meanSq_7 = (IData)(
                                                         VL_MULS_QQQ(64, 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_7), 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_7)));
    UniversalNormUnit__DOT__layerPair_meanSq_8 = (IData)(
                                                         VL_MULS_QQQ(64, 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_8), 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_8)));
    UniversalNormUnit__DOT__layerPair_meanSq_9 = (IData)(
                                                         VL_MULS_QQQ(64, 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_9), 
                                                                     VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_9)));
    UniversalNormUnit__DOT__layerPair_meanSq_10 = (IData)(
                                                          VL_MULS_QQQ(64, 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_10), 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_10)));
    UniversalNormUnit__DOT__layerPair_meanSq_11 = (IData)(
                                                          VL_MULS_QQQ(64, 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_11), 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_11)));
    UniversalNormUnit__DOT__layerPair_meanSq_12 = (IData)(
                                                          VL_MULS_QQQ(64, 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_12), 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_12)));
    UniversalNormUnit__DOT__layerPair_meanSq_13 = (IData)(
                                                          VL_MULS_QQQ(64, 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_13), 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_13)));
    UniversalNormUnit__DOT__layerPair_meanSq_14 = (IData)(
                                                          VL_MULS_QQQ(64, 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_14), 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_14)));
    UniversalNormUnit__DOT__layerPair_meanSq_15 = (IData)(
                                                          VL_MULS_QQQ(64, 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_15), 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->UniversalNormUnit__DOT__layerPair_1_15)));
    UniversalNormUnit__DOT__layerPair_meanSq = (IData)(
                                                       VL_MULS_QQQ(64, 
                                                                   VL_EXTENDS_QI(64,32, UniversalNormUnit__DOT__layerPair_1), 
                                                                   VL_EXTENDS_QI(64,32, UniversalNormUnit__DOT__layerPair_1)));
    if ((2U == (IData)(vlSelf->io_mode_sel))) {
        vlSelf->UniversalNormUnit__DOT___meanCapture_0_T 
            = UniversalNormUnit__DOT__layerPair_1;
        UniversalNormUnit__DOT__stat_1 = (((UniversalNormUnit__DOT__layerPair_ex2_1 
                                            >= UniversalNormUnit__DOT__layerPair_meanSq_1)
                                            ? (UniversalNormUnit__DOT__layerPair_ex2_1 
                                               - UniversalNormUnit__DOT__layerPair_meanSq_1)
                                            : 0U) + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_2 = (((UniversalNormUnit__DOT__layerPair_ex2_2 
                                            >= UniversalNormUnit__DOT__layerPair_meanSq_2)
                                            ? (UniversalNormUnit__DOT__layerPair_ex2_2 
                                               - UniversalNormUnit__DOT__layerPair_meanSq_2)
                                            : 0U) + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_3 = (((UniversalNormUnit__DOT__layerPair_ex2_3 
                                            >= UniversalNormUnit__DOT__layerPair_meanSq_3)
                                            ? (UniversalNormUnit__DOT__layerPair_ex2_3 
                                               - UniversalNormUnit__DOT__layerPair_meanSq_3)
                                            : 0U) + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_4 = (((UniversalNormUnit__DOT__layerPair_ex2_4 
                                            >= UniversalNormUnit__DOT__layerPair_meanSq_4)
                                            ? (UniversalNormUnit__DOT__layerPair_ex2_4 
                                               - UniversalNormUnit__DOT__layerPair_meanSq_4)
                                            : 0U) + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_5 = (((UniversalNormUnit__DOT__layerPair_ex2_5 
                                            >= UniversalNormUnit__DOT__layerPair_meanSq_5)
                                            ? (UniversalNormUnit__DOT__layerPair_ex2_5 
                                               - UniversalNormUnit__DOT__layerPair_meanSq_5)
                                            : 0U) + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_6 = (((UniversalNormUnit__DOT__layerPair_ex2_6 
                                            >= UniversalNormUnit__DOT__layerPair_meanSq_6)
                                            ? (UniversalNormUnit__DOT__layerPair_ex2_6 
                                               - UniversalNormUnit__DOT__layerPair_meanSq_6)
                                            : 0U) + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_7 = (((UniversalNormUnit__DOT__layerPair_ex2_7 
                                            >= UniversalNormUnit__DOT__layerPair_meanSq_7)
                                            ? (UniversalNormUnit__DOT__layerPair_ex2_7 
                                               - UniversalNormUnit__DOT__layerPair_meanSq_7)
                                            : 0U) + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_8 = (((UniversalNormUnit__DOT__layerPair_ex2_8 
                                            >= UniversalNormUnit__DOT__layerPair_meanSq_8)
                                            ? (UniversalNormUnit__DOT__layerPair_ex2_8 
                                               - UniversalNormUnit__DOT__layerPair_meanSq_8)
                                            : 0U) + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_9 = (((UniversalNormUnit__DOT__layerPair_ex2_9 
                                            >= UniversalNormUnit__DOT__layerPair_meanSq_9)
                                            ? (UniversalNormUnit__DOT__layerPair_ex2_9 
                                               - UniversalNormUnit__DOT__layerPair_meanSq_9)
                                            : 0U) + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_10 = (((UniversalNormUnit__DOT__layerPair_ex2_10 
                                             >= UniversalNormUnit__DOT__layerPair_meanSq_10)
                                             ? (UniversalNormUnit__DOT__layerPair_ex2_10 
                                                - UniversalNormUnit__DOT__layerPair_meanSq_10)
                                             : 0U) 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_11 = (((UniversalNormUnit__DOT__layerPair_ex2_11 
                                             >= UniversalNormUnit__DOT__layerPair_meanSq_11)
                                             ? (UniversalNormUnit__DOT__layerPair_ex2_11 
                                                - UniversalNormUnit__DOT__layerPair_meanSq_11)
                                             : 0U) 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_12 = (((UniversalNormUnit__DOT__layerPair_ex2_12 
                                             >= UniversalNormUnit__DOT__layerPair_meanSq_12)
                                             ? (UniversalNormUnit__DOT__layerPair_ex2_12 
                                                - UniversalNormUnit__DOT__layerPair_meanSq_12)
                                             : 0U) 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_13 = (((UniversalNormUnit__DOT__layerPair_ex2_13 
                                             >= UniversalNormUnit__DOT__layerPair_meanSq_13)
                                             ? (UniversalNormUnit__DOT__layerPair_ex2_13 
                                                - UniversalNormUnit__DOT__layerPair_meanSq_13)
                                             : 0U) 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_14 = (((UniversalNormUnit__DOT__layerPair_ex2_14 
                                             >= UniversalNormUnit__DOT__layerPair_meanSq_14)
                                             ? (UniversalNormUnit__DOT__layerPair_ex2_14 
                                                - UniversalNormUnit__DOT__layerPair_meanSq_14)
                                             : 0U) 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_15 = (((UniversalNormUnit__DOT__layerPair_ex2_15 
                                             >= UniversalNormUnit__DOT__layerPair_meanSq_15)
                                             ? (UniversalNormUnit__DOT__layerPair_ex2_15 
                                                - UniversalNormUnit__DOT__layerPair_meanSq_15)
                                             : 0U) 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat = (((UniversalNormUnit__DOT__layerPair_ex2 
                                          >= UniversalNormUnit__DOT__layerPair_meanSq)
                                          ? (UniversalNormUnit__DOT__layerPair_ex2 
                                             - UniversalNormUnit__DOT__layerPair_meanSq)
                                          : 0U) + vlSelf->io_epsilon);
    } else {
        vlSelf->UniversalNormUnit__DOT___meanCapture_0_T = 0U;
        UniversalNormUnit__DOT__stat_1 = (UniversalNormUnit__DOT__layerPair_ex2_1 
                                          + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_2 = (UniversalNormUnit__DOT__layerPair_ex2_2 
                                          + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_3 = (UniversalNormUnit__DOT__layerPair_ex2_3 
                                          + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_4 = (UniversalNormUnit__DOT__layerPair_ex2_4 
                                          + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_5 = (UniversalNormUnit__DOT__layerPair_ex2_5 
                                          + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_6 = (UniversalNormUnit__DOT__layerPair_ex2_6 
                                          + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_7 = (UniversalNormUnit__DOT__layerPair_ex2_7 
                                          + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_8 = (UniversalNormUnit__DOT__layerPair_ex2_8 
                                          + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_9 = (UniversalNormUnit__DOT__layerPair_ex2_9 
                                          + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_10 = (UniversalNormUnit__DOT__layerPair_ex2_10 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_11 = (UniversalNormUnit__DOT__layerPair_ex2_11 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_12 = (UniversalNormUnit__DOT__layerPair_ex2_12 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_13 = (UniversalNormUnit__DOT__layerPair_ex2_13 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_14 = (UniversalNormUnit__DOT__layerPair_ex2_14 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat_15 = (UniversalNormUnit__DOT__layerPair_ex2_15 
                                           + vlSelf->io_epsilon);
        UniversalNormUnit__DOT__stat = (UniversalNormUnit__DOT__layerPair_ex2 
                                        + vlSelf->io_epsilon);
    }
    vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__enqFire 
        = ((4U != (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__count)) 
           & (IData)(UniversalNormUnit__DOT__softContextFifo_io_enq_valid));
    vlSelf->io_phase2_req = ((~ (IData)(vlSelf->io_stall)) 
                             & (IData)(UniversalNormUnit__DOT__scaleLookupFire));
    vlSelf->UniversalNormUnit__DOT___GEN_1543 = (((~ (IData)(vlSelf->io_layout_mode)) 
                                                  & (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleArriving)) 
                                                 | ((~ 
                                                     ((~ (IData)(vlSelf->io_layout_mode)) 
                                                      & (IData)(UniversalNormUnit__DOT__scaleLookupFire))) 
                                                    & (IData)(vlSelf->UniversalNormUnit__DOT__scaleContextValid)));
    vlSelf->io_sync_alert = (((~ (IData)((0xffffU == (IData)(vlSelf->UniversalNormUnit__DOT___p1AnyValid_T)))) 
                              & (0U != (IData)(vlSelf->UniversalNormUnit__DOT___p1AnyValid_T))) 
                             | (((~ (IData)((0xffffU 
                                             == (IData)(vlSelf->UniversalNormUnit__DOT___p2AnyValid_T)))) 
                                 & (0U != (IData)(vlSelf->UniversalNormUnit__DOT___p2AnyValid_T))) 
                                | (((0U != (IData)(vlSelf->io_mode_sel)) 
                                    & (0U == vlSelf->io_logical_vector_length)) 
                                   | (((0U != (IData)(vlSelf->io_mode_sel)) 
                                       & (0x40U < vlSelf->io_logical_vector_length)) 
                                      | (((IData)(vlSelf->UniversalNormUnit__DOT__onlineLastBeat) 
                                          & (((IData)(1U) 
                                              + vlSelf->UniversalNormUnit__DOT__onlineElementCounter) 
                                             != vlSelf->UniversalNormUnit__DOT__logicalLengthSafe)) 
                                         | (((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_enq_valid) 
                                             & (0x100U 
                                                == (IData)(vlSelf->UniversalNormUnit__DOT__metaFifo__DOT__count))) 
                                            | (((IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_deq_ready) 
                                                & (0U 
                                                   == (IData)(vlSelf->UniversalNormUnit__DOT__metaFifo__DOT__count))) 
                                               | (((IData)(UniversalNormUnit__DOT__softContextFifo_io_enq_valid) 
                                                   & (4U 
                                                      == (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__count))) 
                                                  | (((IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo_io_deq_ready) 
                                                      & (0U 
                                                         == (IData)(vlSelf->UniversalNormUnit__DOT__softContextFifo__DOT__count))) 
                                                     | (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__deqFire)) 
                                                         & ((IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo_io_enq_valid) 
                                                            & (4U 
                                                               == (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__count)))) 
                                                        | ((IData)(UniversalNormUnit__DOT__distPhase2ContextFifo_io_underflow) 
                                                           | (((~ (IData)(vlSelf->UniversalNormUnit__DOT__scaleReady)) 
                                                               & (IData)(UniversalNormUnit__DOT__scaleLookupFire)) 
                                                              | (((~ (IData)(vlSelf->UniversalNormUnit__DOT___io_lut_ready_T_2)) 
                                                                  & ((3U 
                                                                      == (IData)(vlSelf->io_mode_sel)) 
                                                                     & (((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_15_io_rd_en) 
                                                                         | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_14_io_rd_en) 
                                                                            | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_13_io_rd_en) 
                                                                               | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_12_io_rd_en) 
                                                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_11_io_rd_en) 
                                                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_10_io_rd_en) 
                                                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_9_io_rd_en) 
                                                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_8_io_rd_en) 
                                                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_7_io_rd_en) 
                                                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_6_io_rd_en) 
                                                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_5_io_rd_en) 
                                                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_4_io_rd_en) 
                                                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_3_io_rd_en) 
                                                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_2_io_rd_en) 
                                                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_1_io_rd_en) 
                                                                                | (IData)(vlSelf->UniversalNormUnit__DOT__streamExpLuts_0_io_rd_en)))))))))))))))) 
                                                                        | ((IData)(vlSelf->UniversalNormUnit__DOT__correctionExpLuts_0_io_rd_en) 
                                                                           | (IData)(vlSelf->UniversalNormUnit__DOT__phase2ExpLuts_0_io_rd_en))))) 
                                                                 | (((~ 
                                                                      ((IData)(vlSelf->UniversalNormUnit__DOT__scaleContextValid) 
                                                                       | (IData)(vlSelf->UniversalNormUnit__DOT__onlineScaleArriving))) 
                                                                     & ((0U 
                                                                         != (IData)(vlSelf->io_mode_sel)) 
                                                                        & ((~ (IData)(vlSelf->io_layout_mode)) 
                                                                           & (IData)(vlSelf->UniversalNormUnit__DOT__metaFifo_io_deq_ready)))) 
                                                                    | ((IData)(UniversalNormUnit__DOT__distPhase2ContextFifo_io_underflow) 
                                                                       | ((~ (IData)(vlSelf->io_stall)) 
                                                                          & ((IData)(vlSelf->UniversalNormUnit__DOT__outHoldValid) 
                                                                             & (IData)(UniversalNormUnit__DOT__rawOutValid))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_1 = ((UniversalNormUnit__DOT__stat_1 
                                              >> 0x1fU)
                                              ? 0U : 
                                             ((0x40000000U 
                                               & UniversalNormUnit__DOT__stat_1)
                                               ? 1U
                                               : ((0x20000000U 
                                                   & UniversalNormUnit__DOT__stat_1)
                                                   ? 2U
                                                   : 
                                                  ((0x10000000U 
                                                    & UniversalNormUnit__DOT__stat_1)
                                                    ? 3U
                                                    : 
                                                   ((0x8000000U 
                                                     & UniversalNormUnit__DOT__stat_1)
                                                     ? 4U
                                                     : 
                                                    ((0x4000000U 
                                                      & UniversalNormUnit__DOT__stat_1)
                                                      ? 5U
                                                      : 
                                                     ((0x2000000U 
                                                       & UniversalNormUnit__DOT__stat_1)
                                                       ? 6U
                                                       : 
                                                      ((0x1000000U 
                                                        & UniversalNormUnit__DOT__stat_1)
                                                        ? 7U
                                                        : 
                                                       ((0x800000U 
                                                         & UniversalNormUnit__DOT__stat_1)
                                                         ? 8U
                                                         : 
                                                        ((0x400000U 
                                                          & UniversalNormUnit__DOT__stat_1)
                                                          ? 9U
                                                          : 
                                                         ((0x200000U 
                                                           & UniversalNormUnit__DOT__stat_1)
                                                           ? 0xaU
                                                           : 
                                                          ((0x100000U 
                                                            & UniversalNormUnit__DOT__stat_1)
                                                            ? 0xbU
                                                            : 
                                                           ((0x80000U 
                                                             & UniversalNormUnit__DOT__stat_1)
                                                             ? 0xcU
                                                             : 
                                                            ((0x40000U 
                                                              & UniversalNormUnit__DOT__stat_1)
                                                              ? 0xdU
                                                              : 
                                                             ((0x20000U 
                                                               & UniversalNormUnit__DOT__stat_1)
                                                               ? 0xeU
                                                               : 
                                                              ((0x10000U 
                                                                & UniversalNormUnit__DOT__stat_1)
                                                                ? 0xfU
                                                                : 
                                                               ((0x8000U 
                                                                 & UniversalNormUnit__DOT__stat_1)
                                                                 ? 0x10U
                                                                 : 
                                                                ((0x4000U 
                                                                  & UniversalNormUnit__DOT__stat_1)
                                                                  ? 0x11U
                                                                  : 
                                                                 ((0x2000U 
                                                                   & UniversalNormUnit__DOT__stat_1)
                                                                   ? 0x12U
                                                                   : 
                                                                  ((0x1000U 
                                                                    & UniversalNormUnit__DOT__stat_1)
                                                                    ? 0x13U
                                                                    : 
                                                                   ((0x800U 
                                                                     & UniversalNormUnit__DOT__stat_1)
                                                                     ? 0x14U
                                                                     : 
                                                                    ((0x400U 
                                                                      & UniversalNormUnit__DOT__stat_1)
                                                                      ? 0x15U
                                                                      : 
                                                                     ((0x200U 
                                                                       & UniversalNormUnit__DOT__stat_1)
                                                                       ? 0x16U
                                                                       : 
                                                                      ((0x100U 
                                                                        & UniversalNormUnit__DOT__stat_1)
                                                                        ? 0x17U
                                                                        : 
                                                                       ((0x80U 
                                                                         & UniversalNormUnit__DOT__stat_1)
                                                                         ? 0x18U
                                                                         : 
                                                                        ((0x40U 
                                                                          & UniversalNormUnit__DOT__stat_1)
                                                                          ? 0x19U
                                                                          : 
                                                                         ((0x20U 
                                                                           & UniversalNormUnit__DOT__stat_1)
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((0x10U 
                                                                            & UniversalNormUnit__DOT__stat_1)
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((8U 
                                                                             & UniversalNormUnit__DOT__stat_1)
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((4U 
                                                                              & UniversalNormUnit__DOT__stat_1)
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((2U 
                                                                               & UniversalNormUnit__DOT__stat_1)
                                                                               ? 0x1eU
                                                                               : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_2 = ((UniversalNormUnit__DOT__stat_2 
                                              >> 0x1fU)
                                              ? 0U : 
                                             ((0x40000000U 
                                               & UniversalNormUnit__DOT__stat_2)
                                               ? 1U
                                               : ((0x20000000U 
                                                   & UniversalNormUnit__DOT__stat_2)
                                                   ? 2U
                                                   : 
                                                  ((0x10000000U 
                                                    & UniversalNormUnit__DOT__stat_2)
                                                    ? 3U
                                                    : 
                                                   ((0x8000000U 
                                                     & UniversalNormUnit__DOT__stat_2)
                                                     ? 4U
                                                     : 
                                                    ((0x4000000U 
                                                      & UniversalNormUnit__DOT__stat_2)
                                                      ? 5U
                                                      : 
                                                     ((0x2000000U 
                                                       & UniversalNormUnit__DOT__stat_2)
                                                       ? 6U
                                                       : 
                                                      ((0x1000000U 
                                                        & UniversalNormUnit__DOT__stat_2)
                                                        ? 7U
                                                        : 
                                                       ((0x800000U 
                                                         & UniversalNormUnit__DOT__stat_2)
                                                         ? 8U
                                                         : 
                                                        ((0x400000U 
                                                          & UniversalNormUnit__DOT__stat_2)
                                                          ? 9U
                                                          : 
                                                         ((0x200000U 
                                                           & UniversalNormUnit__DOT__stat_2)
                                                           ? 0xaU
                                                           : 
                                                          ((0x100000U 
                                                            & UniversalNormUnit__DOT__stat_2)
                                                            ? 0xbU
                                                            : 
                                                           ((0x80000U 
                                                             & UniversalNormUnit__DOT__stat_2)
                                                             ? 0xcU
                                                             : 
                                                            ((0x40000U 
                                                              & UniversalNormUnit__DOT__stat_2)
                                                              ? 0xdU
                                                              : 
                                                             ((0x20000U 
                                                               & UniversalNormUnit__DOT__stat_2)
                                                               ? 0xeU
                                                               : 
                                                              ((0x10000U 
                                                                & UniversalNormUnit__DOT__stat_2)
                                                                ? 0xfU
                                                                : 
                                                               ((0x8000U 
                                                                 & UniversalNormUnit__DOT__stat_2)
                                                                 ? 0x10U
                                                                 : 
                                                                ((0x4000U 
                                                                  & UniversalNormUnit__DOT__stat_2)
                                                                  ? 0x11U
                                                                  : 
                                                                 ((0x2000U 
                                                                   & UniversalNormUnit__DOT__stat_2)
                                                                   ? 0x12U
                                                                   : 
                                                                  ((0x1000U 
                                                                    & UniversalNormUnit__DOT__stat_2)
                                                                    ? 0x13U
                                                                    : 
                                                                   ((0x800U 
                                                                     & UniversalNormUnit__DOT__stat_2)
                                                                     ? 0x14U
                                                                     : 
                                                                    ((0x400U 
                                                                      & UniversalNormUnit__DOT__stat_2)
                                                                      ? 0x15U
                                                                      : 
                                                                     ((0x200U 
                                                                       & UniversalNormUnit__DOT__stat_2)
                                                                       ? 0x16U
                                                                       : 
                                                                      ((0x100U 
                                                                        & UniversalNormUnit__DOT__stat_2)
                                                                        ? 0x17U
                                                                        : 
                                                                       ((0x80U 
                                                                         & UniversalNormUnit__DOT__stat_2)
                                                                         ? 0x18U
                                                                         : 
                                                                        ((0x40U 
                                                                          & UniversalNormUnit__DOT__stat_2)
                                                                          ? 0x19U
                                                                          : 
                                                                         ((0x20U 
                                                                           & UniversalNormUnit__DOT__stat_2)
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((0x10U 
                                                                            & UniversalNormUnit__DOT__stat_2)
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((8U 
                                                                             & UniversalNormUnit__DOT__stat_2)
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((4U 
                                                                              & UniversalNormUnit__DOT__stat_2)
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((2U 
                                                                               & UniversalNormUnit__DOT__stat_2)
                                                                               ? 0x1eU
                                                                               : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_3 = ((UniversalNormUnit__DOT__stat_3 
                                              >> 0x1fU)
                                              ? 0U : 
                                             ((0x40000000U 
                                               & UniversalNormUnit__DOT__stat_3)
                                               ? 1U
                                               : ((0x20000000U 
                                                   & UniversalNormUnit__DOT__stat_3)
                                                   ? 2U
                                                   : 
                                                  ((0x10000000U 
                                                    & UniversalNormUnit__DOT__stat_3)
                                                    ? 3U
                                                    : 
                                                   ((0x8000000U 
                                                     & UniversalNormUnit__DOT__stat_3)
                                                     ? 4U
                                                     : 
                                                    ((0x4000000U 
                                                      & UniversalNormUnit__DOT__stat_3)
                                                      ? 5U
                                                      : 
                                                     ((0x2000000U 
                                                       & UniversalNormUnit__DOT__stat_3)
                                                       ? 6U
                                                       : 
                                                      ((0x1000000U 
                                                        & UniversalNormUnit__DOT__stat_3)
                                                        ? 7U
                                                        : 
                                                       ((0x800000U 
                                                         & UniversalNormUnit__DOT__stat_3)
                                                         ? 8U
                                                         : 
                                                        ((0x400000U 
                                                          & UniversalNormUnit__DOT__stat_3)
                                                          ? 9U
                                                          : 
                                                         ((0x200000U 
                                                           & UniversalNormUnit__DOT__stat_3)
                                                           ? 0xaU
                                                           : 
                                                          ((0x100000U 
                                                            & UniversalNormUnit__DOT__stat_3)
                                                            ? 0xbU
                                                            : 
                                                           ((0x80000U 
                                                             & UniversalNormUnit__DOT__stat_3)
                                                             ? 0xcU
                                                             : 
                                                            ((0x40000U 
                                                              & UniversalNormUnit__DOT__stat_3)
                                                              ? 0xdU
                                                              : 
                                                             ((0x20000U 
                                                               & UniversalNormUnit__DOT__stat_3)
                                                               ? 0xeU
                                                               : 
                                                              ((0x10000U 
                                                                & UniversalNormUnit__DOT__stat_3)
                                                                ? 0xfU
                                                                : 
                                                               ((0x8000U 
                                                                 & UniversalNormUnit__DOT__stat_3)
                                                                 ? 0x10U
                                                                 : 
                                                                ((0x4000U 
                                                                  & UniversalNormUnit__DOT__stat_3)
                                                                  ? 0x11U
                                                                  : 
                                                                 ((0x2000U 
                                                                   & UniversalNormUnit__DOT__stat_3)
                                                                   ? 0x12U
                                                                   : 
                                                                  ((0x1000U 
                                                                    & UniversalNormUnit__DOT__stat_3)
                                                                    ? 0x13U
                                                                    : 
                                                                   ((0x800U 
                                                                     & UniversalNormUnit__DOT__stat_3)
                                                                     ? 0x14U
                                                                     : 
                                                                    ((0x400U 
                                                                      & UniversalNormUnit__DOT__stat_3)
                                                                      ? 0x15U
                                                                      : 
                                                                     ((0x200U 
                                                                       & UniversalNormUnit__DOT__stat_3)
                                                                       ? 0x16U
                                                                       : 
                                                                      ((0x100U 
                                                                        & UniversalNormUnit__DOT__stat_3)
                                                                        ? 0x17U
                                                                        : 
                                                                       ((0x80U 
                                                                         & UniversalNormUnit__DOT__stat_3)
                                                                         ? 0x18U
                                                                         : 
                                                                        ((0x40U 
                                                                          & UniversalNormUnit__DOT__stat_3)
                                                                          ? 0x19U
                                                                          : 
                                                                         ((0x20U 
                                                                           & UniversalNormUnit__DOT__stat_3)
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((0x10U 
                                                                            & UniversalNormUnit__DOT__stat_3)
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((8U 
                                                                             & UniversalNormUnit__DOT__stat_3)
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((4U 
                                                                              & UniversalNormUnit__DOT__stat_3)
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((2U 
                                                                               & UniversalNormUnit__DOT__stat_3)
                                                                               ? 0x1eU
                                                                               : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_4 = ((UniversalNormUnit__DOT__stat_4 
                                              >> 0x1fU)
                                              ? 0U : 
                                             ((0x40000000U 
                                               & UniversalNormUnit__DOT__stat_4)
                                               ? 1U
                                               : ((0x20000000U 
                                                   & UniversalNormUnit__DOT__stat_4)
                                                   ? 2U
                                                   : 
                                                  ((0x10000000U 
                                                    & UniversalNormUnit__DOT__stat_4)
                                                    ? 3U
                                                    : 
                                                   ((0x8000000U 
                                                     & UniversalNormUnit__DOT__stat_4)
                                                     ? 4U
                                                     : 
                                                    ((0x4000000U 
                                                      & UniversalNormUnit__DOT__stat_4)
                                                      ? 5U
                                                      : 
                                                     ((0x2000000U 
                                                       & UniversalNormUnit__DOT__stat_4)
                                                       ? 6U
                                                       : 
                                                      ((0x1000000U 
                                                        & UniversalNormUnit__DOT__stat_4)
                                                        ? 7U
                                                        : 
                                                       ((0x800000U 
                                                         & UniversalNormUnit__DOT__stat_4)
                                                         ? 8U
                                                         : 
                                                        ((0x400000U 
                                                          & UniversalNormUnit__DOT__stat_4)
                                                          ? 9U
                                                          : 
                                                         ((0x200000U 
                                                           & UniversalNormUnit__DOT__stat_4)
                                                           ? 0xaU
                                                           : 
                                                          ((0x100000U 
                                                            & UniversalNormUnit__DOT__stat_4)
                                                            ? 0xbU
                                                            : 
                                                           ((0x80000U 
                                                             & UniversalNormUnit__DOT__stat_4)
                                                             ? 0xcU
                                                             : 
                                                            ((0x40000U 
                                                              & UniversalNormUnit__DOT__stat_4)
                                                              ? 0xdU
                                                              : 
                                                             ((0x20000U 
                                                               & UniversalNormUnit__DOT__stat_4)
                                                               ? 0xeU
                                                               : 
                                                              ((0x10000U 
                                                                & UniversalNormUnit__DOT__stat_4)
                                                                ? 0xfU
                                                                : 
                                                               ((0x8000U 
                                                                 & UniversalNormUnit__DOT__stat_4)
                                                                 ? 0x10U
                                                                 : 
                                                                ((0x4000U 
                                                                  & UniversalNormUnit__DOT__stat_4)
                                                                  ? 0x11U
                                                                  : 
                                                                 ((0x2000U 
                                                                   & UniversalNormUnit__DOT__stat_4)
                                                                   ? 0x12U
                                                                   : 
                                                                  ((0x1000U 
                                                                    & UniversalNormUnit__DOT__stat_4)
                                                                    ? 0x13U
                                                                    : 
                                                                   ((0x800U 
                                                                     & UniversalNormUnit__DOT__stat_4)
                                                                     ? 0x14U
                                                                     : 
                                                                    ((0x400U 
                                                                      & UniversalNormUnit__DOT__stat_4)
                                                                      ? 0x15U
                                                                      : 
                                                                     ((0x200U 
                                                                       & UniversalNormUnit__DOT__stat_4)
                                                                       ? 0x16U
                                                                       : 
                                                                      ((0x100U 
                                                                        & UniversalNormUnit__DOT__stat_4)
                                                                        ? 0x17U
                                                                        : 
                                                                       ((0x80U 
                                                                         & UniversalNormUnit__DOT__stat_4)
                                                                         ? 0x18U
                                                                         : 
                                                                        ((0x40U 
                                                                          & UniversalNormUnit__DOT__stat_4)
                                                                          ? 0x19U
                                                                          : 
                                                                         ((0x20U 
                                                                           & UniversalNormUnit__DOT__stat_4)
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((0x10U 
                                                                            & UniversalNormUnit__DOT__stat_4)
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((8U 
                                                                             & UniversalNormUnit__DOT__stat_4)
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((4U 
                                                                              & UniversalNormUnit__DOT__stat_4)
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((2U 
                                                                               & UniversalNormUnit__DOT__stat_4)
                                                                               ? 0x1eU
                                                                               : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_5 = ((UniversalNormUnit__DOT__stat_5 
                                              >> 0x1fU)
                                              ? 0U : 
                                             ((0x40000000U 
                                               & UniversalNormUnit__DOT__stat_5)
                                               ? 1U
                                               : ((0x20000000U 
                                                   & UniversalNormUnit__DOT__stat_5)
                                                   ? 2U
                                                   : 
                                                  ((0x10000000U 
                                                    & UniversalNormUnit__DOT__stat_5)
                                                    ? 3U
                                                    : 
                                                   ((0x8000000U 
                                                     & UniversalNormUnit__DOT__stat_5)
                                                     ? 4U
                                                     : 
                                                    ((0x4000000U 
                                                      & UniversalNormUnit__DOT__stat_5)
                                                      ? 5U
                                                      : 
                                                     ((0x2000000U 
                                                       & UniversalNormUnit__DOT__stat_5)
                                                       ? 6U
                                                       : 
                                                      ((0x1000000U 
                                                        & UniversalNormUnit__DOT__stat_5)
                                                        ? 7U
                                                        : 
                                                       ((0x800000U 
                                                         & UniversalNormUnit__DOT__stat_5)
                                                         ? 8U
                                                         : 
                                                        ((0x400000U 
                                                          & UniversalNormUnit__DOT__stat_5)
                                                          ? 9U
                                                          : 
                                                         ((0x200000U 
                                                           & UniversalNormUnit__DOT__stat_5)
                                                           ? 0xaU
                                                           : 
                                                          ((0x100000U 
                                                            & UniversalNormUnit__DOT__stat_5)
                                                            ? 0xbU
                                                            : 
                                                           ((0x80000U 
                                                             & UniversalNormUnit__DOT__stat_5)
                                                             ? 0xcU
                                                             : 
                                                            ((0x40000U 
                                                              & UniversalNormUnit__DOT__stat_5)
                                                              ? 0xdU
                                                              : 
                                                             ((0x20000U 
                                                               & UniversalNormUnit__DOT__stat_5)
                                                               ? 0xeU
                                                               : 
                                                              ((0x10000U 
                                                                & UniversalNormUnit__DOT__stat_5)
                                                                ? 0xfU
                                                                : 
                                                               ((0x8000U 
                                                                 & UniversalNormUnit__DOT__stat_5)
                                                                 ? 0x10U
                                                                 : 
                                                                ((0x4000U 
                                                                  & UniversalNormUnit__DOT__stat_5)
                                                                  ? 0x11U
                                                                  : 
                                                                 ((0x2000U 
                                                                   & UniversalNormUnit__DOT__stat_5)
                                                                   ? 0x12U
                                                                   : 
                                                                  ((0x1000U 
                                                                    & UniversalNormUnit__DOT__stat_5)
                                                                    ? 0x13U
                                                                    : 
                                                                   ((0x800U 
                                                                     & UniversalNormUnit__DOT__stat_5)
                                                                     ? 0x14U
                                                                     : 
                                                                    ((0x400U 
                                                                      & UniversalNormUnit__DOT__stat_5)
                                                                      ? 0x15U
                                                                      : 
                                                                     ((0x200U 
                                                                       & UniversalNormUnit__DOT__stat_5)
                                                                       ? 0x16U
                                                                       : 
                                                                      ((0x100U 
                                                                        & UniversalNormUnit__DOT__stat_5)
                                                                        ? 0x17U
                                                                        : 
                                                                       ((0x80U 
                                                                         & UniversalNormUnit__DOT__stat_5)
                                                                         ? 0x18U
                                                                         : 
                                                                        ((0x40U 
                                                                          & UniversalNormUnit__DOT__stat_5)
                                                                          ? 0x19U
                                                                          : 
                                                                         ((0x20U 
                                                                           & UniversalNormUnit__DOT__stat_5)
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((0x10U 
                                                                            & UniversalNormUnit__DOT__stat_5)
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((8U 
                                                                             & UniversalNormUnit__DOT__stat_5)
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((4U 
                                                                              & UniversalNormUnit__DOT__stat_5)
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((2U 
                                                                               & UniversalNormUnit__DOT__stat_5)
                                                                               ? 0x1eU
                                                                               : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_6 = ((UniversalNormUnit__DOT__stat_6 
                                              >> 0x1fU)
                                              ? 0U : 
                                             ((0x40000000U 
                                               & UniversalNormUnit__DOT__stat_6)
                                               ? 1U
                                               : ((0x20000000U 
                                                   & UniversalNormUnit__DOT__stat_6)
                                                   ? 2U
                                                   : 
                                                  ((0x10000000U 
                                                    & UniversalNormUnit__DOT__stat_6)
                                                    ? 3U
                                                    : 
                                                   ((0x8000000U 
                                                     & UniversalNormUnit__DOT__stat_6)
                                                     ? 4U
                                                     : 
                                                    ((0x4000000U 
                                                      & UniversalNormUnit__DOT__stat_6)
                                                      ? 5U
                                                      : 
                                                     ((0x2000000U 
                                                       & UniversalNormUnit__DOT__stat_6)
                                                       ? 6U
                                                       : 
                                                      ((0x1000000U 
                                                        & UniversalNormUnit__DOT__stat_6)
                                                        ? 7U
                                                        : 
                                                       ((0x800000U 
                                                         & UniversalNormUnit__DOT__stat_6)
                                                         ? 8U
                                                         : 
                                                        ((0x400000U 
                                                          & UniversalNormUnit__DOT__stat_6)
                                                          ? 9U
                                                          : 
                                                         ((0x200000U 
                                                           & UniversalNormUnit__DOT__stat_6)
                                                           ? 0xaU
                                                           : 
                                                          ((0x100000U 
                                                            & UniversalNormUnit__DOT__stat_6)
                                                            ? 0xbU
                                                            : 
                                                           ((0x80000U 
                                                             & UniversalNormUnit__DOT__stat_6)
                                                             ? 0xcU
                                                             : 
                                                            ((0x40000U 
                                                              & UniversalNormUnit__DOT__stat_6)
                                                              ? 0xdU
                                                              : 
                                                             ((0x20000U 
                                                               & UniversalNormUnit__DOT__stat_6)
                                                               ? 0xeU
                                                               : 
                                                              ((0x10000U 
                                                                & UniversalNormUnit__DOT__stat_6)
                                                                ? 0xfU
                                                                : 
                                                               ((0x8000U 
                                                                 & UniversalNormUnit__DOT__stat_6)
                                                                 ? 0x10U
                                                                 : 
                                                                ((0x4000U 
                                                                  & UniversalNormUnit__DOT__stat_6)
                                                                  ? 0x11U
                                                                  : 
                                                                 ((0x2000U 
                                                                   & UniversalNormUnit__DOT__stat_6)
                                                                   ? 0x12U
                                                                   : 
                                                                  ((0x1000U 
                                                                    & UniversalNormUnit__DOT__stat_6)
                                                                    ? 0x13U
                                                                    : 
                                                                   ((0x800U 
                                                                     & UniversalNormUnit__DOT__stat_6)
                                                                     ? 0x14U
                                                                     : 
                                                                    ((0x400U 
                                                                      & UniversalNormUnit__DOT__stat_6)
                                                                      ? 0x15U
                                                                      : 
                                                                     ((0x200U 
                                                                       & UniversalNormUnit__DOT__stat_6)
                                                                       ? 0x16U
                                                                       : 
                                                                      ((0x100U 
                                                                        & UniversalNormUnit__DOT__stat_6)
                                                                        ? 0x17U
                                                                        : 
                                                                       ((0x80U 
                                                                         & UniversalNormUnit__DOT__stat_6)
                                                                         ? 0x18U
                                                                         : 
                                                                        ((0x40U 
                                                                          & UniversalNormUnit__DOT__stat_6)
                                                                          ? 0x19U
                                                                          : 
                                                                         ((0x20U 
                                                                           & UniversalNormUnit__DOT__stat_6)
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((0x10U 
                                                                            & UniversalNormUnit__DOT__stat_6)
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((8U 
                                                                             & UniversalNormUnit__DOT__stat_6)
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((4U 
                                                                              & UniversalNormUnit__DOT__stat_6)
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((2U 
                                                                               & UniversalNormUnit__DOT__stat_6)
                                                                               ? 0x1eU
                                                                               : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_7 = ((UniversalNormUnit__DOT__stat_7 
                                              >> 0x1fU)
                                              ? 0U : 
                                             ((0x40000000U 
                                               & UniversalNormUnit__DOT__stat_7)
                                               ? 1U
                                               : ((0x20000000U 
                                                   & UniversalNormUnit__DOT__stat_7)
                                                   ? 2U
                                                   : 
                                                  ((0x10000000U 
                                                    & UniversalNormUnit__DOT__stat_7)
                                                    ? 3U
                                                    : 
                                                   ((0x8000000U 
                                                     & UniversalNormUnit__DOT__stat_7)
                                                     ? 4U
                                                     : 
                                                    ((0x4000000U 
                                                      & UniversalNormUnit__DOT__stat_7)
                                                      ? 5U
                                                      : 
                                                     ((0x2000000U 
                                                       & UniversalNormUnit__DOT__stat_7)
                                                       ? 6U
                                                       : 
                                                      ((0x1000000U 
                                                        & UniversalNormUnit__DOT__stat_7)
                                                        ? 7U
                                                        : 
                                                       ((0x800000U 
                                                         & UniversalNormUnit__DOT__stat_7)
                                                         ? 8U
                                                         : 
                                                        ((0x400000U 
                                                          & UniversalNormUnit__DOT__stat_7)
                                                          ? 9U
                                                          : 
                                                         ((0x200000U 
                                                           & UniversalNormUnit__DOT__stat_7)
                                                           ? 0xaU
                                                           : 
                                                          ((0x100000U 
                                                            & UniversalNormUnit__DOT__stat_7)
                                                            ? 0xbU
                                                            : 
                                                           ((0x80000U 
                                                             & UniversalNormUnit__DOT__stat_7)
                                                             ? 0xcU
                                                             : 
                                                            ((0x40000U 
                                                              & UniversalNormUnit__DOT__stat_7)
                                                              ? 0xdU
                                                              : 
                                                             ((0x20000U 
                                                               & UniversalNormUnit__DOT__stat_7)
                                                               ? 0xeU
                                                               : 
                                                              ((0x10000U 
                                                                & UniversalNormUnit__DOT__stat_7)
                                                                ? 0xfU
                                                                : 
                                                               ((0x8000U 
                                                                 & UniversalNormUnit__DOT__stat_7)
                                                                 ? 0x10U
                                                                 : 
                                                                ((0x4000U 
                                                                  & UniversalNormUnit__DOT__stat_7)
                                                                  ? 0x11U
                                                                  : 
                                                                 ((0x2000U 
                                                                   & UniversalNormUnit__DOT__stat_7)
                                                                   ? 0x12U
                                                                   : 
                                                                  ((0x1000U 
                                                                    & UniversalNormUnit__DOT__stat_7)
                                                                    ? 0x13U
                                                                    : 
                                                                   ((0x800U 
                                                                     & UniversalNormUnit__DOT__stat_7)
                                                                     ? 0x14U
                                                                     : 
                                                                    ((0x400U 
                                                                      & UniversalNormUnit__DOT__stat_7)
                                                                      ? 0x15U
                                                                      : 
                                                                     ((0x200U 
                                                                       & UniversalNormUnit__DOT__stat_7)
                                                                       ? 0x16U
                                                                       : 
                                                                      ((0x100U 
                                                                        & UniversalNormUnit__DOT__stat_7)
                                                                        ? 0x17U
                                                                        : 
                                                                       ((0x80U 
                                                                         & UniversalNormUnit__DOT__stat_7)
                                                                         ? 0x18U
                                                                         : 
                                                                        ((0x40U 
                                                                          & UniversalNormUnit__DOT__stat_7)
                                                                          ? 0x19U
                                                                          : 
                                                                         ((0x20U 
                                                                           & UniversalNormUnit__DOT__stat_7)
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((0x10U 
                                                                            & UniversalNormUnit__DOT__stat_7)
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((8U 
                                                                             & UniversalNormUnit__DOT__stat_7)
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((4U 
                                                                              & UniversalNormUnit__DOT__stat_7)
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((2U 
                                                                               & UniversalNormUnit__DOT__stat_7)
                                                                               ? 0x1eU
                                                                               : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_8 = ((UniversalNormUnit__DOT__stat_8 
                                              >> 0x1fU)
                                              ? 0U : 
                                             ((0x40000000U 
                                               & UniversalNormUnit__DOT__stat_8)
                                               ? 1U
                                               : ((0x20000000U 
                                                   & UniversalNormUnit__DOT__stat_8)
                                                   ? 2U
                                                   : 
                                                  ((0x10000000U 
                                                    & UniversalNormUnit__DOT__stat_8)
                                                    ? 3U
                                                    : 
                                                   ((0x8000000U 
                                                     & UniversalNormUnit__DOT__stat_8)
                                                     ? 4U
                                                     : 
                                                    ((0x4000000U 
                                                      & UniversalNormUnit__DOT__stat_8)
                                                      ? 5U
                                                      : 
                                                     ((0x2000000U 
                                                       & UniversalNormUnit__DOT__stat_8)
                                                       ? 6U
                                                       : 
                                                      ((0x1000000U 
                                                        & UniversalNormUnit__DOT__stat_8)
                                                        ? 7U
                                                        : 
                                                       ((0x800000U 
                                                         & UniversalNormUnit__DOT__stat_8)
                                                         ? 8U
                                                         : 
                                                        ((0x400000U 
                                                          & UniversalNormUnit__DOT__stat_8)
                                                          ? 9U
                                                          : 
                                                         ((0x200000U 
                                                           & UniversalNormUnit__DOT__stat_8)
                                                           ? 0xaU
                                                           : 
                                                          ((0x100000U 
                                                            & UniversalNormUnit__DOT__stat_8)
                                                            ? 0xbU
                                                            : 
                                                           ((0x80000U 
                                                             & UniversalNormUnit__DOT__stat_8)
                                                             ? 0xcU
                                                             : 
                                                            ((0x40000U 
                                                              & UniversalNormUnit__DOT__stat_8)
                                                              ? 0xdU
                                                              : 
                                                             ((0x20000U 
                                                               & UniversalNormUnit__DOT__stat_8)
                                                               ? 0xeU
                                                               : 
                                                              ((0x10000U 
                                                                & UniversalNormUnit__DOT__stat_8)
                                                                ? 0xfU
                                                                : 
                                                               ((0x8000U 
                                                                 & UniversalNormUnit__DOT__stat_8)
                                                                 ? 0x10U
                                                                 : 
                                                                ((0x4000U 
                                                                  & UniversalNormUnit__DOT__stat_8)
                                                                  ? 0x11U
                                                                  : 
                                                                 ((0x2000U 
                                                                   & UniversalNormUnit__DOT__stat_8)
                                                                   ? 0x12U
                                                                   : 
                                                                  ((0x1000U 
                                                                    & UniversalNormUnit__DOT__stat_8)
                                                                    ? 0x13U
                                                                    : 
                                                                   ((0x800U 
                                                                     & UniversalNormUnit__DOT__stat_8)
                                                                     ? 0x14U
                                                                     : 
                                                                    ((0x400U 
                                                                      & UniversalNormUnit__DOT__stat_8)
                                                                      ? 0x15U
                                                                      : 
                                                                     ((0x200U 
                                                                       & UniversalNormUnit__DOT__stat_8)
                                                                       ? 0x16U
                                                                       : 
                                                                      ((0x100U 
                                                                        & UniversalNormUnit__DOT__stat_8)
                                                                        ? 0x17U
                                                                        : 
                                                                       ((0x80U 
                                                                         & UniversalNormUnit__DOT__stat_8)
                                                                         ? 0x18U
                                                                         : 
                                                                        ((0x40U 
                                                                          & UniversalNormUnit__DOT__stat_8)
                                                                          ? 0x19U
                                                                          : 
                                                                         ((0x20U 
                                                                           & UniversalNormUnit__DOT__stat_8)
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((0x10U 
                                                                            & UniversalNormUnit__DOT__stat_8)
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((8U 
                                                                             & UniversalNormUnit__DOT__stat_8)
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((4U 
                                                                              & UniversalNormUnit__DOT__stat_8)
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((2U 
                                                                               & UniversalNormUnit__DOT__stat_8)
                                                                               ? 0x1eU
                                                                               : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_9 = ((UniversalNormUnit__DOT__stat_9 
                                              >> 0x1fU)
                                              ? 0U : 
                                             ((0x40000000U 
                                               & UniversalNormUnit__DOT__stat_9)
                                               ? 1U
                                               : ((0x20000000U 
                                                   & UniversalNormUnit__DOT__stat_9)
                                                   ? 2U
                                                   : 
                                                  ((0x10000000U 
                                                    & UniversalNormUnit__DOT__stat_9)
                                                    ? 3U
                                                    : 
                                                   ((0x8000000U 
                                                     & UniversalNormUnit__DOT__stat_9)
                                                     ? 4U
                                                     : 
                                                    ((0x4000000U 
                                                      & UniversalNormUnit__DOT__stat_9)
                                                      ? 5U
                                                      : 
                                                     ((0x2000000U 
                                                       & UniversalNormUnit__DOT__stat_9)
                                                       ? 6U
                                                       : 
                                                      ((0x1000000U 
                                                        & UniversalNormUnit__DOT__stat_9)
                                                        ? 7U
                                                        : 
                                                       ((0x800000U 
                                                         & UniversalNormUnit__DOT__stat_9)
                                                         ? 8U
                                                         : 
                                                        ((0x400000U 
                                                          & UniversalNormUnit__DOT__stat_9)
                                                          ? 9U
                                                          : 
                                                         ((0x200000U 
                                                           & UniversalNormUnit__DOT__stat_9)
                                                           ? 0xaU
                                                           : 
                                                          ((0x100000U 
                                                            & UniversalNormUnit__DOT__stat_9)
                                                            ? 0xbU
                                                            : 
                                                           ((0x80000U 
                                                             & UniversalNormUnit__DOT__stat_9)
                                                             ? 0xcU
                                                             : 
                                                            ((0x40000U 
                                                              & UniversalNormUnit__DOT__stat_9)
                                                              ? 0xdU
                                                              : 
                                                             ((0x20000U 
                                                               & UniversalNormUnit__DOT__stat_9)
                                                               ? 0xeU
                                                               : 
                                                              ((0x10000U 
                                                                & UniversalNormUnit__DOT__stat_9)
                                                                ? 0xfU
                                                                : 
                                                               ((0x8000U 
                                                                 & UniversalNormUnit__DOT__stat_9)
                                                                 ? 0x10U
                                                                 : 
                                                                ((0x4000U 
                                                                  & UniversalNormUnit__DOT__stat_9)
                                                                  ? 0x11U
                                                                  : 
                                                                 ((0x2000U 
                                                                   & UniversalNormUnit__DOT__stat_9)
                                                                   ? 0x12U
                                                                   : 
                                                                  ((0x1000U 
                                                                    & UniversalNormUnit__DOT__stat_9)
                                                                    ? 0x13U
                                                                    : 
                                                                   ((0x800U 
                                                                     & UniversalNormUnit__DOT__stat_9)
                                                                     ? 0x14U
                                                                     : 
                                                                    ((0x400U 
                                                                      & UniversalNormUnit__DOT__stat_9)
                                                                      ? 0x15U
                                                                      : 
                                                                     ((0x200U 
                                                                       & UniversalNormUnit__DOT__stat_9)
                                                                       ? 0x16U
                                                                       : 
                                                                      ((0x100U 
                                                                        & UniversalNormUnit__DOT__stat_9)
                                                                        ? 0x17U
                                                                        : 
                                                                       ((0x80U 
                                                                         & UniversalNormUnit__DOT__stat_9)
                                                                         ? 0x18U
                                                                         : 
                                                                        ((0x40U 
                                                                          & UniversalNormUnit__DOT__stat_9)
                                                                          ? 0x19U
                                                                          : 
                                                                         ((0x20U 
                                                                           & UniversalNormUnit__DOT__stat_9)
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((0x10U 
                                                                            & UniversalNormUnit__DOT__stat_9)
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((8U 
                                                                             & UniversalNormUnit__DOT__stat_9)
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((4U 
                                                                              & UniversalNormUnit__DOT__stat_9)
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((2U 
                                                                               & UniversalNormUnit__DOT__stat_9)
                                                                               ? 0x1eU
                                                                               : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_10 = ((UniversalNormUnit__DOT__stat_10 
                                               >> 0x1fU)
                                               ? 0U
                                               : ((0x40000000U 
                                                   & UniversalNormUnit__DOT__stat_10)
                                                   ? 1U
                                                   : 
                                                  ((0x20000000U 
                                                    & UniversalNormUnit__DOT__stat_10)
                                                    ? 2U
                                                    : 
                                                   ((0x10000000U 
                                                     & UniversalNormUnit__DOT__stat_10)
                                                     ? 3U
                                                     : 
                                                    ((0x8000000U 
                                                      & UniversalNormUnit__DOT__stat_10)
                                                      ? 4U
                                                      : 
                                                     ((0x4000000U 
                                                       & UniversalNormUnit__DOT__stat_10)
                                                       ? 5U
                                                       : 
                                                      ((0x2000000U 
                                                        & UniversalNormUnit__DOT__stat_10)
                                                        ? 6U
                                                        : 
                                                       ((0x1000000U 
                                                         & UniversalNormUnit__DOT__stat_10)
                                                         ? 7U
                                                         : 
                                                        ((0x800000U 
                                                          & UniversalNormUnit__DOT__stat_10)
                                                          ? 8U
                                                          : 
                                                         ((0x400000U 
                                                           & UniversalNormUnit__DOT__stat_10)
                                                           ? 9U
                                                           : 
                                                          ((0x200000U 
                                                            & UniversalNormUnit__DOT__stat_10)
                                                            ? 0xaU
                                                            : 
                                                           ((0x100000U 
                                                             & UniversalNormUnit__DOT__stat_10)
                                                             ? 0xbU
                                                             : 
                                                            ((0x80000U 
                                                              & UniversalNormUnit__DOT__stat_10)
                                                              ? 0xcU
                                                              : 
                                                             ((0x40000U 
                                                               & UniversalNormUnit__DOT__stat_10)
                                                               ? 0xdU
                                                               : 
                                                              ((0x20000U 
                                                                & UniversalNormUnit__DOT__stat_10)
                                                                ? 0xeU
                                                                : 
                                                               ((0x10000U 
                                                                 & UniversalNormUnit__DOT__stat_10)
                                                                 ? 0xfU
                                                                 : 
                                                                ((0x8000U 
                                                                  & UniversalNormUnit__DOT__stat_10)
                                                                  ? 0x10U
                                                                  : 
                                                                 ((0x4000U 
                                                                   & UniversalNormUnit__DOT__stat_10)
                                                                   ? 0x11U
                                                                   : 
                                                                  ((0x2000U 
                                                                    & UniversalNormUnit__DOT__stat_10)
                                                                    ? 0x12U
                                                                    : 
                                                                   ((0x1000U 
                                                                     & UniversalNormUnit__DOT__stat_10)
                                                                     ? 0x13U
                                                                     : 
                                                                    ((0x800U 
                                                                      & UniversalNormUnit__DOT__stat_10)
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x400U 
                                                                       & UniversalNormUnit__DOT__stat_10)
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x200U 
                                                                        & UniversalNormUnit__DOT__stat_10)
                                                                        ? 0x16U
                                                                        : 
                                                                       ((0x100U 
                                                                         & UniversalNormUnit__DOT__stat_10)
                                                                         ? 0x17U
                                                                         : 
                                                                        ((0x80U 
                                                                          & UniversalNormUnit__DOT__stat_10)
                                                                          ? 0x18U
                                                                          : 
                                                                         ((0x40U 
                                                                           & UniversalNormUnit__DOT__stat_10)
                                                                           ? 0x19U
                                                                           : 
                                                                          ((0x20U 
                                                                            & UniversalNormUnit__DOT__stat_10)
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((0x10U 
                                                                             & UniversalNormUnit__DOT__stat_10)
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((8U 
                                                                              & UniversalNormUnit__DOT__stat_10)
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((4U 
                                                                               & UniversalNormUnit__DOT__stat_10)
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((2U 
                                                                                & UniversalNormUnit__DOT__stat_10)
                                                                                ? 0x1eU
                                                                                : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_11 = ((UniversalNormUnit__DOT__stat_11 
                                               >> 0x1fU)
                                               ? 0U
                                               : ((0x40000000U 
                                                   & UniversalNormUnit__DOT__stat_11)
                                                   ? 1U
                                                   : 
                                                  ((0x20000000U 
                                                    & UniversalNormUnit__DOT__stat_11)
                                                    ? 2U
                                                    : 
                                                   ((0x10000000U 
                                                     & UniversalNormUnit__DOT__stat_11)
                                                     ? 3U
                                                     : 
                                                    ((0x8000000U 
                                                      & UniversalNormUnit__DOT__stat_11)
                                                      ? 4U
                                                      : 
                                                     ((0x4000000U 
                                                       & UniversalNormUnit__DOT__stat_11)
                                                       ? 5U
                                                       : 
                                                      ((0x2000000U 
                                                        & UniversalNormUnit__DOT__stat_11)
                                                        ? 6U
                                                        : 
                                                       ((0x1000000U 
                                                         & UniversalNormUnit__DOT__stat_11)
                                                         ? 7U
                                                         : 
                                                        ((0x800000U 
                                                          & UniversalNormUnit__DOT__stat_11)
                                                          ? 8U
                                                          : 
                                                         ((0x400000U 
                                                           & UniversalNormUnit__DOT__stat_11)
                                                           ? 9U
                                                           : 
                                                          ((0x200000U 
                                                            & UniversalNormUnit__DOT__stat_11)
                                                            ? 0xaU
                                                            : 
                                                           ((0x100000U 
                                                             & UniversalNormUnit__DOT__stat_11)
                                                             ? 0xbU
                                                             : 
                                                            ((0x80000U 
                                                              & UniversalNormUnit__DOT__stat_11)
                                                              ? 0xcU
                                                              : 
                                                             ((0x40000U 
                                                               & UniversalNormUnit__DOT__stat_11)
                                                               ? 0xdU
                                                               : 
                                                              ((0x20000U 
                                                                & UniversalNormUnit__DOT__stat_11)
                                                                ? 0xeU
                                                                : 
                                                               ((0x10000U 
                                                                 & UniversalNormUnit__DOT__stat_11)
                                                                 ? 0xfU
                                                                 : 
                                                                ((0x8000U 
                                                                  & UniversalNormUnit__DOT__stat_11)
                                                                  ? 0x10U
                                                                  : 
                                                                 ((0x4000U 
                                                                   & UniversalNormUnit__DOT__stat_11)
                                                                   ? 0x11U
                                                                   : 
                                                                  ((0x2000U 
                                                                    & UniversalNormUnit__DOT__stat_11)
                                                                    ? 0x12U
                                                                    : 
                                                                   ((0x1000U 
                                                                     & UniversalNormUnit__DOT__stat_11)
                                                                     ? 0x13U
                                                                     : 
                                                                    ((0x800U 
                                                                      & UniversalNormUnit__DOT__stat_11)
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x400U 
                                                                       & UniversalNormUnit__DOT__stat_11)
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x200U 
                                                                        & UniversalNormUnit__DOT__stat_11)
                                                                        ? 0x16U
                                                                        : 
                                                                       ((0x100U 
                                                                         & UniversalNormUnit__DOT__stat_11)
                                                                         ? 0x17U
                                                                         : 
                                                                        ((0x80U 
                                                                          & UniversalNormUnit__DOT__stat_11)
                                                                          ? 0x18U
                                                                          : 
                                                                         ((0x40U 
                                                                           & UniversalNormUnit__DOT__stat_11)
                                                                           ? 0x19U
                                                                           : 
                                                                          ((0x20U 
                                                                            & UniversalNormUnit__DOT__stat_11)
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((0x10U 
                                                                             & UniversalNormUnit__DOT__stat_11)
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((8U 
                                                                              & UniversalNormUnit__DOT__stat_11)
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((4U 
                                                                               & UniversalNormUnit__DOT__stat_11)
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((2U 
                                                                                & UniversalNormUnit__DOT__stat_11)
                                                                                ? 0x1eU
                                                                                : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_12 = ((UniversalNormUnit__DOT__stat_12 
                                               >> 0x1fU)
                                               ? 0U
                                               : ((0x40000000U 
                                                   & UniversalNormUnit__DOT__stat_12)
                                                   ? 1U
                                                   : 
                                                  ((0x20000000U 
                                                    & UniversalNormUnit__DOT__stat_12)
                                                    ? 2U
                                                    : 
                                                   ((0x10000000U 
                                                     & UniversalNormUnit__DOT__stat_12)
                                                     ? 3U
                                                     : 
                                                    ((0x8000000U 
                                                      & UniversalNormUnit__DOT__stat_12)
                                                      ? 4U
                                                      : 
                                                     ((0x4000000U 
                                                       & UniversalNormUnit__DOT__stat_12)
                                                       ? 5U
                                                       : 
                                                      ((0x2000000U 
                                                        & UniversalNormUnit__DOT__stat_12)
                                                        ? 6U
                                                        : 
                                                       ((0x1000000U 
                                                         & UniversalNormUnit__DOT__stat_12)
                                                         ? 7U
                                                         : 
                                                        ((0x800000U 
                                                          & UniversalNormUnit__DOT__stat_12)
                                                          ? 8U
                                                          : 
                                                         ((0x400000U 
                                                           & UniversalNormUnit__DOT__stat_12)
                                                           ? 9U
                                                           : 
                                                          ((0x200000U 
                                                            & UniversalNormUnit__DOT__stat_12)
                                                            ? 0xaU
                                                            : 
                                                           ((0x100000U 
                                                             & UniversalNormUnit__DOT__stat_12)
                                                             ? 0xbU
                                                             : 
                                                            ((0x80000U 
                                                              & UniversalNormUnit__DOT__stat_12)
                                                              ? 0xcU
                                                              : 
                                                             ((0x40000U 
                                                               & UniversalNormUnit__DOT__stat_12)
                                                               ? 0xdU
                                                               : 
                                                              ((0x20000U 
                                                                & UniversalNormUnit__DOT__stat_12)
                                                                ? 0xeU
                                                                : 
                                                               ((0x10000U 
                                                                 & UniversalNormUnit__DOT__stat_12)
                                                                 ? 0xfU
                                                                 : 
                                                                ((0x8000U 
                                                                  & UniversalNormUnit__DOT__stat_12)
                                                                  ? 0x10U
                                                                  : 
                                                                 ((0x4000U 
                                                                   & UniversalNormUnit__DOT__stat_12)
                                                                   ? 0x11U
                                                                   : 
                                                                  ((0x2000U 
                                                                    & UniversalNormUnit__DOT__stat_12)
                                                                    ? 0x12U
                                                                    : 
                                                                   ((0x1000U 
                                                                     & UniversalNormUnit__DOT__stat_12)
                                                                     ? 0x13U
                                                                     : 
                                                                    ((0x800U 
                                                                      & UniversalNormUnit__DOT__stat_12)
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x400U 
                                                                       & UniversalNormUnit__DOT__stat_12)
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x200U 
                                                                        & UniversalNormUnit__DOT__stat_12)
                                                                        ? 0x16U
                                                                        : 
                                                                       ((0x100U 
                                                                         & UniversalNormUnit__DOT__stat_12)
                                                                         ? 0x17U
                                                                         : 
                                                                        ((0x80U 
                                                                          & UniversalNormUnit__DOT__stat_12)
                                                                          ? 0x18U
                                                                          : 
                                                                         ((0x40U 
                                                                           & UniversalNormUnit__DOT__stat_12)
                                                                           ? 0x19U
                                                                           : 
                                                                          ((0x20U 
                                                                            & UniversalNormUnit__DOT__stat_12)
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((0x10U 
                                                                             & UniversalNormUnit__DOT__stat_12)
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((8U 
                                                                              & UniversalNormUnit__DOT__stat_12)
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((4U 
                                                                               & UniversalNormUnit__DOT__stat_12)
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((2U 
                                                                                & UniversalNormUnit__DOT__stat_12)
                                                                                ? 0x1eU
                                                                                : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_13 = ((UniversalNormUnit__DOT__stat_13 
                                               >> 0x1fU)
                                               ? 0U
                                               : ((0x40000000U 
                                                   & UniversalNormUnit__DOT__stat_13)
                                                   ? 1U
                                                   : 
                                                  ((0x20000000U 
                                                    & UniversalNormUnit__DOT__stat_13)
                                                    ? 2U
                                                    : 
                                                   ((0x10000000U 
                                                     & UniversalNormUnit__DOT__stat_13)
                                                     ? 3U
                                                     : 
                                                    ((0x8000000U 
                                                      & UniversalNormUnit__DOT__stat_13)
                                                      ? 4U
                                                      : 
                                                     ((0x4000000U 
                                                       & UniversalNormUnit__DOT__stat_13)
                                                       ? 5U
                                                       : 
                                                      ((0x2000000U 
                                                        & UniversalNormUnit__DOT__stat_13)
                                                        ? 6U
                                                        : 
                                                       ((0x1000000U 
                                                         & UniversalNormUnit__DOT__stat_13)
                                                         ? 7U
                                                         : 
                                                        ((0x800000U 
                                                          & UniversalNormUnit__DOT__stat_13)
                                                          ? 8U
                                                          : 
                                                         ((0x400000U 
                                                           & UniversalNormUnit__DOT__stat_13)
                                                           ? 9U
                                                           : 
                                                          ((0x200000U 
                                                            & UniversalNormUnit__DOT__stat_13)
                                                            ? 0xaU
                                                            : 
                                                           ((0x100000U 
                                                             & UniversalNormUnit__DOT__stat_13)
                                                             ? 0xbU
                                                             : 
                                                            ((0x80000U 
                                                              & UniversalNormUnit__DOT__stat_13)
                                                              ? 0xcU
                                                              : 
                                                             ((0x40000U 
                                                               & UniversalNormUnit__DOT__stat_13)
                                                               ? 0xdU
                                                               : 
                                                              ((0x20000U 
                                                                & UniversalNormUnit__DOT__stat_13)
                                                                ? 0xeU
                                                                : 
                                                               ((0x10000U 
                                                                 & UniversalNormUnit__DOT__stat_13)
                                                                 ? 0xfU
                                                                 : 
                                                                ((0x8000U 
                                                                  & UniversalNormUnit__DOT__stat_13)
                                                                  ? 0x10U
                                                                  : 
                                                                 ((0x4000U 
                                                                   & UniversalNormUnit__DOT__stat_13)
                                                                   ? 0x11U
                                                                   : 
                                                                  ((0x2000U 
                                                                    & UniversalNormUnit__DOT__stat_13)
                                                                    ? 0x12U
                                                                    : 
                                                                   ((0x1000U 
                                                                     & UniversalNormUnit__DOT__stat_13)
                                                                     ? 0x13U
                                                                     : 
                                                                    ((0x800U 
                                                                      & UniversalNormUnit__DOT__stat_13)
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x400U 
                                                                       & UniversalNormUnit__DOT__stat_13)
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x200U 
                                                                        & UniversalNormUnit__DOT__stat_13)
                                                                        ? 0x16U
                                                                        : 
                                                                       ((0x100U 
                                                                         & UniversalNormUnit__DOT__stat_13)
                                                                         ? 0x17U
                                                                         : 
                                                                        ((0x80U 
                                                                          & UniversalNormUnit__DOT__stat_13)
                                                                          ? 0x18U
                                                                          : 
                                                                         ((0x40U 
                                                                           & UniversalNormUnit__DOT__stat_13)
                                                                           ? 0x19U
                                                                           : 
                                                                          ((0x20U 
                                                                            & UniversalNormUnit__DOT__stat_13)
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((0x10U 
                                                                             & UniversalNormUnit__DOT__stat_13)
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((8U 
                                                                              & UniversalNormUnit__DOT__stat_13)
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((4U 
                                                                               & UniversalNormUnit__DOT__stat_13)
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((2U 
                                                                                & UniversalNormUnit__DOT__stat_13)
                                                                                ? 0x1eU
                                                                                : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_14 = ((UniversalNormUnit__DOT__stat_14 
                                               >> 0x1fU)
                                               ? 0U
                                               : ((0x40000000U 
                                                   & UniversalNormUnit__DOT__stat_14)
                                                   ? 1U
                                                   : 
                                                  ((0x20000000U 
                                                    & UniversalNormUnit__DOT__stat_14)
                                                    ? 2U
                                                    : 
                                                   ((0x10000000U 
                                                     & UniversalNormUnit__DOT__stat_14)
                                                     ? 3U
                                                     : 
                                                    ((0x8000000U 
                                                      & UniversalNormUnit__DOT__stat_14)
                                                      ? 4U
                                                      : 
                                                     ((0x4000000U 
                                                       & UniversalNormUnit__DOT__stat_14)
                                                       ? 5U
                                                       : 
                                                      ((0x2000000U 
                                                        & UniversalNormUnit__DOT__stat_14)
                                                        ? 6U
                                                        : 
                                                       ((0x1000000U 
                                                         & UniversalNormUnit__DOT__stat_14)
                                                         ? 7U
                                                         : 
                                                        ((0x800000U 
                                                          & UniversalNormUnit__DOT__stat_14)
                                                          ? 8U
                                                          : 
                                                         ((0x400000U 
                                                           & UniversalNormUnit__DOT__stat_14)
                                                           ? 9U
                                                           : 
                                                          ((0x200000U 
                                                            & UniversalNormUnit__DOT__stat_14)
                                                            ? 0xaU
                                                            : 
                                                           ((0x100000U 
                                                             & UniversalNormUnit__DOT__stat_14)
                                                             ? 0xbU
                                                             : 
                                                            ((0x80000U 
                                                              & UniversalNormUnit__DOT__stat_14)
                                                              ? 0xcU
                                                              : 
                                                             ((0x40000U 
                                                               & UniversalNormUnit__DOT__stat_14)
                                                               ? 0xdU
                                                               : 
                                                              ((0x20000U 
                                                                & UniversalNormUnit__DOT__stat_14)
                                                                ? 0xeU
                                                                : 
                                                               ((0x10000U 
                                                                 & UniversalNormUnit__DOT__stat_14)
                                                                 ? 0xfU
                                                                 : 
                                                                ((0x8000U 
                                                                  & UniversalNormUnit__DOT__stat_14)
                                                                  ? 0x10U
                                                                  : 
                                                                 ((0x4000U 
                                                                   & UniversalNormUnit__DOT__stat_14)
                                                                   ? 0x11U
                                                                   : 
                                                                  ((0x2000U 
                                                                    & UniversalNormUnit__DOT__stat_14)
                                                                    ? 0x12U
                                                                    : 
                                                                   ((0x1000U 
                                                                     & UniversalNormUnit__DOT__stat_14)
                                                                     ? 0x13U
                                                                     : 
                                                                    ((0x800U 
                                                                      & UniversalNormUnit__DOT__stat_14)
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x400U 
                                                                       & UniversalNormUnit__DOT__stat_14)
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x200U 
                                                                        & UniversalNormUnit__DOT__stat_14)
                                                                        ? 0x16U
                                                                        : 
                                                                       ((0x100U 
                                                                         & UniversalNormUnit__DOT__stat_14)
                                                                         ? 0x17U
                                                                         : 
                                                                        ((0x80U 
                                                                          & UniversalNormUnit__DOT__stat_14)
                                                                          ? 0x18U
                                                                          : 
                                                                         ((0x40U 
                                                                           & UniversalNormUnit__DOT__stat_14)
                                                                           ? 0x19U
                                                                           : 
                                                                          ((0x20U 
                                                                            & UniversalNormUnit__DOT__stat_14)
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((0x10U 
                                                                             & UniversalNormUnit__DOT__stat_14)
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((8U 
                                                                              & UniversalNormUnit__DOT__stat_14)
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((4U 
                                                                               & UniversalNormUnit__DOT__stat_14)
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((2U 
                                                                                & UniversalNormUnit__DOT__stat_14)
                                                                                ? 0x1eU
                                                                                : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz_15 = ((UniversalNormUnit__DOT__stat_15 
                                               >> 0x1fU)
                                               ? 0U
                                               : ((0x40000000U 
                                                   & UniversalNormUnit__DOT__stat_15)
                                                   ? 1U
                                                   : 
                                                  ((0x20000000U 
                                                    & UniversalNormUnit__DOT__stat_15)
                                                    ? 2U
                                                    : 
                                                   ((0x10000000U 
                                                     & UniversalNormUnit__DOT__stat_15)
                                                     ? 3U
                                                     : 
                                                    ((0x8000000U 
                                                      & UniversalNormUnit__DOT__stat_15)
                                                      ? 4U
                                                      : 
                                                     ((0x4000000U 
                                                       & UniversalNormUnit__DOT__stat_15)
                                                       ? 5U
                                                       : 
                                                      ((0x2000000U 
                                                        & UniversalNormUnit__DOT__stat_15)
                                                        ? 6U
                                                        : 
                                                       ((0x1000000U 
                                                         & UniversalNormUnit__DOT__stat_15)
                                                         ? 7U
                                                         : 
                                                        ((0x800000U 
                                                          & UniversalNormUnit__DOT__stat_15)
                                                          ? 8U
                                                          : 
                                                         ((0x400000U 
                                                           & UniversalNormUnit__DOT__stat_15)
                                                           ? 9U
                                                           : 
                                                          ((0x200000U 
                                                            & UniversalNormUnit__DOT__stat_15)
                                                            ? 0xaU
                                                            : 
                                                           ((0x100000U 
                                                             & UniversalNormUnit__DOT__stat_15)
                                                             ? 0xbU
                                                             : 
                                                            ((0x80000U 
                                                              & UniversalNormUnit__DOT__stat_15)
                                                              ? 0xcU
                                                              : 
                                                             ((0x40000U 
                                                               & UniversalNormUnit__DOT__stat_15)
                                                               ? 0xdU
                                                               : 
                                                              ((0x20000U 
                                                                & UniversalNormUnit__DOT__stat_15)
                                                                ? 0xeU
                                                                : 
                                                               ((0x10000U 
                                                                 & UniversalNormUnit__DOT__stat_15)
                                                                 ? 0xfU
                                                                 : 
                                                                ((0x8000U 
                                                                  & UniversalNormUnit__DOT__stat_15)
                                                                  ? 0x10U
                                                                  : 
                                                                 ((0x4000U 
                                                                   & UniversalNormUnit__DOT__stat_15)
                                                                   ? 0x11U
                                                                   : 
                                                                  ((0x2000U 
                                                                    & UniversalNormUnit__DOT__stat_15)
                                                                    ? 0x12U
                                                                    : 
                                                                   ((0x1000U 
                                                                     & UniversalNormUnit__DOT__stat_15)
                                                                     ? 0x13U
                                                                     : 
                                                                    ((0x800U 
                                                                      & UniversalNormUnit__DOT__stat_15)
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x400U 
                                                                       & UniversalNormUnit__DOT__stat_15)
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x200U 
                                                                        & UniversalNormUnit__DOT__stat_15)
                                                                        ? 0x16U
                                                                        : 
                                                                       ((0x100U 
                                                                         & UniversalNormUnit__DOT__stat_15)
                                                                         ? 0x17U
                                                                         : 
                                                                        ((0x80U 
                                                                          & UniversalNormUnit__DOT__stat_15)
                                                                          ? 0x18U
                                                                          : 
                                                                         ((0x40U 
                                                                           & UniversalNormUnit__DOT__stat_15)
                                                                           ? 0x19U
                                                                           : 
                                                                          ((0x20U 
                                                                            & UniversalNormUnit__DOT__stat_15)
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((0x10U 
                                                                             & UniversalNormUnit__DOT__stat_15)
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((8U 
                                                                              & UniversalNormUnit__DOT__stat_15)
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((4U 
                                                                               & UniversalNormUnit__DOT__stat_15)
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((2U 
                                                                                & UniversalNormUnit__DOT__stat_15)
                                                                                ? 0x1eU
                                                                                : 0x1fU)))))))))))))))))))))))))))))));
    UniversalNormUnit__DOT__normPair_lz = ((UniversalNormUnit__DOT__stat 
                                            >> 0x1fU)
                                            ? 0U : 
                                           ((0x40000000U 
                                             & UniversalNormUnit__DOT__stat)
                                             ? 1U : 
                                            ((0x20000000U 
                                              & UniversalNormUnit__DOT__stat)
                                              ? 2U : 
                                             ((0x10000000U 
                                               & UniversalNormUnit__DOT__stat)
                                               ? 3U
                                               : ((0x8000000U 
                                                   & UniversalNormUnit__DOT__stat)
                                                   ? 4U
                                                   : 
                                                  ((0x4000000U 
                                                    & UniversalNormUnit__DOT__stat)
                                                    ? 5U
                                                    : 
                                                   ((0x2000000U 
                                                     & UniversalNormUnit__DOT__stat)
                                                     ? 6U
                                                     : 
                                                    ((0x1000000U 
                                                      & UniversalNormUnit__DOT__stat)
                                                      ? 7U
                                                      : 
                                                     ((0x800000U 
                                                       & UniversalNormUnit__DOT__stat)
                                                       ? 8U
                                                       : 
                                                      ((0x400000U 
                                                        & UniversalNormUnit__DOT__stat)
                                                        ? 9U
                                                        : 
                                                       ((0x200000U 
                                                         & UniversalNormUnit__DOT__stat)
                                                         ? 0xaU
                                                         : 
                                                        ((0x100000U 
                                                          & UniversalNormUnit__DOT__stat)
                                                          ? 0xbU
                                                          : 
                                                         ((0x80000U 
                                                           & UniversalNormUnit__DOT__stat)
                                                           ? 0xcU
                                                           : 
                                                          ((0x40000U 
                                                            & UniversalNormUnit__DOT__stat)
                                                            ? 0xdU
                                                            : 
                                                           ((0x20000U 
                                                             & UniversalNormUnit__DOT__stat)
                                                             ? 0xeU
                                                             : 
                                                            ((0x10000U 
                                                              & UniversalNormUnit__DOT__stat)
                                                              ? 0xfU
                                                              : 
                                                             ((0x8000U 
                                                               & UniversalNormUnit__DOT__stat)
                                                               ? 0x10U
                                                               : 
                                                              ((0x4000U 
                                                                & UniversalNormUnit__DOT__stat)
                                                                ? 0x11U
                                                                : 
                                                               ((0x2000U 
                                                                 & UniversalNormUnit__DOT__stat)
                                                                 ? 0x12U
                                                                 : 
                                                                ((0x1000U 
                                                                  & UniversalNormUnit__DOT__stat)
                                                                  ? 0x13U
                                                                  : 
                                                                 ((0x800U 
                                                                   & UniversalNormUnit__DOT__stat)
                                                                   ? 0x14U
                                                                   : 
                                                                  ((0x400U 
                                                                    & UniversalNormUnit__DOT__stat)
                                                                    ? 0x15U
                                                                    : 
                                                                   ((0x200U 
                                                                     & UniversalNormUnit__DOT__stat)
                                                                     ? 0x16U
                                                                     : 
                                                                    ((0x100U 
                                                                      & UniversalNormUnit__DOT__stat)
                                                                      ? 0x17U
                                                                      : 
                                                                     ((0x80U 
                                                                       & UniversalNormUnit__DOT__stat)
                                                                       ? 0x18U
                                                                       : 
                                                                      ((0x40U 
                                                                        & UniversalNormUnit__DOT__stat)
                                                                        ? 0x19U
                                                                        : 
                                                                       ((0x20U 
                                                                         & UniversalNormUnit__DOT__stat)
                                                                         ? 0x1aU
                                                                         : 
                                                                        ((0x10U 
                                                                          & UniversalNormUnit__DOT__stat)
                                                                          ? 0x1bU
                                                                          : 
                                                                         ((8U 
                                                                           & UniversalNormUnit__DOT__stat)
                                                                           ? 0x1cU
                                                                           : 
                                                                          ((4U 
                                                                            & UniversalNormUnit__DOT__stat)
                                                                            ? 0x1dU
                                                                            : 
                                                                           ((2U 
                                                                             & UniversalNormUnit__DOT__stat)
                                                                             ? 0x1eU
                                                                             : 0x1fU)))))))))))))))))))))))))))))));
    if (vlSelf->UniversalNormUnit__DOT__onlineNormalScaleLookup) {
        vlSelf->UniversalNormUnit__DOT___GEN_1341 = 
            ((0U != UniversalNormUnit__DOT__stat_1)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_1)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1344 = 
            ((0U != UniversalNormUnit__DOT__stat_2)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_2)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1347 = 
            ((0U != UniversalNormUnit__DOT__stat_3)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_3)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1350 = 
            ((0U != UniversalNormUnit__DOT__stat_4)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_4)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1353 = 
            ((0U != UniversalNormUnit__DOT__stat_5)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_5)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1356 = 
            ((0U != UniversalNormUnit__DOT__stat_6)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_6)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1359 = 
            ((0U != UniversalNormUnit__DOT__stat_7)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_7)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1362 = 
            ((0U != UniversalNormUnit__DOT__stat_8)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_8)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1365 = 
            ((0U != UniversalNormUnit__DOT__stat_9)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_9)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1368 = 
            ((0U != UniversalNormUnit__DOT__stat_10)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_10)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1371 = 
            ((0U != UniversalNormUnit__DOT__stat_11)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_11)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1374 = 
            ((0U != UniversalNormUnit__DOT__stat_12)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_12)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1377 = 
            ((0U != UniversalNormUnit__DOT__stat_13)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_13)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1380 = 
            ((0U != UniversalNormUnit__DOT__stat_14)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_14)))
              : 0U);
        vlSelf->UniversalNormUnit__DOT___GEN_1383 = 
            ((0U != UniversalNormUnit__DOT__stat_15)
              ? (0x1fU & ((IData)(0x1fU) - (IData)(UniversalNormUnit__DOT__normPair_lz_15)))
              : 0U);
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_1341 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1344 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1347 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1350 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1353 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1356 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1359 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1362 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1365 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1368 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1371 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1374 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1377 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1380 = 0U;
        vlSelf->UniversalNormUnit__DOT___GEN_1383 = 0U;
    }
    if (vlSelf->UniversalNormUnit__DOT__launchOnlineSoftFinal) {
        vlSelf->UniversalNormUnit__DOT__scaleLuts_1_io_rd_addr 
            = (0xffU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_1)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_1)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_18)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_2_io_rd_addr 
            = (0xffU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_2)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_2)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_19)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_3_io_rd_addr 
            = (0xffU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_3)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_3)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_20)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_4_io_rd_addr 
            = (0xffU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_4)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_4)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_21)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_5_io_rd_addr 
            = (0xffU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_5)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_5)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_22)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_6_io_rd_addr 
            = (0xffU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_6)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_6)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_23)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_7_io_rd_addr 
            = (0xffU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_7)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_7)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_24)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_8_io_rd_addr 
            = (0xffU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_8)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_8)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_25)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_9_io_rd_addr 
            = (0xffU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_9)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_9)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_26)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_10_io_rd_addr 
            = (0xffU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_10)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_10)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_27)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_11_io_rd_addr 
            = (0xffU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_11)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_11)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_28)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_12_io_rd_addr 
            = (0xffU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_12)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_12)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_29)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_13_io_rd_addr 
            = (0xffU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_13)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_13)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_30)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_14_io_rd_addr 
            = (0xffU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_14)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_14)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_31)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_15_io_rd_addr 
            = (0xffU & ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_15)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_15)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_32)) 
                                       >> 0x18U))) : 0U));
    } else if (vlSelf->UniversalNormUnit__DOT__onlineNormalScaleLookup) {
        vlSelf->UniversalNormUnit__DOT__scaleLuts_1_io_rd_addr 
            = (0xffU & ((0U != UniversalNormUnit__DOT__stat_1)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_1)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_1)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_2_io_rd_addr 
            = (0xffU & ((0U != UniversalNormUnit__DOT__stat_2)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_2)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_2)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_3_io_rd_addr 
            = (0xffU & ((0U != UniversalNormUnit__DOT__stat_3)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_3)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_3)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_4_io_rd_addr 
            = (0xffU & ((0U != UniversalNormUnit__DOT__stat_4)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_4)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_4)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_5_io_rd_addr 
            = (0xffU & ((0U != UniversalNormUnit__DOT__stat_5)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_5)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_5)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_6_io_rd_addr 
            = (0xffU & ((0U != UniversalNormUnit__DOT__stat_6)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_6)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_6)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_7_io_rd_addr 
            = (0xffU & ((0U != UniversalNormUnit__DOT__stat_7)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_7)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_7)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_8_io_rd_addr 
            = (0xffU & ((0U != UniversalNormUnit__DOT__stat_8)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_8)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_8)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_9_io_rd_addr 
            = (0xffU & ((0U != UniversalNormUnit__DOT__stat_9)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_9)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_9)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_10_io_rd_addr 
            = (0xffU & ((0U != UniversalNormUnit__DOT__stat_10)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_10)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_10)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_11_io_rd_addr 
            = (0xffU & ((0U != UniversalNormUnit__DOT__stat_11)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_11)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_11)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_12_io_rd_addr 
            = (0xffU & ((0U != UniversalNormUnit__DOT__stat_12)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_12)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_12)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_13_io_rd_addr 
            = (0xffU & ((0U != UniversalNormUnit__DOT__stat_13)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_13)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_13)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_14_io_rd_addr 
            = (0xffU & ((0U != UniversalNormUnit__DOT__stat_14)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_14)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_14)) 
                                       >> 0x18U))) : 0U));
        vlSelf->UniversalNormUnit__DOT__scaleLuts_15_io_rd_addr 
            = (0xffU & ((0U != UniversalNormUnit__DOT__stat_15)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(UniversalNormUnit__DOT__stat_15)) 
                                        << (IData)(UniversalNormUnit__DOT__normPair_lz_15)) 
                                       >> 0x18U))) : 0U));
    } else {
        vlSelf->UniversalNormUnit__DOT__scaleLuts_1_io_rd_addr 
            = (0xffU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_2_io_rd_addr 
            = (0xffU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_3_io_rd_addr 
            = (0xffU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_4_io_rd_addr 
            = (0xffU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_5_io_rd_addr 
            = (0xffU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_6_io_rd_addr 
            = (0xffU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_7_io_rd_addr 
            = (0xffU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_8_io_rd_addr 
            = (0xffU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_9_io_rd_addr 
            = (0xffU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_10_io_rd_addr 
            = (0xffU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_11_io_rd_addr 
            = (0xffU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_12_io_rd_addr 
            = (0xffU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_13_io_rd_addr 
            = (0xffU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_14_io_rd_addr 
            = (0xffU & 0U);
        vlSelf->UniversalNormUnit__DOT__scaleLuts_15_io_rd_addr 
            = (0xffU & 0U);
    }
    vlSelf->UniversalNormUnit__DOT___GEN_1387 = ((IData)(vlSelf->UniversalNormUnit__DOT__distributedNormalScaleLookup)
                                                  ? 
                                                 ((0U 
                                                   != vlSelf->UniversalNormUnit__DOT__stat_16)
                                                   ? 
                                                  (0x1fU 
                                                   & ((IData)(0x1fU) 
                                                      - (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_16)))
                                                   : 0U)
                                                  : 
                                                 ((IData)(vlSelf->UniversalNormUnit__DOT__onlineNormalScaleLookup)
                                                   ? 
                                                  ((0U 
                                                    != UniversalNormUnit__DOT__stat)
                                                    ? 
                                                   (0x1fU 
                                                    & ((IData)(0x1fU) 
                                                       - (IData)(UniversalNormUnit__DOT__normPair_lz)))
                                                    : 0U)
                                                   : 0U));
    vlSelf->UniversalNormUnit__DOT__scaleLuts_0_io_rd_addr 
        = (0xffU & ((IData)(vlSelf->UniversalNormUnit__DOT__distributedSoftScaleLookup)
                     ? ((0U != vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)
                         ? (IData)((0x7fffffffffULL 
                                    & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__correctedSumTree__DOT__s4)) 
                                        << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_33)) 
                                       >> 0x18U))) : 0U)
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__launchOnlineSoftFinal)
                         ? ((0U != vlSelf->UniversalNormUnit__DOT__softFinalSum_0)
                             ? (IData)((0x7fffffffffULL 
                                        & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softFinalSum_0)) 
                                            << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_17)) 
                                           >> 0x18U)))
                             : 0U) : ((IData)(vlSelf->UniversalNormUnit__DOT__distributedNormalScaleLookup)
                                       ? ((0U != vlSelf->UniversalNormUnit__DOT__stat_16)
                                           ? (IData)(
                                                     (0x7fffffffffULL 
                                                      & (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__stat_16)) 
                                                          << (IData)(vlSelf->UniversalNormUnit__DOT__normPair_lz_16)) 
                                                         >> 0x18U)))
                                           : 0U) : 
                                      ((IData)(vlSelf->UniversalNormUnit__DOT__onlineNormalScaleLookup)
                                        ? ((0U != UniversalNormUnit__DOT__stat)
                                            ? (IData)(
                                                      (0x7fffffffffULL 
                                                       & (((QData)((IData)(UniversalNormUnit__DOT__stat)) 
                                                           << (IData)(UniversalNormUnit__DOT__normPair_lz)) 
                                                          >> 0x18U)))
                                            : 0U) : 0U)))));
}

void VUniversalNormUnit___024root___eval_triggers__act(VUniversalNormUnit___024root* vlSelf);

bool VUniversalNormUnit___024root___eval_phase__act(VUniversalNormUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUniversalNormUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUniversalNormUnit___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VUniversalNormUnit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VUniversalNormUnit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VUniversalNormUnit___024root___eval_nba(VUniversalNormUnit___024root* vlSelf);

bool VUniversalNormUnit___024root___eval_phase__nba(VUniversalNormUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUniversalNormUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUniversalNormUnit___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VUniversalNormUnit___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VUniversalNormUnit___024root___dump_triggers__ico(VUniversalNormUnit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VUniversalNormUnit___024root___dump_triggers__nba(VUniversalNormUnit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VUniversalNormUnit___024root___dump_triggers__act(VUniversalNormUnit___024root* vlSelf);
#endif  // VL_DEBUG

void VUniversalNormUnit___024root___eval(VUniversalNormUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUniversalNormUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUniversalNormUnit___024root___eval\n"); );
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
            VUniversalNormUnit___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("UniversalNormUnit.sv", 3131, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VUniversalNormUnit___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VUniversalNormUnit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("UniversalNormUnit.sv", 3131, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VUniversalNormUnit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("UniversalNormUnit.sv", 3131, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VUniversalNormUnit___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VUniversalNormUnit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VUniversalNormUnit___024root___eval_debug_assertions(VUniversalNormUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUniversalNormUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUniversalNormUnit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_phase1_valid_vec_0 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase1_valid_vec_0");}
    if (VL_UNLIKELY((vlSelf->io_phase1_valid_vec_1 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase1_valid_vec_1");}
    if (VL_UNLIKELY((vlSelf->io_phase1_valid_vec_2 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase1_valid_vec_2");}
    if (VL_UNLIKELY((vlSelf->io_phase1_valid_vec_3 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase1_valid_vec_3");}
    if (VL_UNLIKELY((vlSelf->io_phase1_valid_vec_4 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase1_valid_vec_4");}
    if (VL_UNLIKELY((vlSelf->io_phase1_valid_vec_5 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase1_valid_vec_5");}
    if (VL_UNLIKELY((vlSelf->io_phase1_valid_vec_6 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase1_valid_vec_6");}
    if (VL_UNLIKELY((vlSelf->io_phase1_valid_vec_7 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase1_valid_vec_7");}
    if (VL_UNLIKELY((vlSelf->io_phase1_valid_vec_8 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase1_valid_vec_8");}
    if (VL_UNLIKELY((vlSelf->io_phase1_valid_vec_9 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase1_valid_vec_9");}
    if (VL_UNLIKELY((vlSelf->io_phase1_valid_vec_10 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase1_valid_vec_10");}
    if (VL_UNLIKELY((vlSelf->io_phase1_valid_vec_11 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase1_valid_vec_11");}
    if (VL_UNLIKELY((vlSelf->io_phase1_valid_vec_12 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase1_valid_vec_12");}
    if (VL_UNLIKELY((vlSelf->io_phase1_valid_vec_13 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase1_valid_vec_13");}
    if (VL_UNLIKELY((vlSelf->io_phase1_valid_vec_14 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase1_valid_vec_14");}
    if (VL_UNLIKELY((vlSelf->io_phase1_valid_vec_15 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase1_valid_vec_15");}
    if (VL_UNLIKELY((vlSelf->io_phase1_row_change_update_in 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase1_row_change_update_in");}
    if (VL_UNLIKELY((vlSelf->io_phase2_valid_vec_0 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase2_valid_vec_0");}
    if (VL_UNLIKELY((vlSelf->io_phase2_valid_vec_1 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase2_valid_vec_1");}
    if (VL_UNLIKELY((vlSelf->io_phase2_valid_vec_2 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase2_valid_vec_2");}
    if (VL_UNLIKELY((vlSelf->io_phase2_valid_vec_3 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase2_valid_vec_3");}
    if (VL_UNLIKELY((vlSelf->io_phase2_valid_vec_4 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase2_valid_vec_4");}
    if (VL_UNLIKELY((vlSelf->io_phase2_valid_vec_5 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase2_valid_vec_5");}
    if (VL_UNLIKELY((vlSelf->io_phase2_valid_vec_6 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase2_valid_vec_6");}
    if (VL_UNLIKELY((vlSelf->io_phase2_valid_vec_7 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase2_valid_vec_7");}
    if (VL_UNLIKELY((vlSelf->io_phase2_valid_vec_8 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase2_valid_vec_8");}
    if (VL_UNLIKELY((vlSelf->io_phase2_valid_vec_9 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase2_valid_vec_9");}
    if (VL_UNLIKELY((vlSelf->io_phase2_valid_vec_10 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase2_valid_vec_10");}
    if (VL_UNLIKELY((vlSelf->io_phase2_valid_vec_11 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase2_valid_vec_11");}
    if (VL_UNLIKELY((vlSelf->io_phase2_valid_vec_12 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase2_valid_vec_12");}
    if (VL_UNLIKELY((vlSelf->io_phase2_valid_vec_13 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase2_valid_vec_13");}
    if (VL_UNLIKELY((vlSelf->io_phase2_valid_vec_14 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase2_valid_vec_14");}
    if (VL_UNLIKELY((vlSelf->io_phase2_valid_vec_15 
                     & 0xfeU))) {
        Verilated::overWidthError("io_phase2_valid_vec_15");}
    if (VL_UNLIKELY((vlSelf->io_mode_sel & 0xfcU))) {
        Verilated::overWidthError("io_mode_sel");}
    if (VL_UNLIKELY((vlSelf->io_layout_mode & 0xfeU))) {
        Verilated::overWidthError("io_layout_mode");}
    if (VL_UNLIKELY((vlSelf->io_inv_vector_length & 0xff000000U))) {
        Verilated::overWidthError("io_inv_vector_length");}
    if (VL_UNLIKELY((vlSelf->io_clr_acc & 0xfeU))) {
        Verilated::overWidthError("io_clr_acc");}
    if (VL_UNLIKELY((vlSelf->io_stall & 0xfeU))) {
        Verilated::overWidthError("io_stall");}
    if (VL_UNLIKELY((vlSelf->io_lut_wr_en & 0xfeU))) {
        Verilated::overWidthError("io_lut_wr_en");}
    if (VL_UNLIKELY((vlSelf->io_lut_is_exp & 0xfeU))) {
        Verilated::overWidthError("io_lut_is_exp");}
    if (VL_UNLIKELY((vlSelf->io_lut_wr_addr & 0xe0U))) {
        Verilated::overWidthError("io_lut_wr_addr");}
}
#endif  // VL_DEBUG
