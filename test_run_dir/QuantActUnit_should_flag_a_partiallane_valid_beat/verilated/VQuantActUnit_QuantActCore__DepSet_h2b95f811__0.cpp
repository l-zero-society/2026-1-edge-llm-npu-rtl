// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQuantActUnit.h for the primary calling header

#include "VQuantActUnit__pch.h"
#include "VQuantActUnit_QuantActCore.h"
#include "VQuantActUnit__Syms.h"

VL_INLINE_OPT void VQuantActUnit_QuantActCore___ico_sequent__TOP__QuantActUnit__DOT__cores_0__0(VQuantActUnit_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VQuantActUnit_QuantActCore___ico_sequent__TOP__QuantActUnit__DOT__cores_0__0\n"); );
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

VL_INLINE_OPT void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_0__0(VQuantActUnit_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_0__0\n"); );
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
    if (vlSymsp->TOP.io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_data_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_data_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_data_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_data_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_data_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_data_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_data_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_data_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_addr;
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
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
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
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
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
        if (vlSymsp->TOP.io_in_valid_0) {
            if (vlSymsp->TOP.io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.io_in_direct_0) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(vlSymsp->TOP.io_in_direct_0))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.QuantActUnit__DOT__cores_0_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.io_in_tpu_0 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.io_in_tpu_0))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.QuantActUnit__DOT__cores_0_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.QuantActUnit__DOT__cores_0_io_param))))));
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
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.io_in_valid_0;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.io_in_valid_0) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.QuantActUnit__DOT__cores_0_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_act_mask))));
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

VL_INLINE_OPT void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_1__0(VQuantActUnit_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_1__0\n"); );
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
    if (vlSymsp->TOP.io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_data_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_data_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_data_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_data_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_data_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_data_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_data_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_data_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_addr;
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
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
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
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
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
        if (vlSymsp->TOP.io_in_valid_1) {
            if (vlSymsp->TOP.io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.io_in_direct_1) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(vlSymsp->TOP.io_in_direct_1))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.QuantActUnit__DOT__cores_1_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.io_in_tpu_1 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.io_in_tpu_1))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.QuantActUnit__DOT__cores_1_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.QuantActUnit__DOT__cores_1_io_param))))));
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
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.io_in_valid_1;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.io_in_valid_1) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.QuantActUnit__DOT__cores_1_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_act_mask))));
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

VL_INLINE_OPT void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_2__0(VQuantActUnit_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_2__0\n"); );
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
    if (vlSymsp->TOP.io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_data_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_data_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_data_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_data_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_data_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_data_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_data_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_data_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_addr;
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
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
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
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
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
        if (vlSymsp->TOP.io_in_valid_2) {
            if (vlSymsp->TOP.io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.io_in_direct_2) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(vlSymsp->TOP.io_in_direct_2))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.QuantActUnit__DOT__cores_2_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.io_in_tpu_2 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.io_in_tpu_2))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.QuantActUnit__DOT__cores_2_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.QuantActUnit__DOT__cores_2_io_param))))));
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
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.io_in_valid_2;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.io_in_valid_2) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.QuantActUnit__DOT__cores_2_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_act_mask))));
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

VL_INLINE_OPT void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_3__0(VQuantActUnit_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_3__0\n"); );
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
    if (vlSymsp->TOP.io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_data_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_data_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_data_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_data_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_data_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_data_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_data_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_data_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_addr;
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
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
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
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
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
        if (vlSymsp->TOP.io_in_valid_3) {
            if (vlSymsp->TOP.io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.io_in_direct_3) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(vlSymsp->TOP.io_in_direct_3))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.QuantActUnit__DOT__cores_3_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.io_in_tpu_3 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.io_in_tpu_3))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.QuantActUnit__DOT__cores_3_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.QuantActUnit__DOT__cores_3_io_param))))));
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
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.io_in_valid_3;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.io_in_valid_3) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.QuantActUnit__DOT__cores_3_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_act_mask))));
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

