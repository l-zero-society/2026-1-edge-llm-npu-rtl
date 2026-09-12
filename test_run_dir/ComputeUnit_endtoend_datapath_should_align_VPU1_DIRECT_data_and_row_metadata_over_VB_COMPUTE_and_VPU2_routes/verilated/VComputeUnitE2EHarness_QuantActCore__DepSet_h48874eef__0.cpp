// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputeUnitE2EHarness.h for the primary calling header

#include "VComputeUnitE2EHarness__pch.h"
#include "VComputeUnitE2EHarness_QuantActCore.h"
#include "VComputeUnitE2EHarness__Syms.h"

VL_INLINE_OPT void VComputeUnitE2EHarness_QuantActCore___ico_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0__0(VComputeUnitE2EHarness_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnitE2EHarness_QuantActCore___ico_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0__0\n"); );
    // Body
    vlSelf->__PVT__linearReq = ((IData)(vlSelf->__PVT__s3Valid) 
                                & ((~ (IData)(vlSelf->__PVT__s3ActEn)) 
                                   & (~ (IData)(vlSymsp->TOP.io_stall))));
    vlSelf->__PVT___GEN_27 = (((IData)(vlSymsp->TOP.io_stall) 
                               & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                  & (IData)(vlSelf->__PVT__rawValid))) 
                              | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                     & (IData)(vlSelf->__PVT__holdValid))) 
                                 & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->__PVT__actLut_io_rd_en = ((IData)(vlSelf->__PVT__s3Valid) 
                                      & ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                         & (IData)(vlSelf->__PVT__s3ActEn)));
    vlSelf->__PVT___GEN_22 = (0x7ffU & ((IData)(vlSymsp->TOP.io_stall)
                                         ? (IData)(vlSelf->__PVT__s3Idx)
                                         : ((IData)(vlSelf->__PVT__s2Valid)
                                             ? ((IData)(0x200U) 
                                                + (
                                                   ((VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted) 
                                                     | (VL_GTES_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted) 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__shifted 
                                                                   >> 9U)))) 
                                                    << 0xaU) 
                                                   | (VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted)
                                                       ? 0x200U
                                                       : 
                                                      (VL_LTS_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted)
                                                        ? 0x1ffU
                                                        : 
                                                       (0x3ffU 
                                                        & (IData)(vlSelf->__PVT__shifted))))))
                                             : (IData)(vlSelf->__PVT__s3Idx))));
    vlSelf->io_out_valid = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                            & ((IData)(vlSelf->__PVT__holdValid) 
                               | (IData)(vlSelf->__PVT__rawValid)));
}

VL_INLINE_OPT void VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0__0(VComputeUnitE2EHarness_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_11__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    __Vdlyvval__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_11__v0;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_9__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    __Vdlyvval__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_9__v0;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_8__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    __Vdlyvval__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_8__v0;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    __Vdlyvval__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_7__v0;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    __Vdlyvval__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_1__v0;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    __Vdlyvval__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_6__v0;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    __Vdlyvval__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_2__v0;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    __Vdlyvval__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_3__v0;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    __Vdlyvval__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_4__v0;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    __Vdlyvval__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_0__v0;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_10__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    __Vdlyvval__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_10__v0;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    __Vdlyvval__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_5__v0;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_12__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    __Vdlyvval__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_12__v0;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_13__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    __Vdlyvval__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_13__v0;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_14__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    __Vdlyvval__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_14__v0;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_15__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    __Vdlyvval__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_15__v0;
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0;
    // Body
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_wb_in_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_wb_in_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_wb_in_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_wb_in_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_wb_in_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_wb_in_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_wb_in_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_wb_in_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_wb_in_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_wb_in_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_wb_in_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_wb_in_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_wb_in_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_wb_in_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_wb_in_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_wb_in_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
    }
    if (vlSelf->__PVT__actLut_io_rd_en) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0 
            = (0x3fU & ((IData)(vlSelf->__PVT__s3Idx) 
                        >> 4U));
        vlSelf->__PVT__actLut__DOT__rd_col_delayed 
            = (0xfU & (IData)(vlSelf->__PVT__s3Idx));
    }
    vlSelf->__PVT__actLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__actLut__DOT___GEN_20));
    vlSelf->__PVT__expectedRdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address)))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__rawValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdData = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG)
                                    ? (IData)(vlSelf->__PVT__actLut_io_rd_data)
                                    : (IData)(vlSelf->__PVT__linearDataD1));
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_15__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15[__Vdlyvdim0__actLut__DOT__lut_mem_15__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_14__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_14[__Vdlyvdim0__actLut__DOT__lut_mem_14__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_13__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_13[__Vdlyvdim0__actLut__DOT__lut_mem_13__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_12__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_12[__Vdlyvdim0__actLut__DOT__lut_mem_12__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_5[__Vdlyvdim0__actLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_10__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_10[__Vdlyvdim0__actLut__DOT__lut_mem_10__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_0[__Vdlyvdim0__actLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_4[__Vdlyvdim0__actLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_3[__Vdlyvdim0__actLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_2[__Vdlyvdim0__actLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_6[__Vdlyvdim0__actLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_1[__Vdlyvdim0__actLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_7[__Vdlyvdim0__actLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_8__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_8[__Vdlyvdim0__actLut__DOT__lut_mem_8__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_9__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_9[__Vdlyvdim0__actLut__DOT__lut_mem_9__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_11__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_11[__Vdlyvdim0__actLut__DOT__lut_mem_11__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    }
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT__actLut_io_rd_data = ((0xfU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                         ? vlSelf->__PVT__actLut__DOT__lut_mem_15
                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                         : ((0xeU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                             ? vlSelf->__PVT__actLut__DOT__lut_mem_14
                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                             : ((0xdU 
                                                 == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                 ? 
                                                vlSelf->__PVT__actLut__DOT__lut_mem_13
                                                [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                  ? 
                                                 vlSelf->__PVT__actLut__DOT__lut_mem_12
                                                 [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__actLut__DOT__lut_mem_11
                                                  [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                    ? 
                                                   vlSelf->__PVT__actLut__DOT__lut_mem_10
                                                   [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                     ? 
                                                    vlSelf->__PVT__actLut__DOT__lut_mem_9
                                                    [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                      ? 
                                                     vlSelf->__PVT__actLut__DOT__lut_mem_8
                                                     [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                       ? 
                                                      vlSelf->__PVT__actLut__DOT__lut_mem_7
                                                      [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                        ? 
                                                       vlSelf->__PVT__actLut__DOT__lut_mem_6
                                                       [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                         ? 
                                                        vlSelf->__PVT__actLut__DOT__lut_mem_5
                                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                          ? 
                                                         vlSelf->__PVT__actLut__DOT__lut_mem_4
                                                         [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                           ? 
                                                          vlSelf->__PVT__actLut__DOT__lut_mem_3
                                                          [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                            ? 
                                                           vlSelf->__PVT__actLut__DOT__lut_mem_2
                                                           [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                             ? 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_1
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                             : 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_0
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0])))))))))))))));
    vlSelf->__PVT__actLut__DOT___GEN_20 = ((IData)(vlSelf->__PVT__actLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__actLut__DOT__last_write_ack));
    vlSelf->__PVT__s2MultRes = (0x1ffffffffffffULL 
                                & ((IData)(vlSymsp->TOP.io_stall)
                                    ? vlSelf->__VdfgTmp_h017163a2__0
                                    : ((IData)(vlSelf->__PVT__s1Valid)
                                        ? ((IData)(vlSelf->__PVT__s1Direct)
                                            ? (((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__s1Sub 
                                                                                >> 0x20U)))))))) 
                                                << 0x21U) 
                                               | vlSelf->__PVT__s1Sub)
                                            : VL_MULS_QQQ(50, 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QQ(50,33, vlSelf->__PVT__s1Sub)), 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QI(50,17, (IData)(vlSelf->__PVT__s1Mult)))))
                                        : vlSelf->__VdfgTmp_h017163a2__0)));
    vlSelf->__VdfgTmp_h017163a2__0 = (((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__s2MultRes 
                                                                   >> 0x30U))))) 
                                       << 0x31U) | vlSelf->__PVT__s2MultRes);
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT__actLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_in_valid) {
            if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_0__DOT__io_out_direct_r) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_0__DOT__io_out_direct_r))))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.observedTpuOut_0 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.observedTpuOut_0))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_param))))));
            }
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__linearDataD1 = 0U;
    } else if (vlSelf->__PVT__linearReq) {
        vlSelf->__PVT__linearDataD1 = vlSelf->__PVT__s3Linear;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSelf->__PVT__s2Valid) {
            vlSelf->__PVT__s3Linear = (VL_GTS_IQQ(49, 0x1ffffffffff80ULL, vlSelf->__PVT__shifted)
                                        ? 0x80U : (
                                                   VL_LTS_IQQ(49, 0x7fULL, vlSelf->__PVT__shifted)
                                                    ? 0x7fU
                                                    : 
                                                   (0xffU 
                                                    & (IData)(vlSelf->__PVT__shifted))));
            vlSelf->__PVT__s3ActEn = vlSelf->__PVT__s2ActEn;
        }
        if (vlSelf->__PVT__s1Valid) {
            vlSelf->__PVT__s2Shift = vlSelf->__PVT__s1Shift;
            vlSelf->__PVT__s2ActEn = vlSelf->__PVT__s1ActEn;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__s3Valid = 0U;
        vlSelf->__PVT__s2Valid = 0U;
        vlSelf->__PVT__s1Valid = 0U;
    } else if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        vlSelf->__PVT__s3Valid = vlSelf->__PVT__s2Valid;
        vlSelf->__PVT__s2Valid = vlSelf->__PVT__s1Valid;
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_in_valid;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_in_valid) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_vpu1_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_vpu1_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_vpu1_act_mask))));
        }
    }
    vlSelf->__PVT__rawValid = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG) 
                               | (IData)(vlSelf->__PVT__linearValidD1));
    vlSelf->__PVT___GEN_27 = (((IData)(vlSymsp->TOP.io_stall) 
                               & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                  & (IData)(vlSelf->__PVT__rawValid))) 
                              | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                     & (IData)(vlSelf->__PVT__holdValid))) 
                                 & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->io_out_valid = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                            & ((IData)(vlSelf->__PVT__holdValid) 
                               | (IData)(vlSelf->__PVT__rawValid)));
    vlSelf->__PVT__linearReq = ((IData)(vlSelf->__PVT__s3Valid) 
                                & ((~ (IData)(vlSelf->__PVT__s3ActEn)) 
                                   & (~ (IData)(vlSymsp->TOP.io_stall))));
    vlSelf->__PVT__actLut_io_rd_en = ((IData)(vlSelf->__PVT__s3Valid) 
                                      & ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                         & (IData)(vlSelf->__PVT__s3ActEn)));
    vlSelf->__PVT__shifted = (0x1ffffffffffffULL & 
                              VL_SHIFTRS_QQI(49,49,5, vlSelf->__PVT__s2MultRes, (IData)(vlSelf->__PVT__s2Shift)));
    vlSelf->__PVT___GEN_22 = (0x7ffU & ((IData)(vlSymsp->TOP.io_stall)
                                         ? (IData)(vlSelf->__PVT__s3Idx)
                                         : ((IData)(vlSelf->__PVT__s2Valid)
                                             ? ((IData)(0x200U) 
                                                + (
                                                   ((VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted) 
                                                     | (VL_GTES_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted) 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__shifted 
                                                                   >> 9U)))) 
                                                    << 0xaU) 
                                                   | (VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted)
                                                       ? 0x200U
                                                       : 
                                                      (VL_LTS_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted)
                                                        ? 0x1ffU
                                                        : 
                                                       (0x3ffU 
                                                        & (IData)(vlSelf->__PVT__shifted))))))
                                             : (IData)(vlSelf->__PVT__s3Idx))));
}

VL_INLINE_OPT void VComputeUnitE2EHarness_QuantActCore___ico_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_1__0(VComputeUnitE2EHarness_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnitE2EHarness_QuantActCore___ico_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_1__0\n"); );
    // Body
    vlSelf->__PVT__linearReq = ((IData)(vlSelf->__PVT__s3Valid) 
                                & ((~ (IData)(vlSelf->__PVT__s3ActEn)) 
                                   & (~ (IData)(vlSymsp->TOP.io_stall))));
    vlSelf->__PVT___GEN_27 = (((IData)(vlSymsp->TOP.io_stall) 
                               & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                  & (IData)(vlSelf->__PVT__rawValid))) 
                              | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                     & (IData)(vlSelf->__PVT__holdValid))) 
                                 & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->__PVT__actLut_io_rd_en = ((IData)(vlSelf->__PVT__s3Valid) 
                                      & ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                         & (IData)(vlSelf->__PVT__s3ActEn)));
    vlSelf->__PVT___GEN_22 = (0x7ffU & ((IData)(vlSymsp->TOP.io_stall)
                                         ? (IData)(vlSelf->__PVT__s3Idx)
                                         : ((IData)(vlSelf->__PVT__s2Valid)
                                             ? ((IData)(0x200U) 
                                                + (
                                                   ((VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted) 
                                                     | (VL_GTES_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted) 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__shifted 
                                                                   >> 9U)))) 
                                                    << 0xaU) 
                                                   | (VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted)
                                                       ? 0x200U
                                                       : 
                                                      (VL_LTS_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted)
                                                        ? 0x1ffU
                                                        : 
                                                       (0x3ffU 
                                                        & (IData)(vlSelf->__PVT__shifted))))))
                                             : (IData)(vlSelf->__PVT__s3Idx))));
}

VL_INLINE_OPT void VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_1__0(VComputeUnitE2EHarness_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_1__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_11__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    __Vdlyvval__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_11__v0;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_9__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    __Vdlyvval__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_9__v0;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_8__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    __Vdlyvval__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_8__v0;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    __Vdlyvval__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_7__v0;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    __Vdlyvval__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_1__v0;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    __Vdlyvval__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_6__v0;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    __Vdlyvval__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_2__v0;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    __Vdlyvval__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_3__v0;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    __Vdlyvval__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_4__v0;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    __Vdlyvval__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_0__v0;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_10__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    __Vdlyvval__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_10__v0;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    __Vdlyvval__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_5__v0;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_12__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    __Vdlyvval__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_12__v0;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_13__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    __Vdlyvval__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_13__v0;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_14__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    __Vdlyvval__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_14__v0;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_15__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    __Vdlyvval__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_15__v0;
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0;
    // Body
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_wb_in_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_wb_in_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_wb_in_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_wb_in_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_wb_in_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_wb_in_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_wb_in_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_wb_in_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_wb_in_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_wb_in_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_wb_in_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_wb_in_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_wb_in_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_wb_in_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_wb_in_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_wb_in_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
    }
    if (vlSelf->__PVT__actLut_io_rd_en) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0 
            = (0x3fU & ((IData)(vlSelf->__PVT__s3Idx) 
                        >> 4U));
        vlSelf->__PVT__actLut__DOT__rd_col_delayed 
            = (0xfU & (IData)(vlSelf->__PVT__s3Idx));
    }
    vlSelf->__PVT__actLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__actLut__DOT___GEN_20));
    vlSelf->__PVT__expectedRdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address)))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__rawValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdData = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG)
                                    ? (IData)(vlSelf->__PVT__actLut_io_rd_data)
                                    : (IData)(vlSelf->__PVT__linearDataD1));
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_15__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15[__Vdlyvdim0__actLut__DOT__lut_mem_15__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_14__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_14[__Vdlyvdim0__actLut__DOT__lut_mem_14__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_13__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_13[__Vdlyvdim0__actLut__DOT__lut_mem_13__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_12__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_12[__Vdlyvdim0__actLut__DOT__lut_mem_12__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_5[__Vdlyvdim0__actLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_10__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_10[__Vdlyvdim0__actLut__DOT__lut_mem_10__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_0[__Vdlyvdim0__actLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_4[__Vdlyvdim0__actLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_3[__Vdlyvdim0__actLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_2[__Vdlyvdim0__actLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_6[__Vdlyvdim0__actLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_1[__Vdlyvdim0__actLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_7[__Vdlyvdim0__actLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_8__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_8[__Vdlyvdim0__actLut__DOT__lut_mem_8__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_9__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_9[__Vdlyvdim0__actLut__DOT__lut_mem_9__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_11__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_11[__Vdlyvdim0__actLut__DOT__lut_mem_11__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    }
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT__actLut_io_rd_data = ((0xfU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                         ? vlSelf->__PVT__actLut__DOT__lut_mem_15
                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                         : ((0xeU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                             ? vlSelf->__PVT__actLut__DOT__lut_mem_14
                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                             : ((0xdU 
                                                 == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                 ? 
                                                vlSelf->__PVT__actLut__DOT__lut_mem_13
                                                [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                  ? 
                                                 vlSelf->__PVT__actLut__DOT__lut_mem_12
                                                 [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__actLut__DOT__lut_mem_11
                                                  [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                    ? 
                                                   vlSelf->__PVT__actLut__DOT__lut_mem_10
                                                   [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                     ? 
                                                    vlSelf->__PVT__actLut__DOT__lut_mem_9
                                                    [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                      ? 
                                                     vlSelf->__PVT__actLut__DOT__lut_mem_8
                                                     [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                       ? 
                                                      vlSelf->__PVT__actLut__DOT__lut_mem_7
                                                      [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                        ? 
                                                       vlSelf->__PVT__actLut__DOT__lut_mem_6
                                                       [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                         ? 
                                                        vlSelf->__PVT__actLut__DOT__lut_mem_5
                                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                          ? 
                                                         vlSelf->__PVT__actLut__DOT__lut_mem_4
                                                         [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                           ? 
                                                          vlSelf->__PVT__actLut__DOT__lut_mem_3
                                                          [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                            ? 
                                                           vlSelf->__PVT__actLut__DOT__lut_mem_2
                                                           [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                             ? 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_1
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                             : 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_0
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0])))))))))))))));
    vlSelf->__PVT__actLut__DOT___GEN_20 = ((IData)(vlSelf->__PVT__actLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__actLut__DOT__last_write_ack));
    vlSelf->__PVT__s2MultRes = (0x1ffffffffffffULL 
                                & ((IData)(vlSymsp->TOP.io_stall)
                                    ? vlSelf->__VdfgTmp_h017163a2__0
                                    : ((IData)(vlSelf->__PVT__s1Valid)
                                        ? ((IData)(vlSelf->__PVT__s1Direct)
                                            ? (((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__s1Sub 
                                                                                >> 0x20U)))))))) 
                                                << 0x21U) 
                                               | vlSelf->__PVT__s1Sub)
                                            : VL_MULS_QQQ(50, 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QQ(50,33, vlSelf->__PVT__s1Sub)), 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QI(50,17, (IData)(vlSelf->__PVT__s1Mult)))))
                                        : vlSelf->__VdfgTmp_h017163a2__0)));
    vlSelf->__VdfgTmp_h017163a2__0 = (((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__s2MultRes 
                                                                   >> 0x30U))))) 
                                       << 0x31U) | vlSelf->__PVT__s2MultRes);
    vlSelf->__PVT__actLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_1_io_in_valid) {
            if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_1__DOT__io_out_direct_r) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_1__DOT__io_out_direct_r))))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_1_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.observedTpuOut_1 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.observedTpuOut_1))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_1_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_1_io_param))))));
            }
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__linearDataD1 = 0U;
    } else if (vlSelf->__PVT__linearReq) {
        vlSelf->__PVT__linearDataD1 = vlSelf->__PVT__s3Linear;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSelf->__PVT__s2Valid) {
            vlSelf->__PVT__s3Linear = (VL_GTS_IQQ(49, 0x1ffffffffff80ULL, vlSelf->__PVT__shifted)
                                        ? 0x80U : (
                                                   VL_LTS_IQQ(49, 0x7fULL, vlSelf->__PVT__shifted)
                                                    ? 0x7fU
                                                    : 
                                                   (0xffU 
                                                    & (IData)(vlSelf->__PVT__shifted))));
            vlSelf->__PVT__s3ActEn = vlSelf->__PVT__s2ActEn;
        }
        if (vlSelf->__PVT__s1Valid) {
            vlSelf->__PVT__s2Shift = vlSelf->__PVT__s1Shift;
            vlSelf->__PVT__s2ActEn = vlSelf->__PVT__s1ActEn;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__s3Valid = 0U;
        vlSelf->__PVT__s2Valid = 0U;
        vlSelf->__PVT__s1Valid = 0U;
    } else if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        vlSelf->__PVT__s3Valid = vlSelf->__PVT__s2Valid;
        vlSelf->__PVT__s2Valid = vlSelf->__PVT__s1Valid;
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_1_io_in_valid;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_1_io_in_valid) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_1_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_vpu1_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_vpu1_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_vpu1_act_mask))));
        }
    }
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT__rawValid = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG) 
                               | (IData)(vlSelf->__PVT__linearValidD1));
    vlSelf->__PVT___GEN_27 = (((IData)(vlSymsp->TOP.io_stall) 
                               & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                  & (IData)(vlSelf->__PVT__rawValid))) 
                              | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                     & (IData)(vlSelf->__PVT__holdValid))) 
                                 & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->__PVT__linearReq = ((IData)(vlSelf->__PVT__s3Valid) 
                                & ((~ (IData)(vlSelf->__PVT__s3ActEn)) 
                                   & (~ (IData)(vlSymsp->TOP.io_stall))));
    vlSelf->__PVT__actLut_io_rd_en = ((IData)(vlSelf->__PVT__s3Valid) 
                                      & ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                         & (IData)(vlSelf->__PVT__s3ActEn)));
    vlSelf->__PVT__shifted = (0x1ffffffffffffULL & 
                              VL_SHIFTRS_QQI(49,49,5, vlSelf->__PVT__s2MultRes, (IData)(vlSelf->__PVT__s2Shift)));
    vlSelf->__PVT___GEN_22 = (0x7ffU & ((IData)(vlSymsp->TOP.io_stall)
                                         ? (IData)(vlSelf->__PVT__s3Idx)
                                         : ((IData)(vlSelf->__PVT__s2Valid)
                                             ? ((IData)(0x200U) 
                                                + (
                                                   ((VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted) 
                                                     | (VL_GTES_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted) 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__shifted 
                                                                   >> 9U)))) 
                                                    << 0xaU) 
                                                   | (VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted)
                                                       ? 0x200U
                                                       : 
                                                      (VL_LTS_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted)
                                                        ? 0x1ffU
                                                        : 
                                                       (0x3ffU 
                                                        & (IData)(vlSelf->__PVT__shifted))))))
                                             : (IData)(vlSelf->__PVT__s3Idx))));
}

