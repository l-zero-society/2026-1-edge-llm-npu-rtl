// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputeUnit.h for the primary calling header

#include "VComputeUnit__pch.h"
#include "VComputeUnit__Syms.h"
#include "VComputeUnit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VComputeUnit___024root___dump_triggers__stl(VComputeUnit___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VComputeUnit___024root___eval_triggers__stl(VComputeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputeUnit___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VComputeUnit___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VComputeUnit___024root___stl_sequent__TOP__0(VComputeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComputeUnit___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ ComputeUnit__DOT__ubTransposer_io_out_stream_en;
    ComputeUnit__DOT__ubTransposer_io_out_stream_en = 0;
    CData/*0:0*/ ComputeUnit__DOT__wbTransposer_io_out_stream_en;
    ComputeUnit__DOT__wbTransposer_io_out_stream_en = 0;
    CData/*0:0*/ ComputeUnit__DOT__outTransposer_io_out_stream_en;
    ComputeUnit__DOT__outTransposer_io_out_stream_en = 0;
    CData/*0:0*/ ComputeUnit__DOT____VdfgTmp_h75c89da9__0;
    ComputeUnit__DOT____VdfgTmp_h75c89da9__0 = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_1__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_2__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_3__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_5__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_5__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_6__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_6__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_7__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_7__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_8__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_8__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_9__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_9__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_10__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_10__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_11__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_11__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_12__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_12__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_13__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_13__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_14__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_14__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_15__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_15__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_1__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_2__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_3__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_5__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_5__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_6__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_6__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_7__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_7__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_8__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_8__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_9__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_9__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_10__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_10__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_11__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_11__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_12__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_12__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_13__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_13__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_14__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_14__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_15__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_15__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_1__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_2__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_3__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_5__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_5__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_6__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_6__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_7__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_7__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_8__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_8__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_9__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_9__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_10__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_10__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_11__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_11__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_12__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_12__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_13__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_13__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_14__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_14__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_15__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_15__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_1__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_2__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_3__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_5__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_5__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_6__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_6__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_7__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_7__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_8__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_8__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_9__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_9__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_10__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_10__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_11__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_11__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_12__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_12__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_13__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_13__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_14__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_14__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_15__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_15__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_1__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_2__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_3__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_5__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_5__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_6__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_6__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_7__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_7__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_8__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_8__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_9__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_9__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_10__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_10__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_11__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_11__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_12__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_12__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_13__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_13__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_14__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_14__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_15__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_15__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_1__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_2__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_3__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_5__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_5__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_6__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_6__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_7__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_7__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_8__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_8__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_9__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_9__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_10__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_10__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_11__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_11__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_12__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_12__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_13__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_13__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_14__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_14__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_15__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_15__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_1__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_2__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_3__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_5__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_5__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_6__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_6__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_7__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_7__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_8__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_8__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_9__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_9__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_10__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_10__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_11__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_11__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_12__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_12__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_13__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_13__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_14__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_14__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_15__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_15__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_1__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_2__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_3__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_5__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_5__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_6__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_6__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_7__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_7__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_8__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_8__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_9__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_9__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_10__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_10__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_11__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_11__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_12__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_12__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_13__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_13__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_14__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_14__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_15__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_15__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_1__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_2__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_3__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_5__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_5__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_6__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_6__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_7__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_7__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_8__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_8__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_9__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_9__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_10__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_10__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_11__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_11__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_12__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_12__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_13__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_13__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_14__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_14__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_15__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_15__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_1__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_2__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_3__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_5__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_5__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_6__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_6__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_7__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_7__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_8__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_8__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_9__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_9__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_10__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_10__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_11__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_11__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_12__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_12__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_13__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_13__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_14__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_14__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_15__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_15__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_1__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_2__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_3__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_5__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_5__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_6__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_6__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_7__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_7__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_8__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_8__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_9__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_9__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_10__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_10__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_11__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_11__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_12__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_12__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_13__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_13__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_14__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_14__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_15__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_15__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_1__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_2__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_3__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_5__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_5__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_6__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_6__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_7__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_7__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_8__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_8__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_9__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_9__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_10__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_10__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_11__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_11__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_12__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_12__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_13__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_13__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_14__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_14__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_15__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_15__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_1__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_2__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_3__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_5__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_5__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_6__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_6__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_7__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_7__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_8__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_8__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_9__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_9__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_10__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_10__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_11__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_11__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_12__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_12__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_13__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_13__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_14__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_14__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_15__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_15__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_1__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_2__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_3__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_5__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_5__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_6__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_6__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_7__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_7__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_8__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_8__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_9__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_9__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_10__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_10__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_11__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_11__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_12__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_12__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_13__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_13__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_14__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_14__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_15__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_15__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_1__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_2__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_3__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_5__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_5__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_6__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_6__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_7__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_7__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_8__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_8__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_9__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_9__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_10__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_10__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_11__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_11__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_12__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_12__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_13__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_13__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_14__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_14__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_15__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_15__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_1__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_1__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_2__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_2__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_3__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_3__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_5__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_5__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_6__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_6__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_7__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_7__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_8__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_8__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_9__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_9__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_10__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_10__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_11__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_11__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_12__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_12__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_13__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_13__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_14__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_14__DOT__mul_res = 0;
    SData/*15:0*/ ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_15__DOT__mul_res;
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_15__DOT__mul_res = 0;
    CData/*0:0*/ ComputeUnit__DOT__tpu__DOT__tileCtrlQueue__DOT__ptr_match;
    ComputeUnit__DOT__tpu__DOT__tileCtrlQueue__DOT__ptr_match = 0;
    IData/*31:0*/ ComputeUnit__DOT__vpu2__DOT__norm__DOT__layerPair_meanSq_16;
    ComputeUnit__DOT__vpu2__DOT__norm__DOT__layerPair_meanSq_16 = 0;
    CData/*0:0*/ ComputeUnit__DOT__ubTransposer__DOT___ping_io_wr_en_T;
    ComputeUnit__DOT__ubTransposer__DOT___ping_io_wr_en_T = 0;
    CData/*0:0*/ ComputeUnit__DOT__ubTransposer__DOT___ping_io_rd_en_T;
    ComputeUnit__DOT__ubTransposer__DOT___ping_io_rd_en_T = 0;
    CData/*0:0*/ ComputeUnit__DOT__wbTransposer__DOT___ping_io_wr_en_T;
    ComputeUnit__DOT__wbTransposer__DOT___ping_io_wr_en_T = 0;
    CData/*0:0*/ ComputeUnit__DOT__wbTransposer__DOT___ping_io_rd_en_T;
    ComputeUnit__DOT__wbTransposer__DOT___ping_io_rd_en_T = 0;
    CData/*0:0*/ ComputeUnit__DOT__outTransposer__DOT___ping_io_rd_en_T;
    ComputeUnit__DOT__outTransposer__DOT___ping_io_rd_en_T = 0;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_38;
    VlWide<3>/*95:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_43;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_48;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_52;
    VlWide<3>/*95:0*/ __Vtemp_54;
    VlWide<3>/*95:0*/ __Vtemp_55;
    VlWide<3>/*95:0*/ __Vtemp_56;
    VlWide<3>/*95:0*/ __Vtemp_59;
    VlWide<3>/*95:0*/ __Vtemp_60;
    VlWide<3>/*95:0*/ __Vtemp_62;
    VlWide<3>/*95:0*/ __Vtemp_63;
    VlWide<3>/*95:0*/ __Vtemp_64;
    VlWide<3>/*95:0*/ __Vtemp_67;
    VlWide<3>/*95:0*/ __Vtemp_68;
    VlWide<3>/*95:0*/ __Vtemp_70;
    VlWide<3>/*95:0*/ __Vtemp_71;
    VlWide<3>/*95:0*/ __Vtemp_72;
    VlWide<3>/*95:0*/ __Vtemp_75;
    VlWide<3>/*95:0*/ __Vtemp_76;
    VlWide<3>/*95:0*/ __Vtemp_78;
    VlWide<3>/*95:0*/ __Vtemp_79;
    VlWide<3>/*95:0*/ __Vtemp_80;
    VlWide<3>/*95:0*/ __Vtemp_83;
    VlWide<3>/*95:0*/ __Vtemp_84;
    VlWide<3>/*95:0*/ __Vtemp_86;
    VlWide<3>/*95:0*/ __Vtemp_87;
    VlWide<3>/*95:0*/ __Vtemp_88;
    VlWide<3>/*95:0*/ __Vtemp_91;
    VlWide<3>/*95:0*/ __Vtemp_92;
    VlWide<3>/*95:0*/ __Vtemp_94;
    VlWide<3>/*95:0*/ __Vtemp_95;
    VlWide<3>/*95:0*/ __Vtemp_96;
    VlWide<3>/*95:0*/ __Vtemp_99;
    VlWide<3>/*95:0*/ __Vtemp_100;
    VlWide<3>/*95:0*/ __Vtemp_102;
    VlWide<3>/*95:0*/ __Vtemp_103;
    VlWide<3>/*95:0*/ __Vtemp_104;
    VlWide<3>/*95:0*/ __Vtemp_107;
    VlWide<3>/*95:0*/ __Vtemp_108;
    VlWide<3>/*95:0*/ __Vtemp_110;
    VlWide<3>/*95:0*/ __Vtemp_111;
    VlWide<3>/*95:0*/ __Vtemp_112;
    VlWide<3>/*95:0*/ __Vtemp_115;
    VlWide<3>/*95:0*/ __Vtemp_116;
    VlWide<3>/*95:0*/ __Vtemp_118;
    VlWide<3>/*95:0*/ __Vtemp_119;
    VlWide<3>/*95:0*/ __Vtemp_120;
    VlWide<3>/*95:0*/ __Vtemp_123;
    VlWide<3>/*95:0*/ __Vtemp_124;
    VlWide<3>/*95:0*/ __Vtemp_126;
    VlWide<3>/*95:0*/ __Vtemp_127;
    VlWide<3>/*95:0*/ __Vtemp_128;
    // Body
    vlSelf->ComputeUnit__DOT__tpu__DOT__timer__DOT__lastRow 
        = (0xfU == (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__timer__DOT__outputRowCounter));
    vlSelf->ComputeUnit__DOT__tpu__DOT__timer__DOT___outputRowCounter_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__timer__DOT__outputRowCounter)));
    vlSelf->ComputeUnit__DOT__tpu__DOT__timer__DOT___kTileCounter_T_1 
        = ((IData)(1U) + vlSelf->ComputeUnit__DOT__tpu__DOT__timer__DOT__kTileCounter);
    vlSelf->ComputeUnit__DOT__tpu__DOT__timer__DOT___nTileCounter_T_1 
        = ((IData)(1U) + vlSelf->ComputeUnit__DOT__tpu__DOT__timer__DOT__nTileCounter);
    vlSelf->ComputeUnit__DOT__tpu__DOT__timer__DOT___io_fusion_req_T 
        = (0U == vlSelf->ComputeUnit__DOT__tpu__DOT__timer__DOT__fusionTileCountdown);
    vlSelf->ComputeUnit__DOT__tpu__DOT__timer__DOT___fusionTileCountdown_T_1 
        = (vlSelf->ComputeUnit__DOT__tpu__DOT__timer__DOT__fusionTileCountdown 
           - (IData)(1U));
    vlSelf->ComputeUnit__DOT__tpu__DOT__accumulator__DOT___GEN_46 
        = ((0xfU == (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__accumulator__DOT__read_ptr))
            ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__accumulator__DOT__read_ptr))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__tileCtrlQueue__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__tileCtrlQueue__DOT__enq_ptr_value)));
    vlSelf->ComputeUnit__DOT__tpu__DOT__tileCtrlQueue__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__tileCtrlQueue__DOT__deq_ptr_value)));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__quant__DOT___rowCounter_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__quant__DOT__rowCounter)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___distributedPhase2BeatCounter_T_1 
        = ((IData)(1U) + vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distributedPhase2BeatCounter);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_0_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_0))
                     ? (- (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_0))
                     : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_0)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__metaFifo__DOT___count_T_1 
        = (0x3fffU & ((IData)(1U) + (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__metaFifo__DOT__count)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__metaFifo__DOT___count_T_3 
        = (0x3fffU & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__metaFifo__DOT__count) 
                      - (IData)(1U)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT___count_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__count)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT___count_T_3 
        = (7U & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__count) 
                 - (IData)(1U)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo__DOT___rdPtr_T 
        = (3U == (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo__DOT__rdPtr));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo__DOT___rdPtr_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo__DOT__rdPtr)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo__DOT___count_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo__DOT__count)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo__DOT___count_T_3 
        = (7U & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo__DOT__count) 
                 - (IData)(1U)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT___rowCounter_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT__rowCounter)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT___shadowMBase_T_1 
        = ((IData)(0x10U) + vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT__shadowMBase);
    vlSelf->ComputeUnit__DOT__zeroPadder__DOT___row_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ComputeUnit__DOT__zeroPadder__DOT__row)));
    vlSelf->ComputeUnit__DOT__compactor__DOT___row_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ComputeUnit__DOT__compactor__DOT__row)));
    vlSelf->io_lut_prog_done = vlSelf->ComputeUnit__DOT__lutProgrammer__DOT__done;
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT___weightLoadIdx_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__weightLoadIdx)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_1_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_1))
                     ? (- (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_1))
                     : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_1)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_2_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_2))
                     ? (- (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_2))
                     : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_2)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_3_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_3))
                     ? (- (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_3))
                     : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_3)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_4_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_4))
                     ? (- (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_4))
                     : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_4)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_5_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_5))
                     ? (- (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_5))
                     : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_5)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_6_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_6))
                     ? (- (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_6))
                     : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_6)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_7_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_7))
                     ? (- (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_7))
                     : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_7)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_8_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_8))
                     ? (- (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_8))
                     : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_8)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_9_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_9))
                     ? (- (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_9))
                     : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_9)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_10_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_10))
                     ? (- (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_10))
                     : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_10)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_11_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_11))
                     ? (- (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_11))
                     : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_11)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_12_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_12))
                     ? (- (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_12))
                     : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_12)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_13_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_13))
                     ? (- (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_13))
                     : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_13)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_14_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_14))
                     ? (- (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_14))
                     : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_14)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_15_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_15))
                     ? (- (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_15))
                     : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleExpRegs_15)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT___rdPtr_T 
        = (3U == (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__rdPtr));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT___rdPtr_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__rdPtr)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__metaFifo__DOT___wrPtr_T_2 
        = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__metaFifo__DOT__wrPtr)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__metaFifo__DOT___rdPtr_T_2 
        = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__metaFifo__DOT__rdPtr)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT___wrPtr_T 
        = (3U == (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__wrPtr));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT___wrPtr_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__wrPtr)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo__DOT___wrPtr_T 
        = (3U == (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo__DOT__wrPtr));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo__DOT___wrPtr_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo__DOT__wrPtr)));
    vlSelf->ComputeUnit__DOT__tpu__DOT__timer__DOT__lastNTile 
        = (vlSelf->ComputeUnit__DOT__tpu__DOT__timer__DOT__nTileCounter 
           == (((0U == vlSelf->io_tpu_out_col_num) ? 1U
                 : vlSelf->io_tpu_out_col_num) - (IData)(1U)));
    vlSelf->ComputeUnit__DOT__vpu1__DOT___gpalu_io_in_valid_0_T_2 
        = ((0U == (IData)(vlSelf->io_vpu1_alu_mode)) 
           | (IData)(vlSelf->io_vb_valid));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__quant__DOT___GEN_20 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__quant__DOT__activeValid) 
           | (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__quant__DOT__shadowValid));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_0 
        = (((IData)(vlSelf->io_wb_in_1) << 8U) | (IData)(vlSelf->io_wb_in_0));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_1 
        = (((IData)(vlSelf->io_wb_in_3) << 8U) | (IData)(vlSelf->io_wb_in_2));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_2 
        = (((IData)(vlSelf->io_wb_in_5) << 8U) | (IData)(vlSelf->io_wb_in_4));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_3 
        = (((IData)(vlSelf->io_wb_in_7) << 8U) | (IData)(vlSelf->io_wb_in_6));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_4 
        = (((IData)(vlSelf->io_wb_in_9) << 8U) | (IData)(vlSelf->io_wb_in_8));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_5 
        = (((IData)(vlSelf->io_wb_in_11) << 8U) | (IData)(vlSelf->io_wb_in_10));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_6 
        = (((IData)(vlSelf->io_wb_in_13) << 8U) | (IData)(vlSelf->io_wb_in_12));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0_io_wr_data_7 
        = (((IData)(vlSelf->io_wb_in_15) << 8U) | (IData)(vlSelf->io_wb_in_14));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree_io_in_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionHoldValid));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_1328 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionHoldValid) 
           | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionRespValid));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___T_131 
        = ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___T_132 
        = ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___T_133 
        = ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_2.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___T_134 
        = ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_3.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___T_135 
        = ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_4.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___T_136 
        = ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_5.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___T_137 
        = ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_6.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___T_138 
        = ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_7.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___T_139 
        = ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_8.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___T_140 
        = ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_9.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___T_141 
        = ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_10.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___T_142 
        = ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_11.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___T_143 
        = ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_12.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___T_144 
        = ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_13.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___T_145 
        = ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_14.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___T_146 
        = ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_15.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT___GEN_6 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT__activeMValid) 
           | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT__shadowMValid));
    vlSelf->ComputeUnit__DOT__lutProgrammer__DOT___GEN_0 
        = ((0U != (IData)(vlSelf->io_lut_write)) ? 1U
            : (IData)(vlSelf->ComputeUnit__DOT__lutProgrammer__DOT__state));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_0__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_0__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_0__DOT__s1B))));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_0__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_0__DOT__s2Result), (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_0__DOT__s2Shift)));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_1__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_1__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_1__DOT__s1B))));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_1__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_1__DOT__s2Result), (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_1__DOT__s2Shift)));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_2__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_2__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_2__DOT__s1B))));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_2__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_2__DOT__s2Result), (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_2__DOT__s2Shift)));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_3__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_3__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_3__DOT__s1B))));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_3__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_3__DOT__s2Result), (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_3__DOT__s2Shift)));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_4__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_4__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_4__DOT__s1B))));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_4__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_4__DOT__s2Result), (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_4__DOT__s2Shift)));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_5__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_5__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_5__DOT__s1B))));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_5__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_5__DOT__s2Result), (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_5__DOT__s2Shift)));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_6__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_6__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_6__DOT__s1B))));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_6__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_6__DOT__s2Result), (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_6__DOT__s2Shift)));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_7__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_7__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_7__DOT__s1B))));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_7__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_7__DOT__s2Result), (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_7__DOT__s2Shift)));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_8__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_8__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_8__DOT__s1B))));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_8__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_8__DOT__s2Result), (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_8__DOT__s2Shift)));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_9__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_9__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_9__DOT__s1B))));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_9__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_9__DOT__s2Result), (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_9__DOT__s2Shift)));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_10__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_10__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_10__DOT__s1B))));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_10__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_10__DOT__s2Result), (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_10__DOT__s2Shift)));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_11__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_11__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_11__DOT__s1B))));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_11__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_11__DOT__s2Result), (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_11__DOT__s2Shift)));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_12__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_12__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_12__DOT__s1B))));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_12__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_12__DOT__s2Result), (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_12__DOT__s2Shift)));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_13__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_13__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_13__DOT__s1B))));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_13__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_13__DOT__s2Result), (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_13__DOT__s2Shift)));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_14__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_14__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_14__DOT__s1B))));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_14__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_14__DOT__s2Result), (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_14__DOT__s2Shift)));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_15__DOT___result_T_1 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_15__DOT__s1A)) 
                     + VL_EXTENDS_II(9,8, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_15__DOT__s1B))));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_15__DOT__shifted 
        = (0xffffU & VL_SHIFTRS_III(16,16,5, (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_15__DOT__s2Result), (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_15__DOT__s2Shift)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_0))
                     ? ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_0))
                     : ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_0) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_1_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_1))
                     ? ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_1))
                     : ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_1) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_2_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_2))
                     ? ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_2))
                     : ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_2) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_3_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_3))
                     ? ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_3))
                     : ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_3) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_4_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_4))
                     ? ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_4))
                     : ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_4) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_5_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_5))
                     ? ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_5))
                     : ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_5) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_6_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_6))
                     ? ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_6))
                     : ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_6) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_7_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_7))
                     ? ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_7))
                     : ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_7) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_8_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_8))
                     ? ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_8))
                     : ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_8) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_9_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_9))
                     ? ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_9))
                     : ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_9) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_10_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_10))
                     ? ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_10))
                     : ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_10) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_11_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_11))
                     ? ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_11))
                     : ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_11) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_12_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_12))
                     ? ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_12))
                     : ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_12) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_13_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_13))
                     ? ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_13))
                     : ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_13) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_14_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_14))
                     ? ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_14))
                     : ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_14) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_15_io_rd_addr 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4), (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_15))
                     ? ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_15))
                     : ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distSoftMaxPipe4_15) 
                        - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__s4))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT___GEN_3 
        = ((IData)(vlSelf->io_rope_position_init) ? vlSelf->io_rope_base_m
            : vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT__shadowMBase);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT___GEN_322 
        = (((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT__activeFreqValid) 
            & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT__shadowMValid)) 
           | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT__primed));
    if ((3U == (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__rdPtr))) {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_0 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_0;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_1 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_1;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_2 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_2;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_3 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_3;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_4 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_4;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_5 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_5;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_6 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_6;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_7 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_7;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_8 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_8;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_9 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_9;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_10 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_10;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_11 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_11;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_12 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_12;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_13 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_13;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_14 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_14;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_15 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_3_max_15;
    } else if ((2U == (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__rdPtr))) {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_0 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_0;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_1 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_1;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_2 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_2;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_3 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_3;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_4 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_4;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_5 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_5;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_6 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_6;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_7 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_7;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_8 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_8;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_9 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_9;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_10 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_10;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_11 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_11;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_12 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_12;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_13 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_13;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_14 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_14;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_15 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_2_max_15;
    } else if ((1U == (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__rdPtr))) {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_0 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_0;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_1 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_1;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_2 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_2;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_3 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_3;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_4 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_4;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_5 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_5;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_6 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_6;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_7 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_7;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_8 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_8;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_9 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_9;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_10 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_10;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_11 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_11;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_12 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_12;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_13 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_13;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_14 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_14;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_15 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_1_max_15;
    } else {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_0 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_0;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_1 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_1;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_2 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_2;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_3 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_3;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_4 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_4;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_5 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_5;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_6 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_6;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_7 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_7;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_8 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_8;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_9 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_9;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_10 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_10;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_11 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_11;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_12 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_12;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_13 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_13;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_14 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_14;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_bits_max_15 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__mem_0_max_15;
    }
    vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT___GEN_4 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT__shadowMValid) 
           | (IData)(vlSelf->io_rope_position_init));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distributedCompletedScale_magnitude 
        = (0xffU & ((0x80U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalScaleExpReg))
                     ? (- (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalScaleExpReg))
                     : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalScaleExpReg)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__normPair_lz_18 
        = ((vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_1)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__normPair_lz_19 
        = ((vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_2)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__normPair_lz_20 
        = ((vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_3)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__normPair_lz_21 
        = ((vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_4)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__normPair_lz_22 
        = ((vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_5)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__normPair_lz_23 
        = ((vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_6)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__normPair_lz_24 
        = ((vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_7)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__normPair_lz_25 
        = ((vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_8)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__normPair_lz_26 
        = ((vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_9)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__normPair_lz_27 
        = ((vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_10)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__normPair_lz_28 
        = ((vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_11)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__normPair_lz_29 
        = ((vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_12)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__normPair_lz_30 
        = ((vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_13)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__normPair_lz_31 
        = ((vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_14)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__normPair_lz_32 
        = ((vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_15)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__normPair_lz_17 
        = ((vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__normPair_lz_33 
        = ((vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->ComputeUnit__DOT__lutProgrammer__DOT__remaining 
        = ((IData)(vlSelf->ComputeUnit__DOT__lutProgrammer__DOT__selection) 
           & ((3U == (IData)(vlSelf->ComputeUnit__DOT__lutProgrammer__DOT__target))
               ? 1U : ((2U == (IData)(vlSelf->ComputeUnit__DOT__lutProgrammer__DOT__target))
                        ? 3U : ((1U == (IData)(vlSelf->ComputeUnit__DOT__lutProgrammer__DOT__target))
                                 ? 7U : ((0U == (IData)(vlSelf->ComputeUnit__DOT__lutProgrammer__DOT__target))
                                          ? 0xfU : 0U)))));
    vlSelf->ComputeUnit__DOT__lutProgrammer__DOT____VdfgTmp_h1cb154df__0 
        = ((IData)(vlSelf->ComputeUnit__DOT__lutProgrammer__DOT__address) 
           == ((2U == (IData)(vlSelf->ComputeUnit__DOT__lutProgrammer__DOT__target))
                ? 0x1fU : ((1U == (IData)(vlSelf->ComputeUnit__DOT__lutProgrammer__DOT__target))
                            ? 0x1fU : ((0U == (IData)(vlSelf->ComputeUnit__DOT__lutProgrammer__DOT__target))
                                        ? 0x3fU : 0x7fU))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_32 
        = (((- (IData)((1U & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_0) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_0));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_33 
        = (((- (IData)((1U & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_1) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_1));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_34 
        = (((- (IData)((1U & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_2) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_2));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_35 
        = (((- (IData)((1U & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_3) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_3));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_36 
        = (((- (IData)((1U & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_4) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_4));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_37 
        = (((- (IData)((1U & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_5) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_5));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_38 
        = (((- (IData)((1U & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_6) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_6));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_39 
        = (((- (IData)((1U & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_7) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_7));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_40 
        = (((- (IData)((1U & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_8) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_8));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_41 
        = (((- (IData)((1U & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_9) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_9));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_42 
        = (((- (IData)((1U & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_10) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_10));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_43 
        = (((- (IData)((1U & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_11) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_11));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_44 
        = (((- (IData)((1U & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_12) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_12));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_45 
        = (((- (IData)((1U & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_13) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_13));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_46 
        = (((- (IData)((1U & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_14) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_14));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_47 
        = (((- (IData)((1U & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_15) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2DataD1_15));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__layerPair_ex2_16 
        = (IData)((0xfffffffffULL & (((QData)((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__statTree__DOT__s4Sq)) 
                                      * (QData)((IData)(vlSelf->io_norm_inv_vector_length))) 
                                     >> 0x14U)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__layerPair_1_16 
        = (IData)((0x1fffffffffULL & (VL_MULS_QQQ(57, 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,32, vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__statTree__DOT__s4Sum)), 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,25, vlSelf->io_norm_inv_vector_length))) 
                                      >> 0x14U)));
    if (vlSelf->io_vpu2_norm_layout) {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalScaleReg;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_1 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalScaleReg;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_2 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalScaleReg;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_3 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalScaleReg;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_4 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalScaleReg;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_5 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalScaleReg;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_6 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalScaleReg;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_7 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalScaleReg;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_8 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalScaleReg;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_9 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalScaleReg;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_10 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalScaleReg;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_11 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalScaleReg;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_12 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalScaleReg;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_13 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalScaleReg;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_14 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalScaleReg;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_15 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalScaleReg;
    } else {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_0;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_1 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_1;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_2 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_2;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_3 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_3;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_4 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_4;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_5 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_5;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_6 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_6;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_7 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_7;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_8 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_8;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_9 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_9;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_10 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_10;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_11 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_11;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_12 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_12;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_13 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_13;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_14 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_14;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_15 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleRegs_15;
    }
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo_io_deq_bits_max 
        = ((0U == (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo__DOT__count))
            ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalPendingSoftMaxReg)
            : ((3U == (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo__DOT__rdPtr))
                ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo__DOT__mem_3_max)
                : ((2U == (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo__DOT__rdPtr))
                    ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo__DOT__mem_2_max)
                    : ((1U == (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo__DOT__rdPtr))
                        ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo__DOT__mem_1_max)
                        : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo__DOT__mem_0_max)))));
    vlSelf->ComputeUnit__DOT__ubTransposer__DOT__current_write_full 
        = ((IData)(vlSelf->ComputeUnit__DOT__ubTransposer__DOT__write_side)
            ? (IData)(vlSymsp->TOP__ComputeUnit__DOT__ubTransposer__DOT__pong.__PVT__full_reg)
            : (IData)(vlSymsp->TOP__ComputeUnit__DOT__ubTransposer__DOT__ping.__PVT__full_reg));
    vlSelf->ComputeUnit__DOT__wbTransposer__DOT__current_write_full 
        = ((IData)(vlSelf->ComputeUnit__DOT__wbTransposer__DOT__write_side)
            ? (IData)(vlSymsp->TOP__ComputeUnit__DOT__wbTransposer__DOT__pong.__PVT__full_reg)
            : (IData)(vlSymsp->TOP__ComputeUnit__DOT__wbTransposer__DOT__ping.__PVT__full_reg));
    vlSelf->ComputeUnit__DOT__outTransposer__DOT__current_write_full 
        = ((IData)(vlSelf->ComputeUnit__DOT__outTransposer__DOT__write_side)
            ? (IData)(vlSymsp->TOP__ComputeUnit__DOT__outTransposer__DOT__pong.__PVT__full_reg)
            : (IData)(vlSymsp->TOP__ComputeUnit__DOT__outTransposer__DOT__ping.__PVT__full_reg));
    vlSelf->ComputeUnit__DOT__tpu__DOT__timer__DOT__fire 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__outValidReg));
    vlSelf->ComputeUnit__DOT__tpu__DOT__timer__DOT__lastKTile 
        = (vlSelf->ComputeUnit__DOT__tpu__DOT__timer__DOT__kTileCounter 
           == (((0U == vlSelf->io_tpu_interm_num) ? 1U
                 : vlSelf->io_tpu_interm_num) - (IData)(1U)));
    vlSelf->ComputeUnit__DOT__tpu__DOT__accumulator_io_snapshot_done 
        = ((~ (IData)(vlSelf->io_stall)) & ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__accumulator__DOT__accumEnByCol_15_r) 
                                            & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__accumulator__DOT__snapshotByCol_15_r)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_ready 
        = ((~ (IData)(vlSelf->io_stall)) & ((0U != (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__count)) 
                                            & ((3U 
                                                == (IData)(vlSelf->io_vpu2_norm_mode)) 
                                               & (IData)(vlSelf->io_vpu2_norm_layout))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineScaleArriving 
        = ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_15.__PVT__io_rd_valid_REG) 
           & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_14.__PVT__io_rd_valid_REG) 
              & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_13.__PVT__io_rd_valid_REG) 
                 & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_12.__PVT__io_rd_valid_REG) 
                    & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_11.__PVT__io_rd_valid_REG) 
                       & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_10.__PVT__io_rd_valid_REG) 
                          & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_9.__PVT__io_rd_valid_REG) 
                             & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_8.__PVT__io_rd_valid_REG) 
                                & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_7.__PVT__io_rd_valid_REG) 
                                   & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_6.__PVT__io_rd_valid_REG) 
                                      & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_5.__PVT__io_rd_valid_REG) 
                                         & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_4.__PVT__io_rd_valid_REG) 
                                            & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_3.__PVT__io_rd_valid_REG) 
                                               & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_2.__PVT__io_rd_valid_REG) 
                                                  & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1.__PVT__io_rd_valid_REG) 
                                                     & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0.__PVT__io_rd_valid_REG))))))))))))))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleReady 
        = ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_15.__PVT__is_programmed) 
           & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_14.__PVT__is_programmed) 
              & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_13.__PVT__is_programmed) 
                 & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_12.__PVT__is_programmed) 
                    & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_11.__PVT__is_programmed) 
                       & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_10.__PVT__is_programmed) 
                          & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_9.__PVT__is_programmed) 
                             & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_8.__PVT__is_programmed) 
                                & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_7.__PVT__is_programmed) 
                                   & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_6.__PVT__is_programmed) 
                                      & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_5.__PVT__is_programmed) 
                                         & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_4.__PVT__is_programmed) 
                                            & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_3.__PVT__is_programmed) 
                                               & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_2.__PVT__is_programmed) 
                                                  & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1.__PVT__is_programmed) 
                                                     & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0.__PVT__is_programmed))))))))))))))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___io_lut_ready_T_2 
        = (0xffffU == ((((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_15.__PVT__is_programmed) 
                         << 0xfU) | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_14.__PVT__is_programmed) 
                                      << 0xeU) | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_13.__PVT__is_programmed) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_12.__PVT__is_programmed) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_11.__PVT__is_programmed) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_10.__PVT__is_programmed) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_9.__PVT__is_programmed) 
                                                               << 9U) 
                                                              | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_8.__PVT__is_programmed) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_7.__PVT__is_programmed) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_6.__PVT__is_programmed) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_5.__PVT__is_programmed) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_4.__PVT__is_programmed) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_3.__PVT__is_programmed) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_2.__PVT__is_programmed) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_1.__PVT__is_programmed) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0.__PVT__is_programmed)))))))))))))))) 
                       & ((((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_15.__PVT__is_programmed) 
                            << 0xfU) | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_14.__PVT__is_programmed) 
                                         << 0xeU) | 
                                        (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_13.__PVT__is_programmed) 
                                          << 0xdU) 
                                         | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_12.__PVT__is_programmed) 
                                             << 0xcU) 
                                            | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_11.__PVT__is_programmed) 
                                                << 0xbU) 
                                               | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_10.__PVT__is_programmed) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_9.__PVT__is_programmed) 
                                                      << 9U) 
                                                     | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_8.__PVT__is_programmed) 
                                                         << 8U) 
                                                        | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_7.__PVT__is_programmed) 
                                                            << 7U) 
                                                           | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_6.__PVT__is_programmed) 
                                                               << 6U) 
                                                              | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_5.__PVT__is_programmed) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_4.__PVT__is_programmed) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_3.__PVT__is_programmed) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_2.__PVT__is_programmed) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_1.__PVT__is_programmed) 
                                                                              << 1U) 
                                                                             | (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0.__PVT__is_programmed)))))))))))))))) 
                          & (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__is_programmed) 
                              << 0xfU) | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__is_programmed) 
                                           << 0xeU) 
                                          | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__is_programmed) 
                                              << 0xdU) 
                                             | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__is_programmed) 
                                                 << 0xcU) 
                                                | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__is_programmed) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__is_programmed) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__is_programmed) 
                                                          << 9U) 
                                                         | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__is_programmed) 
                                                             << 8U) 
                                                            | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__is_programmed) 
                                                                << 7U) 
                                                               | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__is_programmed) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__is_programmed) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__is_programmed) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__is_programmed) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__is_programmed) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__is_programmed) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__is_programmed)))))))))))))))))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT__nextBlockAvailable 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT__shadowFreqValid) 
           | (IData)(vlSelf->io_fb_valid));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__launchOnlineSoftFinal 
        = ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
           & ((~ (IData)(vlSelf->io_stall)) & (((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_15) 
                                                & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_14) 
                                                   & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_13) 
                                                      & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_12) 
                                                         & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_11) 
                                                            & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_10) 
                                                               & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_9) 
                                                                  & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_8) 
                                                                     & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_7) 
                                                                        & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_6) 
                                                                           & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_5) 
                                                                              & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_4) 
                                                                                & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_3) 
                                                                                & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_2) 
                                                                                & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_1) 
                                                                                & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_0)))))))))))))))) 
                                               & (3U 
                                                  == (IData)(vlSelf->io_vpu2_norm_mode)))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_0)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_1__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_0)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_2__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_0)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_3__DOT__active_weight))))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_4_0)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_4__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_5_0)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_5__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_6_0)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_6__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_7_0)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_7__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_8_0)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_8__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_9_0)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_9__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_10_0)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_10__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_11_0)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_11__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_12_0)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_12__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_13_0)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_13__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_14_0)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_14__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_15_0)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_15__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_1)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_1__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_1)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_2__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_1)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_3__DOT__active_weight))))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_4_1)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_4__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_5_1)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_5__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_6_1)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_6__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_7_1)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_7__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_8_1)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_8__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_9_1)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_9__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_10_1)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_10__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_11_1)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_11__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_12_1)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_12__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_13_1)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_13__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_14_1)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_14__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_15_1)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_15__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_2)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_1__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_2)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_2__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_2)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_3__DOT__active_weight))))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_4_2)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_4__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_5_2)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_5__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_6_2)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_6__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_7_2)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_7__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_8_2)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_8__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_9_2)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_9__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_10_2)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_10__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_11_2)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_11__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_12_2)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_12__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_13_2)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_13__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_14_2)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_14__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_15_2)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_15__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_3)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_1__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_3)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_2__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_3)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_3__DOT__active_weight))))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_4_3)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_4__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_5_3)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_5__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_6_3)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_6__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_7_3)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_7__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_8_3)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_8__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_9_3)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_9__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_10_3)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_10__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_11_3)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_11__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_12_3)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_12__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_13_3)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_13__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_14_3)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_14__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_15_3)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_15__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_4)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_1__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_4)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_2__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_4)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_3__DOT__active_weight))))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_4_4)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_4__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_5_4)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_5__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_6_4)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_6__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_7_4)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_7__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_8_4)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_8__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_9_4)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_9__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_10_4)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_10__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_11_4)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_11__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_12_4)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_12__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_13_4)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_13__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_14_4)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_14__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_15_4)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_15__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_5)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_1__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_5)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_2__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_5)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_3__DOT__active_weight))))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_4_5)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_4__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_5_5)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_5__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_6_5)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_6__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_7_5)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_7__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_8_5)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_8__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_9_5)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_9__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_10_5)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_10__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_11_5)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_11__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_12_5)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_12__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_13_5)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_13__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_14_5)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_14__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_15_5)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_15__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_6)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_1__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_6)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_2__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_6)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_3__DOT__active_weight))))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_4_6)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_4__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_5_6)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_5__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_6_6)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_6__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_7_6)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_7__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_8_6)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_8__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_9_6)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_9__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_10_6)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_10__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_11_6)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_11__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_12_6)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_12__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_13_6)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_13__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_14_6)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_14__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_15_6)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_15__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_7)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_1__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_7)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_2__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_7)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_3__DOT__active_weight))))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_4_7)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_4__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_5_7)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_5__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_6_7)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_6__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_7_7)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_7__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_8_7)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_8__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_9_7)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_9__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_10_7)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_10__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_11_7)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_11__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_12_7)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_12__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_13_7)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_13__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_14_7)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_14__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_15_7)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_15__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_8)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_1__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_8)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_2__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_8)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_3__DOT__active_weight))))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_4_8)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_4__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_5_8)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_5__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_6_8)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_6__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_7_8)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_7__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_8_8)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_8__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_9_8)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_9__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_10_8)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_10__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_11_8)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_11__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_12_8)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_12__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_13_8)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_13__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_14_8)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_14__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_15_8)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_15__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_9)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_1__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_9)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_2__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_9)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_3__DOT__active_weight))))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_4_9)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_4__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_5_9)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_5__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_6_9)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_6__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_7_9)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_7__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_8_9)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_8__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_9_9)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_9__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_10_9)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_10__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_11_9)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_11__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_12_9)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_12__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_13_9)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_13__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_14_9)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_14__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_15_9)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_15__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_10)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_1__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_10)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_2__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_10)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_3__DOT__active_weight))))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_4_10)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_4__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_5_10)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_5__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_6_10)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_6__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_7_10)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_7__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_8_10)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_8__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_9_10)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_9__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_10_10)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_10__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_11_10)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_11__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_12_10)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_12__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_13_10)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_13__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_14_10)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_14__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_15_10)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_15__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_11)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_1__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_11)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_2__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_11)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_3__DOT__active_weight))))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_4_11)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_4__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_5_11)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_5__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_6_11)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_6__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_7_11)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_7__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_8_11)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_8__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_9_11)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_9__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_10_11)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_10__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_11_11)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_11__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_12_11)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_12__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_13_11)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_13__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_14_11)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_14__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_15_11)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_15__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_12)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_1__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_12)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_2__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_12)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_3__DOT__active_weight))))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_4_12)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_4__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_5_12)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_5__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_6_12)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_6__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_7_12)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_7__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_8_12)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_8__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_9_12)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_9__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_10_12)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_10__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_11_12)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_11__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_12_12)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_12__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_13_12)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_13__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_14_12)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_14__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_15_12)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_15__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_13)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_1__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_13)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_2__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_13)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_3__DOT__active_weight))))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_4_13)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_4__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_5_13)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_5__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_6_13)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_6__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_7_13)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_7__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_8_13)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_8__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_9_13)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_9__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_10_13)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_10__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_11_13)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_11__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_12_13)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_12__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_13_13)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_13__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_14_13)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_14__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_15_13)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_15__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_14)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_1__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_14)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_2__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_14)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_3__DOT__active_weight))))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_4_14)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_4__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_5_14)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_5__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_6_14)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_6__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_7_14)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_7__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_8_14)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_8__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_9_14)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_9__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_10_14)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_10__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_11_14)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_11__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_12_14)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_12__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_13_14)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_13__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_14_14)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_14__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_15_14)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_15__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_1__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_1_15)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_1__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_2__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_1__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_1__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_2_15)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_2__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_3__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_2__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_2__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_3_15)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_3__DOT__active_weight))))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_4__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_3__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_3__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_4_15)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_4__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_5__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_4__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_4__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_5_15)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_5__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_6__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_5__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_5__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_6_15)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_6__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_7__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_6__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_6__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_7_15)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_7__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_8__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_7__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_7__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_8_15)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_8__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_9__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_8__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_8__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_9_15)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_9__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_10__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_9__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_9__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_10_15)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_10__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_11__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_10__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_10__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_11_15)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_11__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_12__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_11__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_11__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_12_15)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_12__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_13__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_12__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_12__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_13_15)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_13__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_14__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_13__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_13__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_14_15)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_14__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_15__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_14__DOT__outInReg))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_14__DOT__outWeightUpdateReg)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_15_15)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_15__DOT__active_weight))))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_1_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_1__DOT__updatePipe_0));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_2_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_2__DOT__updatePipe_1));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_3_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_3__DOT__updatePipe_2));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_4_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_4__DOT__updatePipe_3));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_5_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_5__DOT__updatePipe_4));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_6_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_6__DOT__updatePipe_5));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_7_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_7__DOT__updatePipe_6));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_8_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_8__DOT__updatePipe_7));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_9_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_9__DOT__updatePipe_8));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_10_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_10__DOT__updatePipe_9));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_11_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_11__DOT__updatePipe_10));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_12_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_12__DOT__updatePipe_11));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_13_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_13__DOT__updatePipe_12));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_14_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_14__DOT__updatePipe_13));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15_io_out_weight_update 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15__DOT__updatePipe_14));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_1_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_1__DOT__validPipe_0));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_2_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_2__DOT__validPipe_1));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_3_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_3__DOT__validPipe_2));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_4_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_4__DOT__validPipe_3));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_5_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_5__DOT__validPipe_4));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_6_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_6__DOT__validPipe_5));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_7_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_7__DOT__validPipe_6));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_8_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_8__DOT__validPipe_7));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_9_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_9__DOT__validPipe_8));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_10_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_10__DOT__validPipe_9));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_11_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_11__DOT__validPipe_10));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_12_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_12__DOT__validPipe_11));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_13_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_13__DOT__validPipe_12));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_14_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_14__DOT__validPipe_13));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15__DOT__validPipe_14));
    ComputeUnit__DOT__tpu__DOT__tileCtrlQueue__DOT__ptr_match 
        = ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__tileCtrlQueue__DOT__deq_ptr_value) 
           == (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__tileCtrlQueue__DOT__enq_ptr_value));
    vlSelf->__VdfgTmp_hd8efdbca__0 = ((IData)(vlSelf->io_vpu2_norm_layout) 
                                      & (3U == (IData)(vlSelf->io_vpu2_norm_mode)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___rawOutMeta_T 
        = (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__metaFifo__DOT__mem
           [vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__metaFifo__DOT__mem_rdData_addr_pipe_0] 
           & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__metaFifo__DOT__io_deq_valid_REG));
    vlSelf->io_compactor_busy = (0U != (IData)(vlSelf->ComputeUnit__DOT__compactor__DOT__row));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingValid_0) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_1 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingValid_1) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_1.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_2 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingValid_2) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_2.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_3 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingValid_3) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_3.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_4 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingValid_4) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_4.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_5 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingValid_5) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_5.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_6 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingValid_6) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_6.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_7 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingValid_7) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_7.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_8 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingValid_8) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_8.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_9 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingValid_9) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_9.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_10 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingValid_10) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_10.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_11 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingValid_11) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_11.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_12 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingValid_12) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_12.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_13 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingValid_13) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_13.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_14 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingValid_14) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_14.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_15 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingValid_15) 
           & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_15.__PVT__io_rd_valid_REG));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo_io_enq_valid 
        = ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0.__PVT__io_rd_valid_REG) 
           & (IData)(vlSelf->io_vpu2_norm_layout));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_1__DOT___io_out_tpu_valid_T 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_1__DOT__s3Valid));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_2__DOT___io_out_tpu_valid_T 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_2__DOT__s3Valid));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_3__DOT___io_out_tpu_valid_T 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_3__DOT__s3Valid));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_4__DOT___io_out_tpu_valid_T 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_4__DOT__s3Valid));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_5__DOT___io_out_tpu_valid_T 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_5__DOT__s3Valid));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_6__DOT___io_out_tpu_valid_T 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_6__DOT__s3Valid));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_7__DOT___io_out_tpu_valid_T 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_7__DOT__s3Valid));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_8__DOT___io_out_tpu_valid_T 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_8__DOT__s3Valid));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_9__DOT___io_out_tpu_valid_T 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_9__DOT__s3Valid));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_10__DOT___io_out_tpu_valid_T 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_10__DOT__s3Valid));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_11__DOT___io_out_tpu_valid_T 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_11__DOT__s3Valid));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_12__DOT___io_out_tpu_valid_T 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_12__DOT__s3Valid));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_13__DOT___io_out_tpu_valid_T 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_13__DOT__s3Valid));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_14__DOT___io_out_tpu_valid_T 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_14__DOT__s3Valid));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_15__DOT___io_out_tpu_valid_T 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_15__DOT__s3Valid));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___T_152 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2SoftResp) 
           & (3U == (IData)(vlSelf->io_vpu2_norm_mode)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___T 
        = ((1U == (IData)(vlSelf->io_vpu2_norm_mode)) 
           | (2U == (IData)(vlSelf->io_vpu2_norm_mode)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__validLanesOnLastBeat 
        = ((0U == (0xfU & vlSelf->io_norm_logical_vector_length))
            ? 0x10U : (0xfU & vlSelf->io_norm_logical_vector_length));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__logicalLengthSafe 
        = ((0U == vlSelf->io_norm_logical_vector_length)
            ? 1U : vlSelf->io_norm_logical_vector_length);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT____VdfgTmp_h5ed2dc75__0 
        = ((~ (IData)(vlSelf->io_stall)) & (0U != (IData)(vlSelf->io_vpu2_norm_mode)));
    vlSelf->ComputeUnit__DOT__tpu__DOT__accumulator_io_out_valid_0 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__accumulator__DOT__streamActive));
    vlSelf->ComputeUnit__DOT__lutProgrammer__DOT____VdfgTmp_hae91382e__0 
        = (1U & ((~ (IData)(vlSelf->io_stall)) & (~ (IData)(vlSelf->io_soft_reset))));
    vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_0__DOT___io_out_tpu_valid_T 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__vpu1__DOT__gpalu__DOT__cores_0__DOT__s3Valid));
    vlSelf->io_zero_pad_busy = (0U != (IData)(vlSelf->ComputeUnit__DOT__zeroPadder__DOT__row));
    vlSelf->io_lut_prog_busy = (0U != (IData)(vlSelf->ComputeUnit__DOT__lutProgrammer__DOT__state));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT___GEN_8 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT__shadowMValid) 
           | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT___GEN_4));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___scaleExpCapture_0_T_5 
        = (0xffU & (((0U != vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalSum_0)
                      ? (0x1fU & ((IData)(0x1fU) - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__normPair_lz_17)))
                      : 0U) - (IData)(0xeU)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___scaleExpCapture_0_T_9 
        = (0xffU & (((0U != vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__s4)
                      ? (0x1fU & ((IData)(0x1fU) - (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__normPair_lz_33)))
                      : 0U) - (IData)(0xeU)));
    ComputeUnit__DOT__vpu2__DOT__norm__DOT__layerPair_meanSq_16 
        = (IData)(VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__layerPair_1_16), 
                              VL_EXTENDS_QI(64,32, vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__layerPair_1_16)));
    VL_EXTENDS_WI(69,32, __Vtemp_3, ((2U == (IData)(vlSelf->io_vpu2_norm_mode))
                                      ? (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_32 
                                         - ((IData)(vlSelf->io_vpu2_norm_layout)
                                             ? vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalMeanReg
                                             : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineMeanRegs_0))
                                      : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_32));
    __Vtemp_4[0U] = __Vtemp_3[0U];
    __Vtemp_4[1U] = __Vtemp_3[1U];
    __Vtemp_4[2U] = (0x1fU & __Vtemp_3[2U]);
    VL_EXTENDS_WQ(69,37, __Vtemp_6, vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale);
    __Vtemp_7[0U] = __Vtemp_6[0U];
    __Vtemp_7[1U] = __Vtemp_6[1U];
    __Vtemp_7[2U] = (0x1fU & __Vtemp_6[2U]);
    VL_MULS_WWW(69, __Vtemp_8, __Vtemp_4, __Vtemp_7);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_16[0U] 
        = __Vtemp_8[0U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_16[1U] 
        = __Vtemp_8[1U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_16[2U] 
        = (0x1fU & __Vtemp_8[2U]);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_32 
        = (0xfffffffffffffULL & ((QData)((IData)(((7U 
                                                   == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__rd_col_delayed))
                                                   ? 
                                                  vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__lut_mem_7
                                                  [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__rd_col_delayed))
                                                    ? 
                                                   vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__lut_mem_6
                                                   [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__rd_col_delayed))
                                                     ? 
                                                    vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__lut_mem_5
                                                    [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__rd_col_delayed))
                                                      ? 
                                                     vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__lut_mem_4
                                                     [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__rd_col_delayed))
                                                       ? 
                                                      vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__lut_mem_3
                                                      [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__rd_col_delayed))
                                                        ? 
                                                       vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__lut_mem_2
                                                       [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__rd_col_delayed))
                                                         ? 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__lut_mem_1
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                         : 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__lut_mem_0
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                 * vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale));
    VL_EXTENDS_WI(69,32, __Vtemp_11, ((2U == (IData)(vlSelf->io_vpu2_norm_mode))
                                       ? (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_33 
                                          - ((IData)(vlSelf->io_vpu2_norm_layout)
                                              ? vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalMeanReg
                                              : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineMeanRegs_1))
                                       : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_33));
    __Vtemp_12[0U] = __Vtemp_11[0U];
    __Vtemp_12[1U] = __Vtemp_11[1U];
    __Vtemp_12[2U] = (0x1fU & __Vtemp_11[2U]);
    VL_EXTENDS_WQ(69,37, __Vtemp_14, vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_1);
    __Vtemp_15[0U] = __Vtemp_14[0U];
    __Vtemp_15[1U] = __Vtemp_14[1U];
    __Vtemp_15[2U] = (0x1fU & __Vtemp_14[2U]);
    VL_MULS_WWW(69, __Vtemp_16, __Vtemp_12, __Vtemp_15);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_17[0U] 
        = __Vtemp_16[0U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_17[1U] 
        = __Vtemp_16[1U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_17[2U] 
        = (0x1fU & __Vtemp_16[2U]);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_33 
        = (0xfffffffffffffULL & ((QData)((IData)(((7U 
                                                   == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__rd_col_delayed))
                                                   ? 
                                                  vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__lut_mem_7
                                                  [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__rd_col_delayed))
                                                    ? 
                                                   vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__lut_mem_6
                                                   [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__rd_col_delayed))
                                                     ? 
                                                    vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__lut_mem_5
                                                    [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__rd_col_delayed))
                                                      ? 
                                                     vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__lut_mem_4
                                                     [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__rd_col_delayed))
                                                       ? 
                                                      vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__lut_mem_3
                                                      [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__rd_col_delayed))
                                                        ? 
                                                       vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__lut_mem_2
                                                       [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__rd_col_delayed))
                                                         ? 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__lut_mem_1
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                         : 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__lut_mem_0
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                 * vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_1));
    VL_EXTENDS_WI(69,32, __Vtemp_19, ((2U == (IData)(vlSelf->io_vpu2_norm_mode))
                                       ? (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_34 
                                          - ((IData)(vlSelf->io_vpu2_norm_layout)
                                              ? vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalMeanReg
                                              : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineMeanRegs_2))
                                       : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_34));
    __Vtemp_20[0U] = __Vtemp_19[0U];
    __Vtemp_20[1U] = __Vtemp_19[1U];
    __Vtemp_20[2U] = (0x1fU & __Vtemp_19[2U]);
    VL_EXTENDS_WQ(69,37, __Vtemp_22, vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_2);
    __Vtemp_23[0U] = __Vtemp_22[0U];
    __Vtemp_23[1U] = __Vtemp_22[1U];
    __Vtemp_23[2U] = (0x1fU & __Vtemp_22[2U]);
    VL_MULS_WWW(69, __Vtemp_24, __Vtemp_20, __Vtemp_23);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_18[0U] 
        = __Vtemp_24[0U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_18[1U] 
        = __Vtemp_24[1U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_18[2U] 
        = (0x1fU & __Vtemp_24[2U]);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_34 
        = (0xfffffffffffffULL & ((QData)((IData)(((7U 
                                                   == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__rd_col_delayed))
                                                   ? 
                                                  vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__lut_mem_7
                                                  [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__rd_col_delayed))
                                                    ? 
                                                   vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__lut_mem_6
                                                   [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__rd_col_delayed))
                                                     ? 
                                                    vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__lut_mem_5
                                                    [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__rd_col_delayed))
                                                      ? 
                                                     vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__lut_mem_4
                                                     [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__rd_col_delayed))
                                                       ? 
                                                      vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__lut_mem_3
                                                      [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__rd_col_delayed))
                                                        ? 
                                                       vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__lut_mem_2
                                                       [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__rd_col_delayed))
                                                         ? 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__lut_mem_1
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                         : 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__lut_mem_0
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                 * vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_2));
    VL_EXTENDS_WI(69,32, __Vtemp_27, ((2U == (IData)(vlSelf->io_vpu2_norm_mode))
                                       ? (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_35 
                                          - ((IData)(vlSelf->io_vpu2_norm_layout)
                                              ? vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalMeanReg
                                              : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineMeanRegs_3))
                                       : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_35));
    __Vtemp_28[0U] = __Vtemp_27[0U];
    __Vtemp_28[1U] = __Vtemp_27[1U];
    __Vtemp_28[2U] = (0x1fU & __Vtemp_27[2U]);
    VL_EXTENDS_WQ(69,37, __Vtemp_30, vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_3);
    __Vtemp_31[0U] = __Vtemp_30[0U];
    __Vtemp_31[1U] = __Vtemp_30[1U];
    __Vtemp_31[2U] = (0x1fU & __Vtemp_30[2U]);
    VL_MULS_WWW(69, __Vtemp_32, __Vtemp_28, __Vtemp_31);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_19[0U] 
        = __Vtemp_32[0U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_19[1U] 
        = __Vtemp_32[1U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_19[2U] 
        = (0x1fU & __Vtemp_32[2U]);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_35 
        = (0xfffffffffffffULL & ((QData)((IData)(((7U 
                                                   == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__rd_col_delayed))
                                                   ? 
                                                  vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__lut_mem_7
                                                  [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__rd_col_delayed))
                                                    ? 
                                                   vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__lut_mem_6
                                                   [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__rd_col_delayed))
                                                     ? 
                                                    vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__lut_mem_5
                                                    [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__rd_col_delayed))
                                                      ? 
                                                     vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__lut_mem_4
                                                     [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__rd_col_delayed))
                                                       ? 
                                                      vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__lut_mem_3
                                                      [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__rd_col_delayed))
                                                        ? 
                                                       vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__lut_mem_2
                                                       [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__rd_col_delayed))
                                                         ? 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__lut_mem_1
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                         : 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__lut_mem_0
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                 * vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_3));
    VL_EXTENDS_WI(69,32, __Vtemp_35, ((2U == (IData)(vlSelf->io_vpu2_norm_mode))
                                       ? (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_36 
                                          - ((IData)(vlSelf->io_vpu2_norm_layout)
                                              ? vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalMeanReg
                                              : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineMeanRegs_4))
                                       : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_36));
    __Vtemp_36[0U] = __Vtemp_35[0U];
    __Vtemp_36[1U] = __Vtemp_35[1U];
    __Vtemp_36[2U] = (0x1fU & __Vtemp_35[2U]);
    VL_EXTENDS_WQ(69,37, __Vtemp_38, vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_4);
    __Vtemp_39[0U] = __Vtemp_38[0U];
    __Vtemp_39[1U] = __Vtemp_38[1U];
    __Vtemp_39[2U] = (0x1fU & __Vtemp_38[2U]);
    VL_MULS_WWW(69, __Vtemp_40, __Vtemp_36, __Vtemp_39);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_20[0U] 
        = __Vtemp_40[0U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_20[1U] 
        = __Vtemp_40[1U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_20[2U] 
        = (0x1fU & __Vtemp_40[2U]);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_36 
        = (0xfffffffffffffULL & ((QData)((IData)(((7U 
                                                   == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__rd_col_delayed))
                                                   ? 
                                                  vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__lut_mem_7
                                                  [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__rd_col_delayed))
                                                    ? 
                                                   vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__lut_mem_6
                                                   [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__rd_col_delayed))
                                                     ? 
                                                    vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__lut_mem_5
                                                    [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__rd_col_delayed))
                                                      ? 
                                                     vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__lut_mem_4
                                                     [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__rd_col_delayed))
                                                       ? 
                                                      vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__lut_mem_3
                                                      [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__rd_col_delayed))
                                                        ? 
                                                       vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__lut_mem_2
                                                       [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__rd_col_delayed))
                                                         ? 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__lut_mem_1
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                         : 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__lut_mem_0
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                 * vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_4));
    VL_EXTENDS_WI(69,32, __Vtemp_43, ((2U == (IData)(vlSelf->io_vpu2_norm_mode))
                                       ? (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_37 
                                          - ((IData)(vlSelf->io_vpu2_norm_layout)
                                              ? vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalMeanReg
                                              : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineMeanRegs_5))
                                       : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_37));
    __Vtemp_44[0U] = __Vtemp_43[0U];
    __Vtemp_44[1U] = __Vtemp_43[1U];
    __Vtemp_44[2U] = (0x1fU & __Vtemp_43[2U]);
    VL_EXTENDS_WQ(69,37, __Vtemp_46, vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_5);
    __Vtemp_47[0U] = __Vtemp_46[0U];
    __Vtemp_47[1U] = __Vtemp_46[1U];
    __Vtemp_47[2U] = (0x1fU & __Vtemp_46[2U]);
    VL_MULS_WWW(69, __Vtemp_48, __Vtemp_44, __Vtemp_47);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_21[0U] 
        = __Vtemp_48[0U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_21[1U] 
        = __Vtemp_48[1U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_21[2U] 
        = (0x1fU & __Vtemp_48[2U]);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_37 
        = (0xfffffffffffffULL & ((QData)((IData)(((7U 
                                                   == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__rd_col_delayed))
                                                   ? 
                                                  vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__lut_mem_7
                                                  [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__rd_col_delayed))
                                                    ? 
                                                   vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__lut_mem_6
                                                   [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__rd_col_delayed))
                                                     ? 
                                                    vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__lut_mem_5
                                                    [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__rd_col_delayed))
                                                      ? 
                                                     vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__lut_mem_4
                                                     [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__rd_col_delayed))
                                                       ? 
                                                      vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__lut_mem_3
                                                      [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__rd_col_delayed))
                                                        ? 
                                                       vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__lut_mem_2
                                                       [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__rd_col_delayed))
                                                         ? 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__lut_mem_1
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                         : 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__lut_mem_0
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                 * vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_5));
    VL_EXTENDS_WI(69,32, __Vtemp_51, ((2U == (IData)(vlSelf->io_vpu2_norm_mode))
                                       ? (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_38 
                                          - ((IData)(vlSelf->io_vpu2_norm_layout)
                                              ? vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalMeanReg
                                              : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineMeanRegs_6))
                                       : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_38));
    __Vtemp_52[0U] = __Vtemp_51[0U];
    __Vtemp_52[1U] = __Vtemp_51[1U];
    __Vtemp_52[2U] = (0x1fU & __Vtemp_51[2U]);
    VL_EXTENDS_WQ(69,37, __Vtemp_54, vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_6);
    __Vtemp_55[0U] = __Vtemp_54[0U];
    __Vtemp_55[1U] = __Vtemp_54[1U];
    __Vtemp_55[2U] = (0x1fU & __Vtemp_54[2U]);
    VL_MULS_WWW(69, __Vtemp_56, __Vtemp_52, __Vtemp_55);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_22[0U] 
        = __Vtemp_56[0U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_22[1U] 
        = __Vtemp_56[1U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_22[2U] 
        = (0x1fU & __Vtemp_56[2U]);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_38 
        = (0xfffffffffffffULL & ((QData)((IData)(((7U 
                                                   == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__rd_col_delayed))
                                                   ? 
                                                  vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__lut_mem_7
                                                  [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__rd_col_delayed))
                                                    ? 
                                                   vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__lut_mem_6
                                                   [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__rd_col_delayed))
                                                     ? 
                                                    vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__lut_mem_5
                                                    [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__rd_col_delayed))
                                                      ? 
                                                     vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__lut_mem_4
                                                     [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__rd_col_delayed))
                                                       ? 
                                                      vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__lut_mem_3
                                                      [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__rd_col_delayed))
                                                        ? 
                                                       vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__lut_mem_2
                                                       [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__rd_col_delayed))
                                                         ? 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__lut_mem_1
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                         : 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__lut_mem_0
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                 * vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_6));
    VL_EXTENDS_WI(69,32, __Vtemp_59, ((2U == (IData)(vlSelf->io_vpu2_norm_mode))
                                       ? (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_39 
                                          - ((IData)(vlSelf->io_vpu2_norm_layout)
                                              ? vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalMeanReg
                                              : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineMeanRegs_7))
                                       : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_39));
    __Vtemp_60[0U] = __Vtemp_59[0U];
    __Vtemp_60[1U] = __Vtemp_59[1U];
    __Vtemp_60[2U] = (0x1fU & __Vtemp_59[2U]);
    VL_EXTENDS_WQ(69,37, __Vtemp_62, vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_7);
    __Vtemp_63[0U] = __Vtemp_62[0U];
    __Vtemp_63[1U] = __Vtemp_62[1U];
    __Vtemp_63[2U] = (0x1fU & __Vtemp_62[2U]);
    VL_MULS_WWW(69, __Vtemp_64, __Vtemp_60, __Vtemp_63);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_23[0U] 
        = __Vtemp_64[0U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_23[1U] 
        = __Vtemp_64[1U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_23[2U] 
        = (0x1fU & __Vtemp_64[2U]);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_39 
        = (0xfffffffffffffULL & ((QData)((IData)(((7U 
                                                   == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__rd_col_delayed))
                                                   ? 
                                                  vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__lut_mem_7
                                                  [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__rd_col_delayed))
                                                    ? 
                                                   vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__lut_mem_6
                                                   [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__rd_col_delayed))
                                                     ? 
                                                    vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__lut_mem_5
                                                    [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__rd_col_delayed))
                                                      ? 
                                                     vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__lut_mem_4
                                                     [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__rd_col_delayed))
                                                       ? 
                                                      vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__lut_mem_3
                                                      [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__rd_col_delayed))
                                                        ? 
                                                       vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__lut_mem_2
                                                       [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__rd_col_delayed))
                                                         ? 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__lut_mem_1
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                         : 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__lut_mem_0
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                 * vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_7));
    VL_EXTENDS_WI(69,32, __Vtemp_67, ((2U == (IData)(vlSelf->io_vpu2_norm_mode))
                                       ? (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_40 
                                          - ((IData)(vlSelf->io_vpu2_norm_layout)
                                              ? vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalMeanReg
                                              : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineMeanRegs_8))
                                       : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_40));
    __Vtemp_68[0U] = __Vtemp_67[0U];
    __Vtemp_68[1U] = __Vtemp_67[1U];
    __Vtemp_68[2U] = (0x1fU & __Vtemp_67[2U]);
    VL_EXTENDS_WQ(69,37, __Vtemp_70, vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_8);
    __Vtemp_71[0U] = __Vtemp_70[0U];
    __Vtemp_71[1U] = __Vtemp_70[1U];
    __Vtemp_71[2U] = (0x1fU & __Vtemp_70[2U]);
    VL_MULS_WWW(69, __Vtemp_72, __Vtemp_68, __Vtemp_71);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_24[0U] 
        = __Vtemp_72[0U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_24[1U] 
        = __Vtemp_72[1U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_24[2U] 
        = (0x1fU & __Vtemp_72[2U]);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_40 
        = (0xfffffffffffffULL & ((QData)((IData)(((7U 
                                                   == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__rd_col_delayed))
                                                   ? 
                                                  vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__lut_mem_7
                                                  [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__rd_col_delayed))
                                                    ? 
                                                   vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__lut_mem_6
                                                   [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__rd_col_delayed))
                                                     ? 
                                                    vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__lut_mem_5
                                                    [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__rd_col_delayed))
                                                      ? 
                                                     vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__lut_mem_4
                                                     [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__rd_col_delayed))
                                                       ? 
                                                      vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__lut_mem_3
                                                      [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__rd_col_delayed))
                                                        ? 
                                                       vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__lut_mem_2
                                                       [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__rd_col_delayed))
                                                         ? 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__lut_mem_1
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                         : 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__lut_mem_0
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                 * vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_8));
    VL_EXTENDS_WI(69,32, __Vtemp_75, ((2U == (IData)(vlSelf->io_vpu2_norm_mode))
                                       ? (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_41 
                                          - ((IData)(vlSelf->io_vpu2_norm_layout)
                                              ? vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalMeanReg
                                              : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineMeanRegs_9))
                                       : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_41));
    __Vtemp_76[0U] = __Vtemp_75[0U];
    __Vtemp_76[1U] = __Vtemp_75[1U];
    __Vtemp_76[2U] = (0x1fU & __Vtemp_75[2U]);
    VL_EXTENDS_WQ(69,37, __Vtemp_78, vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_9);
    __Vtemp_79[0U] = __Vtemp_78[0U];
    __Vtemp_79[1U] = __Vtemp_78[1U];
    __Vtemp_79[2U] = (0x1fU & __Vtemp_78[2U]);
    VL_MULS_WWW(69, __Vtemp_80, __Vtemp_76, __Vtemp_79);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_25[0U] 
        = __Vtemp_80[0U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_25[1U] 
        = __Vtemp_80[1U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_25[2U] 
        = (0x1fU & __Vtemp_80[2U]);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_41 
        = (0xfffffffffffffULL & ((QData)((IData)(((7U 
                                                   == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__rd_col_delayed))
                                                   ? 
                                                  vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__lut_mem_7
                                                  [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__rd_col_delayed))
                                                    ? 
                                                   vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__lut_mem_6
                                                   [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__rd_col_delayed))
                                                     ? 
                                                    vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__lut_mem_5
                                                    [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__rd_col_delayed))
                                                      ? 
                                                     vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__lut_mem_4
                                                     [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__rd_col_delayed))
                                                       ? 
                                                      vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__lut_mem_3
                                                      [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__rd_col_delayed))
                                                        ? 
                                                       vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__lut_mem_2
                                                       [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__rd_col_delayed))
                                                         ? 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__lut_mem_1
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                         : 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__lut_mem_0
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                 * vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_9));
    VL_EXTENDS_WI(69,32, __Vtemp_83, ((2U == (IData)(vlSelf->io_vpu2_norm_mode))
                                       ? (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_42 
                                          - ((IData)(vlSelf->io_vpu2_norm_layout)
                                              ? vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalMeanReg
                                              : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineMeanRegs_10))
                                       : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_42));
    __Vtemp_84[0U] = __Vtemp_83[0U];
    __Vtemp_84[1U] = __Vtemp_83[1U];
    __Vtemp_84[2U] = (0x1fU & __Vtemp_83[2U]);
    VL_EXTENDS_WQ(69,37, __Vtemp_86, vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_10);
    __Vtemp_87[0U] = __Vtemp_86[0U];
    __Vtemp_87[1U] = __Vtemp_86[1U];
    __Vtemp_87[2U] = (0x1fU & __Vtemp_86[2U]);
    VL_MULS_WWW(69, __Vtemp_88, __Vtemp_84, __Vtemp_87);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_26[0U] 
        = __Vtemp_88[0U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_26[1U] 
        = __Vtemp_88[1U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_26[2U] 
        = (0x1fU & __Vtemp_88[2U]);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_42 
        = (0xfffffffffffffULL & ((QData)((IData)(((7U 
                                                   == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__rd_col_delayed))
                                                   ? 
                                                  vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__lut_mem_7
                                                  [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__rd_col_delayed))
                                                    ? 
                                                   vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__lut_mem_6
                                                   [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__rd_col_delayed))
                                                     ? 
                                                    vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__lut_mem_5
                                                    [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__rd_col_delayed))
                                                      ? 
                                                     vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__lut_mem_4
                                                     [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__rd_col_delayed))
                                                       ? 
                                                      vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__lut_mem_3
                                                      [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__rd_col_delayed))
                                                        ? 
                                                       vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__lut_mem_2
                                                       [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__rd_col_delayed))
                                                         ? 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__lut_mem_1
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                         : 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__lut_mem_0
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                 * vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_10));
    VL_EXTENDS_WI(69,32, __Vtemp_91, ((2U == (IData)(vlSelf->io_vpu2_norm_mode))
                                       ? (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_43 
                                          - ((IData)(vlSelf->io_vpu2_norm_layout)
                                              ? vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalMeanReg
                                              : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineMeanRegs_11))
                                       : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_43));
    __Vtemp_92[0U] = __Vtemp_91[0U];
    __Vtemp_92[1U] = __Vtemp_91[1U];
    __Vtemp_92[2U] = (0x1fU & __Vtemp_91[2U]);
    VL_EXTENDS_WQ(69,37, __Vtemp_94, vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_11);
    __Vtemp_95[0U] = __Vtemp_94[0U];
    __Vtemp_95[1U] = __Vtemp_94[1U];
    __Vtemp_95[2U] = (0x1fU & __Vtemp_94[2U]);
    VL_MULS_WWW(69, __Vtemp_96, __Vtemp_92, __Vtemp_95);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_27[0U] 
        = __Vtemp_96[0U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_27[1U] 
        = __Vtemp_96[1U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_27[2U] 
        = (0x1fU & __Vtemp_96[2U]);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_43 
        = (0xfffffffffffffULL & ((QData)((IData)(((7U 
                                                   == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__rd_col_delayed))
                                                   ? 
                                                  vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__lut_mem_7
                                                  [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__rd_col_delayed))
                                                    ? 
                                                   vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__lut_mem_6
                                                   [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__rd_col_delayed))
                                                     ? 
                                                    vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__lut_mem_5
                                                    [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__rd_col_delayed))
                                                      ? 
                                                     vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__lut_mem_4
                                                     [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__rd_col_delayed))
                                                       ? 
                                                      vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__lut_mem_3
                                                      [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__rd_col_delayed))
                                                        ? 
                                                       vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__lut_mem_2
                                                       [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__rd_col_delayed))
                                                         ? 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__lut_mem_1
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                         : 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__lut_mem_0
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                 * vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_11));
    VL_EXTENDS_WI(69,32, __Vtemp_99, ((2U == (IData)(vlSelf->io_vpu2_norm_mode))
                                       ? (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_44 
                                          - ((IData)(vlSelf->io_vpu2_norm_layout)
                                              ? vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalMeanReg
                                              : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineMeanRegs_12))
                                       : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_44));
    __Vtemp_100[0U] = __Vtemp_99[0U];
    __Vtemp_100[1U] = __Vtemp_99[1U];
    __Vtemp_100[2U] = (0x1fU & __Vtemp_99[2U]);
    VL_EXTENDS_WQ(69,37, __Vtemp_102, vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_12);
    __Vtemp_103[0U] = __Vtemp_102[0U];
    __Vtemp_103[1U] = __Vtemp_102[1U];
    __Vtemp_103[2U] = (0x1fU & __Vtemp_102[2U]);
    VL_MULS_WWW(69, __Vtemp_104, __Vtemp_100, __Vtemp_103);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_28[0U] 
        = __Vtemp_104[0U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_28[1U] 
        = __Vtemp_104[1U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_28[2U] 
        = (0x1fU & __Vtemp_104[2U]);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_44 
        = (0xfffffffffffffULL & ((QData)((IData)(((7U 
                                                   == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__rd_col_delayed))
                                                   ? 
                                                  vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__lut_mem_7
                                                  [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__rd_col_delayed))
                                                    ? 
                                                   vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__lut_mem_6
                                                   [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__rd_col_delayed))
                                                     ? 
                                                    vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__lut_mem_5
                                                    [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__rd_col_delayed))
                                                      ? 
                                                     vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__lut_mem_4
                                                     [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__rd_col_delayed))
                                                       ? 
                                                      vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__lut_mem_3
                                                      [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__rd_col_delayed))
                                                        ? 
                                                       vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__lut_mem_2
                                                       [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__rd_col_delayed))
                                                         ? 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__lut_mem_1
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                         : 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__lut_mem_0
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                 * vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_12));
    VL_EXTENDS_WI(69,32, __Vtemp_107, ((2U == (IData)(vlSelf->io_vpu2_norm_mode))
                                        ? (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_45 
                                           - ((IData)(vlSelf->io_vpu2_norm_layout)
                                               ? vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalMeanReg
                                               : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineMeanRegs_13))
                                        : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_45));
    __Vtemp_108[0U] = __Vtemp_107[0U];
    __Vtemp_108[1U] = __Vtemp_107[1U];
    __Vtemp_108[2U] = (0x1fU & __Vtemp_107[2U]);
    VL_EXTENDS_WQ(69,37, __Vtemp_110, vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_13);
    __Vtemp_111[0U] = __Vtemp_110[0U];
    __Vtemp_111[1U] = __Vtemp_110[1U];
    __Vtemp_111[2U] = (0x1fU & __Vtemp_110[2U]);
    VL_MULS_WWW(69, __Vtemp_112, __Vtemp_108, __Vtemp_111);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_29[0U] 
        = __Vtemp_112[0U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_29[1U] 
        = __Vtemp_112[1U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_29[2U] 
        = (0x1fU & __Vtemp_112[2U]);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_45 
        = (0xfffffffffffffULL & ((QData)((IData)(((7U 
                                                   == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__rd_col_delayed))
                                                   ? 
                                                  vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__lut_mem_7
                                                  [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__rd_col_delayed))
                                                    ? 
                                                   vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__lut_mem_6
                                                   [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__rd_col_delayed))
                                                     ? 
                                                    vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__lut_mem_5
                                                    [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__rd_col_delayed))
                                                      ? 
                                                     vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__lut_mem_4
                                                     [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__rd_col_delayed))
                                                       ? 
                                                      vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__lut_mem_3
                                                      [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__rd_col_delayed))
                                                        ? 
                                                       vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__lut_mem_2
                                                       [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__rd_col_delayed))
                                                         ? 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__lut_mem_1
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                         : 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__lut_mem_0
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                 * vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_13));
    VL_EXTENDS_WI(69,32, __Vtemp_115, ((2U == (IData)(vlSelf->io_vpu2_norm_mode))
                                        ? (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_46 
                                           - ((IData)(vlSelf->io_vpu2_norm_layout)
                                               ? vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalMeanReg
                                               : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineMeanRegs_14))
                                        : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_46));
    __Vtemp_116[0U] = __Vtemp_115[0U];
    __Vtemp_116[1U] = __Vtemp_115[1U];
    __Vtemp_116[2U] = (0x1fU & __Vtemp_115[2U]);
    VL_EXTENDS_WQ(69,37, __Vtemp_118, vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_14);
    __Vtemp_119[0U] = __Vtemp_118[0U];
    __Vtemp_119[1U] = __Vtemp_118[1U];
    __Vtemp_119[2U] = (0x1fU & __Vtemp_118[2U]);
    VL_MULS_WWW(69, __Vtemp_120, __Vtemp_116, __Vtemp_119);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_30[0U] 
        = __Vtemp_120[0U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_30[1U] 
        = __Vtemp_120[1U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_30[2U] 
        = (0x1fU & __Vtemp_120[2U]);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_46 
        = (0xfffffffffffffULL & ((QData)((IData)(((7U 
                                                   == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__rd_col_delayed))
                                                   ? 
                                                  vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__lut_mem_7
                                                  [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__rd_col_delayed))
                                                    ? 
                                                   vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__lut_mem_6
                                                   [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__rd_col_delayed))
                                                     ? 
                                                    vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__lut_mem_5
                                                    [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__rd_col_delayed))
                                                      ? 
                                                     vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__lut_mem_4
                                                     [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__rd_col_delayed))
                                                       ? 
                                                      vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__lut_mem_3
                                                      [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__rd_col_delayed))
                                                        ? 
                                                       vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__lut_mem_2
                                                       [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__rd_col_delayed))
                                                         ? 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__lut_mem_1
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                         : 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__lut_mem_0
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                 * vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_14));
    VL_EXTENDS_WI(69,32, __Vtemp_123, ((2U == (IData)(vlSelf->io_vpu2_norm_mode))
                                        ? (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_47 
                                           - ((IData)(vlSelf->io_vpu2_norm_layout)
                                               ? vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__globalMeanReg
                                               : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__onlineMeanRegs_15))
                                        : vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__x_47));
    __Vtemp_124[0U] = __Vtemp_123[0U];
    __Vtemp_124[1U] = __Vtemp_123[1U];
    __Vtemp_124[2U] = (0x1fU & __Vtemp_123[2U]);
    VL_EXTENDS_WQ(69,37, __Vtemp_126, vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_15);
    __Vtemp_127[0U] = __Vtemp_126[0U];
    __Vtemp_127[1U] = __Vtemp_126[1U];
    __Vtemp_127[2U] = (0x1fU & __Vtemp_126[2U]);
    VL_MULS_WWW(69, __Vtemp_128, __Vtemp_124, __Vtemp_127);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_31[0U] 
        = __Vtemp_128[0U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_31[1U] 
        = __Vtemp_128[1U];
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_31[2U] 
        = (0x1fU & __Vtemp_128[2U]);
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__product_47 
        = (0xfffffffffffffULL & ((QData)((IData)(((7U 
                                                   == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__rd_col_delayed))
                                                   ? 
                                                  vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__lut_mem_7
                                                  [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__rd_col_delayed))
                                                    ? 
                                                   vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__lut_mem_6
                                                   [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__rd_col_delayed))
                                                     ? 
                                                    vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__lut_mem_5
                                                    [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__rd_col_delayed))
                                                      ? 
                                                     vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__lut_mem_4
                                                     [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__rd_col_delayed))
                                                       ? 
                                                      vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__lut_mem_3
                                                      [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__rd_col_delayed))
                                                        ? 
                                                       vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__lut_mem_2
                                                       [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__rd_col_delayed))
                                                         ? 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__lut_mem_1
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                         : 
                                                        vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__lut_mem_0
                                                        [vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                 * vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scale_15));
    vlSelf->io_ub_trans_ready = (1U & ((~ (IData)(vlSelf->io_ub_transpose_en)) 
                                       | (~ (IData)(vlSelf->ComputeUnit__DOT__ubTransposer__DOT__current_write_full))));
    vlSelf->io_wb_trans_ready = (1U & ((~ (IData)(vlSelf->io_wb_transpose_en)) 
                                       | (~ (IData)(vlSelf->ComputeUnit__DOT__wbTransposer__DOT__current_write_full))));
    vlSelf->io_comp_trans_ready = (1U & ((~ (IData)(vlSelf->io_output_transpose_en)) 
                                         | (~ (IData)(vlSelf->ComputeUnit__DOT__outTransposer__DOT__current_write_full))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_0_io_snapshot 
        = ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__timer__DOT__fire) 
           & ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__timer__DOT__lastKTile) 
              & (0xfU == (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__timer__DOT__outputRowCounter))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__accumulator__DOT___GEN_51 
        = ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__accumulator_io_snapshot_done) 
           | ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__accumulator__DOT__streamActive)
               ? ((0xfU != (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__accumulator__DOT__read_ptr)) 
                  & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__accumulator__DOT__streamActive))
               : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__accumulator__DOT__streamActive)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__deqFire 
        = ((0U != (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo__DOT__count)) 
           & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softContextFifo_io_deq_ready));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT___GEN_35 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT__freqHalf)
            ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT__nextBlockAvailable)
            : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__rope__DOT__activeFreqValid));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_1__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_1__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_1__DOT__mul_res))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_2__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_2__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_2__DOT__mul_res))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_3__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_3__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_3__DOT__mul_res))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_4__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_4__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_4__DOT__mul_res))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_5__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_5__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_5__DOT__mul_res))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_6__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_6__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_6__DOT__mul_res))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_7__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_7__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_7__DOT__mul_res))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_8__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_8__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_8__DOT__mul_res))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_9__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_9__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_9__DOT__mul_res))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_10__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_10__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_10__DOT__mul_res))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_11__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_11__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_11__DOT__mul_res))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_12__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_12__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_12__DOT__mul_res))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_13__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_13__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_13__DOT__mul_res))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_14__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_14__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_14__DOT__mul_res))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_15__DOT__add_full 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_15__DOT__mul_res) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_15__DOT__mul_res))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_1__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_2__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_3__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_4__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_5__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_6__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_7__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_8__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_9__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_10__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_11__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_12__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_13__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_14__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_15__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_1__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_2__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_3__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_4__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_5__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_6__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_7__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_8__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_9__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_10__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_11__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_12__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_13__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_14__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_15__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_1__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_2__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_3__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_4__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_5__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_6__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_7__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_8__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_9__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_10__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_11__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_12__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_13__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_14__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_15__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_1__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_2__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_3__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_4__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_5__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_6__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_7__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_8__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_9__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_10__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_11__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_12__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_13__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_14__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_15__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_1__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_2__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_3__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_4__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_5__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_6__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_7__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_8__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_9__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_10__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_11__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_12__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_13__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_14__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_15__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_1__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_2__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_3__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_4__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_5__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_6__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_7__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_8__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_9__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_10__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_11__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_12__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_13__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_14__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_15__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_1__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_2__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_3__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_4__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_5__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_6__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_7__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_8__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_9__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_10__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_11__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_12__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_13__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_14__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_15__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_1__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_2__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_3__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_4__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_5__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_6__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_7__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_8__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_9__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_10__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_11__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_12__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_13__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_14__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_15__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_1__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_2__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_3__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_4__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_5__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_6__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_7__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_8__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_9__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_10__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_11__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_12__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_13__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_14__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_15__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_1__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_2__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_3__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_4__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_5__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_6__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_7__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_8__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_9__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_10__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_11__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_12__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_13__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_14__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_15__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_1__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_2__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_3__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_4__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_5__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_6__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_7__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_8__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_9__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_10__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_11__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_12__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_13__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_14__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_15__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_1__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_2__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_3__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_4__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_5__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_6__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_7__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_8__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_9__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_10__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_11__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_12__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_13__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_14__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_15__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_1__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_2__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_3__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_4__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_5__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_6__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_7__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_8__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_9__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_10__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_11__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_12__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_13__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_14__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_15__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_1__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_2__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_3__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_4__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_5__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_6__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_7__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_8__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_9__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_10__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_11__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_12__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_13__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_14__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_15__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_1__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_1__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_1__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_1__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_2__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_2__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_2__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_2__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_3__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_3__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_3__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_3__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_4__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_4__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_4__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_4__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_5__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_5__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_5__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_5__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_6__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_6__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_6__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_6__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_7__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_7__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_7__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_7__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_8__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_8__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_8__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_8__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_9__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_9__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_9__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_9__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_10__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_10__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_10__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_10__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_11__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_11__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_11__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_11__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_12__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_12__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_12__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_12__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_13__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_13__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_13__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_13__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_14__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_14__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_14__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_14__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_15__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_15__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_15__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_15__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_1_io_out_data 
        = ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_1_io_out_valid)
            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_1__DOT__dataPipe_0)
            : 0U);
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_2_io_out_data 
        = ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_2_io_out_valid)
            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_2__DOT__dataPipe_1)
            : 0U);
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_3_io_out_data 
        = ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_3_io_out_valid)
            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_3__DOT__dataPipe_2)
            : 0U);
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_4_io_out_data 
        = ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_4_io_out_valid)
            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_4__DOT__dataPipe_3)
            : 0U);
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_5_io_out_data 
        = ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_5_io_out_valid)
            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_5__DOT__dataPipe_4)
            : 0U);
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_6_io_out_data 
        = ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_6_io_out_valid)
            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_6__DOT__dataPipe_5)
            : 0U);
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_7_io_out_data 
        = ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_7_io_out_valid)
            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_7__DOT__dataPipe_6)
            : 0U);
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_8_io_out_data 
        = ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_8_io_out_valid)
            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_8__DOT__dataPipe_7)
            : 0U);
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_9_io_out_data 
        = ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_9_io_out_valid)
            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_9__DOT__dataPipe_8)
            : 0U);
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_10_io_out_data 
        = ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_10_io_out_valid)
            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_10__DOT__dataPipe_9)
            : 0U);
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_11_io_out_data 
        = ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_11_io_out_valid)
            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_11__DOT__dataPipe_10)
            : 0U);
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_12_io_out_data 
        = ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_12_io_out_valid)
            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_12__DOT__dataPipe_11)
            : 0U);
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_13_io_out_data 
        = ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_13_io_out_valid)
            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_13__DOT__dataPipe_12)
            : 0U);
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_14_io_out_data 
        = ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_14_io_out_valid)
            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_14__DOT__dataPipe_13)
            : 0U);
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15_io_out_data 
        = ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15_io_out_valid)
            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15__DOT__dataPipe_14)
            : 0U);
    vlSelf->__VdfgTmp_h10bca976__0 = ((IData)(ComputeUnit__DOT__tpu__DOT__tileCtrlQueue__DOT__ptr_match) 
                                      & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__tileCtrlQueue__DOT__maybe_full));
    vlSelf->__VdfgTmp_h75e99c51__0 = ((~ (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__tileCtrlQueue__DOT__maybe_full)) 
                                      & (IData)(ComputeUnit__DOT__tpu__DOT__tileCtrlQueue__DOT__ptr_match));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0_io_rd_en 
        = ((~ (IData)(vlSelf->io_stall)) & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxTree__DOT__v4) 
                                            & (IData)(vlSelf->__VdfgTmp_hd8efdbca__0)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distributedSoftScaleLookup 
        = ((~ (IData)(vlSelf->io_stall)) & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctedSumTree__DOT__v4) 
                                            & (IData)(vlSelf->__VdfgTmp_hd8efdbca__0)));
    if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid) {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_118 
            = (1U & ((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_0)) 
                     | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_0)));
        if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_0) {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_117 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_0;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_115 
                = (1U & ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
                         | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_0)));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_114 
                = ((IData)(vlSelf->io_vpu2_norm_layout)
                    ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_0)
                    : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_0));
        } else {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_117 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_0;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_115 
                = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_0));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_114 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_0;
        }
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent 
            = (1U & (~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_0)));
    } else {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_118 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_0));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_117 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_0;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_115 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_0));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_114 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_0;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent = 0U;
    }
    if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_1) {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_176 
            = (1U & ((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_1)) 
                     | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_1)));
        if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_1) {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_175 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_1;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_173 
                = (1U & ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
                         | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_1)));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_172 
                = ((IData)(vlSelf->io_vpu2_norm_layout)
                    ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_1)
                    : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_1));
        } else {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_175 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_1;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_173 
                = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_1));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_172 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_1;
        }
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_1 
            = (1U & (~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_1)));
    } else {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_176 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_1));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_175 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_1;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_173 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_1));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_172 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_1;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_1 = 0U;
    }
    if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_2) {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_232 
            = (1U & ((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_2)) 
                     | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_2)));
        if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_2) {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_231 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_2;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_229 
                = (1U & ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
                         | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_2)));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_228 
                = ((IData)(vlSelf->io_vpu2_norm_layout)
                    ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_2)
                    : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_2));
        } else {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_231 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_2;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_229 
                = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_2));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_228 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_2;
        }
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_2 
            = (1U & (~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_2)));
    } else {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_232 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_2));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_231 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_2;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_229 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_2));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_228 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_2;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_2 = 0U;
    }
    if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_3) {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_288 
            = (1U & ((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_3)) 
                     | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_3)));
        if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_3) {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_287 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_3;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_285 
                = (1U & ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
                         | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_3)));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_284 
                = ((IData)(vlSelf->io_vpu2_norm_layout)
                    ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_3)
                    : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_3));
        } else {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_287 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_3;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_285 
                = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_3));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_284 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_3;
        }
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_3 
            = (1U & (~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_3)));
    } else {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_288 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_3));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_287 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_3;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_285 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_3));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_284 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_3;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_3 = 0U;
    }
    if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_4) {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_344 
            = (1U & ((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_4)) 
                     | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_4)));
        if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_4) {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_343 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_4;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_341 
                = (1U & ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
                         | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_4)));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_340 
                = ((IData)(vlSelf->io_vpu2_norm_layout)
                    ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_4)
                    : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_4));
        } else {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_343 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_4;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_341 
                = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_4));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_340 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_4;
        }
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_4 
            = (1U & (~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_4)));
    } else {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_344 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_4));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_343 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_4;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_341 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_4));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_340 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_4;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_4 = 0U;
    }
    if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_5) {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_400 
            = (1U & ((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_5)) 
                     | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_5)));
        if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_5) {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_399 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_5;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_397 
                = (1U & ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
                         | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_5)));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_396 
                = ((IData)(vlSelf->io_vpu2_norm_layout)
                    ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_5)
                    : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_5));
        } else {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_399 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_5;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_397 
                = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_5));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_396 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_5;
        }
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_5 
            = (1U & (~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_5)));
    } else {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_400 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_5));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_399 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_5;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_397 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_5));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_396 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_5;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_5 = 0U;
    }
    if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_6) {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_456 
            = (1U & ((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_6)) 
                     | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_6)));
        if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_6) {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_455 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_6;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_453 
                = (1U & ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
                         | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_6)));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_452 
                = ((IData)(vlSelf->io_vpu2_norm_layout)
                    ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_6)
                    : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_6));
        } else {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_455 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_6;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_453 
                = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_6));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_452 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_6;
        }
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_6 
            = (1U & (~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_6)));
    } else {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_456 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_6));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_455 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_6;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_453 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_6));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_452 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_6;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_6 = 0U;
    }
    if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_7) {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_512 
            = (1U & ((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_7)) 
                     | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_7)));
        if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_7) {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_511 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_7;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_509 
                = (1U & ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
                         | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_7)));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_508 
                = ((IData)(vlSelf->io_vpu2_norm_layout)
                    ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_7)
                    : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_7));
        } else {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_511 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_7;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_509 
                = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_7));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_508 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_7;
        }
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_7 
            = (1U & (~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_7)));
    } else {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_512 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_7));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_511 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_7;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_509 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_7));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_508 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_7;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_7 = 0U;
    }
    if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_8) {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_568 
            = (1U & ((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_8)) 
                     | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_8)));
        if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_8) {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_567 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_8;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_565 
                = (1U & ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
                         | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_8)));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_564 
                = ((IData)(vlSelf->io_vpu2_norm_layout)
                    ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_8)
                    : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_8));
        } else {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_567 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_8;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_565 
                = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_8));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_564 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_8;
        }
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_8 
            = (1U & (~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_8)));
    } else {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_568 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_8));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_567 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_8;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_565 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_8));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_564 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_8;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_8 = 0U;
    }
    if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_9) {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_624 
            = (1U & ((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_9)) 
                     | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_9)));
        if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_9) {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_623 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_9;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_621 
                = (1U & ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
                         | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_9)));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_620 
                = ((IData)(vlSelf->io_vpu2_norm_layout)
                    ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_9)
                    : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_9));
        } else {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_623 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_9;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_621 
                = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_9));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_620 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_9;
        }
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_9 
            = (1U & (~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_9)));
    } else {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_624 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_9));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_623 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_9;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_621 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_9));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_620 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_9;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_9 = 0U;
    }
    if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_10) {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_680 
            = (1U & ((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_10)) 
                     | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_10)));
        if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_10) {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_679 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_10;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_677 
                = (1U & ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
                         | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_10)));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_676 
                = ((IData)(vlSelf->io_vpu2_norm_layout)
                    ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_10)
                    : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_10));
        } else {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_679 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_10;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_677 
                = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_10));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_676 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_10;
        }
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_10 
            = (1U & (~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_10)));
    } else {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_680 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_10));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_679 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_10;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_677 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_10));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_676 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_10;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_10 = 0U;
    }
    if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_11) {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_736 
            = (1U & ((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_11)) 
                     | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_11)));
        if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_11) {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_735 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_11;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_733 
                = (1U & ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
                         | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_11)));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_732 
                = ((IData)(vlSelf->io_vpu2_norm_layout)
                    ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_11)
                    : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_11));
        } else {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_735 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_11;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_733 
                = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_11));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_732 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_11;
        }
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_11 
            = (1U & (~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_11)));
    } else {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_736 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_11));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_735 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_11;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_733 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_11));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_732 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_11;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_11 = 0U;
    }
    if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_12) {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_792 
            = (1U & ((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_12)) 
                     | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_12)));
        if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_12) {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_791 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_12;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_789 
                = (1U & ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
                         | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_12)));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_788 
                = ((IData)(vlSelf->io_vpu2_norm_layout)
                    ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_12)
                    : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_12));
        } else {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_791 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_12;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_789 
                = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_12));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_788 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_12;
        }
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_12 
            = (1U & (~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_12)));
    } else {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_792 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_12));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_791 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_12;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_789 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_12));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_788 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_12;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_12 = 0U;
    }
    if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_13) {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_848 
            = (1U & ((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_13)) 
                     | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_13)));
        if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_13) {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_847 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_13;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_845 
                = (1U & ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
                         | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_13)));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_844 
                = ((IData)(vlSelf->io_vpu2_norm_layout)
                    ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_13)
                    : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_13));
        } else {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_847 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_13;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_845 
                = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_13));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_844 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_13;
        }
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_13 
            = (1U & (~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_13)));
    } else {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_848 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_13));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_847 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_13;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_845 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_13));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_844 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_13;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_13 = 0U;
    }
    if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_14) {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_904 
            = (1U & ((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_14)) 
                     | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_14)));
        if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_14) {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_903 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_14;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_901 
                = (1U & ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
                         | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_14)));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_900 
                = ((IData)(vlSelf->io_vpu2_norm_layout)
                    ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_14)
                    : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_14));
        } else {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_903 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_14;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_901 
                = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_14));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_900 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_14;
        }
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_14 
            = (1U & (~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_14)));
    } else {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_904 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_14));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_903 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_14;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_901 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_14));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_900 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_14;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_14 = 0U;
    }
    if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_15) {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_960 
            = (1U & ((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_15)) 
                     | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_15)));
        if (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_15) {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_959 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_15;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_957 
                = (1U & ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
                         | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_15)));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_956 
                = ((IData)(vlSelf->io_vpu2_norm_layout)
                    ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_15)
                    : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_15));
        } else {
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_959 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_15;
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_957 
                = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_15));
            vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_956 
                = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_15;
        }
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_15 
            = (1U & (~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_15)));
    } else {
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_960 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_15));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_959 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_15;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_957 
            = (1U & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalReady_15));
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_956 
            = vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softFinalMax_15;
        vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_15 = 0U;
    }
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distFinalRespReady 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distFinalAwaitingResp) 
           & (((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distFinalLaneMask_15)) 
               | ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_15) 
                  & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_15))) 
              & (((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distFinalLaneMask_14)) 
                  | ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_14) 
                     & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_14))) 
                 & (((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distFinalLaneMask_13)) 
                     | ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_13) 
                        & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_13))) 
                    & (((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distFinalLaneMask_12)) 
                        | ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_12) 
                           & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_12))) 
                       & (((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distFinalLaneMask_11)) 
                           | ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_11) 
                              & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_11))) 
                          & (((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distFinalLaneMask_10)) 
                              | ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_10) 
                                 & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_10))) 
                             & (((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distFinalLaneMask_9)) 
                                 | ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_9) 
                                    & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_9))) 
                                & (((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distFinalLaneMask_8)) 
                                    | ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_8) 
                                       & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_8))) 
                                   & (((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distFinalLaneMask_7)) 
                                       | ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_7) 
                                          & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_7))) 
                                      & (((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distFinalLaneMask_6)) 
                                          | ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_6) 
                                             & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_6))) 
                                         & (((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distFinalLaneMask_5)) 
                                             | ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_5) 
                                                & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_5))) 
                                            & (((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distFinalLaneMask_4)) 
                                                | ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_4) 
                                                   & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_4))) 
                                               & (((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distFinalLaneMask_3)) 
                                                   | ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_3) 
                                                      & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_3))) 
                                                  & (((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distFinalLaneMask_2)) 
                                                      | ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_2) 
                                                         & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_2))) 
                                                     & (((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distFinalLaneMask_1)) 
                                                         | ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid_1) 
                                                            & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_1))) 
                                                        & ((~ (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distFinalLaneMask_0)) 
                                                           | ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__expRespValid) 
                                                              & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingLast_0)))))))))))))))))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo_io_deq_valid 
        = ((0U != (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo__DOT__count)) 
           | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distPhase2ContextFifo_io_enq_valid));
    vlSelf->__VdfgTmp_h41c36de8__0 = ((IData)(vlSelf->io_vpu2_norm_layout) 
                                      & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___T));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___T_151 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__p2ValidD1) 
           & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___T));
    vlSelf->ComputeUnit__DOT__tpu__DOT__accumulator_io_out_tile_start 
        = ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__accumulator_io_out_valid_0) 
           & (0U == (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__accumulator__DOT__read_ptr)));
    vlSelf->ComputeUnit__DOT__lutProgrammer_io_in_ready 
        = ((1U == (IData)(vlSelf->ComputeUnit__DOT__lutProgrammer__DOT__state)) 
           & (IData)(vlSelf->ComputeUnit__DOT__lutProgrammer__DOT____VdfgTmp_hae91382e__0));
    vlSelf->ComputeUnit__DOT__zeroPadder__DOT___T = 
        ((IData)(vlSelf->io_vector_compact_in) & (IData)(vlSelf->io_zero_pad_busy));
    vlSelf->ComputeUnit__DOT__programActive = ((IData)(vlSelf->io_lut_program_start) 
                                               | (IData)(vlSelf->io_lut_prog_busy));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16 
        = ((2U == (IData)(vlSelf->io_vpu2_norm_mode))
            ? (((vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__layerPair_ex2_16 
                 >= ComputeUnit__DOT__vpu2__DOT__norm__DOT__layerPair_meanSq_16)
                 ? (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__layerPair_ex2_16 
                    - ComputeUnit__DOT__vpu2__DOT__norm__DOT__layerPair_meanSq_16)
                 : 0U) + vlSelf->io_norm_epsilon) : 
           (vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__layerPair_ex2_16 
            + vlSelf->io_norm_epsilon));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_1_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_1_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_1)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_2_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_2_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_2)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_3_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_3_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_3)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_4_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_4_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_4)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_5_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_5_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_5)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_6_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_6_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_6)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_7_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_7_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_7)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_8_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_8_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_8)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_9_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_9_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_9)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_10_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_10_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_10)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_11_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_11_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_11)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_12_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_12_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_12)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_13_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_13_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_13)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_14_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_14_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_14)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__active_weight))))));
    ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__mul_res 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15_io_out_data))), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_15_io_out_weight_update)
                                                            ? (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__shadowWeight_0_15)
                                                            : (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__active_weight))))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__tileCtrlQueue__DOT__ram_row_change_update_MPORT_en 
        = ((~ (IData)(vlSelf->__VdfgTmp_h10bca976__0)) 
           & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_0_io_snapshot));
    vlSelf->io_tpu_fusion_req = ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__accumulator_io_snapshot_done) 
                                 & ((~ (IData)(vlSelf->__VdfgTmp_h75e99c51__0)) 
                                    & vlSelf->ComputeUnit__DOT__tpu__DOT__tileCtrlQueue__DOT__ram_fusion_req
                                    [vlSelf->ComputeUnit__DOT__tpu__DOT__tileCtrlQueue__DOT__deq_ptr_value]));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseMax_0 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent)
            ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_0)
            : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_0));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseSeen_0 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent) 
           | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_0));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseMax_1 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_1)
            ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_1)
            : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_1));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseSeen_1 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_1) 
           | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_1));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseMax_2 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_2)
            ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_2)
            : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_2));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseSeen_2 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_2) 
           | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_2));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseMax_3 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_3)
            ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_3)
            : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_3));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseSeen_3 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_3) 
           | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_3));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseMax_4 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_4)
            ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_4)
            : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_4));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseSeen_4 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_4) 
           | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_4));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseMax_5 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_5)
            ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_5)
            : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_5));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseSeen_5 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_5) 
           | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_5));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseMax_6 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_6)
            ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_6)
            : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_6));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseSeen_6 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_6) 
           | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_6));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseMax_7 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_7)
            ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_7)
            : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_7));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseSeen_7 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_7) 
           | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_7));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseMax_8 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_8)
            ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_8)
            : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_8));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseSeen_8 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_8) 
           | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_8));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseMax_9 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_9)
            ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_9)
            : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_9));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseSeen_9 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_9) 
           | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_9));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseMax_10 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_10)
            ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_10)
            : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_10));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseSeen_10 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_10) 
           | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_10));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseMax_11 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_11)
            ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_11)
            : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_11));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseSeen_11 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_11) 
           | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_11));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseMax_12 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_12)
            ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_12)
            : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_12));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseSeen_12 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_12) 
           | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_12));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseMax_13 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_13)
            ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_13)
            : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_13));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseSeen_13 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_13) 
           | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_13));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseMax_14 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_14)
            ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_14)
            : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_14));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseSeen_14 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_14) 
           | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_14));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseMax_15 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_15)
            ? (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softPendingNewMax_15)
            : (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softMaxRegs_15));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softBaseSeen_15 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__responseFeedsCurrent_15) 
           | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__softSeen_15));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__distributedNormalScaleLookup 
        = ((~ (IData)(vlSelf->io_stall)) & ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__statTree__DOT__v4) 
                                            & (IData)(vlSelf->__VdfgTmp_h41c36de8__0)));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___GEN_1583 
        = ((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___T_151) 
           & (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___rawOutMeta_T));
    vlSelf->ComputeUnit__DOT__tpu__DOT__tileCtrlQueue__DOT__do_deq 
        = ((~ (IData)(vlSelf->__VdfgTmp_h75e99c51__0)) 
           & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__accumulator_io_out_tile_start));
    if (vlSelf->ComputeUnit__DOT__zeroPadder__DOT___T) {
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_1 = 0U;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_2 = 0U;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_3 = 0U;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_4 = 0U;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_5 = 0U;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_6 = 0U;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_7 = 0U;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_8 = 0U;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_9 = 0U;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_10 = 0U;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_11 = 0U;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_12 = 0U;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_13 = 0U;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_14 = 0U;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_15 = 0U;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_0 = 0U;
    } else {
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_1 
            = vlSelf->io_ub_in_1;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_2 
            = vlSelf->io_ub_in_2;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_3 
            = vlSelf->io_ub_in_3;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_4 
            = vlSelf->io_ub_in_4;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_5 
            = vlSelf->io_ub_in_5;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_6 
            = vlSelf->io_ub_in_6;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_7 
            = vlSelf->io_ub_in_7;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_8 
            = vlSelf->io_ub_in_8;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_9 
            = vlSelf->io_ub_in_9;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_10 
            = vlSelf->io_ub_in_10;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_11 
            = vlSelf->io_ub_in_11;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_12 
            = vlSelf->io_ub_in_12;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_13 
            = vlSelf->io_ub_in_13;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_14 
            = vlSelf->io_ub_in_14;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_15 
            = vlSelf->io_ub_in_15;
        vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_in_vec_0 
            = vlSelf->io_ub_in_0;
    }
    vlSelf->io_lut_ready = ((~ (IData)(vlSelf->ComputeUnit__DOT__programActive)) 
                            & (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_15.__PVT__actLut__DOT__is_programmed) 
                                & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_14.__PVT__actLut__DOT__is_programmed) 
                                   & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_13.__PVT__actLut__DOT__is_programmed) 
                                      & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_12.__PVT__actLut__DOT__is_programmed) 
                                         & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_11.__PVT__actLut__DOT__is_programmed) 
                                            & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_10.__PVT__actLut__DOT__is_programmed) 
                                               & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_9.__PVT__actLut__DOT__is_programmed) 
                                                  & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_8.__PVT__actLut__DOT__is_programmed) 
                                                     & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_7.__PVT__actLut__DOT__is_programmed) 
                                                        & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_6.__PVT__actLut__DOT__is_programmed) 
                                                           & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_5.__PVT__actLut__DOT__is_programmed) 
                                                              & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_4.__PVT__actLut__DOT__is_programmed) 
                                                                 & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_3.__PVT__actLut__DOT__is_programmed) 
                                                                    & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_2.__PVT__actLut__DOT__is_programmed) 
                                                                       & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_1.__PVT__actLut__DOT__is_programmed) 
                                                                          & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_0.__PVT__actLut__DOT__is_programmed)))))))))))))))) 
                               & (((IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleReady) 
                                   & ((3U != (IData)(vlSelf->io_vpu2_norm_mode)) 
                                      | (IData)(vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT___io_lut_ready_T_2))) 
                                  & (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_7.__PVT__cosLut__DOT__is_programmed) 
                                      & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_7.__PVT__sinLut__DOT__is_programmed)) 
                                     & (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_6.__PVT__cosLut__DOT__is_programmed) 
                                         & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_6.__PVT__sinLut__DOT__is_programmed)) 
                                        & (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_5.__PVT__cosLut__DOT__is_programmed) 
                                            & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_5.__PVT__sinLut__DOT__is_programmed)) 
                                           & (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_4.__PVT__cosLut__DOT__is_programmed) 
                                               & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_4.__PVT__sinLut__DOT__is_programmed)) 
                                              & (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_3.__PVT__cosLut__DOT__is_programmed) 
                                                  & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_3.__PVT__sinLut__DOT__is_programmed)) 
                                                 & (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_2.__PVT__cosLut__DOT__is_programmed) 
                                                     & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_2.__PVT__sinLut__DOT__is_programmed)) 
                                                    & (((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_1.__PVT__cosLut__DOT__is_programmed) 
                                                        & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_1.__PVT__sinLut__DOT__is_programmed)) 
                                                       & ((IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_0.__PVT__cosLut__DOT__is_programmed) 
                                                          & (IData)(vlSymsp->TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_0.__PVT__sinLut__DOT__is_programmed))))))))))));
    vlSelf->ComputeUnit__DOT__computeInputAllowed = 
        (1U & ((~ (IData)(vlSelf->ComputeUnit__DOT__programActive)) 
               & (~ (IData)(vlSelf->io_soft_reset))));
    vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__normPair_lz_16 
        = ((vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16 
            >> 0x1fU) ? 0U : ((0x40000000U & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                               ? 1U : ((0x20000000U 
                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                        ? 2U : ((0x10000000U 
                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                 ? 3U
                                                 : 
                                                ((0x8000000U 
                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                  ? 4U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                   ? 5U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                    ? 6U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                     ? 7U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                      ? 8U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                       ? 9U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                        ? 0xaU
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                         ? 0xbU
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                          ? 0xcU
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                           ? 0xdU
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                            ? 0xeU
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                             ? 0xfU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                              ? 0x10U
                                                              : 
                                                             ((0x4000U 
                                                               & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                               ? 0x11U
                                                               : 
                                                              ((0x2000U 
                                                                & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                                ? 0x12U
                                                                : 
                                                               ((0x1000U 
                                                                 & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                                 ? 0x13U
                                                                 : 
                                                                ((0x800U 
                                                                  & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                                    ? 0x16U
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                                     ? 0x17U
                                                                     : 
                                                                    ((0x80U 
                                                                      & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x40U 
                                                                       & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                                       ? 0x19U
                                                                       : 
                                                                      ((0x20U 
                                                                        & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                                        ? 0x1aU
                                                                        : 
                                                                       ((0x10U 
                                                                         & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                                         ? 0x1bU
                                                                         : 
                                                                        ((8U 
                                                                          & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                                          ? 0x1cU
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                                           ? 0x1dU
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->ComputeUnit__DOT__vpu2__DOT__norm__DOT__stat_16)
                                                                            ? 0x1eU
                                                                            : 0x1fU)))))))))))))))))))))))))))))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_1_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_2_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_3_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_4_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_5_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_6_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_7_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_8_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_9_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_10_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_11_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_12_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_13_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__add_full 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_14_0__DOT__outMacReg) 
                             + VL_EXTENDS_QI(33,32, 
                                             (((- (IData)(
                                                          (1U 
                                                           & ((IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__mul_res) 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (IData)(ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_15_0__DOT__mul_res)))));
    vlSelf->ComputeUnit__DOT__tpu__DOT__mxu__DOT__macs_0_0_io_clear_w 
        = ((IData)(vlSelf->io_tpu_clear_w) & ((IData)(vlSelf->io_tpu_en) 
                                              & (IData)(vlSelf->ComputeUnit__DOT__computeInputAllowed)));
    vlSelf->ComputeUnit__DOT____VdfgTmp_h3c157c3f__0 
        = ((IData)(vlSelf->io_output_transpose_en) 
           & (IData)(vlSelf->ComputeUnit__DOT__computeInputAllowed));
    ComputeUnit__DOT____VdfgTmp_h75c89da9__0 = ((IData)(vlSelf->io_wb_transpose_en) 
                                                & (IData)(vlSelf->ComputeUnit__DOT__computeInputAllowed));
    vlSelf->ComputeUnit__DOT__vpu1_io_tpu_valid_0 = 
        ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__accumulator_io_out_valid_0) 
         & ((IData)(vlSelf->io_vpu1_en) & (IData)(vlSelf->ComputeUnit__DOT__computeInputAllowed)));
    vlSelf->ComputeUnit__DOT___ubStreamValid_T_1 = 
        ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__computeInputAllowed));
    vlSelf->__VdfgTmp_h31521a76__0 = ((IData)(vlSelf->io_vpu2_en) 
                                      & (IData)(vlSelf->ComputeUnit__DOT__computeInputAllowed));
    vlSelf->ComputeUnit__DOT__zeroPadder_io_in_valid 
        = ((IData)(vlSelf->io_ub_valid) & (IData)(vlSelf->ComputeUnit__DOT__computeInputAllowed));
    vlSelf->ComputeUnit__DOT____VdfgTmp_h4aaf8fd1__0 
        = ((IData)(vlSelf->io_ub_transpose_en) & (IData)(vlSelf->ComputeUnit__DOT__computeInputAllowed));
    ComputeUnit__DOT__outTransposer_io_out_stream_en 
        = ((IData)(vlSelf->io_comp_stream_en) & (IData)(vlSelf->ComputeUnit__DOT____VdfgTmp_h3c157c3f__0));
    ComputeUnit__DOT__wbTransposer_io_out_stream_en 
        = ((IData)(vlSelf->io_wb_stream_en) & (IData)(ComputeUnit__DOT____VdfgTmp_h75c89da9__0));
    vlSelf->ComputeUnit__DOT__wbTransposer_io_in_valid 
        = ((IData)(vlSelf->io_wb_valid) & (IData)(ComputeUnit__DOT____VdfgTmp_h75c89da9__0));
    vlSelf->io_vpu2_rope_active = ((~ (IData)(vlSelf->io_vpu2_norm_layout)) 
                                   & ((IData)(vlSelf->io_vpu2_rope_en) 
                                      & (IData)(vlSelf->__VdfgTmp_h31521a76__0)));
    vlSelf->ComputeUnit__DOT__zeroPadder_io_out_valid 
        = ((IData)(vlSelf->ComputeUnit__DOT__lutProgrammer__DOT____VdfgTmp_hae91382e__0) 
           & ((IData)(vlSelf->ComputeUnit__DOT__zeroPadder_io_in_valid) 
              | (IData)(vlSelf->ComputeUnit__DOT__zeroPadder__DOT___T)));
    ComputeUnit__DOT__ubTransposer_io_out_stream_en 
        = ((IData)(vlSelf->io_ub_stream_en) & (IData)(vlSelf->ComputeUnit__DOT____VdfgTmp_h4aaf8fd1__0));
    ComputeUnit__DOT__outTransposer__DOT___ping_io_rd_en_T 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(ComputeUnit__DOT__outTransposer_io_out_stream_en));
    vlSelf->ComputeUnit__DOT__outTransposer_io_out_valid 
        = ((IData)(ComputeUnit__DOT__outTransposer_io_out_stream_en) 
           & ((~ (IData)(vlSelf->io_stall)) & ((IData)(vlSelf->ComputeUnit__DOT__outTransposer__DOT__read_side)
                                                ? (IData)(vlSymsp->TOP__ComputeUnit__DOT__outTransposer__DOT__pong.__PVT__full_reg)
                                                : (IData)(vlSymsp->TOP__ComputeUnit__DOT__outTransposer__DOT__ping.__PVT__full_reg))));
    ComputeUnit__DOT__wbTransposer__DOT___ping_io_rd_en_T 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(ComputeUnit__DOT__wbTransposer_io_out_stream_en));
    vlSelf->ComputeUnit__DOT__wbTransposer_io_out_valid 
        = ((IData)(ComputeUnit__DOT__wbTransposer_io_out_stream_en) 
           & ((~ (IData)(vlSelf->io_stall)) & ((IData)(vlSelf->ComputeUnit__DOT__wbTransposer__DOT__read_side)
                                                ? (IData)(vlSymsp->TOP__ComputeUnit__DOT__wbTransposer__DOT__pong.__PVT__full_reg)
                                                : (IData)(vlSymsp->TOP__ComputeUnit__DOT__wbTransposer__DOT__ping.__PVT__full_reg))));
    ComputeUnit__DOT__wbTransposer__DOT___ping_io_wr_en_T 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__wbTransposer_io_in_valid));
    vlSelf->ComputeUnit__DOT__ubTransposer_io_in_valid 
        = ((IData)(vlSelf->ComputeUnit__DOT__zeroPadder_io_out_valid) 
           & (IData)(vlSelf->ComputeUnit__DOT____VdfgTmp_h4aaf8fd1__0));
    ComputeUnit__DOT__ubTransposer__DOT___ping_io_rd_en_T 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(ComputeUnit__DOT__ubTransposer_io_out_stream_en));
    vlSelf->ComputeUnit__DOT__ubTransposer_io_out_valid 
        = ((IData)(ComputeUnit__DOT__ubTransposer_io_out_stream_en) 
           & ((~ (IData)(vlSelf->io_stall)) & ((IData)(vlSelf->ComputeUnit__DOT__ubTransposer__DOT__read_side)
                                                ? (IData)(vlSymsp->TOP__ComputeUnit__DOT__ubTransposer__DOT__pong.__PVT__full_reg)
                                                : (IData)(vlSymsp->TOP__ComputeUnit__DOT__ubTransposer__DOT__ping.__PVT__full_reg))));
    vlSelf->ComputeUnit__DOT__outTransposer__DOT__pong_io_rd_en 
        = ((IData)(ComputeUnit__DOT__outTransposer__DOT___ping_io_rd_en_T) 
           & (IData)(vlSelf->ComputeUnit__DOT__outTransposer__DOT__read_side));
    vlSelf->ComputeUnit__DOT__outTransposer__DOT__ping_io_rd_en 
        = ((~ (IData)(vlSelf->ComputeUnit__DOT__outTransposer__DOT__read_side)) 
           & (IData)(ComputeUnit__DOT__outTransposer__DOT___ping_io_rd_en_T));
    vlSelf->ComputeUnit__DOT__wbTransposer__DOT__pong_io_rd_en 
        = ((IData)(ComputeUnit__DOT__wbTransposer__DOT___ping_io_rd_en_T) 
           & (IData)(vlSelf->ComputeUnit__DOT__wbTransposer__DOT__read_side));
    vlSelf->ComputeUnit__DOT__wbTransposer__DOT__ping_io_rd_en 
        = ((~ (IData)(vlSelf->ComputeUnit__DOT__wbTransposer__DOT__read_side)) 
           & (IData)(ComputeUnit__DOT__wbTransposer__DOT___ping_io_rd_en_T));
    vlSelf->ComputeUnit__DOT__wbStreamValid = ((IData)(vlSelf->ComputeUnit__DOT___ubStreamValid_T_1) 
                                               & ((IData)(vlSelf->io_wb_transpose_en)
                                                   ? (IData)(vlSelf->ComputeUnit__DOT__wbTransposer_io_out_valid)
                                                   : (IData)(vlSelf->io_wb_valid)));
    vlSelf->ComputeUnit__DOT__wbTransposer__DOT__pong_io_wr_en 
        = ((IData)(ComputeUnit__DOT__wbTransposer__DOT___ping_io_wr_en_T) 
           & (IData)(vlSelf->ComputeUnit__DOT__wbTransposer__DOT__write_side));
    vlSelf->ComputeUnit__DOT__wbTransposer__DOT__ping_io_wr_en 
        = ((~ (IData)(vlSelf->ComputeUnit__DOT__wbTransposer__DOT__write_side)) 
           & (IData)(ComputeUnit__DOT__wbTransposer__DOT___ping_io_wr_en_T));
    ComputeUnit__DOT__ubTransposer__DOT___ping_io_wr_en_T 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__ubTransposer_io_in_valid));
    vlSelf->ComputeUnit__DOT__ubTransposer__DOT__pong_io_rd_en 
        = ((IData)(ComputeUnit__DOT__ubTransposer__DOT___ping_io_rd_en_T) 
           & (IData)(vlSelf->ComputeUnit__DOT__ubTransposer__DOT__read_side));
    vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_rd_en 
        = ((~ (IData)(vlSelf->ComputeUnit__DOT__ubTransposer__DOT__read_side)) 
           & (IData)(ComputeUnit__DOT__ubTransposer__DOT___ping_io_rd_en_T));
    vlSelf->ComputeUnit__DOT__ubStreamValid = ((IData)(vlSelf->ComputeUnit__DOT___ubStreamValid_T_1) 
                                               & ((IData)(vlSelf->io_ub_transpose_en)
                                                   ? (IData)(vlSelf->ComputeUnit__DOT__ubTransposer_io_out_valid)
                                                   : (IData)(vlSelf->ComputeUnit__DOT__zeroPadder_io_out_valid)));
    vlSelf->ComputeUnit__DOT__outTransposer__DOT___GEN_2 
        = (((IData)(vlSelf->ComputeUnit__DOT__outTransposer__DOT__ping_io_rd_en) 
            & ((0xfU == (IData)(vlSymsp->TOP__ComputeUnit__DOT__outTransposer__DOT__ping.__PVT__rd_ptr)) 
               & (IData)(vlSymsp->TOP__ComputeUnit__DOT__outTransposer__DOT__ping.__PVT__full_reg))) 
           | (IData)(vlSelf->ComputeUnit__DOT__outTransposer__DOT__read_side));
    vlSelf->ComputeUnit__DOT__wbTransposer__DOT___GEN_2 
        = (((IData)(vlSelf->ComputeUnit__DOT__wbTransposer__DOT__ping_io_rd_en) 
            & ((0xfU == (IData)(vlSymsp->TOP__ComputeUnit__DOT__wbTransposer__DOT__ping.__PVT__rd_ptr)) 
               & (IData)(vlSymsp->TOP__ComputeUnit__DOT__wbTransposer__DOT__ping.__PVT__full_reg))) 
           | (IData)(vlSelf->ComputeUnit__DOT__wbTransposer__DOT__read_side));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator_io_weight_valid 
        = ((IData)(vlSelf->ComputeUnit__DOT__wbStreamValid) 
           & (IData)(vlSelf->io_tpu_en));
    vlSelf->ComputeUnit__DOT__wbTransposer__DOT___GEN_0 
        = (((IData)(vlSelf->ComputeUnit__DOT__wbTransposer__DOT__ping_io_wr_en) 
            & ((~ (IData)(vlSymsp->TOP__ComputeUnit__DOT__wbTransposer__DOT__ping.__PVT__full_reg)) 
               & (0xfU == (IData)(vlSymsp->TOP__ComputeUnit__DOT__wbTransposer__DOT__ping.__PVT__wr_ptr)))) 
           | (IData)(vlSelf->ComputeUnit__DOT__wbTransposer__DOT__write_side));
    vlSelf->ComputeUnit__DOT__ubTransposer__DOT__pong_io_wr_en 
        = ((IData)(ComputeUnit__DOT__ubTransposer__DOT___ping_io_wr_en_T) 
           & (IData)(vlSelf->ComputeUnit__DOT__ubTransposer__DOT__write_side));
    vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_wr_en 
        = ((~ (IData)(vlSelf->ComputeUnit__DOT__ubTransposer__DOT__write_side)) 
           & (IData)(ComputeUnit__DOT__ubTransposer__DOT___ping_io_wr_en_T));
    vlSelf->ComputeUnit__DOT__ubTransposer__DOT___GEN_2 
        = (((IData)(vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_rd_en) 
            & ((0xfU == (IData)(vlSymsp->TOP__ComputeUnit__DOT__ubTransposer__DOT__ping.__PVT__rd_ptr)) 
               & (IData)(vlSymsp->TOP__ComputeUnit__DOT__ubTransposer__DOT__ping.__PVT__full_reg))) 
           | (IData)(vlSelf->ComputeUnit__DOT__ubTransposer__DOT__read_side));
    vlSelf->ComputeUnit__DOT__vpu1__DOT___gpalu_io_in_valid_0_T 
        = (((IData)(vlSelf->ComputeUnit__DOT__ubStreamValid) 
            & (IData)(vlSelf->io_vpu1_en)) & (IData)(vlSelf->ComputeUnit__DOT__wbStreamValid));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_0_io_in_valid 
        = ((IData)(vlSelf->ComputeUnit__DOT__ubStreamValid) 
           & (IData)(vlSelf->io_tpu_en));
    vlSelf->ComputeUnit__DOT__ubTransposer__DOT___GEN_0 
        = (((IData)(vlSelf->ComputeUnit__DOT__ubTransposer__DOT__ping_io_wr_en) 
            & ((~ (IData)(vlSymsp->TOP__ComputeUnit__DOT__ubTransposer__DOT__ping.__PVT__full_reg)) 
               & (0xfU == (IData)(vlSymsp->TOP__ComputeUnit__DOT__ubTransposer__DOT__ping.__PVT__wr_ptr)))) 
           | (IData)(vlSelf->ComputeUnit__DOT__ubTransposer__DOT__write_side));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_0_io_in_tile_start 
        = ((IData)(vlSelf->io_tpu_input_tile_start) 
           & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_0_io_in_valid));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_0_io_out_valid 
        = ((~ (IData)(vlSelf->io_stall)) & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_0_io_in_valid));
    vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_0_io_out_weight_update 
        = ((IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_0_io_out_valid) 
           & (IData)(vlSelf->ComputeUnit__DOT__tpu__DOT__orchestrator__DOT__skewLanes_0_io_in_tile_start));
}