VL_INLINE_OPT void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_4__0(VQuantActUnit_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_4__0\n"); );
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
    if (vlSymsp->TOP.io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_data_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_data_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_data_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_data_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_data_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_data_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_data_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_data_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_addr;
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
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
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
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
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
        if (vlSymsp->TOP.io_in_valid_4) {
            if (vlSymsp->TOP.io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.io_in_direct_4) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(vlSymsp->TOP.io_in_direct_4))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.QuantActUnit__DOT__cores_4_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.io_in_tpu_4 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.io_in_tpu_4))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.QuantActUnit__DOT__cores_4_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.QuantActUnit__DOT__cores_4_io_param))))));
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
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.io_in_valid_4;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.io_in_valid_4) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.QuantActUnit__DOT__cores_4_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_act_mask))));
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

VL_INLINE_OPT void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_5__0(VQuantActUnit_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_5__0\n"); );
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
    if (vlSymsp->TOP.io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_data_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_data_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_data_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_data_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_data_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_data_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_data_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_data_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_addr;
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
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
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
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
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
        if (vlSymsp->TOP.io_in_valid_5) {
            if (vlSymsp->TOP.io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.io_in_direct_5) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(vlSymsp->TOP.io_in_direct_5))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.QuantActUnit__DOT__cores_5_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.io_in_tpu_5 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.io_in_tpu_5))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.QuantActUnit__DOT__cores_5_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.QuantActUnit__DOT__cores_5_io_param))))));
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
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.io_in_valid_5;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.io_in_valid_5) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.QuantActUnit__DOT__cores_5_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_act_mask))));
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

VL_INLINE_OPT void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_6__0(VQuantActUnit_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_6__0\n"); );
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
    if (vlSymsp->TOP.io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_data_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_data_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_data_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_data_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_data_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_data_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_data_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_data_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_addr;
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
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
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
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
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
        if (vlSymsp->TOP.io_in_valid_6) {
            if (vlSymsp->TOP.io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.io_in_direct_6) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(vlSymsp->TOP.io_in_direct_6))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.QuantActUnit__DOT__cores_6_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.io_in_tpu_6 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.io_in_tpu_6))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.QuantActUnit__DOT__cores_6_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.QuantActUnit__DOT__cores_6_io_param))))));
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
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.io_in_valid_6;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.io_in_valid_6) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.QuantActUnit__DOT__cores_6_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_act_mask))));
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

VL_INLINE_OPT void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_7__0(VQuantActUnit_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_7__0\n"); );
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
    if (vlSymsp->TOP.io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_data_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_data_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_data_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_data_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_data_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_data_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_data_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_data_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_addr;
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
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
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
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
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
        if (vlSymsp->TOP.io_in_valid_7) {
            if (vlSymsp->TOP.io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.io_in_direct_7) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(vlSymsp->TOP.io_in_direct_7))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.QuantActUnit__DOT__cores_7_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.io_in_tpu_7 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.io_in_tpu_7))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.QuantActUnit__DOT__cores_7_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.QuantActUnit__DOT__cores_7_io_param))))));
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
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.io_in_valid_7;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.io_in_valid_7) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.QuantActUnit__DOT__cores_7_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_act_mask))));
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

VL_INLINE_OPT void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_8__0(VQuantActUnit_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_8__0\n"); );
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
    if (vlSymsp->TOP.io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_data_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_data_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_data_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_data_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_data_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_data_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_data_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_data_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_addr;
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
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
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
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
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
        if (vlSymsp->TOP.io_in_valid_8) {
            if (vlSymsp->TOP.io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.io_in_direct_8) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(vlSymsp->TOP.io_in_direct_8))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.QuantActUnit__DOT__cores_8_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.io_in_tpu_8 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.io_in_tpu_8))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.QuantActUnit__DOT__cores_8_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.QuantActUnit__DOT__cores_8_io_param))))));
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
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.io_in_valid_8;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.io_in_valid_8) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.QuantActUnit__DOT__cores_8_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_act_mask))));
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