VL_INLINE_OPT void VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_2__0(VComputeUnitE2EHarness_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_2__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_11__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    __Vdlyvval__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_11__v0;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_9__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    __Vdlyvval__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_9__v0;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_8__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    __Vdlyvval__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_8__v0;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    __Vdlyvval__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_7__v0;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    __Vdlyvval__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_1__v0;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    __Vdlyvval__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_6__v0;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    __Vdlyvval__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_2__v0;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    __Vdlyvval__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_3__v0;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    __Vdlyvval__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_4__v0;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    __Vdlyvval__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_0__v0;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_10__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    __Vdlyvval__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_10__v0;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    __Vdlyvval__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_5__v0;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_12__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    __Vdlyvval__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_12__v0;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_13__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    __Vdlyvval__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_13__v0;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_14__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    __Vdlyvval__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_14__v0;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_15__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    __Vdlyvval__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_15__v0;
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0;
    // Body
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_wb_in_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_wb_in_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_wb_in_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_wb_in_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_wb_in_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_wb_in_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_wb_in_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_wb_in_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_wb_in_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_wb_in_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_wb_in_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_wb_in_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_wb_in_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_wb_in_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_wb_in_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_wb_in_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
    }
    if (vlSelf->__PVT__actLut_io_rd_en) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0 
            = (0x3fU & ((IData)(vlSelf->__PVT__s3Idx) 
                        >> 4U));
        vlSelf->__PVT__actLut__DOT__rd_col_delayed 
            = (0xfU & (IData)(vlSelf->__PVT__s3Idx));
    }
    vlSelf->__PVT__actLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__actLut__DOT___GEN_20));
    vlSelf->__PVT__expectedRdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address)))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__rawValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdData = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG)
                                    ? (IData)(vlSelf->__PVT__actLut_io_rd_data)
                                    : (IData)(vlSelf->__PVT__linearDataD1));
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_15__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15[__Vdlyvdim0__actLut__DOT__lut_mem_15__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_14__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_14[__Vdlyvdim0__actLut__DOT__lut_mem_14__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_13__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_13[__Vdlyvdim0__actLut__DOT__lut_mem_13__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_12__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_12[__Vdlyvdim0__actLut__DOT__lut_mem_12__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_5[__Vdlyvdim0__actLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_10__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_10[__Vdlyvdim0__actLut__DOT__lut_mem_10__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_0[__Vdlyvdim0__actLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_4[__Vdlyvdim0__actLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_3[__Vdlyvdim0__actLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_2[__Vdlyvdim0__actLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_6[__Vdlyvdim0__actLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_1[__Vdlyvdim0__actLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_7[__Vdlyvdim0__actLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_8__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_8[__Vdlyvdim0__actLut__DOT__lut_mem_8__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_9__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_9[__Vdlyvdim0__actLut__DOT__lut_mem_9__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_11__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_11[__Vdlyvdim0__actLut__DOT__lut_mem_11__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    }
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT__actLut_io_rd_data = ((0xfU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                         ? vlSelf->__PVT__actLut__DOT__lut_mem_15
                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                         : ((0xeU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                             ? vlSelf->__PVT__actLut__DOT__lut_mem_14
                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                             : ((0xdU 
                                                 == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                 ? 
                                                vlSelf->__PVT__actLut__DOT__lut_mem_13
                                                [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                  ? 
                                                 vlSelf->__PVT__actLut__DOT__lut_mem_12
                                                 [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__actLut__DOT__lut_mem_11
                                                  [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                    ? 
                                                   vlSelf->__PVT__actLut__DOT__lut_mem_10
                                                   [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                     ? 
                                                    vlSelf->__PVT__actLut__DOT__lut_mem_9
                                                    [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                      ? 
                                                     vlSelf->__PVT__actLut__DOT__lut_mem_8
                                                     [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                       ? 
                                                      vlSelf->__PVT__actLut__DOT__lut_mem_7
                                                      [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                        ? 
                                                       vlSelf->__PVT__actLut__DOT__lut_mem_6
                                                       [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                         ? 
                                                        vlSelf->__PVT__actLut__DOT__lut_mem_5
                                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                          ? 
                                                         vlSelf->__PVT__actLut__DOT__lut_mem_4
                                                         [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                           ? 
                                                          vlSelf->__PVT__actLut__DOT__lut_mem_3
                                                          [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                            ? 
                                                           vlSelf->__PVT__actLut__DOT__lut_mem_2
                                                           [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                             ? 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_1
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                             : 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_0
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0])))))))))))))));
    vlSelf->__PVT__actLut__DOT___GEN_20 = ((IData)(vlSelf->__PVT__actLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__actLut__DOT__last_write_ack));
    vlSelf->__PVT__s2MultRes = (0x1ffffffffffffULL 
                                & ((IData)(vlSymsp->TOP.io_stall)
                                    ? vlSelf->__VdfgTmp_h017163a2__0
                                    : ((IData)(vlSelf->__PVT__s1Valid)
                                        ? ((IData)(vlSelf->__PVT__s1Direct)
                                            ? (((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__s1Sub 
                                                                                >> 0x20U)))))))) 
                                                << 0x21U) 
                                               | vlSelf->__PVT__s1Sub)
                                            : VL_MULS_QQQ(50, 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QQ(50,33, vlSelf->__PVT__s1Sub)), 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QI(50,17, (IData)(vlSelf->__PVT__s1Mult)))))
                                        : vlSelf->__VdfgTmp_h017163a2__0)));
    vlSelf->__VdfgTmp_h017163a2__0 = (((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__s2MultRes 
                                                                   >> 0x30U))))) 
                                       << 0x31U) | vlSelf->__PVT__s2MultRes);
    vlSelf->__PVT__actLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_2_io_in_valid) {
            if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_2__DOT__io_out_direct_r) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_2__DOT__io_out_direct_r))))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_2_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.observedTpuOut_2 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.observedTpuOut_2))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_2_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_2_io_param))))));
            }
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__linearDataD1 = 0U;
    } else if (vlSelf->__PVT__linearReq) {
        vlSelf->__PVT__linearDataD1 = vlSelf->__PVT__s3Linear;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSelf->__PVT__s2Valid) {
            vlSelf->__PVT__s3Linear = (VL_GTS_IQQ(49, 0x1ffffffffff80ULL, vlSelf->__PVT__shifted)
                                        ? 0x80U : (
                                                   VL_LTS_IQQ(49, 0x7fULL, vlSelf->__PVT__shifted)
                                                    ? 0x7fU
                                                    : 
                                                   (0xffU 
                                                    & (IData)(vlSelf->__PVT__shifted))));
            vlSelf->__PVT__s3ActEn = vlSelf->__PVT__s2ActEn;
        }
        if (vlSelf->__PVT__s1Valid) {
            vlSelf->__PVT__s2Shift = vlSelf->__PVT__s1Shift;
            vlSelf->__PVT__s2ActEn = vlSelf->__PVT__s1ActEn;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__s3Valid = 0U;
        vlSelf->__PVT__s2Valid = 0U;
        vlSelf->__PVT__s1Valid = 0U;
    } else if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        vlSelf->__PVT__s3Valid = vlSelf->__PVT__s2Valid;
        vlSelf->__PVT__s2Valid = vlSelf->__PVT__s1Valid;
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_2_io_in_valid;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_2_io_in_valid) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_2_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_vpu1_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_vpu1_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_vpu1_act_mask))));
        }
    }
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT__rawValid = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG) 
                               | (IData)(vlSelf->__PVT__linearValidD1));
    vlSelf->__PVT___GEN_27 = (((IData)(vlSymsp->TOP.io_stall) 
                               & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                  & (IData)(vlSelf->__PVT__rawValid))) 
                              | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                     & (IData)(vlSelf->__PVT__holdValid))) 
                                 & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->__PVT__linearReq = ((IData)(vlSelf->__PVT__s3Valid) 
                                & ((~ (IData)(vlSelf->__PVT__s3ActEn)) 
                                   & (~ (IData)(vlSymsp->TOP.io_stall))));
    vlSelf->__PVT__actLut_io_rd_en = ((IData)(vlSelf->__PVT__s3Valid) 
                                      & ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                         & (IData)(vlSelf->__PVT__s3ActEn)));
    vlSelf->__PVT__shifted = (0x1ffffffffffffULL & 
                              VL_SHIFTRS_QQI(49,49,5, vlSelf->__PVT__s2MultRes, (IData)(vlSelf->__PVT__s2Shift)));
    vlSelf->__PVT___GEN_22 = (0x7ffU & ((IData)(vlSymsp->TOP.io_stall)
                                         ? (IData)(vlSelf->__PVT__s3Idx)
                                         : ((IData)(vlSelf->__PVT__s2Valid)
                                             ? ((IData)(0x200U) 
                                                + (
                                                   ((VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted) 
                                                     | (VL_GTES_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted) 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__shifted 
                                                                   >> 9U)))) 
                                                    << 0xaU) 
                                                   | (VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted)
                                                       ? 0x200U
                                                       : 
                                                      (VL_LTS_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted)
                                                        ? 0x1ffU
                                                        : 
                                                       (0x3ffU 
                                                        & (IData)(vlSelf->__PVT__shifted))))))
                                             : (IData)(vlSelf->__PVT__s3Idx))));
}

VL_INLINE_OPT void VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_3__0(VComputeUnitE2EHarness_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_3__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_11__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    __Vdlyvval__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_11__v0;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_9__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    __Vdlyvval__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_9__v0;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_8__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    __Vdlyvval__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_8__v0;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    __Vdlyvval__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_7__v0;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    __Vdlyvval__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_1__v0;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    __Vdlyvval__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_6__v0;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    __Vdlyvval__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_2__v0;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    __Vdlyvval__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_3__v0;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    __Vdlyvval__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_4__v0;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    __Vdlyvval__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_0__v0;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_10__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    __Vdlyvval__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_10__v0;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    __Vdlyvval__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_5__v0;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_12__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    __Vdlyvval__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_12__v0;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_13__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    __Vdlyvval__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_13__v0;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_14__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    __Vdlyvval__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_14__v0;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_15__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    __Vdlyvval__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_15__v0;
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0;
    // Body
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_wb_in_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_wb_in_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_wb_in_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_wb_in_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_wb_in_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_wb_in_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_wb_in_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_wb_in_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_wb_in_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_wb_in_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_wb_in_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_wb_in_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_wb_in_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_wb_in_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_wb_in_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_wb_in_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
    }
    if (vlSelf->__PVT__actLut_io_rd_en) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0 
            = (0x3fU & ((IData)(vlSelf->__PVT__s3Idx) 
                        >> 4U));
        vlSelf->__PVT__actLut__DOT__rd_col_delayed 
            = (0xfU & (IData)(vlSelf->__PVT__s3Idx));
    }
    vlSelf->__PVT__actLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__actLut__DOT___GEN_20));
    vlSelf->__PVT__expectedRdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address)))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__rawValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdData = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG)
                                    ? (IData)(vlSelf->__PVT__actLut_io_rd_data)
                                    : (IData)(vlSelf->__PVT__linearDataD1));
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_15__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15[__Vdlyvdim0__actLut__DOT__lut_mem_15__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_14__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_14[__Vdlyvdim0__actLut__DOT__lut_mem_14__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_13__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_13[__Vdlyvdim0__actLut__DOT__lut_mem_13__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_12__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_12[__Vdlyvdim0__actLut__DOT__lut_mem_12__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_5[__Vdlyvdim0__actLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_10__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_10[__Vdlyvdim0__actLut__DOT__lut_mem_10__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_0[__Vdlyvdim0__actLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_4[__Vdlyvdim0__actLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_3[__Vdlyvdim0__actLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_2[__Vdlyvdim0__actLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_6[__Vdlyvdim0__actLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_1[__Vdlyvdim0__actLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_7[__Vdlyvdim0__actLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_8__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_8[__Vdlyvdim0__actLut__DOT__lut_mem_8__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_9__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_9[__Vdlyvdim0__actLut__DOT__lut_mem_9__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_11__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_11[__Vdlyvdim0__actLut__DOT__lut_mem_11__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    }
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT__actLut_io_rd_data = ((0xfU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                         ? vlSelf->__PVT__actLut__DOT__lut_mem_15
                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                         : ((0xeU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                             ? vlSelf->__PVT__actLut__DOT__lut_mem_14
                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                             : ((0xdU 
                                                 == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                 ? 
                                                vlSelf->__PVT__actLut__DOT__lut_mem_13
                                                [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                  ? 
                                                 vlSelf->__PVT__actLut__DOT__lut_mem_12
                                                 [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__actLut__DOT__lut_mem_11
                                                  [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                    ? 
                                                   vlSelf->__PVT__actLut__DOT__lut_mem_10
                                                   [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                     ? 
                                                    vlSelf->__PVT__actLut__DOT__lut_mem_9
                                                    [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                      ? 
                                                     vlSelf->__PVT__actLut__DOT__lut_mem_8
                                                     [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                       ? 
                                                      vlSelf->__PVT__actLut__DOT__lut_mem_7
                                                      [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                        ? 
                                                       vlSelf->__PVT__actLut__DOT__lut_mem_6
                                                       [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                         ? 
                                                        vlSelf->__PVT__actLut__DOT__lut_mem_5
                                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                          ? 
                                                         vlSelf->__PVT__actLut__DOT__lut_mem_4
                                                         [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                           ? 
                                                          vlSelf->__PVT__actLut__DOT__lut_mem_3
                                                          [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                            ? 
                                                           vlSelf->__PVT__actLut__DOT__lut_mem_2
                                                           [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                             ? 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_1
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                             : 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_0
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0])))))))))))))));
    vlSelf->__PVT__actLut__DOT___GEN_20 = ((IData)(vlSelf->__PVT__actLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__actLut__DOT__last_write_ack));
    vlSelf->__PVT__s2MultRes = (0x1ffffffffffffULL 
                                & ((IData)(vlSymsp->TOP.io_stall)
                                    ? vlSelf->__VdfgTmp_h017163a2__0
                                    : ((IData)(vlSelf->__PVT__s1Valid)
                                        ? ((IData)(vlSelf->__PVT__s1Direct)
                                            ? (((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__s1Sub 
                                                                                >> 0x20U)))))))) 
                                                << 0x21U) 
                                               | vlSelf->__PVT__s1Sub)
                                            : VL_MULS_QQQ(50, 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QQ(50,33, vlSelf->__PVT__s1Sub)), 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QI(50,17, (IData)(vlSelf->__PVT__s1Mult)))))
                                        : vlSelf->__VdfgTmp_h017163a2__0)));
    vlSelf->__VdfgTmp_h017163a2__0 = (((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__s2MultRes 
                                                                   >> 0x30U))))) 
                                       << 0x31U) | vlSelf->__PVT__s2MultRes);
    vlSelf->__PVT__actLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_3_io_in_valid) {
            if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_3__DOT__io_out_direct_r) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_3__DOT__io_out_direct_r))))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_3_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.observedTpuOut_3 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.observedTpuOut_3))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_3_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_3_io_param))))));
            }
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__linearDataD1 = 0U;
    } else if (vlSelf->__PVT__linearReq) {
        vlSelf->__PVT__linearDataD1 = vlSelf->__PVT__s3Linear;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSelf->__PVT__s2Valid) {
            vlSelf->__PVT__s3Linear = (VL_GTS_IQQ(49, 0x1ffffffffff80ULL, vlSelf->__PVT__shifted)
                                        ? 0x80U : (
                                                   VL_LTS_IQQ(49, 0x7fULL, vlSelf->__PVT__shifted)
                                                    ? 0x7fU
                                                    : 
                                                   (0xffU 
                                                    & (IData)(vlSelf->__PVT__shifted))));
            vlSelf->__PVT__s3ActEn = vlSelf->__PVT__s2ActEn;
        }
        if (vlSelf->__PVT__s1Valid) {
            vlSelf->__PVT__s2Shift = vlSelf->__PVT__s1Shift;
            vlSelf->__PVT__s2ActEn = vlSelf->__PVT__s1ActEn;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__s3Valid = 0U;
        vlSelf->__PVT__s2Valid = 0U;
        vlSelf->__PVT__s1Valid = 0U;
    } else if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        vlSelf->__PVT__s3Valid = vlSelf->__PVT__s2Valid;
        vlSelf->__PVT__s2Valid = vlSelf->__PVT__s1Valid;
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_3_io_in_valid;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_3_io_in_valid) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_3_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_vpu1_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_vpu1_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_vpu1_act_mask))));
        }
    }
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT__rawValid = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG) 
                               | (IData)(vlSelf->__PVT__linearValidD1));
    vlSelf->__PVT___GEN_27 = (((IData)(vlSymsp->TOP.io_stall) 
                               & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                  & (IData)(vlSelf->__PVT__rawValid))) 
                              | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                     & (IData)(vlSelf->__PVT__holdValid))) 
                                 & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->__PVT__linearReq = ((IData)(vlSelf->__PVT__s3Valid) 
                                & ((~ (IData)(vlSelf->__PVT__s3ActEn)) 
                                   & (~ (IData)(vlSymsp->TOP.io_stall))));
    vlSelf->__PVT__actLut_io_rd_en = ((IData)(vlSelf->__PVT__s3Valid) 
                                      & ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                         & (IData)(vlSelf->__PVT__s3ActEn)));
    vlSelf->__PVT__shifted = (0x1ffffffffffffULL & 
                              VL_SHIFTRS_QQI(49,49,5, vlSelf->__PVT__s2MultRes, (IData)(vlSelf->__PVT__s2Shift)));
    vlSelf->__PVT___GEN_22 = (0x7ffU & ((IData)(vlSymsp->TOP.io_stall)
                                         ? (IData)(vlSelf->__PVT__s3Idx)
                                         : ((IData)(vlSelf->__PVT__s2Valid)
                                             ? ((IData)(0x200U) 
                                                + (
                                                   ((VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted) 
                                                     | (VL_GTES_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted) 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__shifted 
                                                                   >> 9U)))) 
                                                    << 0xaU) 
                                                   | (VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted)
                                                       ? 0x200U
                                                       : 
                                                      (VL_LTS_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted)
                                                        ? 0x1ffU
                                                        : 
                                                       (0x3ffU 
                                                        & (IData)(vlSelf->__PVT__shifted))))))
                                             : (IData)(vlSelf->__PVT__s3Idx))));
}

