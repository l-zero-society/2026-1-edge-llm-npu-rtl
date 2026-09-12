// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputeUnit.h for the primary calling header

#include "VComputeUnit__pch.h"
#include "VComputeUnit_QuantActCore.h"

VL_INLINE_OPT void VComputeUnit_QuantActCore___nba_sequent__TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_0__1(VComputeUnit_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnit_QuantActCore___nba_sequent__TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_0__1\n"); );
    // Body
    vlSelf->io_out_qact = ((IData)(vlSelf->__PVT__holdValid)
                            ? (IData)(vlSelf->__PVT__holdData)
                            : ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG)
                                ? (IData)(vlSelf->__PVT__actLut_io_rd_data)
                                : (IData)(vlSelf->__PVT__linearDataD1)));
}