VL_INLINE_OPT void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_9__0(VQuantActUnit_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_9__0\n"); );
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
    if (vlSymsp->TOP.io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_data_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_data_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_data_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_data_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_data_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_data_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_data_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_data_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_addr;
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
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
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
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
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
        if (vlSymsp->TOP.io_in_valid_9) {
            if (vlSymsp->TOP.io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.io_in_direct_9) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(vlSymsp->TOP.io_in_direct_9))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.QuantActUnit__DOT__cores_9_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.io_in_tpu_9 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.io_in_tpu_9))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.QuantActUnit__DOT__cores_9_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.QuantActUnit__DOT__cores_9_io_param))))));
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
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.io_in_valid_9;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.io_in_valid_9) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.QuantActUnit__DOT__cores_9_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_act_mask))));
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

VL_INLINE_OPT void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_10__0(VQuantActUnit_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_10__0\n"); );
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
    if (vlSymsp->TOP.io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_data_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_data_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_data_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_data_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_data_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_data_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_data_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_data_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_addr;
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
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
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
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
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
        if (vlSymsp->TOP.io_in_valid_10) {
            if (vlSymsp->TOP.io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.io_in_direct_10) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(vlSymsp->TOP.io_in_direct_10))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.QuantActUnit__DOT__cores_10_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.io_in_tpu_10 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.io_in_tpu_10))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.QuantActUnit__DOT__cores_10_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.QuantActUnit__DOT__cores_10_io_param))))));
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
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.io_in_valid_10;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.io_in_valid_10) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.QuantActUnit__DOT__cores_10_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_act_mask))));
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

VL_INLINE_OPT void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_11__0(VQuantActUnit_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_11__0\n"); );
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
    if (vlSymsp->TOP.io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_data_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_data_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_data_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_data_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_data_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_data_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_data_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_data_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_addr;
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
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
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
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
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
        if (vlSymsp->TOP.io_in_valid_11) {
            if (vlSymsp->TOP.io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.io_in_direct_11) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(vlSymsp->TOP.io_in_direct_11))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.QuantActUnit__DOT__cores_11_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.io_in_tpu_11 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.io_in_tpu_11))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.QuantActUnit__DOT__cores_11_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.QuantActUnit__DOT__cores_11_io_param))))));
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
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.io_in_valid_11;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.io_in_valid_11) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.QuantActUnit__DOT__cores_11_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_act_mask))));
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

VL_INLINE_OPT void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_12__0(VQuantActUnit_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_12__0\n"); );
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
    if (vlSymsp->TOP.io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_data_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_data_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_data_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_data_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_data_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_data_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_data_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_data_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_addr;
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
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
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
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
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
        if (vlSymsp->TOP.io_in_valid_12) {
            if (vlSymsp->TOP.io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.io_in_direct_12) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(vlSymsp->TOP.io_in_direct_12))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.QuantActUnit__DOT__cores_12_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.io_in_tpu_12 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.io_in_tpu_12))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.QuantActUnit__DOT__cores_12_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.QuantActUnit__DOT__cores_12_io_param))))));
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
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.io_in_valid_12;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.io_in_valid_12) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.QuantActUnit__DOT__cores_12_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_act_mask))));
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

VL_INLINE_OPT void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_13__0(VQuantActUnit_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_13__0\n"); );
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
    if (vlSymsp->TOP.io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_data_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_data_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_data_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_data_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_data_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_data_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_data_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_data_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_addr;
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
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
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
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
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
        if (vlSymsp->TOP.io_in_valid_13) {
            if (vlSymsp->TOP.io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.io_in_direct_13) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(vlSymsp->TOP.io_in_direct_13))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.QuantActUnit__DOT__cores_13_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.io_in_tpu_13 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.io_in_tpu_13))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.QuantActUnit__DOT__cores_13_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.QuantActUnit__DOT__cores_13_io_param))))));
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
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.io_in_valid_13;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.io_in_valid_13) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.QuantActUnit__DOT__cores_13_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_act_mask))));
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