VL_INLINE_OPT void VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_4__0(VComputeUnitE2EHarness_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_4__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_11__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    __Vdlyvval__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_11__v0;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_9__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    __Vdlyvval__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_9__v0;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_8__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    __Vdlyvval__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_8__v0;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    __Vdlyvval__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_7__v0;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    __Vdlyvval__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_1__v0;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    __Vdlyvval__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_6__v0;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    __Vdlyvval__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_2__v0;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    __Vdlyvval__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_3__v0;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    __Vdlyvval__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_4__v0;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    __Vdlyvval__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_0__v0;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_10__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    __Vdlyvval__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_10__v0;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    __Vdlyvval__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_5__v0;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_12__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    __Vdlyvval__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_12__v0;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_13__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    __Vdlyvval__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_13__v0;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_14__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    __Vdlyvval__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_14__v0;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_15__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    __Vdlyvval__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_15__v0;
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0;
    // Body
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_wb_in_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_wb_in_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_wb_in_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_wb_in_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_wb_in_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_wb_in_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_wb_in_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_wb_in_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_wb_in_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_wb_in_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_wb_in_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_wb_in_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_wb_in_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_wb_in_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_wb_in_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_wb_in_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
    }
    if (vlSelf->__PVT__actLut_io_rd_en) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0 
            = (0x3fU & ((IData)(vlSelf->__PVT__s3Idx) 
                        >> 4U));
        vlSelf->__PVT__actLut__DOT__rd_col_delayed 
            = (0xfU & (IData)(vlSelf->__PVT__s3Idx));
    }
    vlSelf->__PVT__actLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__actLut__DOT___GEN_20));
    vlSelf->__PVT__expectedRdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address)))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__rawValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdData = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG)
                                    ? (IData)(vlSelf->__PVT__actLut_io_rd_data)
                                    : (IData)(vlSelf->__PVT__linearDataD1));
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_15__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15[__Vdlyvdim0__actLut__DOT__lut_mem_15__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_14__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_14[__Vdlyvdim0__actLut__DOT__lut_mem_14__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_13__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_13[__Vdlyvdim0__actLut__DOT__lut_mem_13__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_12__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_12[__Vdlyvdim0__actLut__DOT__lut_mem_12__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_5[__Vdlyvdim0__actLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_10__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_10[__Vdlyvdim0__actLut__DOT__lut_mem_10__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_0[__Vdlyvdim0__actLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_4[__Vdlyvdim0__actLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_3[__Vdlyvdim0__actLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_2[__Vdlyvdim0__actLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_6[__Vdlyvdim0__actLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_1[__Vdlyvdim0__actLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_7[__Vdlyvdim0__actLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_8__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_8[__Vdlyvdim0__actLut__DOT__lut_mem_8__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_9__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_9[__Vdlyvdim0__actLut__DOT__lut_mem_9__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_11__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_11[__Vdlyvdim0__actLut__DOT__lut_mem_11__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    }
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT__actLut_io_rd_data = ((0xfU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                         ? vlSelf->__PVT__actLut__DOT__lut_mem_15
                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                         : ((0xeU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                             ? vlSelf->__PVT__actLut__DOT__lut_mem_14
                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                             : ((0xdU 
                                                 == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                 ? 
                                                vlSelf->__PVT__actLut__DOT__lut_mem_13
                                                [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                  ? 
                                                 vlSelf->__PVT__actLut__DOT__lut_mem_12
                                                 [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__actLut__DOT__lut_mem_11
                                                  [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                    ? 
                                                   vlSelf->__PVT__actLut__DOT__lut_mem_10
                                                   [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                     ? 
                                                    vlSelf->__PVT__actLut__DOT__lut_mem_9
                                                    [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                      ? 
                                                     vlSelf->__PVT__actLut__DOT__lut_mem_8
                                                     [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                       ? 
                                                      vlSelf->__PVT__actLut__DOT__lut_mem_7
                                                      [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                        ? 
                                                       vlSelf->__PVT__actLut__DOT__lut_mem_6
                                                       [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                         ? 
                                                        vlSelf->__PVT__actLut__DOT__lut_mem_5
                                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                          ? 
                                                         vlSelf->__PVT__actLut__DOT__lut_mem_4
                                                         [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                           ? 
                                                          vlSelf->__PVT__actLut__DOT__lut_mem_3
                                                          [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                            ? 
                                                           vlSelf->__PVT__actLut__DOT__lut_mem_2
                                                           [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                             ? 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_1
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                             : 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_0
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0])))))))))))))));
    vlSelf->__PVT__actLut__DOT___GEN_20 = ((IData)(vlSelf->__PVT__actLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__actLut__DOT__last_write_ack));
    vlSelf->__PVT__s2MultRes = (0x1ffffffffffffULL 
                                & ((IData)(vlSymsp->TOP.io_stall)
                                    ? vlSelf->__VdfgTmp_h017163a2__0
                                    : ((IData)(vlSelf->__PVT__s1Valid)
                                        ? ((IData)(vlSelf->__PVT__s1Direct)
                                            ? (((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__s1Sub 
                                                                                >> 0x20U)))))))) 
                                                << 0x21U) 
                                               | vlSelf->__PVT__s1Sub)
                                            : VL_MULS_QQQ(50, 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QQ(50,33, vlSelf->__PVT__s1Sub)), 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QI(50,17, (IData)(vlSelf->__PVT__s1Mult)))))
                                        : vlSelf->__VdfgTmp_h017163a2__0)));
    vlSelf->__VdfgTmp_h017163a2__0 = (((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__s2MultRes 
                                                                   >> 0x30U))))) 
                                       << 0x31U) | vlSelf->__PVT__s2MultRes);
    vlSelf->__PVT__actLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_4_io_in_valid) {
            if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_4__DOT__io_out_direct_r) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_4__DOT__io_out_direct_r))))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_4_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.observedTpuOut_4 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.observedTpuOut_4))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_4_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_4_io_param))))));
            }
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__linearDataD1 = 0U;
    } else if (vlSelf->__PVT__linearReq) {
        vlSelf->__PVT__linearDataD1 = vlSelf->__PVT__s3Linear;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSelf->__PVT__s2Valid) {
            vlSelf->__PVT__s3Linear = (VL_GTS_IQQ(49, 0x1ffffffffff80ULL, vlSelf->__PVT__shifted)
                                        ? 0x80U : (
                                                   VL_LTS_IQQ(49, 0x7fULL, vlSelf->__PVT__shifted)
                                                    ? 0x7fU
                                                    : 
                                                   (0xffU 
                                                    & (IData)(vlSelf->__PVT__shifted))));
            vlSelf->__PVT__s3ActEn = vlSelf->__PVT__s2ActEn;
        }
        if (vlSelf->__PVT__s1Valid) {
            vlSelf->__PVT__s2Shift = vlSelf->__PVT__s1Shift;
            vlSelf->__PVT__s2ActEn = vlSelf->__PVT__s1ActEn;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__s3Valid = 0U;
        vlSelf->__PVT__s2Valid = 0U;
        vlSelf->__PVT__s1Valid = 0U;
    } else if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        vlSelf->__PVT__s3Valid = vlSelf->__PVT__s2Valid;
        vlSelf->__PVT__s2Valid = vlSelf->__PVT__s1Valid;
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_4_io_in_valid;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_4_io_in_valid) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_4_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_vpu1_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_vpu1_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_vpu1_act_mask))));
        }
    }
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT__rawValid = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG) 
                               | (IData)(vlSelf->__PVT__linearValidD1));
    vlSelf->__PVT___GEN_27 = (((IData)(vlSymsp->TOP.io_stall) 
                               & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                  & (IData)(vlSelf->__PVT__rawValid))) 
                              | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                     & (IData)(vlSelf->__PVT__holdValid))) 
                                 & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->__PVT__linearReq = ((IData)(vlSelf->__PVT__s3Valid) 
                                & ((~ (IData)(vlSelf->__PVT__s3ActEn)) 
                                   & (~ (IData)(vlSymsp->TOP.io_stall))));
    vlSelf->__PVT__actLut_io_rd_en = ((IData)(vlSelf->__PVT__s3Valid) 
                                      & ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                         & (IData)(vlSelf->__PVT__s3ActEn)));
    vlSelf->__PVT__shifted = (0x1ffffffffffffULL & 
                              VL_SHIFTRS_QQI(49,49,5, vlSelf->__PVT__s2MultRes, (IData)(vlSelf->__PVT__s2Shift)));
    vlSelf->__PVT___GEN_22 = (0x7ffU & ((IData)(vlSymsp->TOP.io_stall)
                                         ? (IData)(vlSelf->__PVT__s3Idx)
                                         : ((IData)(vlSelf->__PVT__s2Valid)
                                             ? ((IData)(0x200U) 
                                                + (
                                                   ((VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted) 
                                                     | (VL_GTES_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted) 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__shifted 
                                                                   >> 9U)))) 
                                                    << 0xaU) 
                                                   | (VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted)
                                                       ? 0x200U
                                                       : 
                                                      (VL_LTS_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted)
                                                        ? 0x1ffU
                                                        : 
                                                       (0x3ffU 
                                                        & (IData)(vlSelf->__PVT__shifted))))))
                                             : (IData)(vlSelf->__PVT__s3Idx))));
}

VL_INLINE_OPT void VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_5__0(VComputeUnitE2EHarness_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_5__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_11__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    __Vdlyvval__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_11__v0;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_9__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    __Vdlyvval__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_9__v0;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_8__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    __Vdlyvval__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_8__v0;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    __Vdlyvval__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_7__v0;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    __Vdlyvval__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_1__v0;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    __Vdlyvval__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_6__v0;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    __Vdlyvval__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_2__v0;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    __Vdlyvval__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_3__v0;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    __Vdlyvval__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_4__v0;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    __Vdlyvval__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_0__v0;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_10__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    __Vdlyvval__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_10__v0;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    __Vdlyvval__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_5__v0;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_12__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    __Vdlyvval__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_12__v0;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_13__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    __Vdlyvval__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_13__v0;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_14__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    __Vdlyvval__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_14__v0;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_15__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    __Vdlyvval__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_15__v0;
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0;
    // Body
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_wb_in_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_wb_in_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_wb_in_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_wb_in_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_wb_in_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_wb_in_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_wb_in_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_wb_in_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_wb_in_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_wb_in_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_wb_in_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_wb_in_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_wb_in_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_wb_in_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_wb_in_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_wb_in_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
    }
    if (vlSelf->__PVT__actLut_io_rd_en) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0 
            = (0x3fU & ((IData)(vlSelf->__PVT__s3Idx) 
                        >> 4U));
        vlSelf->__PVT__actLut__DOT__rd_col_delayed 
            = (0xfU & (IData)(vlSelf->__PVT__s3Idx));
    }
    vlSelf->__PVT__actLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__actLut__DOT___GEN_20));
    vlSelf->__PVT__expectedRdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address)))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__rawValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdData = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG)
                                    ? (IData)(vlSelf->__PVT__actLut_io_rd_data)
                                    : (IData)(vlSelf->__PVT__linearDataD1));
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_15__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15[__Vdlyvdim0__actLut__DOT__lut_mem_15__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_14__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_14[__Vdlyvdim0__actLut__DOT__lut_mem_14__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_13__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_13[__Vdlyvdim0__actLut__DOT__lut_mem_13__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_12__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_12[__Vdlyvdim0__actLut__DOT__lut_mem_12__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_5[__Vdlyvdim0__actLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_10__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_10[__Vdlyvdim0__actLut__DOT__lut_mem_10__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_0[__Vdlyvdim0__actLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_4[__Vdlyvdim0__actLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_3[__Vdlyvdim0__actLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_2[__Vdlyvdim0__actLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_6[__Vdlyvdim0__actLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_1[__Vdlyvdim0__actLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_7[__Vdlyvdim0__actLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_8__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_8[__Vdlyvdim0__actLut__DOT__lut_mem_8__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_9__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_9[__Vdlyvdim0__actLut__DOT__lut_mem_9__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_11__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_11[__Vdlyvdim0__actLut__DOT__lut_mem_11__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    }
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT__actLut_io_rd_data = ((0xfU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                         ? vlSelf->__PVT__actLut__DOT__lut_mem_15
                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                         : ((0xeU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                             ? vlSelf->__PVT__actLut__DOT__lut_mem_14
                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                             : ((0xdU 
                                                 == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                 ? 
                                                vlSelf->__PVT__actLut__DOT__lut_mem_13
                                                [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                  ? 
                                                 vlSelf->__PVT__actLut__DOT__lut_mem_12
                                                 [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__actLut__DOT__lut_mem_11
                                                  [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                    ? 
                                                   vlSelf->__PVT__actLut__DOT__lut_mem_10
                                                   [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                     ? 
                                                    vlSelf->__PVT__actLut__DOT__lut_mem_9
                                                    [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                      ? 
                                                     vlSelf->__PVT__actLut__DOT__lut_mem_8
                                                     [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                       ? 
                                                      vlSelf->__PVT__actLut__DOT__lut_mem_7
                                                      [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                        ? 
                                                       vlSelf->__PVT__actLut__DOT__lut_mem_6
                                                       [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                         ? 
                                                        vlSelf->__PVT__actLut__DOT__lut_mem_5
                                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                          ? 
                                                         vlSelf->__PVT__actLut__DOT__lut_mem_4
                                                         [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                           ? 
                                                          vlSelf->__PVT__actLut__DOT__lut_mem_3
                                                          [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                            ? 
                                                           vlSelf->__PVT__actLut__DOT__lut_mem_2
                                                           [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                             ? 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_1
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                             : 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_0
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0])))))))))))))));
    vlSelf->__PVT__actLut__DOT___GEN_20 = ((IData)(vlSelf->__PVT__actLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__actLut__DOT__last_write_ack));
    vlSelf->__PVT__s2MultRes = (0x1ffffffffffffULL 
                                & ((IData)(vlSymsp->TOP.io_stall)
                                    ? vlSelf->__VdfgTmp_h017163a2__0
                                    : ((IData)(vlSelf->__PVT__s1Valid)
                                        ? ((IData)(vlSelf->__PVT__s1Direct)
                                            ? (((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__s1Sub 
                                                                                >> 0x20U)))))))) 
                                                << 0x21U) 
                                               | vlSelf->__PVT__s1Sub)
                                            : VL_MULS_QQQ(50, 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QQ(50,33, vlSelf->__PVT__s1Sub)), 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QI(50,17, (IData)(vlSelf->__PVT__s1Mult)))))
                                        : vlSelf->__VdfgTmp_h017163a2__0)));
    vlSelf->__VdfgTmp_h017163a2__0 = (((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__s2MultRes 
                                                                   >> 0x30U))))) 
                                       << 0x31U) | vlSelf->__PVT__s2MultRes);
    vlSelf->__PVT__actLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_5_io_in_valid) {
            if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_5__DOT__io_out_direct_r) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_5__DOT__io_out_direct_r))))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_5_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.observedTpuOut_5 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.observedTpuOut_5))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_5_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_5_io_param))))));
            }
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__linearDataD1 = 0U;
    } else if (vlSelf->__PVT__linearReq) {
        vlSelf->__PVT__linearDataD1 = vlSelf->__PVT__s3Linear;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSelf->__PVT__s2Valid) {
            vlSelf->__PVT__s3Linear = (VL_GTS_IQQ(49, 0x1ffffffffff80ULL, vlSelf->__PVT__shifted)
                                        ? 0x80U : (
                                                   VL_LTS_IQQ(49, 0x7fULL, vlSelf->__PVT__shifted)
                                                    ? 0x7fU
                                                    : 
                                                   (0xffU 
                                                    & (IData)(vlSelf->__PVT__shifted))));
            vlSelf->__PVT__s3ActEn = vlSelf->__PVT__s2ActEn;
        }
        if (vlSelf->__PVT__s1Valid) {
            vlSelf->__PVT__s2Shift = vlSelf->__PVT__s1Shift;
            vlSelf->__PVT__s2ActEn = vlSelf->__PVT__s1ActEn;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__s3Valid = 0U;
        vlSelf->__PVT__s2Valid = 0U;
        vlSelf->__PVT__s1Valid = 0U;
    } else if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        vlSelf->__PVT__s3Valid = vlSelf->__PVT__s2Valid;
        vlSelf->__PVT__s2Valid = vlSelf->__PVT__s1Valid;
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_5_io_in_valid;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_5_io_in_valid) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_5_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_vpu1_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_vpu1_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_vpu1_act_mask))));
        }
    }
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT__rawValid = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG) 
                               | (IData)(vlSelf->__PVT__linearValidD1));
    vlSelf->__PVT___GEN_27 = (((IData)(vlSymsp->TOP.io_stall) 
                               & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                  & (IData)(vlSelf->__PVT__rawValid))) 
                              | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                     & (IData)(vlSelf->__PVT__holdValid))) 
                                 & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->__PVT__linearReq = ((IData)(vlSelf->__PVT__s3Valid) 
                                & ((~ (IData)(vlSelf->__PVT__s3ActEn)) 
                                   & (~ (IData)(vlSymsp->TOP.io_stall))));
    vlSelf->__PVT__actLut_io_rd_en = ((IData)(vlSelf->__PVT__s3Valid) 
                                      & ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                         & (IData)(vlSelf->__PVT__s3ActEn)));
    vlSelf->__PVT__shifted = (0x1ffffffffffffULL & 
                              VL_SHIFTRS_QQI(49,49,5, vlSelf->__PVT__s2MultRes, (IData)(vlSelf->__PVT__s2Shift)));
    vlSelf->__PVT___GEN_22 = (0x7ffU & ((IData)(vlSymsp->TOP.io_stall)
                                         ? (IData)(vlSelf->__PVT__s3Idx)
                                         : ((IData)(vlSelf->__PVT__s2Valid)
                                             ? ((IData)(0x200U) 
                                                + (
                                                   ((VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted) 
                                                     | (VL_GTES_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted) 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__shifted 
                                                                   >> 9U)))) 
                                                    << 0xaU) 
                                                   | (VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted)
                                                       ? 0x200U
                                                       : 
                                                      (VL_LTS_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted)
                                                        ? 0x1ffU
                                                        : 
                                                       (0x3ffU 
                                                        & (IData)(vlSelf->__PVT__shifted))))))
                                             : (IData)(vlSelf->__PVT__s3Idx))));
}

VL_INLINE_OPT void VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_6__0(VComputeUnitE2EHarness_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_6__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_11__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    __Vdlyvval__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_11__v0;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_9__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    __Vdlyvval__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_9__v0;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_8__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    __Vdlyvval__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_8__v0;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    __Vdlyvval__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_7__v0;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    __Vdlyvval__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_1__v0;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    __Vdlyvval__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_6__v0;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    __Vdlyvval__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_2__v0;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    __Vdlyvval__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_3__v0;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    __Vdlyvval__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_4__v0;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    __Vdlyvval__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_0__v0;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_10__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    __Vdlyvval__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_10__v0;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    __Vdlyvval__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_5__v0;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_12__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    __Vdlyvval__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_12__v0;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_13__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    __Vdlyvval__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_13__v0;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_14__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    __Vdlyvval__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_14__v0;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_15__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    __Vdlyvval__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_15__v0;
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0;
    // Body
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_wb_in_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_wb_in_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_wb_in_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_wb_in_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_wb_in_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_wb_in_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_wb_in_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_wb_in_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_wb_in_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_wb_in_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_wb_in_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_wb_in_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_wb_in_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_wb_in_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_wb_in_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_wb_in_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
    }
    if (vlSelf->__PVT__actLut_io_rd_en) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0 
            = (0x3fU & ((IData)(vlSelf->__PVT__s3Idx) 
                        >> 4U));
        vlSelf->__PVT__actLut__DOT__rd_col_delayed 
            = (0xfU & (IData)(vlSelf->__PVT__s3Idx));
    }
    vlSelf->__PVT__actLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__actLut__DOT___GEN_20));
    vlSelf->__PVT__expectedRdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address)))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__rawValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdData = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG)
                                    ? (IData)(vlSelf->__PVT__actLut_io_rd_data)
                                    : (IData)(vlSelf->__PVT__linearDataD1));
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_15__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15[__Vdlyvdim0__actLut__DOT__lut_mem_15__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_14__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_14[__Vdlyvdim0__actLut__DOT__lut_mem_14__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_13__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_13[__Vdlyvdim0__actLut__DOT__lut_mem_13__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_12__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_12[__Vdlyvdim0__actLut__DOT__lut_mem_12__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_5[__Vdlyvdim0__actLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_10__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_10[__Vdlyvdim0__actLut__DOT__lut_mem_10__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_0[__Vdlyvdim0__actLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_4[__Vdlyvdim0__actLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_3[__Vdlyvdim0__actLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_2[__Vdlyvdim0__actLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_6[__Vdlyvdim0__actLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_1[__Vdlyvdim0__actLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_7[__Vdlyvdim0__actLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_8__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_8[__Vdlyvdim0__actLut__DOT__lut_mem_8__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_9__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_9[__Vdlyvdim0__actLut__DOT__lut_mem_9__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_11__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_11[__Vdlyvdim0__actLut__DOT__lut_mem_11__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    }
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT__actLut_io_rd_data = ((0xfU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                         ? vlSelf->__PVT__actLut__DOT__lut_mem_15
                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                         : ((0xeU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                             ? vlSelf->__PVT__actLut__DOT__lut_mem_14
                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                             : ((0xdU 
                                                 == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                 ? 
                                                vlSelf->__PVT__actLut__DOT__lut_mem_13
                                                [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                  ? 
                                                 vlSelf->__PVT__actLut__DOT__lut_mem_12
                                                 [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__actLut__DOT__lut_mem_11
                                                  [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                    ? 
                                                   vlSelf->__PVT__actLut__DOT__lut_mem_10
                                                   [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                     ? 
                                                    vlSelf->__PVT__actLut__DOT__lut_mem_9
                                                    [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                      ? 
                                                     vlSelf->__PVT__actLut__DOT__lut_mem_8
                                                     [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                       ? 
                                                      vlSelf->__PVT__actLut__DOT__lut_mem_7
                                                      [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                        ? 
                                                       vlSelf->__PVT__actLut__DOT__lut_mem_6
                                                       [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                         ? 
                                                        vlSelf->__PVT__actLut__DOT__lut_mem_5
                                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                          ? 
                                                         vlSelf->__PVT__actLut__DOT__lut_mem_4
                                                         [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                           ? 
                                                          vlSelf->__PVT__actLut__DOT__lut_mem_3
                                                          [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                            ? 
                                                           vlSelf->__PVT__actLut__DOT__lut_mem_2
                                                           [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                             ? 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_1
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                             : 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_0
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0])))))))))))))));
    vlSelf->__PVT__actLut__DOT___GEN_20 = ((IData)(vlSelf->__PVT__actLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__actLut__DOT__last_write_ack));
    vlSelf->__PVT__s2MultRes = (0x1ffffffffffffULL 
                                & ((IData)(vlSymsp->TOP.io_stall)
                                    ? vlSelf->__VdfgTmp_h017163a2__0
                                    : ((IData)(vlSelf->__PVT__s1Valid)
                                        ? ((IData)(vlSelf->__PVT__s1Direct)
                                            ? (((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__s1Sub 
                                                                                >> 0x20U)))))))) 
                                                << 0x21U) 
                                               | vlSelf->__PVT__s1Sub)
                                            : VL_MULS_QQQ(50, 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QQ(50,33, vlSelf->__PVT__s1Sub)), 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QI(50,17, (IData)(vlSelf->__PVT__s1Mult)))))
                                        : vlSelf->__VdfgTmp_h017163a2__0)));
    vlSelf->__VdfgTmp_h017163a2__0 = (((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__s2MultRes 
                                                                   >> 0x30U))))) 
                                       << 0x31U) | vlSelf->__PVT__s2MultRes);
    vlSelf->__PVT__actLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_6_io_in_valid) {
            if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_6__DOT__io_out_direct_r) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_6__DOT__io_out_direct_r))))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_6_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.observedTpuOut_6 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.observedTpuOut_6))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_6_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_6_io_param))))));
            }
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__linearDataD1 = 0U;
    } else if (vlSelf->__PVT__linearReq) {
        vlSelf->__PVT__linearDataD1 = vlSelf->__PVT__s3Linear;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSelf->__PVT__s2Valid) {
            vlSelf->__PVT__s3Linear = (VL_GTS_IQQ(49, 0x1ffffffffff80ULL, vlSelf->__PVT__shifted)
                                        ? 0x80U : (
                                                   VL_LTS_IQQ(49, 0x7fULL, vlSelf->__PVT__shifted)
                                                    ? 0x7fU
                                                    : 
                                                   (0xffU 
                                                    & (IData)(vlSelf->__PVT__shifted))));
            vlSelf->__PVT__s3ActEn = vlSelf->__PVT__s2ActEn;
        }
        if (vlSelf->__PVT__s1Valid) {
            vlSelf->__PVT__s2Shift = vlSelf->__PVT__s1Shift;
            vlSelf->__PVT__s2ActEn = vlSelf->__PVT__s1ActEn;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__s3Valid = 0U;
        vlSelf->__PVT__s2Valid = 0U;
        vlSelf->__PVT__s1Valid = 0U;
    } else if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        vlSelf->__PVT__s3Valid = vlSelf->__PVT__s2Valid;
        vlSelf->__PVT__s2Valid = vlSelf->__PVT__s1Valid;
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_6_io_in_valid;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_6_io_in_valid) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_6_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_vpu1_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_vpu1_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_vpu1_act_mask))));
        }
    }
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT__rawValid = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG) 
                               | (IData)(vlSelf->__PVT__linearValidD1));
    vlSelf->__PVT___GEN_27 = (((IData)(vlSymsp->TOP.io_stall) 
                               & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                  & (IData)(vlSelf->__PVT__rawValid))) 
                              | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                     & (IData)(vlSelf->__PVT__holdValid))) 
                                 & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->__PVT__linearReq = ((IData)(vlSelf->__PVT__s3Valid) 
                                & ((~ (IData)(vlSelf->__PVT__s3ActEn)) 
                                   & (~ (IData)(vlSymsp->TOP.io_stall))));
    vlSelf->__PVT__actLut_io_rd_en = ((IData)(vlSelf->__PVT__s3Valid) 
                                      & ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                         & (IData)(vlSelf->__PVT__s3ActEn)));
    vlSelf->__PVT__shifted = (0x1ffffffffffffULL & 
                              VL_SHIFTRS_QQI(49,49,5, vlSelf->__PVT__s2MultRes, (IData)(vlSelf->__PVT__s2Shift)));
    vlSelf->__PVT___GEN_22 = (0x7ffU & ((IData)(vlSymsp->TOP.io_stall)
                                         ? (IData)(vlSelf->__PVT__s3Idx)
                                         : ((IData)(vlSelf->__PVT__s2Valid)
                                             ? ((IData)(0x200U) 
                                                + (
                                                   ((VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted) 
                                                     | (VL_GTES_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted) 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__shifted 
                                                                   >> 9U)))) 
                                                    << 0xaU) 
                                                   | (VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted)
                                                       ? 0x200U
                                                       : 
                                                      (VL_LTS_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted)
                                                        ? 0x1ffU
                                                        : 
                                                       (0x3ffU 
                                                        & (IData)(vlSelf->__PVT__shifted))))))
                                             : (IData)(vlSelf->__PVT__s3Idx))));
}

VL_INLINE_OPT void VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_7__0(VComputeUnitE2EHarness_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_7__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_11__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    __Vdlyvval__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_11__v0;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_9__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    __Vdlyvval__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_9__v0;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_8__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    __Vdlyvval__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_8__v0;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    __Vdlyvval__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_7__v0;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    __Vdlyvval__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_1__v0;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    __Vdlyvval__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_6__v0;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    __Vdlyvval__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_2__v0;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    __Vdlyvval__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_3__v0;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    __Vdlyvval__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_4__v0;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    __Vdlyvval__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_0__v0;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_10__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    __Vdlyvval__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_10__v0;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    __Vdlyvval__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_5__v0;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_12__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    __Vdlyvval__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_12__v0;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_13__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    __Vdlyvval__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_13__v0;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_14__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    __Vdlyvval__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_14__v0;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_15__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    __Vdlyvval__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_15__v0;
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0;
    // Body
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_wb_in_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_wb_in_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_wb_in_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_wb_in_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_wb_in_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_wb_in_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_wb_in_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_wb_in_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_wb_in_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_wb_in_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_wb_in_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_wb_in_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_wb_in_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_wb_in_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_wb_in_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_wb_in_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
    }
    if (vlSelf->__PVT__actLut_io_rd_en) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0 
            = (0x3fU & ((IData)(vlSelf->__PVT__s3Idx) 
                        >> 4U));
        vlSelf->__PVT__actLut__DOT__rd_col_delayed 
            = (0xfU & (IData)(vlSelf->__PVT__s3Idx));
    }
    vlSelf->__PVT__actLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__actLut__DOT___GEN_20));
    vlSelf->__PVT__expectedRdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address)))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__rawValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdData = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG)
                                    ? (IData)(vlSelf->__PVT__actLut_io_rd_data)
                                    : (IData)(vlSelf->__PVT__linearDataD1));
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_15__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15[__Vdlyvdim0__actLut__DOT__lut_mem_15__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_14__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_14[__Vdlyvdim0__actLut__DOT__lut_mem_14__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_13__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_13[__Vdlyvdim0__actLut__DOT__lut_mem_13__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_12__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_12[__Vdlyvdim0__actLut__DOT__lut_mem_12__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_5[__Vdlyvdim0__actLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_10__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_10[__Vdlyvdim0__actLut__DOT__lut_mem_10__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_0[__Vdlyvdim0__actLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_4[__Vdlyvdim0__actLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_3[__Vdlyvdim0__actLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_2[__Vdlyvdim0__actLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_6[__Vdlyvdim0__actLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_1[__Vdlyvdim0__actLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_7[__Vdlyvdim0__actLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_8__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_8[__Vdlyvdim0__actLut__DOT__lut_mem_8__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_9__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_9[__Vdlyvdim0__actLut__DOT__lut_mem_9__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_11__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_11[__Vdlyvdim0__actLut__DOT__lut_mem_11__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    }
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT__actLut_io_rd_data = ((0xfU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                         ? vlSelf->__PVT__actLut__DOT__lut_mem_15
                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                         : ((0xeU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                             ? vlSelf->__PVT__actLut__DOT__lut_mem_14
                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                             : ((0xdU 
                                                 == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                 ? 
                                                vlSelf->__PVT__actLut__DOT__lut_mem_13
                                                [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                  ? 
                                                 vlSelf->__PVT__actLut__DOT__lut_mem_12
                                                 [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__actLut__DOT__lut_mem_11
                                                  [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                    ? 
                                                   vlSelf->__PVT__actLut__DOT__lut_mem_10
                                                   [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                     ? 
                                                    vlSelf->__PVT__actLut__DOT__lut_mem_9
                                                    [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                      ? 
                                                     vlSelf->__PVT__actLut__DOT__lut_mem_8
                                                     [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                       ? 
                                                      vlSelf->__PVT__actLut__DOT__lut_mem_7
                                                      [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                        ? 
                                                       vlSelf->__PVT__actLut__DOT__lut_mem_6
                                                       [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                         ? 
                                                        vlSelf->__PVT__actLut__DOT__lut_mem_5
                                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                          ? 
                                                         vlSelf->__PVT__actLut__DOT__lut_mem_4
                                                         [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                           ? 
                                                          vlSelf->__PVT__actLut__DOT__lut_mem_3
                                                          [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                            ? 
                                                           vlSelf->__PVT__actLut__DOT__lut_mem_2
                                                           [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                             ? 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_1
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                             : 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_0
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0])))))))))))))));
    vlSelf->__PVT__actLut__DOT___GEN_20 = ((IData)(vlSelf->__PVT__actLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__actLut__DOT__last_write_ack));
    vlSelf->__PVT__s2MultRes = (0x1ffffffffffffULL 
                                & ((IData)(vlSymsp->TOP.io_stall)
                                    ? vlSelf->__VdfgTmp_h017163a2__0
                                    : ((IData)(vlSelf->__PVT__s1Valid)
                                        ? ((IData)(vlSelf->__PVT__s1Direct)
                                            ? (((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__s1Sub 
                                                                                >> 0x20U)))))))) 
                                                << 0x21U) 
                                               | vlSelf->__PVT__s1Sub)
                                            : VL_MULS_QQQ(50, 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QQ(50,33, vlSelf->__PVT__s1Sub)), 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QI(50,17, (IData)(vlSelf->__PVT__s1Mult)))))
                                        : vlSelf->__VdfgTmp_h017163a2__0)));
    vlSelf->__VdfgTmp_h017163a2__0 = (((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__s2MultRes 
                                                                   >> 0x30U))))) 
                                       << 0x31U) | vlSelf->__PVT__s2MultRes);
    vlSelf->__PVT__actLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_7_io_in_valid) {
            if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_7__DOT__io_out_direct_r) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_7__DOT__io_out_direct_r))))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_7_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.observedTpuOut_7 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.observedTpuOut_7))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_7_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_7_io_param))))));
            }
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__linearDataD1 = 0U;
    } else if (vlSelf->__PVT__linearReq) {
        vlSelf->__PVT__linearDataD1 = vlSelf->__PVT__s3Linear;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSelf->__PVT__s2Valid) {
            vlSelf->__PVT__s3Linear = (VL_GTS_IQQ(49, 0x1ffffffffff80ULL, vlSelf->__PVT__shifted)
                                        ? 0x80U : (
                                                   VL_LTS_IQQ(49, 0x7fULL, vlSelf->__PVT__shifted)
                                                    ? 0x7fU
                                                    : 
                                                   (0xffU 
                                                    & (IData)(vlSelf->__PVT__shifted))));
            vlSelf->__PVT__s3ActEn = vlSelf->__PVT__s2ActEn;
        }
        if (vlSelf->__PVT__s1Valid) {
            vlSelf->__PVT__s2Shift = vlSelf->__PVT__s1Shift;
            vlSelf->__PVT__s2ActEn = vlSelf->__PVT__s1ActEn;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__s3Valid = 0U;
        vlSelf->__PVT__s2Valid = 0U;
        vlSelf->__PVT__s1Valid = 0U;
    } else if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        vlSelf->__PVT__s3Valid = vlSelf->__PVT__s2Valid;
        vlSelf->__PVT__s2Valid = vlSelf->__PVT__s1Valid;
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_7_io_in_valid;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_7_io_in_valid) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_7_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_vpu1_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_vpu1_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_vpu1_act_mask))));
        }
    }
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT__rawValid = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG) 
                               | (IData)(vlSelf->__PVT__linearValidD1));
    vlSelf->__PVT___GEN_27 = (((IData)(vlSymsp->TOP.io_stall) 
                               & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                  & (IData)(vlSelf->__PVT__rawValid))) 
                              | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                     & (IData)(vlSelf->__PVT__holdValid))) 
                                 & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->__PVT__linearReq = ((IData)(vlSelf->__PVT__s3Valid) 
                                & ((~ (IData)(vlSelf->__PVT__s3ActEn)) 
                                   & (~ (IData)(vlSymsp->TOP.io_stall))));
    vlSelf->__PVT__actLut_io_rd_en = ((IData)(vlSelf->__PVT__s3Valid) 
                                      & ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                         & (IData)(vlSelf->__PVT__s3ActEn)));
    vlSelf->__PVT__shifted = (0x1ffffffffffffULL & 
                              VL_SHIFTRS_QQI(49,49,5, vlSelf->__PVT__s2MultRes, (IData)(vlSelf->__PVT__s2Shift)));
    vlSelf->__PVT___GEN_22 = (0x7ffU & ((IData)(vlSymsp->TOP.io_stall)
                                         ? (IData)(vlSelf->__PVT__s3Idx)
                                         : ((IData)(vlSelf->__PVT__s2Valid)
                                             ? ((IData)(0x200U) 
                                                + (
                                                   ((VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted) 
                                                     | (VL_GTES_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted) 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__shifted 
                                                                   >> 9U)))) 
                                                    << 0xaU) 
                                                   | (VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted)
                                                       ? 0x200U
                                                       : 
                                                      (VL_LTS_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted)
                                                        ? 0x1ffU
                                                        : 
                                                       (0x3ffU 
                                                        & (IData)(vlSelf->__PVT__shifted))))))
                                             : (IData)(vlSelf->__PVT__s3Idx))));
}