VL_INLINE_OPT void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_14__0(VQuantActUnit_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_14__0\n"); );
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
    if (vlSymsp->TOP.io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_data_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_data_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_data_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_data_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_data_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_data_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_data_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_data_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_addr;
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
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
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
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
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
        if (vlSymsp->TOP.io_in_valid_14) {
            if (vlSymsp->TOP.io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.io_in_direct_14) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(vlSymsp->TOP.io_in_direct_14))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.QuantActUnit__DOT__cores_14_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.io_in_tpu_14 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.io_in_tpu_14))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.QuantActUnit__DOT__cores_14_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.QuantActUnit__DOT__cores_14_io_param))))));
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
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.io_in_valid_14;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.io_in_valid_14) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.QuantActUnit__DOT__cores_14_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_act_mask))));
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

VL_INLINE_OPT void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_15__0(VQuantActUnit_QuantActCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_15__0\n"); );
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
    if (vlSymsp->TOP.io_lut_wr_en) {
        __Vdlyvval__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_data_15;
        __Vdlyvset__actLut__DOT__lut_mem_15__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_15__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_data_14;
        __Vdlyvset__actLut__DOT__lut_mem_14__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_14__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_data_13;
        __Vdlyvset__actLut__DOT__lut_mem_13__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_13__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_data_12;
        __Vdlyvset__actLut__DOT__lut_mem_12__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_12__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__actLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_data_10;
        __Vdlyvset__actLut__DOT__lut_mem_10__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_10__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__actLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__actLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__actLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__actLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__actLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__actLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__actLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_data_8;
        __Vdlyvset__actLut__DOT__lut_mem_8__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_8__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_data_9;
        __Vdlyvset__actLut__DOT__lut_mem_9__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_9__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_data_11;
        __Vdlyvset__actLut__DOT__lut_mem_11__v0 = 1U;
        __Vdlyvdim0__actLut__DOT__lut_mem_11__v0 = vlSymsp->TOP.io_lut_wr_addr;
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
    vlSelf->__PVT__linearValidD1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT__linearReq));
    vlSelf->__PVT__expectedWrValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_wr_en));
    vlSelf->__PVT__actLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_wr_en) 
                                                      & (0x3fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
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
    vlSelf->__PVT__s3Idx = (0x3ffU & (IData)(vlSelf->__PVT___GEN_22));
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
        if (vlSymsp->TOP.io_in_valid_15) {
            if (vlSymsp->TOP.io_input_mode) {
                vlSelf->__PVT__s1Direct = 1U;
                vlSelf->__PVT__s1Mult = 1U;
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSymsp->TOP.io_in_direct_15) 
                                                                              >> 9U))))))) 
                                            << 0xaU) 
                                           | (QData)((IData)(vlSymsp->TOP.io_in_direct_15))));
            } else {
                vlSelf->__PVT__s1Direct = 0U;
                vlSelf->__PVT__s1Mult = (vlSymsp->TOP.QuantActUnit__DOT__cores_15_io_param 
                                         >> 0x10U);
                vlSelf->__PVT__s1Sub = (0x1ffffffffULL 
                                        & ((((QData)((IData)(
                                                             (vlSymsp->TOP.io_in_tpu_15 
                                                              >> 0x1fU))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP.io_in_tpu_15))) 
                                           - (((QData)((IData)(
                                                               (0x1ffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP.QuantActUnit__DOT__cores_15_io_param 
                                                                                >> 7U))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & vlSymsp->TOP.QuantActUnit__DOT__cores_15_io_param))))));
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
        vlSelf->__PVT__s1Valid = vlSymsp->TOP.io_in_valid_15;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.io_stall)))) {
        if (vlSymsp->TOP.io_in_valid_15) {
            vlSelf->__PVT__s1Shift = ((IData)(vlSymsp->TOP.io_input_mode)
                                       ? 0U : (0x1fU 
                                               & (vlSymsp->TOP.QuantActUnit__DOT__cores_15_io_param 
                                                  >> 8U)));
            vlSelf->__PVT__s1ActEn = (1U & ((IData)(vlSymsp->TOP.io_input_mode) 
                                            | ((IData)(vlSymsp->TOP.io_fusion_second)
                                                ? ((IData)(vlSymsp->TOP.io_act_mask) 
                                                   >> 1U)
                                                : (IData)(vlSymsp->TOP.io_act_mask))));
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