VL_INLINE_OPT void VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_8__0(VComputeUnitE2EHarness_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_8__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_11__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    __Vdlyvval__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_11__v0;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_9__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    __Vdlyvval__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_9__v0;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_8__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    __Vdlyvval__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_8__v0;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    __Vdlyvval__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_7__v0;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    __Vdlyvval__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_1__v0;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    __Vdlyvval__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_6__v0;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    __Vdlyvval__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_2__v0;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    __Vdlyvval__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_3__v0;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    __Vdlyvval__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_4__v0;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    __Vdlyvval__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_0__v0;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_10__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    __Vdlyvval__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_10__v0;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    __Vdlyvval__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_5__v0;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_12__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    __Vdlyvval__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_12__v0;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_13__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    __Vdlyvval__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_13__v0;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_14__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    __Vdlyvval__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_14__v0;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_15__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    __Vdlyvval__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_15__v0;
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0;
    // Body
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_wb_in_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_wb_in_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_wb_in_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_wb_in_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_wb_in_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_wb_in_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_wb_in_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_wb_in_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_wb_in_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_wb_in_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_wb_in_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_wb_in_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_wb_in_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_wb_in_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_wb_in_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_wb_in_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
    }
    if (vlSelf->__PVT__actLut_io_rd_en) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0 
            = (0x3fU & ((IData)(vlSelf->__PVT__s3Idx) 
                        >> 4U));
        vlSelf->__PVT__actLut__DOT__rd_col_delayed 
            = (0xfU & (IData)(vlSelf->__PVT__s3Idx));
    }
    vlSelf->__PVT__actLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__actLut__DOT___GEN_20));
    vlSelf->__PVT__expectedRdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address)))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__rawValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdData = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG)
                                    ? (IData)(vlSelf->__PVT__actLut_io_rd_data)
                                    : (IData)(vlSelf->__PVT__linearDataD1));
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_15__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15[__Vdlyvdim0__actLut__DOT__lut_mem_15__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_14__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_14[__Vdlyvdim0__actLut__DOT__lut_mem_14__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_13__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_13[__Vdlyvdim0__actLut__DOT__lut_mem_13__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_12__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_12[__Vdlyvdim0__actLut__DOT__lut_mem_12__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_5[__Vdlyvdim0__actLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_10__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_10[__Vdlyvdim0__actLut__DOT__lut_mem_10__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_0[__Vdlyvdim0__actLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_4[__Vdlyvdim0__actLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_3[__Vdlyvdim0__actLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_2[__Vdlyvdim0__actLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_6[__Vdlyvdim0__actLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_1[__Vdlyvdim0__actLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_7[__Vdlyvdim0__actLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_8__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_8[__Vdlyvdim0__actLut__DOT__lut_mem_8__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_9__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_9[__Vdlyvdim0__actLut__DOT__lut_mem_9__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_11__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_11[__Vdlyvdim0__actLut__DOT__lut_mem_11__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    }
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT__actLut_io_rd_data = ((0xfU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                         ? vlSelf->__PVT__actLut__DOT__lut_mem_15
                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                         : ((0xeU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                             ? vlSelf->__PVT__actLut__DOT__lut_mem_14
                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                             : ((0xdU 
                                                 == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                 ? 
                                                vlSelf->__PVT__actLut__DOT__lut_mem_13
                                                [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                  ? 
                                                 vlSelf->__PVT__actLut__DOT__lut_mem_12
                                                 [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__actLut__DOT__lut_mem_11
                                                  [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                    ? 
                                                   vlSelf->__PVT__actLut__DOT__lut_mem_10
                                                   [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                     ? 
                                                    vlSelf->__PVT__actLut__DOT__lut_mem_9
                                                    [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                      ? 
                                                     vlSelf->__PVT__actLut__DOT__lut_mem_8
                                                     [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                       ? 
                                                      vlSelf->__PVT__actLut__DOT__lut_mem_7
                                                      [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                        ? 
                                                       vlSelf->__PVT__actLut__DOT__lut_mem_6
                                                       [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                         ? 
                                                        vlSelf->__PVT__actLut__DOT__lut_mem_5
                                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                          ? 
                                                         vlSelf->__PVT__actLut__DOT__lut_mem_4
                                                         [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                           ? 
                                                          vlSelf->__PVT__actLut__DOT__lut_mem_3
                                                          [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                            ? 
                                                           vlSelf->__PVT__actLut__DOT__lut_mem_2
                                                           [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                             ? 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_1
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                             : 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_0
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0])))))))))))))));
    vlSelf->__PVT__actLut__DOT___GEN_20 = ((IData)(vlSelf->__PVT__actLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__actLut__DOT__last_write_ack));
    vlSelf->__PVT__s2MultRes = (0x1ffffffffffffULL 
                                & ((IData)(vlSymsp->TOP.io_stall)
                                    ? vlSelf->__VdfgTmp_h017163a2__0
                                    : ((IData)(vlSelf->__PVT__s1Valid)
                                        ? ((IData)(vlSelf->__PVT__s1Direct)
                                            ? (((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__s1Sub 
                                                                                >> 0x20U)))))))) 
                                                << 0x21U) 
                                               | vlSelf->__PVT__s1Sub)
                                            : VL_MULS_QQQ(50, 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QQ(50,33, vlSelf->__PVT__s1Sub)), 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QI(50,17, (IData)(vlSelf->__PVT__s1Mult)))))
                                        : vlSelf->__VdfgTmp_h017163a2__0)));
    vlSelf->__VdfgTmp_h017163a2__0 = (((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__s2MultRes 
                                                                   >> 0x30U))))) 
                                       << 0x31U) | vlSelf->__PVT__s2MultRes);
    vlSelf->__PVT__actLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_8_io_in_valid) {
            if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_8__DOT__io_out_direct_r) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_8__DOT__io_out_direct_r))))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_8_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.observedTpuOut_8 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.observedTpuOut_8))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_8_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_8_io_param))))));
            }
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__linearDataD1 = 0U;
    } else if (vlSelf->__PVT__linearReq) {
        vlSelf->__PVT__linearDataD1 = vlSelf->__PVT__s3Linear;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSelf->__PVT__s2Valid) {
            vlSelf->__PVT__s3Linear = (VL_GTS_IQQ(49, 0x1ffffffffff80ULL, vlSelf->__PVT__shifted)
                                        ? 0x80U : (
                                                   VL_LTS_IQQ(49, 0x7fULL, vlSelf->__PVT__shifted)
                                                    ? 0x7fU
                                                    : 
                                                   (0xffU 
                                                    & (IData)(vlSelf->__PVT__shifted))));
            vlSelf->__PVT__s3ActEn = vlSelf->__PVT__s2ActEn;
        }
        if (vlSelf->__PVT__s1Valid) {
            vlSelf->__PVT__s2Shift = vlSelf->__PVT__s1Shift;
            vlSelf->__PVT__s2ActEn = vlSelf->__PVT__s1ActEn;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__s3Valid = 0U;
        vlSelf->__PVT__s2Valid = 0U;
        vlSelf->__PVT__s1Valid = 0U;
    } else if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        vlSelf->__PVT__s3Valid = vlSelf->__PVT__s2Valid;
        vlSelf->__PVT__s2Valid = vlSelf->__PVT__s1Valid;
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_8_io_in_valid;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_8_io_in_valid) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_8_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_vpu1_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_vpu1_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_vpu1_act_mask))));
        }
    }
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT__rawValid = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG) 
                               | (IData)(vlSelf->__PVT__linearValidD1));
    vlSelf->__PVT___GEN_27 = (((IData)(vlSymsp->TOP.io_stall) 
                               & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                  & (IData)(vlSelf->__PVT__rawValid))) 
                              | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                     & (IData)(vlSelf->__PVT__holdValid))) 
                                 & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->__PVT__linearReq = ((IData)(vlSelf->__PVT__s3Valid) 
                                & ((~ (IData)(vlSelf->__PVT__s3ActEn)) 
                                   & (~ (IData)(vlSymsp->TOP.io_stall))));
    vlSelf->__PVT__actLut_io_rd_en = ((IData)(vlSelf->__PVT__s3Valid) 
                                      & ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                         & (IData)(vlSelf->__PVT__s3ActEn)));
    vlSelf->__PVT__shifted = (0x1ffffffffffffULL & 
                              VL_SHIFTRS_QQI(49,49,5, vlSelf->__PVT__s2MultRes, (IData)(vlSelf->__PVT__s2Shift)));
    vlSelf->__PVT___GEN_22 = (0x7ffU & ((IData)(vlSymsp->TOP.io_stall)
                                         ? (IData)(vlSelf->__PVT__s3Idx)
                                         : ((IData)(vlSelf->__PVT__s2Valid)
                                             ? ((IData)(0x200U) 
                                                + (
                                                   ((VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted) 
                                                     | (VL_GTES_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted) 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__shifted 
                                                                   >> 9U)))) 
                                                    << 0xaU) 
                                                   | (VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted)
                                                       ? 0x200U
                                                       : 
                                                      (VL_LTS_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted)
                                                        ? 0x1ffU
                                                        : 
                                                       (0x3ffU 
                                                        & (IData)(vlSelf->__PVT__shifted))))))
                                             : (IData)(vlSelf->__PVT__s3Idx))));
}

VL_INLINE_OPT void VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_9__0(VComputeUnitE2EHarness_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_9__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_11__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    __Vdlyvval__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_11__v0;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_9__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    __Vdlyvval__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_9__v0;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_8__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    __Vdlyvval__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_8__v0;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    __Vdlyvval__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_7__v0;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    __Vdlyvval__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_1__v0;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    __Vdlyvval__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_6__v0;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    __Vdlyvval__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_2__v0;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    __Vdlyvval__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_3__v0;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    __Vdlyvval__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_4__v0;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    __Vdlyvval__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_0__v0;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_10__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    __Vdlyvval__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_10__v0;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    __Vdlyvval__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_5__v0;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_12__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    __Vdlyvval__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_12__v0;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_13__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    __Vdlyvval__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_13__v0;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_14__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    __Vdlyvval__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_14__v0;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_15__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    __Vdlyvval__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_15__v0;
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0;
    // Body
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_wb_in_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_wb_in_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_wb_in_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_wb_in_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_wb_in_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_wb_in_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_wb_in_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_wb_in_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_wb_in_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_wb_in_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_wb_in_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_wb_in_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_wb_in_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_wb_in_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_wb_in_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_wb_in_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
    }
    if (vlSelf->__PVT__actLut_io_rd_en) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0 
            = (0x3fU & ((IData)(vlSelf->__PVT__s3Idx) 
                        >> 4U));
        vlSelf->__PVT__actLut__DOT__rd_col_delayed 
            = (0xfU & (IData)(vlSelf->__PVT__s3Idx));
    }
    vlSelf->__PVT__actLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__actLut__DOT___GEN_20));
    vlSelf->__PVT__expectedRdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address)))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__rawValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdData = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG)
                                    ? (IData)(vlSelf->__PVT__actLut_io_rd_data)
                                    : (IData)(vlSelf->__PVT__linearDataD1));
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_15__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15[__Vdlyvdim0__actLut__DOT__lut_mem_15__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_14__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_14[__Vdlyvdim0__actLut__DOT__lut_mem_14__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_13__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_13[__Vdlyvdim0__actLut__DOT__lut_mem_13__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_12__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_12[__Vdlyvdim0__actLut__DOT__lut_mem_12__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_5[__Vdlyvdim0__actLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_10__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_10[__Vdlyvdim0__actLut__DOT__lut_mem_10__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_0[__Vdlyvdim0__actLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_4[__Vdlyvdim0__actLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_3[__Vdlyvdim0__actLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_2[__Vdlyvdim0__actLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_6[__Vdlyvdim0__actLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_1[__Vdlyvdim0__actLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_7[__Vdlyvdim0__actLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_8__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_8[__Vdlyvdim0__actLut__DOT__lut_mem_8__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_9__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_9[__Vdlyvdim0__actLut__DOT__lut_mem_9__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_11__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_11[__Vdlyvdim0__actLut__DOT__lut_mem_11__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    }
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT__actLut_io_rd_data = ((0xfU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                         ? vlSelf->__PVT__actLut__DOT__lut_mem_15
                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                         : ((0xeU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                             ? vlSelf->__PVT__actLut__DOT__lut_mem_14
                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                             : ((0xdU 
                                                 == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                 ? 
                                                vlSelf->__PVT__actLut__DOT__lut_mem_13
                                                [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                  ? 
                                                 vlSelf->__PVT__actLut__DOT__lut_mem_12
                                                 [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__actLut__DOT__lut_mem_11
                                                  [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                    ? 
                                                   vlSelf->__PVT__actLut__DOT__lut_mem_10
                                                   [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                     ? 
                                                    vlSelf->__PVT__actLut__DOT__lut_mem_9
                                                    [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                      ? 
                                                     vlSelf->__PVT__actLut__DOT__lut_mem_8
                                                     [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                       ? 
                                                      vlSelf->__PVT__actLut__DOT__lut_mem_7
                                                      [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                        ? 
                                                       vlSelf->__PVT__actLut__DOT__lut_mem_6
                                                       [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                         ? 
                                                        vlSelf->__PVT__actLut__DOT__lut_mem_5
                                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                          ? 
                                                         vlSelf->__PVT__actLut__DOT__lut_mem_4
                                                         [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                           ? 
                                                          vlSelf->__PVT__actLut__DOT__lut_mem_3
                                                          [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                            ? 
                                                           vlSelf->__PVT__actLut__DOT__lut_mem_2
                                                           [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                             ? 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_1
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                             : 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_0
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0])))))))))))))));
    vlSelf->__PVT__actLut__DOT___GEN_20 = ((IData)(vlSelf->__PVT__actLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__actLut__DOT__last_write_ack));
    vlSelf->__PVT__s2MultRes = (0x1ffffffffffffULL 
                                & ((IData)(vlSymsp->TOP.io_stall)
                                    ? vlSelf->__VdfgTmp_h017163a2__0
                                    : ((IData)(vlSelf->__PVT__s1Valid)
                                        ? ((IData)(vlSelf->__PVT__s1Direct)
                                            ? (((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__s1Sub 
                                                                                >> 0x20U)))))))) 
                                                << 0x21U) 
                                               | vlSelf->__PVT__s1Sub)
                                            : VL_MULS_QQQ(50, 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QQ(50,33, vlSelf->__PVT__s1Sub)), 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QI(50,17, (IData)(vlSelf->__PVT__s1Mult)))))
                                        : vlSelf->__VdfgTmp_h017163a2__0)));
    vlSelf->__VdfgTmp_h017163a2__0 = (((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__s2MultRes 
                                                                   >> 0x30U))))) 
                                       << 0x31U) | vlSelf->__PVT__s2MultRes);
    vlSelf->__PVT__actLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_9_io_in_valid) {
            if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_9__DOT__io_out_direct_r) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_9__DOT__io_out_direct_r))))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_9_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.observedTpuOut_9 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.observedTpuOut_9))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_9_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_9_io_param))))));
            }
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__linearDataD1 = 0U;
    } else if (vlSelf->__PVT__linearReq) {
        vlSelf->__PVT__linearDataD1 = vlSelf->__PVT__s3Linear;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSelf->__PVT__s2Valid) {
            vlSelf->__PVT__s3Linear = (VL_GTS_IQQ(49, 0x1ffffffffff80ULL, vlSelf->__PVT__shifted)
                                        ? 0x80U : (
                                                   VL_LTS_IQQ(49, 0x7fULL, vlSelf->__PVT__shifted)
                                                    ? 0x7fU
                                                    : 
                                                   (0xffU 
                                                    & (IData)(vlSelf->__PVT__shifted))));
            vlSelf->__PVT__s3ActEn = vlSelf->__PVT__s2ActEn;
        }
        if (vlSelf->__PVT__s1Valid) {
            vlSelf->__PVT__s2Shift = vlSelf->__PVT__s1Shift;
            vlSelf->__PVT__s2ActEn = vlSelf->__PVT__s1ActEn;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__s3Valid = 0U;
        vlSelf->__PVT__s2Valid = 0U;
        vlSelf->__PVT__s1Valid = 0U;
    } else if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        vlSelf->__PVT__s3Valid = vlSelf->__PVT__s2Valid;
        vlSelf->__PVT__s2Valid = vlSelf->__PVT__s1Valid;
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_9_io_in_valid;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_9_io_in_valid) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_9_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_vpu1_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_vpu1_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_vpu1_act_mask))));
        }
    }
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT__rawValid = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG) 
                               | (IData)(vlSelf->__PVT__linearValidD1));
    vlSelf->__PVT___GEN_27 = (((IData)(vlSymsp->TOP.io_stall) 
                               & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                  & (IData)(vlSelf->__PVT__rawValid))) 
                              | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                     & (IData)(vlSelf->__PVT__holdValid))) 
                                 & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->__PVT__linearReq = ((IData)(vlSelf->__PVT__s3Valid) 
                                & ((~ (IData)(vlSelf->__PVT__s3ActEn)) 
                                   & (~ (IData)(vlSymsp->TOP.io_stall))));
    vlSelf->__PVT__actLut_io_rd_en = ((IData)(vlSelf->__PVT__s3Valid) 
                                      & ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                         & (IData)(vlSelf->__PVT__s3ActEn)));
    vlSelf->__PVT__shifted = (0x1ffffffffffffULL & 
                              VL_SHIFTRS_QQI(49,49,5, vlSelf->__PVT__s2MultRes, (IData)(vlSelf->__PVT__s2Shift)));
    vlSelf->__PVT___GEN_22 = (0x7ffU & ((IData)(vlSymsp->TOP.io_stall)
                                         ? (IData)(vlSelf->__PVT__s3Idx)
                                         : ((IData)(vlSelf->__PVT__s2Valid)
                                             ? ((IData)(0x200U) 
                                                + (
                                                   ((VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted) 
                                                     | (VL_GTES_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted) 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__shifted 
                                                                   >> 9U)))) 
                                                    << 0xaU) 
                                                   | (VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted)
                                                       ? 0x200U
                                                       : 
                                                      (VL_LTS_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted)
                                                        ? 0x1ffU
                                                        : 
                                                       (0x3ffU 
                                                        & (IData)(vlSelf->__PVT__shifted))))))
                                             : (IData)(vlSelf->__PVT__s3Idx))));
}

VL_INLINE_OPT void VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_10__0(VComputeUnitE2EHarness_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_10__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_11__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    __Vdlyvval__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_11__v0;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_9__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    __Vdlyvval__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_9__v0;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_8__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    __Vdlyvval__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_8__v0;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    __Vdlyvval__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_7__v0;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    __Vdlyvval__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_1__v0;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    __Vdlyvval__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_6__v0;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    __Vdlyvval__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_2__v0;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    __Vdlyvval__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_3__v0;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    __Vdlyvval__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_4__v0;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    __Vdlyvval__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_0__v0;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_10__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    __Vdlyvval__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_10__v0;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    __Vdlyvval__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_5__v0;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_12__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    __Vdlyvval__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_12__v0;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_13__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    __Vdlyvval__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_13__v0;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_14__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    __Vdlyvval__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_14__v0;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_15__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    __Vdlyvval__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_15__v0;
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0;
    // Body
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_wb_in_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_wb_in_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_wb_in_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_wb_in_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_wb_in_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_wb_in_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_wb_in_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_wb_in_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_wb_in_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_wb_in_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_wb_in_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_wb_in_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_wb_in_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_wb_in_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_wb_in_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_wb_in_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
    }
    if (vlSelf->__PVT__actLut_io_rd_en) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0 
            = (0x3fU & ((IData)(vlSelf->__PVT__s3Idx) 
                        >> 4U));
        vlSelf->__PVT__actLut__DOT__rd_col_delayed 
            = (0xfU & (IData)(vlSelf->__PVT__s3Idx));
    }
    vlSelf->__PVT__actLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__actLut__DOT___GEN_20));
    vlSelf->__PVT__expectedRdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address)))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__rawValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdData = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG)
                                    ? (IData)(vlSelf->__PVT__actLut_io_rd_data)
                                    : (IData)(vlSelf->__PVT__linearDataD1));
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_15__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15[__Vdlyvdim0__actLut__DOT__lut_mem_15__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_14__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_14[__Vdlyvdim0__actLut__DOT__lut_mem_14__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_13__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_13[__Vdlyvdim0__actLut__DOT__lut_mem_13__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_12__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_12[__Vdlyvdim0__actLut__DOT__lut_mem_12__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_5[__Vdlyvdim0__actLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_10__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_10[__Vdlyvdim0__actLut__DOT__lut_mem_10__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_0[__Vdlyvdim0__actLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_4[__Vdlyvdim0__actLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_3[__Vdlyvdim0__actLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_2[__Vdlyvdim0__actLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_6[__Vdlyvdim0__actLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_1[__Vdlyvdim0__actLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_7[__Vdlyvdim0__actLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_8__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_8[__Vdlyvdim0__actLut__DOT__lut_mem_8__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_9__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_9[__Vdlyvdim0__actLut__DOT__lut_mem_9__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_11__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_11[__Vdlyvdim0__actLut__DOT__lut_mem_11__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    }
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT__actLut_io_rd_data = ((0xfU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                         ? vlSelf->__PVT__actLut__DOT__lut_mem_15
                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                         : ((0xeU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                             ? vlSelf->__PVT__actLut__DOT__lut_mem_14
                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                             : ((0xdU 
                                                 == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                 ? 
                                                vlSelf->__PVT__actLut__DOT__lut_mem_13
                                                [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                  ? 
                                                 vlSelf->__PVT__actLut__DOT__lut_mem_12
                                                 [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__actLut__DOT__lut_mem_11
                                                  [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                    ? 
                                                   vlSelf->__PVT__actLut__DOT__lut_mem_10
                                                   [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                     ? 
                                                    vlSelf->__PVT__actLut__DOT__lut_mem_9
                                                    [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                      ? 
                                                     vlSelf->__PVT__actLut__DOT__lut_mem_8
                                                     [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                       ? 
                                                      vlSelf->__PVT__actLut__DOT__lut_mem_7
                                                      [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                        ? 
                                                       vlSelf->__PVT__actLut__DOT__lut_mem_6
                                                       [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                         ? 
                                                        vlSelf->__PVT__actLut__DOT__lut_mem_5
                                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                          ? 
                                                         vlSelf->__PVT__actLut__DOT__lut_mem_4
                                                         [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                           ? 
                                                          vlSelf->__PVT__actLut__DOT__lut_mem_3
                                                          [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                            ? 
                                                           vlSelf->__PVT__actLut__DOT__lut_mem_2
                                                           [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                             ? 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_1
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                             : 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_0
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0])))))))))))))));
    vlSelf->__PVT__actLut__DOT___GEN_20 = ((IData)(vlSelf->__PVT__actLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__actLut__DOT__last_write_ack));
    vlSelf->__PVT__s2MultRes = (0x1ffffffffffffULL 
                                & ((IData)(vlSymsp->TOP.io_stall)
                                    ? vlSelf->__VdfgTmp_h017163a2__0
                                    : ((IData)(vlSelf->__PVT__s1Valid)
                                        ? ((IData)(vlSelf->__PVT__s1Direct)
                                            ? (((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__s1Sub 
                                                                                >> 0x20U)))))))) 
                                                << 0x21U) 
                                               | vlSelf->__PVT__s1Sub)
                                            : VL_MULS_QQQ(50, 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QQ(50,33, vlSelf->__PVT__s1Sub)), 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QI(50,17, (IData)(vlSelf->__PVT__s1Mult)))))
                                        : vlSelf->__VdfgTmp_h017163a2__0)));
    vlSelf->__VdfgTmp_h017163a2__0 = (((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__s2MultRes 
                                                                   >> 0x30U))))) 
                                       << 0x31U) | vlSelf->__PVT__s2MultRes);
    vlSelf->__PVT__actLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_10_io_in_valid) {
            if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_10__DOT__io_out_direct_r) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_10__DOT__io_out_direct_r))))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_10_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.observedTpuOut_10 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.observedTpuOut_10))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_10_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_10_io_param))))));
            }
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__linearDataD1 = 0U;
    } else if (vlSelf->__PVT__linearReq) {
        vlSelf->__PVT__linearDataD1 = vlSelf->__PVT__s3Linear;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSelf->__PVT__s2Valid) {
            vlSelf->__PVT__s3Linear = (VL_GTS_IQQ(49, 0x1ffffffffff80ULL, vlSelf->__PVT__shifted)
                                        ? 0x80U : (
                                                   VL_LTS_IQQ(49, 0x7fULL, vlSelf->__PVT__shifted)
                                                    ? 0x7fU
                                                    : 
                                                   (0xffU 
                                                    & (IData)(vlSelf->__PVT__shifted))));
            vlSelf->__PVT__s3ActEn = vlSelf->__PVT__s2ActEn;
        }
        if (vlSelf->__PVT__s1Valid) {
            vlSelf->__PVT__s2Shift = vlSelf->__PVT__s1Shift;
            vlSelf->__PVT__s2ActEn = vlSelf->__PVT__s1ActEn;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__s3Valid = 0U;
        vlSelf->__PVT__s2Valid = 0U;
        vlSelf->__PVT__s1Valid = 0U;
    } else if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        vlSelf->__PVT__s3Valid = vlSelf->__PVT__s2Valid;
        vlSelf->__PVT__s2Valid = vlSelf->__PVT__s1Valid;
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_10_io_in_valid;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_10_io_in_valid) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_10_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_vpu1_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_vpu1_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_vpu1_act_mask))));
        }
    }
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT__rawValid = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG) 
                               | (IData)(vlSelf->__PVT__linearValidD1));
    vlSelf->__PVT___GEN_27 = (((IData)(vlSymsp->TOP.io_stall) 
                               & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                  & (IData)(vlSelf->__PVT__rawValid))) 
                              | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                     & (IData)(vlSelf->__PVT__holdValid))) 
                                 & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->__PVT__linearReq = ((IData)(vlSelf->__PVT__s3Valid) 
                                & ((~ (IData)(vlSelf->__PVT__s3ActEn)) 
                                   & (~ (IData)(vlSymsp->TOP.io_stall))));
    vlSelf->__PVT__actLut_io_rd_en = ((IData)(vlSelf->__PVT__s3Valid) 
                                      & ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                         & (IData)(vlSelf->__PVT__s3ActEn)));
    vlSelf->__PVT__shifted = (0x1ffffffffffffULL & 
                              VL_SHIFTRS_QQI(49,49,5, vlSelf->__PVT__s2MultRes, (IData)(vlSelf->__PVT__s2Shift)));
    vlSelf->__PVT___GEN_22 = (0x7ffU & ((IData)(vlSymsp->TOP.io_stall)
                                         ? (IData)(vlSelf->__PVT__s3Idx)
                                         : ((IData)(vlSelf->__PVT__s2Valid)
                                             ? ((IData)(0x200U) 
                                                + (
                                                   ((VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted) 
                                                     | (VL_GTES_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted) 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__shifted 
                                                                   >> 9U)))) 
                                                    << 0xaU) 
                                                   | (VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted)
                                                       ? 0x200U
                                                       : 
                                                      (VL_LTS_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted)
                                                        ? 0x1ffU
                                                        : 
                                                       (0x3ffU 
                                                        & (IData)(vlSelf->__PVT__shifted))))))
                                             : (IData)(vlSelf->__PVT__s3Idx))));
}

VL_INLINE_OPT void VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_11__0(VComputeUnitE2EHarness_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_11__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_11__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    __Vdlyvval__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_11__v0;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_9__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    __Vdlyvval__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_9__v0;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_8__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    __Vdlyvval__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_8__v0;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    __Vdlyvval__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_7__v0;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    __Vdlyvval__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_1__v0;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    __Vdlyvval__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_6__v0;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    __Vdlyvval__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_2__v0;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    __Vdlyvval__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_3__v0;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    __Vdlyvval__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_4__v0;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    __Vdlyvval__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_0__v0;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_10__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    __Vdlyvval__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_10__v0;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    __Vdlyvval__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_5__v0;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_12__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    __Vdlyvval__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_12__v0;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_13__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    __Vdlyvval__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_13__v0;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_14__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    __Vdlyvval__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_14__v0;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_15__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    __Vdlyvval__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_15__v0;
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0;
    // Body
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_wb_in_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_wb_in_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_wb_in_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_wb_in_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_wb_in_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_wb_in_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_wb_in_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_wb_in_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_wb_in_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_wb_in_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_wb_in_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_wb_in_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_wb_in_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_wb_in_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_wb_in_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_wb_in_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
    }
    if (vlSelf->__PVT__actLut_io_rd_en) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0 
            = (0x3fU & ((IData)(vlSelf->__PVT__s3Idx) 
                        >> 4U));
        vlSelf->__PVT__actLut__DOT__rd_col_delayed 
            = (0xfU & (IData)(vlSelf->__PVT__s3Idx));
    }
    vlSelf->__PVT__actLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__actLut__DOT___GEN_20));
    vlSelf->__PVT__expectedRdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address)))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__rawValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdData = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG)
                                    ? (IData)(vlSelf->__PVT__actLut_io_rd_data)
                                    : (IData)(vlSelf->__PVT__linearDataD1));
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_15__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15[__Vdlyvdim0__actLut__DOT__lut_mem_15__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_14__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_14[__Vdlyvdim0__actLut__DOT__lut_mem_14__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_13__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_13[__Vdlyvdim0__actLut__DOT__lut_mem_13__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_12__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_12[__Vdlyvdim0__actLut__DOT__lut_mem_12__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_5[__Vdlyvdim0__actLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_10__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_10[__Vdlyvdim0__actLut__DOT__lut_mem_10__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_0[__Vdlyvdim0__actLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_4[__Vdlyvdim0__actLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_3[__Vdlyvdim0__actLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_2[__Vdlyvdim0__actLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_6[__Vdlyvdim0__actLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_1[__Vdlyvdim0__actLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_7[__Vdlyvdim0__actLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_8__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_8[__Vdlyvdim0__actLut__DOT__lut_mem_8__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_9__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_9[__Vdlyvdim0__actLut__DOT__lut_mem_9__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_11__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_11[__Vdlyvdim0__actLut__DOT__lut_mem_11__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    }
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT__actLut_io_rd_data = ((0xfU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                         ? vlSelf->__PVT__actLut__DOT__lut_mem_15
                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                         : ((0xeU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                             ? vlSelf->__PVT__actLut__DOT__lut_mem_14
                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                             : ((0xdU 
                                                 == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                 ? 
                                                vlSelf->__PVT__actLut__DOT__lut_mem_13
                                                [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                  ? 
                                                 vlSelf->__PVT__actLut__DOT__lut_mem_12
                                                 [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__actLut__DOT__lut_mem_11
                                                  [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                    ? 
                                                   vlSelf->__PVT__actLut__DOT__lut_mem_10
                                                   [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                     ? 
                                                    vlSelf->__PVT__actLut__DOT__lut_mem_9
                                                    [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                      ? 
                                                     vlSelf->__PVT__actLut__DOT__lut_mem_8
                                                     [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                       ? 
                                                      vlSelf->__PVT__actLut__DOT__lut_mem_7
                                                      [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                        ? 
                                                       vlSelf->__PVT__actLut__DOT__lut_mem_6
                                                       [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                         ? 
                                                        vlSelf->__PVT__actLut__DOT__lut_mem_5
                                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                          ? 
                                                         vlSelf->__PVT__actLut__DOT__lut_mem_4
                                                         [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                           ? 
                                                          vlSelf->__PVT__actLut__DOT__lut_mem_3
                                                          [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                            ? 
                                                           vlSelf->__PVT__actLut__DOT__lut_mem_2
                                                           [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                             ? 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_1
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                             : 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_0
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0])))))))))))))));
    vlSelf->__PVT__actLut__DOT___GEN_20 = ((IData)(vlSelf->__PVT__actLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__actLut__DOT__last_write_ack));
    vlSelf->__PVT__s2MultRes = (0x1ffffffffffffULL 
                                & ((IData)(vlSymsp->TOP.io_stall)
                                    ? vlSelf->__VdfgTmp_h017163a2__0
                                    : ((IData)(vlSelf->__PVT__s1Valid)
                                        ? ((IData)(vlSelf->__PVT__s1Direct)
                                            ? (((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__s1Sub 
                                                                                >> 0x20U)))))))) 
                                                << 0x21U) 
                                               | vlSelf->__PVT__s1Sub)
                                            : VL_MULS_QQQ(50, 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QQ(50,33, vlSelf->__PVT__s1Sub)), 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QI(50,17, (IData)(vlSelf->__PVT__s1Mult)))))
                                        : vlSelf->__VdfgTmp_h017163a2__0)));
    vlSelf->__VdfgTmp_h017163a2__0 = (((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__s2MultRes 
                                                                   >> 0x30U))))) 
                                       << 0x31U) | vlSelf->__PVT__s2MultRes);
    vlSelf->__PVT__actLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_11_io_in_valid) {
            if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_11__DOT__io_out_direct_r) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_11__DOT__io_out_direct_r))))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_11_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.observedTpuOut_11 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.observedTpuOut_11))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_11_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_11_io_param))))));
            }
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__linearDataD1 = 0U;
    } else if (vlSelf->__PVT__linearReq) {
        vlSelf->__PVT__linearDataD1 = vlSelf->__PVT__s3Linear;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSelf->__PVT__s2Valid) {
            vlSelf->__PVT__s3Linear = (VL_GTS_IQQ(49, 0x1ffffffffff80ULL, vlSelf->__PVT__shifted)
                                        ? 0x80U : (
                                                   VL_LTS_IQQ(49, 0x7fULL, vlSelf->__PVT__shifted)
                                                    ? 0x7fU
                                                    : 
                                                   (0xffU 
                                                    & (IData)(vlSelf->__PVT__shifted))));
            vlSelf->__PVT__s3ActEn = vlSelf->__PVT__s2ActEn;
        }
        if (vlSelf->__PVT__s1Valid) {
            vlSelf->__PVT__s2Shift = vlSelf->__PVT__s1Shift;
            vlSelf->__PVT__s2ActEn = vlSelf->__PVT__s1ActEn;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__s3Valid = 0U;
        vlSelf->__PVT__s2Valid = 0U;
        vlSelf->__PVT__s1Valid = 0U;
    } else if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        vlSelf->__PVT__s3Valid = vlSelf->__PVT__s2Valid;
        vlSelf->__PVT__s2Valid = vlSelf->__PVT__s1Valid;
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_11_io_in_valid;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_11_io_in_valid) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_11_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_vpu1_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_vpu1_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_vpu1_act_mask))));
        }
    }
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT__rawValid = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG) 
                               | (IData)(vlSelf->__PVT__linearValidD1));
    vlSelf->__PVT___GEN_27 = (((IData)(vlSymsp->TOP.io_stall) 
                               & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                  & (IData)(vlSelf->__PVT__rawValid))) 
                              | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                     & (IData)(vlSelf->__PVT__holdValid))) 
                                 & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->__PVT__linearReq = ((IData)(vlSelf->__PVT__s3Valid) 
                                & ((~ (IData)(vlSelf->__PVT__s3ActEn)) 
                                   & (~ (IData)(vlSymsp->TOP.io_stall))));
    vlSelf->__PVT__actLut_io_rd_en = ((IData)(vlSelf->__PVT__s3Valid) 
                                      & ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                         & (IData)(vlSelf->__PVT__s3ActEn)));
    vlSelf->__PVT__shifted = (0x1ffffffffffffULL & 
                              VL_SHIFTRS_QQI(49,49,5, vlSelf->__PVT__s2MultRes, (IData)(vlSelf->__PVT__s2Shift)));
    vlSelf->__PVT___GEN_22 = (0x7ffU & ((IData)(vlSymsp->TOP.io_stall)
                                         ? (IData)(vlSelf->__PVT__s3Idx)
                                         : ((IData)(vlSelf->__PVT__s2Valid)
                                             ? ((IData)(0x200U) 
                                                + (
                                                   ((VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted) 
                                                     | (VL_GTES_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted) 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__shifted 
                                                                   >> 9U)))) 
                                                    << 0xaU) 
                                                   | (VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted)
                                                       ? 0x200U
                                                       : 
                                                      (VL_LTS_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted)
                                                        ? 0x1ffU
                                                        : 
                                                       (0x3ffU 
                                                        & (IData)(vlSelf->__PVT__shifted))))))
                                             : (IData)(vlSelf->__PVT__s3Idx))));
}

VL_INLINE_OPT void VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_12__0(VComputeUnitE2EHarness_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_12__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_11__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    __Vdlyvval__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_11__v0;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_9__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    __Vdlyvval__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_9__v0;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_8__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    __Vdlyvval__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_8__v0;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    __Vdlyvval__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_7__v0;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    __Vdlyvval__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_1__v0;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    __Vdlyvval__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_6__v0;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    __Vdlyvval__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_2__v0;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    __Vdlyvval__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_3__v0;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    __Vdlyvval__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_4__v0;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    __Vdlyvval__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_0__v0;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_10__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    __Vdlyvval__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_10__v0;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    __Vdlyvval__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_5__v0;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_12__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    __Vdlyvval__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_12__v0;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_13__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    __Vdlyvval__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_13__v0;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_14__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    __Vdlyvval__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_14__v0;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_15__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    __Vdlyvval__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_15__v0;
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0;
    // Body
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_wb_in_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_wb_in_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_wb_in_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_wb_in_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_wb_in_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_wb_in_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_wb_in_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_wb_in_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_wb_in_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_wb_in_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_wb_in_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_wb_in_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_wb_in_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_wb_in_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_wb_in_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_wb_in_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
    }
    if (vlSelf->__PVT__actLut_io_rd_en) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0 
            = (0x3fU & ((IData)(vlSelf->__PVT__s3Idx) 
                        >> 4U));
        vlSelf->__PVT__actLut__DOT__rd_col_delayed 
            = (0xfU & (IData)(vlSelf->__PVT__s3Idx));
    }
    vlSelf->__PVT__actLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__actLut__DOT___GEN_20));
    vlSelf->__PVT__expectedRdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address)))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__rawValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdData = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG)
                                    ? (IData)(vlSelf->__PVT__actLut_io_rd_data)
                                    : (IData)(vlSelf->__PVT__linearDataD1));
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_15__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15[__Vdlyvdim0__actLut__DOT__lut_mem_15__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_14__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_14[__Vdlyvdim0__actLut__DOT__lut_mem_14__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_13__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_13[__Vdlyvdim0__actLut__DOT__lut_mem_13__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_12__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_12[__Vdlyvdim0__actLut__DOT__lut_mem_12__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_5[__Vdlyvdim0__actLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_10__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_10[__Vdlyvdim0__actLut__DOT__lut_mem_10__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_0[__Vdlyvdim0__actLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_4[__Vdlyvdim0__actLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_3[__Vdlyvdim0__actLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_2[__Vdlyvdim0__actLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_6[__Vdlyvdim0__actLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_1[__Vdlyvdim0__actLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_7[__Vdlyvdim0__actLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_8__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_8[__Vdlyvdim0__actLut__DOT__lut_mem_8__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_9__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_9[__Vdlyvdim0__actLut__DOT__lut_mem_9__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_11__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_11[__Vdlyvdim0__actLut__DOT__lut_mem_11__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    }
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT__actLut_io_rd_data = ((0xfU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                         ? vlSelf->__PVT__actLut__DOT__lut_mem_15
                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                         : ((0xeU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                             ? vlSelf->__PVT__actLut__DOT__lut_mem_14
                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                             : ((0xdU 
                                                 == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                 ? 
                                                vlSelf->__PVT__actLut__DOT__lut_mem_13
                                                [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                  ? 
                                                 vlSelf->__PVT__actLut__DOT__lut_mem_12
                                                 [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__actLut__DOT__lut_mem_11
                                                  [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                    ? 
                                                   vlSelf->__PVT__actLut__DOT__lut_mem_10
                                                   [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                     ? 
                                                    vlSelf->__PVT__actLut__DOT__lut_mem_9
                                                    [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                      ? 
                                                     vlSelf->__PVT__actLut__DOT__lut_mem_8
                                                     [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                       ? 
                                                      vlSelf->__PVT__actLut__DOT__lut_mem_7
                                                      [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                        ? 
                                                       vlSelf->__PVT__actLut__DOT__lut_mem_6
                                                       [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                         ? 
                                                        vlSelf->__PVT__actLut__DOT__lut_mem_5
                                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                          ? 
                                                         vlSelf->__PVT__actLut__DOT__lut_mem_4
                                                         [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                           ? 
                                                          vlSelf->__PVT__actLut__DOT__lut_mem_3
                                                          [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                            ? 
                                                           vlSelf->__PVT__actLut__DOT__lut_mem_2
                                                           [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                             ? 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_1
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                             : 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_0
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0])))))))))))))));
    vlSelf->__PVT__actLut__DOT___GEN_20 = ((IData)(vlSelf->__PVT__actLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__actLut__DOT__last_write_ack));
    vlSelf->__PVT__s2MultRes = (0x1ffffffffffffULL 
                                & ((IData)(vlSymsp->TOP.io_stall)
                                    ? vlSelf->__VdfgTmp_h017163a2__0
                                    : ((IData)(vlSelf->__PVT__s1Valid)
                                        ? ((IData)(vlSelf->__PVT__s1Direct)
                                            ? (((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__s1Sub 
                                                                                >> 0x20U)))))))) 
                                                << 0x21U) 
                                               | vlSelf->__PVT__s1Sub)
                                            : VL_MULS_QQQ(50, 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QQ(50,33, vlSelf->__PVT__s1Sub)), 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QI(50,17, (IData)(vlSelf->__PVT__s1Mult)))))
                                        : vlSelf->__VdfgTmp_h017163a2__0)));
    vlSelf->__VdfgTmp_h017163a2__0 = (((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__s2MultRes 
                                                                   >> 0x30U))))) 
                                       << 0x31U) | vlSelf->__PVT__s2MultRes);
    vlSelf->__PVT__actLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_12_io_in_valid) {
            if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_12__DOT__io_out_direct_r) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_12__DOT__io_out_direct_r))))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_12_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.observedTpuOut_12 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.observedTpuOut_12))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_12_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_12_io_param))))));
            }
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__linearDataD1 = 0U;
    } else if (vlSelf->__PVT__linearReq) {
        vlSelf->__PVT__linearDataD1 = vlSelf->__PVT__s3Linear;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSelf->__PVT__s2Valid) {
            vlSelf->__PVT__s3Linear = (VL_GTS_IQQ(49, 0x1ffffffffff80ULL, vlSelf->__PVT__shifted)
                                        ? 0x80U : (
                                                   VL_LTS_IQQ(49, 0x7fULL, vlSelf->__PVT__shifted)
                                                    ? 0x7fU
                                                    : 
                                                   (0xffU 
                                                    & (IData)(vlSelf->__PVT__shifted))));
            vlSelf->__PVT__s3ActEn = vlSelf->__PVT__s2ActEn;
        }
        if (vlSelf->__PVT__s1Valid) {
            vlSelf->__PVT__s2Shift = vlSelf->__PVT__s1Shift;
            vlSelf->__PVT__s2ActEn = vlSelf->__PVT__s1ActEn;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__s3Valid = 0U;
        vlSelf->__PVT__s2Valid = 0U;
        vlSelf->__PVT__s1Valid = 0U;
    } else if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        vlSelf->__PVT__s3Valid = vlSelf->__PVT__s2Valid;
        vlSelf->__PVT__s2Valid = vlSelf->__PVT__s1Valid;
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_12_io_in_valid;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_12_io_in_valid) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_12_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_vpu1_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_vpu1_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_vpu1_act_mask))));
        }
    }
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT__rawValid = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG) 
                               | (IData)(vlSelf->__PVT__linearValidD1));
    vlSelf->__PVT___GEN_27 = (((IData)(vlSymsp->TOP.io_stall) 
                               & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                  & (IData)(vlSelf->__PVT__rawValid))) 
                              | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                     & (IData)(vlSelf->__PVT__holdValid))) 
                                 & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->__PVT__linearReq = ((IData)(vlSelf->__PVT__s3Valid) 
                                & ((~ (IData)(vlSelf->__PVT__s3ActEn)) 
                                   & (~ (IData)(vlSymsp->TOP.io_stall))));
    vlSelf->__PVT__actLut_io_rd_en = ((IData)(vlSelf->__PVT__s3Valid) 
                                      & ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                         & (IData)(vlSelf->__PVT__s3ActEn)));
    vlSelf->__PVT__shifted = (0x1ffffffffffffULL & 
                              VL_SHIFTRS_QQI(49,49,5, vlSelf->__PVT__s2MultRes, (IData)(vlSelf->__PVT__s2Shift)));
    vlSelf->__PVT___GEN_22 = (0x7ffU & ((IData)(vlSymsp->TOP.io_stall)
                                         ? (IData)(vlSelf->__PVT__s3Idx)
                                         : ((IData)(vlSelf->__PVT__s2Valid)
                                             ? ((IData)(0x200U) 
                                                + (
                                                   ((VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted) 
                                                     | (VL_GTES_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted) 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__shifted 
                                                                   >> 9U)))) 
                                                    << 0xaU) 
                                                   | (VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted)
                                                       ? 0x200U
                                                       : 
                                                      (VL_LTS_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted)
                                                        ? 0x1ffU
                                                        : 
                                                       (0x3ffU 
                                                        & (IData)(vlSelf->__PVT__shifted))))))
                                             : (IData)(vlSelf->__PVT__s3Idx))));
}

VL_INLINE_OPT void VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_13__0(VComputeUnitE2EHarness_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_13__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_11__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    __Vdlyvval__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_11__v0;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_9__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    __Vdlyvval__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_9__v0;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_8__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    __Vdlyvval__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_8__v0;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    __Vdlyvval__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_7__v0;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    __Vdlyvval__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_1__v0;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    __Vdlyvval__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_6__v0;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    __Vdlyvval__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_2__v0;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    __Vdlyvval__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_3__v0;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    __Vdlyvval__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_4__v0;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    __Vdlyvval__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_0__v0;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_10__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    __Vdlyvval__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_10__v0;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    __Vdlyvval__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_5__v0;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_12__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    __Vdlyvval__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_12__v0;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_13__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    __Vdlyvval__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_13__v0;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_14__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    __Vdlyvval__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_14__v0;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_15__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    __Vdlyvval__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_15__v0;
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0;
    // Body
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_wb_in_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_wb_in_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_wb_in_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_wb_in_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_wb_in_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_wb_in_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_wb_in_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_wb_in_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_wb_in_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_wb_in_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_wb_in_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_wb_in_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_wb_in_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_wb_in_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_wb_in_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_wb_in_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
    }
    if (vlSelf->__PVT__actLut_io_rd_en) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0 
            = (0x3fU & ((IData)(vlSelf->__PVT__s3Idx) 
                        >> 4U));
        vlSelf->__PVT__actLut__DOT__rd_col_delayed 
            = (0xfU & (IData)(vlSelf->__PVT__s3Idx));
    }
    vlSelf->__PVT__actLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__actLut__DOT___GEN_20));
    vlSelf->__PVT__expectedRdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address)))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__rawValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdData = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG)
                                    ? (IData)(vlSelf->__PVT__actLut_io_rd_data)
                                    : (IData)(vlSelf->__PVT__linearDataD1));
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_15__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15[__Vdlyvdim0__actLut__DOT__lut_mem_15__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_14__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_14[__Vdlyvdim0__actLut__DOT__lut_mem_14__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_13__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_13[__Vdlyvdim0__actLut__DOT__lut_mem_13__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_12__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_12[__Vdlyvdim0__actLut__DOT__lut_mem_12__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_5[__Vdlyvdim0__actLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_10__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_10[__Vdlyvdim0__actLut__DOT__lut_mem_10__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_0[__Vdlyvdim0__actLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_4[__Vdlyvdim0__actLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_3[__Vdlyvdim0__actLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_2[__Vdlyvdim0__actLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_6[__Vdlyvdim0__actLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_1[__Vdlyvdim0__actLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_7[__Vdlyvdim0__actLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_8__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_8[__Vdlyvdim0__actLut__DOT__lut_mem_8__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_9__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_9[__Vdlyvdim0__actLut__DOT__lut_mem_9__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_11__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_11[__Vdlyvdim0__actLut__DOT__lut_mem_11__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    }
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT__actLut_io_rd_data = ((0xfU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                         ? vlSelf->__PVT__actLut__DOT__lut_mem_15
                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                         : ((0xeU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                             ? vlSelf->__PVT__actLut__DOT__lut_mem_14
                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                             : ((0xdU 
                                                 == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                 ? 
                                                vlSelf->__PVT__actLut__DOT__lut_mem_13
                                                [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                  ? 
                                                 vlSelf->__PVT__actLut__DOT__lut_mem_12
                                                 [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__actLut__DOT__lut_mem_11
                                                  [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                    ? 
                                                   vlSelf->__PVT__actLut__DOT__lut_mem_10
                                                   [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                     ? 
                                                    vlSelf->__PVT__actLut__DOT__lut_mem_9
                                                    [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                      ? 
                                                     vlSelf->__PVT__actLut__DOT__lut_mem_8
                                                     [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                       ? 
                                                      vlSelf->__PVT__actLut__DOT__lut_mem_7
                                                      [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                        ? 
                                                       vlSelf->__PVT__actLut__DOT__lut_mem_6
                                                       [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                         ? 
                                                        vlSelf->__PVT__actLut__DOT__lut_mem_5
                                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                          ? 
                                                         vlSelf->__PVT__actLut__DOT__lut_mem_4
                                                         [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                           ? 
                                                          vlSelf->__PVT__actLut__DOT__lut_mem_3
                                                          [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                            ? 
                                                           vlSelf->__PVT__actLut__DOT__lut_mem_2
                                                           [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                             ? 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_1
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                             : 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_0
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0])))))))))))))));
    vlSelf->__PVT__actLut__DOT___GEN_20 = ((IData)(vlSelf->__PVT__actLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__actLut__DOT__last_write_ack));
    vlSelf->__PVT__s2MultRes = (0x1ffffffffffffULL 
                                & ((IData)(vlSymsp->TOP.io_stall)
                                    ? vlSelf->__VdfgTmp_h017163a2__0
                                    : ((IData)(vlSelf->__PVT__s1Valid)
                                        ? ((IData)(vlSelf->__PVT__s1Direct)
                                            ? (((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__s1Sub 
                                                                                >> 0x20U)))))))) 
                                                << 0x21U) 
                                               | vlSelf->__PVT__s1Sub)
                                            : VL_MULS_QQQ(50, 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QQ(50,33, vlSelf->__PVT__s1Sub)), 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QI(50,17, (IData)(vlSelf->__PVT__s1Mult)))))
                                        : vlSelf->__VdfgTmp_h017163a2__0)));
    vlSelf->__VdfgTmp_h017163a2__0 = (((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__s2MultRes 
                                                                   >> 0x30U))))) 
                                       << 0x31U) | vlSelf->__PVT__s2MultRes);
    vlSelf->__PVT__actLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_13_io_in_valid) {
            if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_13__DOT__io_out_direct_r) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_13__DOT__io_out_direct_r))))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_13_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.observedTpuOut_13 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.observedTpuOut_13))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_13_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_13_io_param))))));
            }
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__linearDataD1 = 0U;
    } else if (vlSelf->__PVT__linearReq) {
        vlSelf->__PVT__linearDataD1 = vlSelf->__PVT__s3Linear;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSelf->__PVT__s2Valid) {
            vlSelf->__PVT__s3Linear = (VL_GTS_IQQ(49, 0x1ffffffffff80ULL, vlSelf->__PVT__shifted)
                                        ? 0x80U : (
                                                   VL_LTS_IQQ(49, 0x7fULL, vlSelf->__PVT__shifted)
                                                    ? 0x7fU
                                                    : 
                                                   (0xffU 
                                                    & (IData)(vlSelf->__PVT__shifted))));
            vlSelf->__PVT__s3ActEn = vlSelf->__PVT__s2ActEn;
        }
        if (vlSelf->__PVT__s1Valid) {
            vlSelf->__PVT__s2Shift = vlSelf->__PVT__s1Shift;
            vlSelf->__PVT__s2ActEn = vlSelf->__PVT__s1ActEn;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__s3Valid = 0U;
        vlSelf->__PVT__s2Valid = 0U;
        vlSelf->__PVT__s1Valid = 0U;
    } else if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        vlSelf->__PVT__s3Valid = vlSelf->__PVT__s2Valid;
        vlSelf->__PVT__s2Valid = vlSelf->__PVT__s1Valid;
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_13_io_in_valid;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_13_io_in_valid) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_13_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_vpu1_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_vpu1_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_vpu1_act_mask))));
        }
    }
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT__rawValid = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG) 
                               | (IData)(vlSelf->__PVT__linearValidD1));
    vlSelf->__PVT___GEN_27 = (((IData)(vlSymsp->TOP.io_stall) 
                               & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                  & (IData)(vlSelf->__PVT__rawValid))) 
                              | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                     & (IData)(vlSelf->__PVT__holdValid))) 
                                 & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->__PVT__linearReq = ((IData)(vlSelf->__PVT__s3Valid) 
                                & ((~ (IData)(vlSelf->__PVT__s3ActEn)) 
                                   & (~ (IData)(vlSymsp->TOP.io_stall))));
    vlSelf->__PVT__actLut_io_rd_en = ((IData)(vlSelf->__PVT__s3Valid) 
                                      & ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                         & (IData)(vlSelf->__PVT__s3ActEn)));
    vlSelf->__PVT__shifted = (0x1ffffffffffffULL & 
                              VL_SHIFTRS_QQI(49,49,5, vlSelf->__PVT__s2MultRes, (IData)(vlSelf->__PVT__s2Shift)));
    vlSelf->__PVT___GEN_22 = (0x7ffU & ((IData)(vlSymsp->TOP.io_stall)
                                         ? (IData)(vlSelf->__PVT__s3Idx)
                                         : ((IData)(vlSelf->__PVT__s2Valid)
                                             ? ((IData)(0x200U) 
                                                + (
                                                   ((VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted) 
                                                     | (VL_GTES_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted) 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__shifted 
                                                                   >> 9U)))) 
                                                    << 0xaU) 
                                                   | (VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted)
                                                       ? 0x200U
                                                       : 
                                                      (VL_LTS_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted)
                                                        ? 0x1ffU
                                                        : 
                                                       (0x3ffU 
                                                        & (IData)(vlSelf->__PVT__shifted))))))
                                             : (IData)(vlSelf->__PVT__s3Idx))));
}

VL_INLINE_OPT void VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_14__0(VComputeUnitE2EHarness_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_14__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_11__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    __Vdlyvval__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_11__v0;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_9__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    __Vdlyvval__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_9__v0;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_8__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    __Vdlyvval__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_8__v0;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    __Vdlyvval__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_7__v0;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    __Vdlyvval__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_1__v0;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    __Vdlyvval__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_6__v0;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    __Vdlyvval__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_2__v0;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    __Vdlyvval__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_3__v0;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    __Vdlyvval__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_4__v0;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    __Vdlyvval__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_0__v0;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_10__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    __Vdlyvval__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_10__v0;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    __Vdlyvval__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_5__v0;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_12__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    __Vdlyvval__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_12__v0;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_13__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    __Vdlyvval__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_13__v0;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_14__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    __Vdlyvval__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_14__v0;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_15__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    __Vdlyvval__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_15__v0;
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0;
    // Body
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_wb_in_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_wb_in_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_wb_in_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_wb_in_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_wb_in_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_wb_in_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_wb_in_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_wb_in_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_wb_in_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_wb_in_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_wb_in_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_wb_in_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_wb_in_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_wb_in_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_wb_in_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_wb_in_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
    }
    if (vlSelf->__PVT__actLut_io_rd_en) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0 
            = (0x3fU & ((IData)(vlSelf->__PVT__s3Idx) 
                        >> 4U));
        vlSelf->__PVT__actLut__DOT__rd_col_delayed 
            = (0xfU & (IData)(vlSelf->__PVT__s3Idx));
    }
    vlSelf->__PVT__actLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__actLut__DOT___GEN_20));
    vlSelf->__PVT__expectedRdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address)))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__rawValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdData = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG)
                                    ? (IData)(vlSelf->__PVT__actLut_io_rd_data)
                                    : (IData)(vlSelf->__PVT__linearDataD1));
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_15__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15[__Vdlyvdim0__actLut__DOT__lut_mem_15__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_14__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_14[__Vdlyvdim0__actLut__DOT__lut_mem_14__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_13__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_13[__Vdlyvdim0__actLut__DOT__lut_mem_13__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_12__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_12[__Vdlyvdim0__actLut__DOT__lut_mem_12__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_5[__Vdlyvdim0__actLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_10__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_10[__Vdlyvdim0__actLut__DOT__lut_mem_10__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_0[__Vdlyvdim0__actLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_4[__Vdlyvdim0__actLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_3[__Vdlyvdim0__actLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_2[__Vdlyvdim0__actLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_6[__Vdlyvdim0__actLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_1[__Vdlyvdim0__actLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_7[__Vdlyvdim0__actLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_8__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_8[__Vdlyvdim0__actLut__DOT__lut_mem_8__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_9__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_9[__Vdlyvdim0__actLut__DOT__lut_mem_9__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_11__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_11[__Vdlyvdim0__actLut__DOT__lut_mem_11__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    }
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT__actLut_io_rd_data = ((0xfU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                         ? vlSelf->__PVT__actLut__DOT__lut_mem_15
                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                         : ((0xeU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                             ? vlSelf->__PVT__actLut__DOT__lut_mem_14
                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                             : ((0xdU 
                                                 == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                 ? 
                                                vlSelf->__PVT__actLut__DOT__lut_mem_13
                                                [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                  ? 
                                                 vlSelf->__PVT__actLut__DOT__lut_mem_12
                                                 [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__actLut__DOT__lut_mem_11
                                                  [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                    ? 
                                                   vlSelf->__PVT__actLut__DOT__lut_mem_10
                                                   [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                     ? 
                                                    vlSelf->__PVT__actLut__DOT__lut_mem_9
                                                    [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                      ? 
                                                     vlSelf->__PVT__actLut__DOT__lut_mem_8
                                                     [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                       ? 
                                                      vlSelf->__PVT__actLut__DOT__lut_mem_7
                                                      [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                        ? 
                                                       vlSelf->__PVT__actLut__DOT__lut_mem_6
                                                       [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                         ? 
                                                        vlSelf->__PVT__actLut__DOT__lut_mem_5
                                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                          ? 
                                                         vlSelf->__PVT__actLut__DOT__lut_mem_4
                                                         [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                           ? 
                                                          vlSelf->__PVT__actLut__DOT__lut_mem_3
                                                          [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                            ? 
                                                           vlSelf->__PVT__actLut__DOT__lut_mem_2
                                                           [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                             ? 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_1
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                             : 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_0
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0])))))))))))))));
    vlSelf->__PVT__actLut__DOT___GEN_20 = ((IData)(vlSelf->__PVT__actLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__actLut__DOT__last_write_ack));
    vlSelf->__PVT__s2MultRes = (0x1ffffffffffffULL 
                                & ((IData)(vlSymsp->TOP.io_stall)
                                    ? vlSelf->__VdfgTmp_h017163a2__0
                                    : ((IData)(vlSelf->__PVT__s1Valid)
                                        ? ((IData)(vlSelf->__PVT__s1Direct)
                                            ? (((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__s1Sub 
                                                                                >> 0x20U)))))))) 
                                                << 0x21U) 
                                               | vlSelf->__PVT__s1Sub)
                                            : VL_MULS_QQQ(50, 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QQ(50,33, vlSelf->__PVT__s1Sub)), 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QI(50,17, (IData)(vlSelf->__PVT__s1Mult)))))
                                        : vlSelf->__VdfgTmp_h017163a2__0)));
    vlSelf->__VdfgTmp_h017163a2__0 = (((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__s2MultRes 
                                                                   >> 0x30U))))) 
                                       << 0x31U) | vlSelf->__PVT__s2MultRes);
    vlSelf->__PVT__actLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_14_io_in_valid) {
            if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_14__DOT__io_out_direct_r) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_14__DOT__io_out_direct_r))))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_14_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.observedTpuOut_14 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.observedTpuOut_14))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_14_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_14_io_param))))));
            }
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__linearDataD1 = 0U;
    } else if (vlSelf->__PVT__linearReq) {
        vlSelf->__PVT__linearDataD1 = vlSelf->__PVT__s3Linear;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSelf->__PVT__s2Valid) {
            vlSelf->__PVT__s3Linear = (VL_GTS_IQQ(49, 0x1ffffffffff80ULL, vlSelf->__PVT__shifted)
                                        ? 0x80U : (
                                                   VL_LTS_IQQ(49, 0x7fULL, vlSelf->__PVT__shifted)
                                                    ? 0x7fU
                                                    : 
                                                   (0xffU 
                                                    & (IData)(vlSelf->__PVT__shifted))));
            vlSelf->__PVT__s3ActEn = vlSelf->__PVT__s2ActEn;
        }
        if (vlSelf->__PVT__s1Valid) {
            vlSelf->__PVT__s2Shift = vlSelf->__PVT__s1Shift;
            vlSelf->__PVT__s2ActEn = vlSelf->__PVT__s1ActEn;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__s3Valid = 0U;
        vlSelf->__PVT__s2Valid = 0U;
        vlSelf->__PVT__s1Valid = 0U;
    } else if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        vlSelf->__PVT__s3Valid = vlSelf->__PVT__s2Valid;
        vlSelf->__PVT__s2Valid = vlSelf->__PVT__s1Valid;
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_14_io_in_valid;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_14_io_in_valid) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_14_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_vpu1_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_vpu1_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_vpu1_act_mask))));
        }
    }
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT__rawValid = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG) 
                               | (IData)(vlSelf->__PVT__linearValidD1));
    vlSelf->__PVT___GEN_27 = (((IData)(vlSymsp->TOP.io_stall) 
                               & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                  & (IData)(vlSelf->__PVT__rawValid))) 
                              | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                     & (IData)(vlSelf->__PVT__holdValid))) 
                                 & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->__PVT__linearReq = ((IData)(vlSelf->__PVT__s3Valid) 
                                & ((~ (IData)(vlSelf->__PVT__s3ActEn)) 
                                   & (~ (IData)(vlSymsp->TOP.io_stall))));
    vlSelf->__PVT__actLut_io_rd_en = ((IData)(vlSelf->__PVT__s3Valid) 
                                      & ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                         & (IData)(vlSelf->__PVT__s3ActEn)));
    vlSelf->__PVT__shifted = (0x1ffffffffffffULL & 
                              VL_SHIFTRS_QQI(49,49,5, vlSelf->__PVT__s2MultRes, (IData)(vlSelf->__PVT__s2Shift)));
    vlSelf->__PVT___GEN_22 = (0x7ffU & ((IData)(vlSymsp->TOP.io_stall)
                                         ? (IData)(vlSelf->__PVT__s3Idx)
                                         : ((IData)(vlSelf->__PVT__s2Valid)
                                             ? ((IData)(0x200U) 
                                                + (
                                                   ((VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted) 
                                                     | (VL_GTES_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted) 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__shifted 
                                                                   >> 9U)))) 
                                                    << 0xaU) 
                                                   | (VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted)
                                                       ? 0x200U
                                                       : 
                                                      (VL_LTS_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted)
                                                        ? 0x1ffU
                                                        : 
                                                       (0x3ffU 
                                                        & (IData)(vlSelf->__PVT__shifted))))))
                                             : (IData)(vlSelf->__PVT__s3Idx))));
}

VL_INLINE_OPT void VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_15__0(VComputeUnitE2EHarness_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComputeUnitE2EHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VComputeUnitE2EHarness_QuantActCore___nba_sequent__TOP__ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_15__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_11__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    __Vdlyvval__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_11__v0;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_9__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    __Vdlyvval__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_9__v0;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_8__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    __Vdlyvval__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_8__v0;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    __Vdlyvval__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_7__v0;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    __Vdlyvval__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_1__v0;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    __Vdlyvval__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_6__v0;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    __Vdlyvval__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_2__v0;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    __Vdlyvval__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_3__v0;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    __Vdlyvval__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_4__v0;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    __Vdlyvval__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_0__v0;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_10__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    __Vdlyvval__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_10__v0;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    __Vdlyvval__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_5__v0;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_12__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    __Vdlyvval__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_12__v0;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_13__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    __Vdlyvval__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_13__v0;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_14__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    __Vdlyvval__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_14__v0;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__actLut__DOT__lut_mem_15__v0;
    __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*7:0*/ __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    __Vdlyvval__actLut__DOT__lut_mem_15__v0 = 0;
    CData/*0:0*/ __Vdlyvset__actLut__DOT__lut_mem_15__v0;
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0;
    // Body
    __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 0U;
    __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 0U;
    if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_wb_in_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_wb_in_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_wb_in_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_wb_in_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_wb_in_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_wb_in_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_wb_in_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_wb_in_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_wb_in_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_wb_in_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_wb_in_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_wb_in_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_wb_in_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_wb_in_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_wb_in_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = (0x3fU 
                                                   & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_wb_in_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = 
            (0x3fU & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address));
    }
    if (vlSelf->__PVT__actLut_io_rd_en) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0 
            = (0x3fU & ((IData)(vlSelf->__PVT__s3Idx) 
                        >> 4U));
        vlSelf->__PVT__actLut__DOT__rd_col_delayed 
            = (0xfU & (IData)(vlSelf->__PVT__s3Idx));
    }
    vlSelf->__PVT__actLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__actLut__DOT___GEN_20));
    vlSelf->__PVT__expectedRdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en));
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__lutProgrammer__DOT__address)))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__rawValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdData = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG)
                                    ? (IData)(vlSelf->__PVT__actLut_io_rd_data)
                                    : (IData)(vlSelf->__PVT__linearDataD1));
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_15__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_15[__Vdlyvdim0__actLut__DOT__lut_mem_15__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_15__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_14__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_14[__Vdlyvdim0__actLut__DOT__lut_mem_14__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_14__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_13__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_13[__Vdlyvdim0__actLut__DOT__lut_mem_13__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_13__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_12__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_12[__Vdlyvdim0__actLut__DOT__lut_mem_12__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_12__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_5[__Vdlyvdim0__actLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_10__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_10[__Vdlyvdim0__actLut__DOT__lut_mem_10__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_10__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_0[__Vdlyvdim0__actLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_4[__Vdlyvdim0__actLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_3[__Vdlyvdim0__actLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_2[__Vdlyvdim0__actLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_6[__Vdlyvdim0__actLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_1[__Vdlyvdim0__actLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_7[__Vdlyvdim0__actLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_8__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_8[__Vdlyvdim0__actLut__DOT__lut_mem_8__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_8__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_9__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_9[__Vdlyvdim0__actLut__DOT__lut_mem_9__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_9__v0;
    }
    if (__Vdlyvset__actLut__DOT__lut_mem_11__v0) {
        vlSelf->__PVT__actLut__DOT__lut_mem_11[__Vdlyvdim0__actLut__DOT__lut_mem_11__v0] 
            = __Vdlyvval__actLut__DOT__lut_mem_11__v0;
    }
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT__actLut_io_rd_data = ((0xfU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                         ? vlSelf->__PVT__actLut__DOT__lut_mem_15
                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                         : ((0xeU == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                             ? vlSelf->__PVT__actLut__DOT__lut_mem_14
                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                             : ((0xdU 
                                                 == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                 ? 
                                                vlSelf->__PVT__actLut__DOT__lut_mem_13
                                                [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                  ? 
                                                 vlSelf->__PVT__actLut__DOT__lut_mem_12
                                                 [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__actLut__DOT__lut_mem_11
                                                  [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                    ? 
                                                   vlSelf->__PVT__actLut__DOT__lut_mem_10
                                                   [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                     ? 
                                                    vlSelf->__PVT__actLut__DOT__lut_mem_9
                                                    [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                      ? 
                                                     vlSelf->__PVT__actLut__DOT__lut_mem_8
                                                     [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                       ? 
                                                      vlSelf->__PVT__actLut__DOT__lut_mem_7
                                                      [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                        ? 
                                                       vlSelf->__PVT__actLut__DOT__lut_mem_6
                                                       [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                         ? 
                                                        vlSelf->__PVT__actLut__DOT__lut_mem_5
                                                        [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                          ? 
                                                         vlSelf->__PVT__actLut__DOT__lut_mem_4
                                                         [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                           ? 
                                                          vlSelf->__PVT__actLut__DOT__lut_mem_3
                                                          [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                            ? 
                                                           vlSelf->__PVT__actLut__DOT__lut_mem_2
                                                           [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->__PVT__actLut__DOT__rd_col_delayed))
                                                             ? 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_1
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0]
                                                             : 
                                                            vlSelf->__PVT__actLut__DOT__lut_mem_0
                                                            [vlSelf->__PVT__actLut__DOT__lut_mem_15_rd_vec_addr_pipe_0])))))))))))))));
    vlSelf->__PVT__actLut__DOT___GEN_20 = ((IData)(vlSelf->__PVT__actLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__actLut__DOT__last_write_ack));
    vlSelf->__PVT__s2MultRes = (0x1ffffffffffffULL 
                                & ((IData)(vlSymsp->TOP.io_stall)
                                    ? vlSelf->__VdfgTmp_h017163a2__0
                                    : ((IData)(vlSelf->__PVT__s1Valid)
                                        ? ((IData)(vlSelf->__PVT__s1Direct)
                                            ? (((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__s1Sub 
                                                                                >> 0x20U)))))))) 
                                                << 0x21U) 
                                               | vlSelf->__PVT__s1Sub)
                                            : VL_MULS_QQQ(50, 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QQ(50,33, vlSelf->__PVT__s1Sub)), 
                                                          (0x3ffffffffffffULL 
                                                           & VL_EXTENDS_QI(50,17, (IData)(vlSelf->__PVT__s1Mult)))))
                                        : vlSelf->__VdfgTmp_h017163a2__0)));
    vlSelf->__VdfgTmp_h017163a2__0 = (((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__s2MultRes 
                                                                   >> 0x30U))))) 
                                       << 0x31U) | vlSelf->__PVT__s2MultRes);
    vlSelf->__PVT__actLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__actLut_io_rd_en));
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_15_io_in_valid) {
            if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_15__DOT__io_out_direct_r) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(
                                                             (0x3ffU 
                                                              & (IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__gpalu__DOT__cores_15__DOT__io_out_direct_r))))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_15_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.observedTpuOut_15 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.observedTpuOut_15))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_15_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_15_io_param))))));
            }
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__linearDataD1 = 0U;
    } else if (vlSelf->__PVT__linearReq) {
        vlSelf->__PVT__linearDataD1 = vlSelf->__PVT__s3Linear;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSelf->__PVT__s2Valid) {
            vlSelf->__PVT__s3Linear = (VL_GTS_IQQ(49, 0x1ffffffffff80ULL, vlSelf->__PVT__shifted)
                                        ? 0x80U : (
                                                   VL_LTS_IQQ(49, 0x7fULL, vlSelf->__PVT__shifted)
                                                    ? 0x7fU
                                                    : 
                                                   (0xffU 
                                                    & (IData)(vlSelf->__PVT__shifted))));
            vlSelf->__PVT__s3ActEn = vlSelf->__PVT__s2ActEn;
        }
        if (vlSelf->__PVT__s1Valid) {
            vlSelf->__PVT__s2Shift = vlSelf->__PVT__s1Shift;
            vlSelf->__PVT__s2ActEn = vlSelf->__PVT__s1ActEn;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__s3Valid = 0U;
        vlSelf->__PVT__s2Valid = 0U;
        vlSelf->__PVT__s1Valid = 0U;
    } else if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        vlSelf->__PVT__s3Valid = vlSelf->__PVT__s2Valid;
        vlSelf->__PVT__s2Valid = vlSelf->__PVT__s1Valid;
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_15_io_in_valid;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_15_io_in_valid) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_15_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.ComputeUnitE2EHarness__DOT__vpu1__DOT__quant__DOT__cores_0_io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_vpu1_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_vpu1_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_vpu1_act_mask))));
        }
    }
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT__rawValid = ((IData)(vlSelf->__PVT__actLut__DOT__io_rd_valid_REG) 
                               | (IData)(vlSelf->__PVT__linearValidD1));
    vlSelf->__PVT___GEN_27 = (((IData)(vlSymsp->TOP.io_stall) 
                               & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                  & (IData)(vlSelf->__PVT__rawValid))) 
                              | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                     & (IData)(vlSelf->__PVT__holdValid))) 
                                 & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->__PVT__linearReq = ((IData)(vlSelf->__PVT__s3Valid) 
                                & ((~ (IData)(vlSelf->__PVT__s3ActEn)) 
                                   & (~ (IData)(vlSymsp->TOP.io_stall))));
    vlSelf->__PVT__actLut_io_rd_en = ((IData)(vlSelf->__PVT__s3Valid) 
                                      & ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                         & (IData)(vlSelf->__PVT__s3ActEn)));
    vlSelf->__PVT__shifted = (0x1ffffffffffffULL & 
                              VL_SHIFTRS_QQI(49,49,5, vlSelf->__PVT__s2MultRes, (IData)(vlSelf->__PVT__s2Shift)));
    vlSelf->__PVT___GEN_22 = (0x7ffU & ((IData)(vlSymsp->TOP.io_stall)
                                         ? (IData)(vlSelf->__PVT__s3Idx)
                                         : ((IData)(vlSelf->__PVT__s2Valid)
                                             ? ((IData)(0x200U) 
                                                + (
                                                   ((VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted) 
                                                     | (VL_GTES_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted) 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__shifted 
                                                                   >> 9U)))) 
                                                    << 0xaU) 
                                                   | (VL_GTS_IQQ(49, 0x1fffffffffe00ULL, vlSelf->__PVT__shifted)
                                                       ? 0x200U
                                                       : 
                                                      (VL_LTS_IQQ(49, 0x1ffULL, vlSelf->__PVT__shifted)
                                                        ? 0x1ffU
                                                        : 
                                                       (0x3ffU 
                                                        & (IData)(vlSelf->__PVT__shifted))))))
                                             : (IData)(vlSelf->__PVT__s3Idx))));
}
