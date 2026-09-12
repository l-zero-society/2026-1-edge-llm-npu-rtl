// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRopeUnit.h for the primary calling header

#include "VRopeUnit__pch.h"
#include "VRopeUnit_RopePairCore.h"
#include "VRopeUnit__Syms.h"

VL_INLINE_OPT void VRopeUnit_RopePairCore___ico_sequent__TOP__RopeUnit__DOT__pairs_0__0(VRopeUnit_RopePairCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VRopeUnit_RopePairCore___ico_sequent__TOP__RopeUnit__DOT__pairs_0__0\n"); );
    // Body
    vlSelf->__PVT___GEN_3 = (((IData)(vlSymsp->TOP.io_stall) 
                              & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                 & (IData)(vlSelf->__PVT__coeffValid))) 
                             | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                    & (IData)(vlSelf->__PVT__holdValid))) 
                                & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->io_out_valid = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                            & ((IData)(vlSelf->__PVT__holdValid) 
                               | (IData)(vlSelf->__PVT__coeffValid)));
    vlSelf->__PVT__cosLut_io_rd_en = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                      & (IData)(vlSymsp->TOP.RopeUnit__DOT__pairs_0_io_in_valid));
}

VL_INLINE_OPT void VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_0__0(VRopeUnit_RopePairCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_0__0\n"); );
    // Init
    SData/*15:0*/ __PVT__cosLut_io_rd_data;
    __PVT__cosLut_io_rd_data = 0;
    SData/*15:0*/ __PVT__sinLut_io_rd_data;
    __PVT__sinLut_io_rd_data = 0;
    IData/*24:0*/ __PVT__evenFull;
    __PVT__evenFull = 0;
    IData/*24:0*/ __PVT__oddFull;
    __PVT__oddFull = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.io_lut_sin_wr_en) {
        __Vdlyvval__sinLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
    }
    if (vlSymsp->TOP.io_lut_cos_wr_en) {
        __Vdlyvval__cosLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
    }
    if (vlSelf->__PVT__cosLut_io_rd_en) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x7fU & ((IData)(vlSymsp->TOP.RopeUnit__DOT__pairs_0_io_angle_idx) 
                        >> 3U));
        vlSelf->__PVT__cosLut__DOT__rd_col_delayed 
            = (7U & (IData)(vlSymsp->TOP.RopeUnit__DOT__pairs_0_io_angle_idx));
    }
    vlSelf->__PVT__sinLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__sinLut__DOT___GEN_12));
    vlSelf->__PVT__cosLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__cosLut__DOT___GEN_12));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__xOddD1 = 0U;
        vlSelf->__PVT__xEvenD1 = 0U;
    } else if (vlSelf->__PVT__cosLut_io_rd_en) {
        vlSelf->__PVT__xOddD1 = vlSymsp->TOP.io_in_vec_1;
        vlSelf->__PVT__xEvenD1 = vlSymsp->TOP.io_in_vec_0;
    }
    vlSelf->__PVT__expectedRd = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                 && (IData)(vlSelf->__PVT__cosLut_io_rd_en));
    vlSelf->__PVT__expectedCosWr = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSymsp->TOP.io_lut_cos_wr_en));
    vlSelf->__PVT__expectedSinWr = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSymsp->TOP.io_lut_sin_wr_en));
    vlSelf->__PVT__sinLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_sin_wr_en));
    vlSelf->__PVT__cosLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_cos_wr_en));
    vlSelf->__PVT__cosLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__cosLut_io_rd_en));
    vlSelf->__PVT__sinLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_sin_wr_en) 
                                                      & (0x7fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
    vlSelf->__PVT__cosLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_cos_wr_en) 
                                                      & (0x7fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__coeffValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdEven = vlSelf->__PVT__rawEven;
        vlSelf->__PVT__holdOdd = vlSelf->__PVT__rawOdd;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_7[__Vdlyvdim0__sinLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_6[__Vdlyvdim0__sinLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_1[__Vdlyvdim0__sinLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_2[__Vdlyvdim0__sinLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_3[__Vdlyvdim0__sinLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_4[__Vdlyvdim0__sinLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_5[__Vdlyvdim0__sinLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_0[__Vdlyvdim0__sinLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_7[__Vdlyvdim0__cosLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_6[__Vdlyvdim0__cosLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_1[__Vdlyvdim0__cosLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_2[__Vdlyvdim0__cosLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_3[__Vdlyvdim0__cosLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_4[__Vdlyvdim0__cosLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_5[__Vdlyvdim0__cosLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_0[__Vdlyvdim0__cosLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_0__v0;
    }
    if ((7U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_7
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_7
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((6U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_6
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_6
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((5U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_5
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_5
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((4U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_4
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_4
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((3U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_3
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_3
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((2U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_2
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_2
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((1U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_1
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_1
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_0
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_0
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    }
    vlSelf->__PVT__coeffValid = vlSelf->__PVT__cosLut__DOT__io_rd_valid_REG;
    vlSelf->__PVT__sinLut__DOT___GEN_12 = ((IData)(vlSelf->__PVT__sinLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__sinLut__DOT__last_write_ack));
    vlSelf->__PVT__cosLut__DOT___GEN_12 = ((IData)(vlSelf->__PVT__cosLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__cosLut__DOT__last_write_ack));
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_3));
    __PVT__evenFull = (0x1ffffffU & (VL_EXTENDS_II(25,24, 
                                                   (0xffffffU 
                                                    & VL_MULS_III(24, 
                                                                  (0xffffffU 
                                                                   & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xEvenD1))), 
                                                                  (0xffffffU 
                                                                   & VL_EXTENDS_II(24,16, (IData)(__PVT__cosLut_io_rd_data)))))) 
                                     - VL_EXTENDS_II(25,24, 
                                                     (0xffffffU 
                                                      & VL_MULS_III(24, 
                                                                    (0xffffffU 
                                                                     & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xOddD1))), 
                                                                    (0xffffffU 
                                                                     & VL_EXTENDS_II(24,16, (IData)(__PVT__sinLut_io_rd_data))))))));
    __PVT__oddFull = (0x1ffffffU & (VL_EXTENDS_II(25,24, 
                                                  (0xffffffU 
                                                   & VL_MULS_III(24, 
                                                                 (0xffffffU 
                                                                  & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xEvenD1))), 
                                                                 (0xffffffU 
                                                                  & VL_EXTENDS_II(24,16, (IData)(__PVT__sinLut_io_rd_data)))))) 
                                    + VL_EXTENDS_II(25,24, 
                                                    (0xffffffU 
                                                     & VL_MULS_III(24, 
                                                                   (0xffffffU 
                                                                    & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xOddD1))), 
                                                                   (0xffffffU 
                                                                    & VL_EXTENDS_II(24,16, (IData)(__PVT__cosLut_io_rd_data))))))));
    vlSelf->__PVT__rawEven = (VL_LTS_III(11, 0x7fU, 
                                         (0x7ffU & 
                                          (__PVT__evenFull 
                                           >> 0xeU)))
                               ? 0x7fU : (VL_GTS_III(11, 0x780U, 
                                                     (0x7ffU 
                                                      & (__PVT__evenFull 
                                                         >> 0xeU)))
                                           ? 0x80U : 
                                          (0xffU & 
                                           (__PVT__evenFull 
                                            >> 0xeU))));
    vlSelf->__PVT__rawOdd = (VL_LTS_III(11, 0x7fU, 
                                        (0x7ffU & (__PVT__oddFull 
                                                   >> 0xeU)))
                              ? 0x7fU : (VL_GTS_III(11, 0x780U, 
                                                    (0x7ffU 
                                                     & (__PVT__oddFull 
                                                        >> 0xeU)))
                                          ? 0x80U : 
                                         (0xffU & (__PVT__oddFull 
                                                   >> 0xeU))));
    vlSelf->__PVT___GEN_3 = (((IData)(vlSymsp->TOP.io_stall) 
                              & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                 & (IData)(vlSelf->__PVT__coeffValid))) 
                             | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                    & (IData)(vlSelf->__PVT__holdValid))) 
                                & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->io_out_valid = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                            & ((IData)(vlSelf->__PVT__holdValid) 
                               | (IData)(vlSelf->__PVT__coeffValid)));
}

VL_INLINE_OPT void VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_1__0(VRopeUnit_RopePairCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_1__0\n"); );
    // Init
    SData/*15:0*/ __PVT__cosLut_io_rd_data;
    __PVT__cosLut_io_rd_data = 0;
    SData/*15:0*/ __PVT__sinLut_io_rd_data;
    __PVT__sinLut_io_rd_data = 0;
    IData/*24:0*/ __PVT__evenFull;
    __PVT__evenFull = 0;
    IData/*24:0*/ __PVT__oddFull;
    __PVT__oddFull = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.io_lut_sin_wr_en) {
        __Vdlyvval__sinLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
    }
    if (vlSymsp->TOP.io_lut_cos_wr_en) {
        __Vdlyvval__cosLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
    }
    if (vlSelf->__PVT__cosLut_io_rd_en) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x7fU & ((IData)(vlSymsp->TOP.RopeUnit__DOT__pairs_1_io_angle_idx) 
                        >> 3U));
        vlSelf->__PVT__cosLut__DOT__rd_col_delayed 
            = (7U & (IData)(vlSymsp->TOP.RopeUnit__DOT__pairs_1_io_angle_idx));
    }
    vlSelf->__PVT__sinLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__sinLut__DOT___GEN_12));
    vlSelf->__PVT__cosLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__cosLut__DOT___GEN_12));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__xOddD1 = 0U;
        vlSelf->__PVT__xEvenD1 = 0U;
    } else if (vlSelf->__PVT__cosLut_io_rd_en) {
        vlSelf->__PVT__xOddD1 = vlSymsp->TOP.io_in_vec_3;
        vlSelf->__PVT__xEvenD1 = vlSymsp->TOP.io_in_vec_2;
    }
    vlSelf->__PVT__expectedRd = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                 && (IData)(vlSelf->__PVT__cosLut_io_rd_en));
    vlSelf->__PVT__expectedCosWr = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSymsp->TOP.io_lut_cos_wr_en));
    vlSelf->__PVT__expectedSinWr = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSymsp->TOP.io_lut_sin_wr_en));
    vlSelf->__PVT__sinLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_sin_wr_en));
    vlSelf->__PVT__cosLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_cos_wr_en));
    vlSelf->__PVT__cosLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__cosLut_io_rd_en));
    vlSelf->__PVT__sinLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_sin_wr_en) 
                                                      & (0x7fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
    vlSelf->__PVT__cosLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_cos_wr_en) 
                                                      & (0x7fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__coeffValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdEven = vlSelf->__PVT__rawEven;
        vlSelf->__PVT__holdOdd = vlSelf->__PVT__rawOdd;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_7[__Vdlyvdim0__sinLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_6[__Vdlyvdim0__sinLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_1[__Vdlyvdim0__sinLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_2[__Vdlyvdim0__sinLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_3[__Vdlyvdim0__sinLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_4[__Vdlyvdim0__sinLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_5[__Vdlyvdim0__sinLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_0[__Vdlyvdim0__sinLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_7[__Vdlyvdim0__cosLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_6[__Vdlyvdim0__cosLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_1[__Vdlyvdim0__cosLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_2[__Vdlyvdim0__cosLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_3[__Vdlyvdim0__cosLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_4[__Vdlyvdim0__cosLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_5[__Vdlyvdim0__cosLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_0[__Vdlyvdim0__cosLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_0__v0;
    }
    if ((7U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_7
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_7
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((6U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_6
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_6
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((5U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_5
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_5
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((4U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_4
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_4
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((3U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_3
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_3
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((2U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_2
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_2
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((1U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_1
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_1
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_0
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_0
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    }
    vlSelf->__PVT__coeffValid = vlSelf->__PVT__cosLut__DOT__io_rd_valid_REG;
    vlSelf->__PVT__sinLut__DOT___GEN_12 = ((IData)(vlSelf->__PVT__sinLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__sinLut__DOT__last_write_ack));
    vlSelf->__PVT__cosLut__DOT___GEN_12 = ((IData)(vlSelf->__PVT__cosLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__cosLut__DOT__last_write_ack));
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_3));
    __PVT__evenFull = (0x1ffffffU & (VL_EXTENDS_II(25,24, 
                                                   (0xffffffU 
                                                    & VL_MULS_III(24, 
                                                                  (0xffffffU 
                                                                   & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xEvenD1))), 
                                                                  (0xffffffU 
                                                                   & VL_EXTENDS_II(24,16, (IData)(__PVT__cosLut_io_rd_data)))))) 
                                     - VL_EXTENDS_II(25,24, 
                                                     (0xffffffU 
                                                      & VL_MULS_III(24, 
                                                                    (0xffffffU 
                                                                     & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xOddD1))), 
                                                                    (0xffffffU 
                                                                     & VL_EXTENDS_II(24,16, (IData)(__PVT__sinLut_io_rd_data))))))));
    __PVT__oddFull = (0x1ffffffU & (VL_EXTENDS_II(25,24, 
                                                  (0xffffffU 
                                                   & VL_MULS_III(24, 
                                                                 (0xffffffU 
                                                                  & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xEvenD1))), 
                                                                 (0xffffffU 
                                                                  & VL_EXTENDS_II(24,16, (IData)(__PVT__sinLut_io_rd_data)))))) 
                                    + VL_EXTENDS_II(25,24, 
                                                    (0xffffffU 
                                                     & VL_MULS_III(24, 
                                                                   (0xffffffU 
                                                                    & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xOddD1))), 
                                                                   (0xffffffU 
                                                                    & VL_EXTENDS_II(24,16, (IData)(__PVT__cosLut_io_rd_data))))))));
    vlSelf->__PVT__rawEven = (VL_LTS_III(11, 0x7fU, 
                                         (0x7ffU & 
                                          (__PVT__evenFull 
                                           >> 0xeU)))
                               ? 0x7fU : (VL_GTS_III(11, 0x780U, 
                                                     (0x7ffU 
                                                      & (__PVT__evenFull 
                                                         >> 0xeU)))
                                           ? 0x80U : 
                                          (0xffU & 
                                           (__PVT__evenFull 
                                            >> 0xeU))));
    vlSelf->__PVT__rawOdd = (VL_LTS_III(11, 0x7fU, 
                                        (0x7ffU & (__PVT__oddFull 
                                                   >> 0xeU)))
                              ? 0x7fU : (VL_GTS_III(11, 0x780U, 
                                                    (0x7ffU 
                                                     & (__PVT__oddFull 
                                                        >> 0xeU)))
                                          ? 0x80U : 
                                         (0xffU & (__PVT__oddFull 
                                                   >> 0xeU))));
    vlSelf->__PVT___GEN_3 = (((IData)(vlSymsp->TOP.io_stall) 
                              & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                 & (IData)(vlSelf->__PVT__coeffValid))) 
                             | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                    & (IData)(vlSelf->__PVT__holdValid))) 
                                & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->io_out_valid = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                            & ((IData)(vlSelf->__PVT__holdValid) 
                               | (IData)(vlSelf->__PVT__coeffValid)));
}

VL_INLINE_OPT void VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_2__0(VRopeUnit_RopePairCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_2__0\n"); );
    // Init
    SData/*15:0*/ __PVT__cosLut_io_rd_data;
    __PVT__cosLut_io_rd_data = 0;
    SData/*15:0*/ __PVT__sinLut_io_rd_data;
    __PVT__sinLut_io_rd_data = 0;
    IData/*24:0*/ __PVT__evenFull;
    __PVT__evenFull = 0;
    IData/*24:0*/ __PVT__oddFull;
    __PVT__oddFull = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.io_lut_sin_wr_en) {
        __Vdlyvval__sinLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
    }
    if (vlSymsp->TOP.io_lut_cos_wr_en) {
        __Vdlyvval__cosLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
    }
    if (vlSelf->__PVT__cosLut_io_rd_en) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x7fU & ((IData)(vlSymsp->TOP.RopeUnit__DOT__pairs_2_io_angle_idx) 
                        >> 3U));
        vlSelf->__PVT__cosLut__DOT__rd_col_delayed 
            = (7U & (IData)(vlSymsp->TOP.RopeUnit__DOT__pairs_2_io_angle_idx));
    }
    vlSelf->__PVT__sinLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__sinLut__DOT___GEN_12));
    vlSelf->__PVT__cosLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__cosLut__DOT___GEN_12));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__xOddD1 = 0U;
        vlSelf->__PVT__xEvenD1 = 0U;
    } else if (vlSelf->__PVT__cosLut_io_rd_en) {
        vlSelf->__PVT__xOddD1 = vlSymsp->TOP.io_in_vec_5;
        vlSelf->__PVT__xEvenD1 = vlSymsp->TOP.io_in_vec_4;
    }
    vlSelf->__PVT__expectedRd = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                 && (IData)(vlSelf->__PVT__cosLut_io_rd_en));
    vlSelf->__PVT__expectedCosWr = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSymsp->TOP.io_lut_cos_wr_en));
    vlSelf->__PVT__expectedSinWr = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSymsp->TOP.io_lut_sin_wr_en));
    vlSelf->__PVT__sinLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_sin_wr_en));
    vlSelf->__PVT__cosLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_cos_wr_en));
    vlSelf->__PVT__cosLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__cosLut_io_rd_en));
    vlSelf->__PVT__sinLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_sin_wr_en) 
                                                      & (0x7fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
    vlSelf->__PVT__cosLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_cos_wr_en) 
                                                      & (0x7fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__coeffValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdEven = vlSelf->__PVT__rawEven;
        vlSelf->__PVT__holdOdd = vlSelf->__PVT__rawOdd;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_7[__Vdlyvdim0__sinLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_6[__Vdlyvdim0__sinLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_1[__Vdlyvdim0__sinLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_2[__Vdlyvdim0__sinLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_3[__Vdlyvdim0__sinLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_4[__Vdlyvdim0__sinLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_5[__Vdlyvdim0__sinLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_0[__Vdlyvdim0__sinLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_7[__Vdlyvdim0__cosLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_6[__Vdlyvdim0__cosLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_1[__Vdlyvdim0__cosLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_2[__Vdlyvdim0__cosLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_3[__Vdlyvdim0__cosLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_4[__Vdlyvdim0__cosLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_5[__Vdlyvdim0__cosLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_0[__Vdlyvdim0__cosLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_0__v0;
    }
    if ((7U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_7
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_7
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((6U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_6
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_6
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((5U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_5
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_5
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((4U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_4
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_4
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((3U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_3
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_3
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((2U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_2
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_2
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((1U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_1
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_1
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_0
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_0
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    }
    vlSelf->__PVT__coeffValid = vlSelf->__PVT__cosLut__DOT__io_rd_valid_REG;
    vlSelf->__PVT__sinLut__DOT___GEN_12 = ((IData)(vlSelf->__PVT__sinLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__sinLut__DOT__last_write_ack));
    vlSelf->__PVT__cosLut__DOT___GEN_12 = ((IData)(vlSelf->__PVT__cosLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__cosLut__DOT__last_write_ack));
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_3));
    __PVT__evenFull = (0x1ffffffU & (VL_EXTENDS_II(25,24, 
                                                   (0xffffffU 
                                                    & VL_MULS_III(24, 
                                                                  (0xffffffU 
                                                                   & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xEvenD1))), 
                                                                  (0xffffffU 
                                                                   & VL_EXTENDS_II(24,16, (IData)(__PVT__cosLut_io_rd_data)))))) 
                                     - VL_EXTENDS_II(25,24, 
                                                     (0xffffffU 
                                                      & VL_MULS_III(24, 
                                                                    (0xffffffU 
                                                                     & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xOddD1))), 
                                                                    (0xffffffU 
                                                                     & VL_EXTENDS_II(24,16, (IData)(__PVT__sinLut_io_rd_data))))))));
    __PVT__oddFull = (0x1ffffffU & (VL_EXTENDS_II(25,24, 
                                                  (0xffffffU 
                                                   & VL_MULS_III(24, 
                                                                 (0xffffffU 
                                                                  & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xEvenD1))), 
                                                                 (0xffffffU 
                                                                  & VL_EXTENDS_II(24,16, (IData)(__PVT__sinLut_io_rd_data)))))) 
                                    + VL_EXTENDS_II(25,24, 
                                                    (0xffffffU 
                                                     & VL_MULS_III(24, 
                                                                   (0xffffffU 
                                                                    & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xOddD1))), 
                                                                   (0xffffffU 
                                                                    & VL_EXTENDS_II(24,16, (IData)(__PVT__cosLut_io_rd_data))))))));
    vlSelf->__PVT__rawEven = (VL_LTS_III(11, 0x7fU, 
                                         (0x7ffU & 
                                          (__PVT__evenFull 
                                           >> 0xeU)))
                               ? 0x7fU : (VL_GTS_III(11, 0x780U, 
                                                     (0x7ffU 
                                                      & (__PVT__evenFull 
                                                         >> 0xeU)))
                                           ? 0x80U : 
                                          (0xffU & 
                                           (__PVT__evenFull 
                                            >> 0xeU))));
    vlSelf->__PVT__rawOdd = (VL_LTS_III(11, 0x7fU, 
                                        (0x7ffU & (__PVT__oddFull 
                                                   >> 0xeU)))
                              ? 0x7fU : (VL_GTS_III(11, 0x780U, 
                                                    (0x7ffU 
                                                     & (__PVT__oddFull 
                                                        >> 0xeU)))
                                          ? 0x80U : 
                                         (0xffU & (__PVT__oddFull 
                                                   >> 0xeU))));
    vlSelf->__PVT___GEN_3 = (((IData)(vlSymsp->TOP.io_stall) 
                              & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                 & (IData)(vlSelf->__PVT__coeffValid))) 
                             | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                    & (IData)(vlSelf->__PVT__holdValid))) 
                                & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->io_out_valid = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                            & ((IData)(vlSelf->__PVT__holdValid) 
                               | (IData)(vlSelf->__PVT__coeffValid)));
}

VL_INLINE_OPT void VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_3__0(VRopeUnit_RopePairCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_3__0\n"); );
    // Init
    SData/*15:0*/ __PVT__cosLut_io_rd_data;
    __PVT__cosLut_io_rd_data = 0;
    SData/*15:0*/ __PVT__sinLut_io_rd_data;
    __PVT__sinLut_io_rd_data = 0;
    IData/*24:0*/ __PVT__evenFull;
    __PVT__evenFull = 0;
    IData/*24:0*/ __PVT__oddFull;
    __PVT__oddFull = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.io_lut_sin_wr_en) {
        __Vdlyvval__sinLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
    }
    if (vlSymsp->TOP.io_lut_cos_wr_en) {
        __Vdlyvval__cosLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
    }
    if (vlSelf->__PVT__cosLut_io_rd_en) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x7fU & ((IData)(vlSymsp->TOP.RopeUnit__DOT__pairs_3_io_angle_idx) 
                        >> 3U));
        vlSelf->__PVT__cosLut__DOT__rd_col_delayed 
            = (7U & (IData)(vlSymsp->TOP.RopeUnit__DOT__pairs_3_io_angle_idx));
    }
    vlSelf->__PVT__sinLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__sinLut__DOT___GEN_12));
    vlSelf->__PVT__cosLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__cosLut__DOT___GEN_12));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__xOddD1 = 0U;
        vlSelf->__PVT__xEvenD1 = 0U;
    } else if (vlSelf->__PVT__cosLut_io_rd_en) {
        vlSelf->__PVT__xOddD1 = vlSymsp->TOP.io_in_vec_7;
        vlSelf->__PVT__xEvenD1 = vlSymsp->TOP.io_in_vec_6;
    }
    vlSelf->__PVT__expectedRd = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                 && (IData)(vlSelf->__PVT__cosLut_io_rd_en));
    vlSelf->__PVT__expectedCosWr = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSymsp->TOP.io_lut_cos_wr_en));
    vlSelf->__PVT__expectedSinWr = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSymsp->TOP.io_lut_sin_wr_en));
    vlSelf->__PVT__sinLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_sin_wr_en));
    vlSelf->__PVT__cosLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_cos_wr_en));
    vlSelf->__PVT__cosLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__cosLut_io_rd_en));
    vlSelf->__PVT__sinLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_sin_wr_en) 
                                                      & (0x7fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
    vlSelf->__PVT__cosLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_cos_wr_en) 
                                                      & (0x7fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__coeffValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdEven = vlSelf->__PVT__rawEven;
        vlSelf->__PVT__holdOdd = vlSelf->__PVT__rawOdd;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_7[__Vdlyvdim0__sinLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_6[__Vdlyvdim0__sinLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_1[__Vdlyvdim0__sinLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_2[__Vdlyvdim0__sinLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_3[__Vdlyvdim0__sinLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_4[__Vdlyvdim0__sinLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_5[__Vdlyvdim0__sinLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_0[__Vdlyvdim0__sinLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_7[__Vdlyvdim0__cosLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_6[__Vdlyvdim0__cosLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_1[__Vdlyvdim0__cosLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_2[__Vdlyvdim0__cosLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_3[__Vdlyvdim0__cosLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_4[__Vdlyvdim0__cosLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_5[__Vdlyvdim0__cosLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_0[__Vdlyvdim0__cosLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_0__v0;
    }
    if ((7U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_7
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_7
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((6U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_6
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_6
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((5U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_5
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_5
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((4U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_4
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_4
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((3U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_3
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_3
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((2U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_2
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_2
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((1U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_1
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_1
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_0
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_0
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    }
    vlSelf->__PVT__coeffValid = vlSelf->__PVT__cosLut__DOT__io_rd_valid_REG;
    vlSelf->__PVT__sinLut__DOT___GEN_12 = ((IData)(vlSelf->__PVT__sinLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__sinLut__DOT__last_write_ack));
    vlSelf->__PVT__cosLut__DOT___GEN_12 = ((IData)(vlSelf->__PVT__cosLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__cosLut__DOT__last_write_ack));
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_3));
    __PVT__evenFull = (0x1ffffffU & (VL_EXTENDS_II(25,24, 
                                                   (0xffffffU 
                                                    & VL_MULS_III(24, 
                                                                  (0xffffffU 
                                                                   & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xEvenD1))), 
                                                                  (0xffffffU 
                                                                   & VL_EXTENDS_II(24,16, (IData)(__PVT__cosLut_io_rd_data)))))) 
                                     - VL_EXTENDS_II(25,24, 
                                                     (0xffffffU 
                                                      & VL_MULS_III(24, 
                                                                    (0xffffffU 
                                                                     & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xOddD1))), 
                                                                    (0xffffffU 
                                                                     & VL_EXTENDS_II(24,16, (IData)(__PVT__sinLut_io_rd_data))))))));
    __PVT__oddFull = (0x1ffffffU & (VL_EXTENDS_II(25,24, 
                                                  (0xffffffU 
                                                   & VL_MULS_III(24, 
                                                                 (0xffffffU 
                                                                  & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xEvenD1))), 
                                                                 (0xffffffU 
                                                                  & VL_EXTENDS_II(24,16, (IData)(__PVT__sinLut_io_rd_data)))))) 
                                    + VL_EXTENDS_II(25,24, 
                                                    (0xffffffU 
                                                     & VL_MULS_III(24, 
                                                                   (0xffffffU 
                                                                    & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xOddD1))), 
                                                                   (0xffffffU 
                                                                    & VL_EXTENDS_II(24,16, (IData)(__PVT__cosLut_io_rd_data))))))));
    vlSelf->__PVT__rawEven = (VL_LTS_III(11, 0x7fU, 
                                         (0x7ffU & 
                                          (__PVT__evenFull 
                                           >> 0xeU)))
                               ? 0x7fU : (VL_GTS_III(11, 0x780U, 
                                                     (0x7ffU 
                                                      & (__PVT__evenFull 
                                                         >> 0xeU)))
                                           ? 0x80U : 
                                          (0xffU & 
                                           (__PVT__evenFull 
                                            >> 0xeU))));
    vlSelf->__PVT__rawOdd = (VL_LTS_III(11, 0x7fU, 
                                        (0x7ffU & (__PVT__oddFull 
                                                   >> 0xeU)))
                              ? 0x7fU : (VL_GTS_III(11, 0x780U, 
                                                    (0x7ffU 
                                                     & (__PVT__oddFull 
                                                        >> 0xeU)))
                                          ? 0x80U : 
                                         (0xffU & (__PVT__oddFull 
                                                   >> 0xeU))));
    vlSelf->__PVT___GEN_3 = (((IData)(vlSymsp->TOP.io_stall) 
                              & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                 & (IData)(vlSelf->__PVT__coeffValid))) 
                             | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                    & (IData)(vlSelf->__PVT__holdValid))) 
                                & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->io_out_valid = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                            & ((IData)(vlSelf->__PVT__holdValid) 
                               | (IData)(vlSelf->__PVT__coeffValid)));
}

VL_INLINE_OPT void VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_4__0(VRopeUnit_RopePairCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_4__0\n"); );
    // Init
    SData/*15:0*/ __PVT__cosLut_io_rd_data;
    __PVT__cosLut_io_rd_data = 0;
    SData/*15:0*/ __PVT__sinLut_io_rd_data;
    __PVT__sinLut_io_rd_data = 0;
    IData/*24:0*/ __PVT__evenFull;
    __PVT__evenFull = 0;
    IData/*24:0*/ __PVT__oddFull;
    __PVT__oddFull = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.io_lut_sin_wr_en) {
        __Vdlyvval__sinLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
    }
    if (vlSymsp->TOP.io_lut_cos_wr_en) {
        __Vdlyvval__cosLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
    }
    if (vlSelf->__PVT__cosLut_io_rd_en) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x7fU & ((IData)(vlSymsp->TOP.RopeUnit__DOT__pairs_4_io_angle_idx) 
                        >> 3U));
        vlSelf->__PVT__cosLut__DOT__rd_col_delayed 
            = (7U & (IData)(vlSymsp->TOP.RopeUnit__DOT__pairs_4_io_angle_idx));
    }
    vlSelf->__PVT__sinLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__sinLut__DOT___GEN_12));
    vlSelf->__PVT__cosLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__cosLut__DOT___GEN_12));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__xOddD1 = 0U;
        vlSelf->__PVT__xEvenD1 = 0U;
    } else if (vlSelf->__PVT__cosLut_io_rd_en) {
        vlSelf->__PVT__xOddD1 = vlSymsp->TOP.io_in_vec_9;
        vlSelf->__PVT__xEvenD1 = vlSymsp->TOP.io_in_vec_8;
    }
    vlSelf->__PVT__expectedRd = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                 && (IData)(vlSelf->__PVT__cosLut_io_rd_en));
    vlSelf->__PVT__expectedCosWr = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSymsp->TOP.io_lut_cos_wr_en));
    vlSelf->__PVT__expectedSinWr = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSymsp->TOP.io_lut_sin_wr_en));
    vlSelf->__PVT__sinLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_sin_wr_en));
    vlSelf->__PVT__cosLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_cos_wr_en));
    vlSelf->__PVT__cosLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__cosLut_io_rd_en));
    vlSelf->__PVT__sinLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_sin_wr_en) 
                                                      & (0x7fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
    vlSelf->__PVT__cosLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_cos_wr_en) 
                                                      & (0x7fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__coeffValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdEven = vlSelf->__PVT__rawEven;
        vlSelf->__PVT__holdOdd = vlSelf->__PVT__rawOdd;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_7[__Vdlyvdim0__sinLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_6[__Vdlyvdim0__sinLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_1[__Vdlyvdim0__sinLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_2[__Vdlyvdim0__sinLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_3[__Vdlyvdim0__sinLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_4[__Vdlyvdim0__sinLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_5[__Vdlyvdim0__sinLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_0[__Vdlyvdim0__sinLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_7[__Vdlyvdim0__cosLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_6[__Vdlyvdim0__cosLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_1[__Vdlyvdim0__cosLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_2[__Vdlyvdim0__cosLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_3[__Vdlyvdim0__cosLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_4[__Vdlyvdim0__cosLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_5[__Vdlyvdim0__cosLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_0[__Vdlyvdim0__cosLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_0__v0;
    }
    if ((7U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_7
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_7
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((6U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_6
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_6
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((5U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_5
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_5
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((4U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_4
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_4
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((3U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_3
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_3
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((2U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_2
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_2
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((1U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_1
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_1
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_0
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_0
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    }
    vlSelf->__PVT__coeffValid = vlSelf->__PVT__cosLut__DOT__io_rd_valid_REG;
    vlSelf->__PVT__sinLut__DOT___GEN_12 = ((IData)(vlSelf->__PVT__sinLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__sinLut__DOT__last_write_ack));
    vlSelf->__PVT__cosLut__DOT___GEN_12 = ((IData)(vlSelf->__PVT__cosLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__cosLut__DOT__last_write_ack));
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_3));
    __PVT__evenFull = (0x1ffffffU & (VL_EXTENDS_II(25,24, 
                                                   (0xffffffU 
                                                    & VL_MULS_III(24, 
                                                                  (0xffffffU 
                                                                   & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xEvenD1))), 
                                                                  (0xffffffU 
                                                                   & VL_EXTENDS_II(24,16, (IData)(__PVT__cosLut_io_rd_data)))))) 
                                     - VL_EXTENDS_II(25,24, 
                                                     (0xffffffU 
                                                      & VL_MULS_III(24, 
                                                                    (0xffffffU 
                                                                     & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xOddD1))), 
                                                                    (0xffffffU 
                                                                     & VL_EXTENDS_II(24,16, (IData)(__PVT__sinLut_io_rd_data))))))));
    __PVT__oddFull = (0x1ffffffU & (VL_EXTENDS_II(25,24, 
                                                  (0xffffffU 
                                                   & VL_MULS_III(24, 
                                                                 (0xffffffU 
                                                                  & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xEvenD1))), 
                                                                 (0xffffffU 
                                                                  & VL_EXTENDS_II(24,16, (IData)(__PVT__sinLut_io_rd_data)))))) 
                                    + VL_EXTENDS_II(25,24, 
                                                    (0xffffffU 
                                                     & VL_MULS_III(24, 
                                                                   (0xffffffU 
                                                                    & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xOddD1))), 
                                                                   (0xffffffU 
                                                                    & VL_EXTENDS_II(24,16, (IData)(__PVT__cosLut_io_rd_data))))))));
    vlSelf->__PVT__rawEven = (VL_LTS_III(11, 0x7fU, 
                                         (0x7ffU & 
                                          (__PVT__evenFull 
                                           >> 0xeU)))
                               ? 0x7fU : (VL_GTS_III(11, 0x780U, 
                                                     (0x7ffU 
                                                      & (__PVT__evenFull 
                                                         >> 0xeU)))
                                           ? 0x80U : 
                                          (0xffU & 
                                           (__PVT__evenFull 
                                            >> 0xeU))));
    vlSelf->__PVT__rawOdd = (VL_LTS_III(11, 0x7fU, 
                                        (0x7ffU & (__PVT__oddFull 
                                                   >> 0xeU)))
                              ? 0x7fU : (VL_GTS_III(11, 0x780U, 
                                                    (0x7ffU 
                                                     & (__PVT__oddFull 
                                                        >> 0xeU)))
                                          ? 0x80U : 
                                         (0xffU & (__PVT__oddFull 
                                                   >> 0xeU))));
    vlSelf->__PVT___GEN_3 = (((IData)(vlSymsp->TOP.io_stall) 
                              & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                 & (IData)(vlSelf->__PVT__coeffValid))) 
                             | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                    & (IData)(vlSelf->__PVT__holdValid))) 
                                & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->io_out_valid = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                            & ((IData)(vlSelf->__PVT__holdValid) 
                               | (IData)(vlSelf->__PVT__coeffValid)));
}

VL_INLINE_OPT void VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_5__0(VRopeUnit_RopePairCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_5__0\n"); );
    // Init
    SData/*15:0*/ __PVT__cosLut_io_rd_data;
    __PVT__cosLut_io_rd_data = 0;
    SData/*15:0*/ __PVT__sinLut_io_rd_data;
    __PVT__sinLut_io_rd_data = 0;
    IData/*24:0*/ __PVT__evenFull;
    __PVT__evenFull = 0;
    IData/*24:0*/ __PVT__oddFull;
    __PVT__oddFull = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.io_lut_sin_wr_en) {
        __Vdlyvval__sinLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
    }
    if (vlSymsp->TOP.io_lut_cos_wr_en) {
        __Vdlyvval__cosLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
    }
    if (vlSelf->__PVT__cosLut_io_rd_en) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x7fU & ((IData)(vlSymsp->TOP.RopeUnit__DOT__pairs_5_io_angle_idx) 
                        >> 3U));
        vlSelf->__PVT__cosLut__DOT__rd_col_delayed 
            = (7U & (IData)(vlSymsp->TOP.RopeUnit__DOT__pairs_5_io_angle_idx));
    }
    vlSelf->__PVT__sinLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__sinLut__DOT___GEN_12));
    vlSelf->__PVT__cosLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__cosLut__DOT___GEN_12));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__xOddD1 = 0U;
        vlSelf->__PVT__xEvenD1 = 0U;
    } else if (vlSelf->__PVT__cosLut_io_rd_en) {
        vlSelf->__PVT__xOddD1 = vlSymsp->TOP.io_in_vec_11;
        vlSelf->__PVT__xEvenD1 = vlSymsp->TOP.io_in_vec_10;
    }
    vlSelf->__PVT__expectedRd = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                 && (IData)(vlSelf->__PVT__cosLut_io_rd_en));
    vlSelf->__PVT__expectedCosWr = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSymsp->TOP.io_lut_cos_wr_en));
    vlSelf->__PVT__expectedSinWr = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSymsp->TOP.io_lut_sin_wr_en));
    vlSelf->__PVT__sinLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_sin_wr_en));
    vlSelf->__PVT__cosLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_cos_wr_en));
    vlSelf->__PVT__cosLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__cosLut_io_rd_en));
    vlSelf->__PVT__sinLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_sin_wr_en) 
                                                      & (0x7fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
    vlSelf->__PVT__cosLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_cos_wr_en) 
                                                      & (0x7fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__coeffValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdEven = vlSelf->__PVT__rawEven;
        vlSelf->__PVT__holdOdd = vlSelf->__PVT__rawOdd;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_7[__Vdlyvdim0__sinLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_6[__Vdlyvdim0__sinLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_1[__Vdlyvdim0__sinLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_2[__Vdlyvdim0__sinLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_3[__Vdlyvdim0__sinLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_4[__Vdlyvdim0__sinLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_5[__Vdlyvdim0__sinLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_0[__Vdlyvdim0__sinLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_7[__Vdlyvdim0__cosLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_6[__Vdlyvdim0__cosLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_1[__Vdlyvdim0__cosLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_2[__Vdlyvdim0__cosLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_3[__Vdlyvdim0__cosLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_4[__Vdlyvdim0__cosLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_5[__Vdlyvdim0__cosLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_0[__Vdlyvdim0__cosLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_0__v0;
    }
    if ((7U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_7
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_7
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((6U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_6
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_6
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((5U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_5
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_5
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((4U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_4
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_4
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((3U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_3
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_3
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((2U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_2
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_2
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((1U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_1
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_1
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_0
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_0
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    }
    vlSelf->__PVT__coeffValid = vlSelf->__PVT__cosLut__DOT__io_rd_valid_REG;
    vlSelf->__PVT__sinLut__DOT___GEN_12 = ((IData)(vlSelf->__PVT__sinLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__sinLut__DOT__last_write_ack));
    vlSelf->__PVT__cosLut__DOT___GEN_12 = ((IData)(vlSelf->__PVT__cosLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__cosLut__DOT__last_write_ack));
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_3));
    __PVT__evenFull = (0x1ffffffU & (VL_EXTENDS_II(25,24, 
                                                   (0xffffffU 
                                                    & VL_MULS_III(24, 
                                                                  (0xffffffU 
                                                                   & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xEvenD1))), 
                                                                  (0xffffffU 
                                                                   & VL_EXTENDS_II(24,16, (IData)(__PVT__cosLut_io_rd_data)))))) 
                                     - VL_EXTENDS_II(25,24, 
                                                     (0xffffffU 
                                                      & VL_MULS_III(24, 
                                                                    (0xffffffU 
                                                                     & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xOddD1))), 
                                                                    (0xffffffU 
                                                                     & VL_EXTENDS_II(24,16, (IData)(__PVT__sinLut_io_rd_data))))))));
    __PVT__oddFull = (0x1ffffffU & (VL_EXTENDS_II(25,24, 
                                                  (0xffffffU 
                                                   & VL_MULS_III(24, 
                                                                 (0xffffffU 
                                                                  & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xEvenD1))), 
                                                                 (0xffffffU 
                                                                  & VL_EXTENDS_II(24,16, (IData)(__PVT__sinLut_io_rd_data)))))) 
                                    + VL_EXTENDS_II(25,24, 
                                                    (0xffffffU 
                                                     & VL_MULS_III(24, 
                                                                   (0xffffffU 
                                                                    & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xOddD1))), 
                                                                   (0xffffffU 
                                                                    & VL_EXTENDS_II(24,16, (IData)(__PVT__cosLut_io_rd_data))))))));
    vlSelf->__PVT__rawEven = (VL_LTS_III(11, 0x7fU, 
                                         (0x7ffU & 
                                          (__PVT__evenFull 
                                           >> 0xeU)))
                               ? 0x7fU : (VL_GTS_III(11, 0x780U, 
                                                     (0x7ffU 
                                                      & (__PVT__evenFull 
                                                         >> 0xeU)))
                                           ? 0x80U : 
                                          (0xffU & 
                                           (__PVT__evenFull 
                                            >> 0xeU))));
    vlSelf->__PVT__rawOdd = (VL_LTS_III(11, 0x7fU, 
                                        (0x7ffU & (__PVT__oddFull 
                                                   >> 0xeU)))
                              ? 0x7fU : (VL_GTS_III(11, 0x780U, 
                                                    (0x7ffU 
                                                     & (__PVT__oddFull 
                                                        >> 0xeU)))
                                          ? 0x80U : 
                                         (0xffU & (__PVT__oddFull 
                                                   >> 0xeU))));
    vlSelf->__PVT___GEN_3 = (((IData)(vlSymsp->TOP.io_stall) 
                              & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                 & (IData)(vlSelf->__PVT__coeffValid))) 
                             | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                    & (IData)(vlSelf->__PVT__holdValid))) 
                                & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->io_out_valid = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                            & ((IData)(vlSelf->__PVT__holdValid) 
                               | (IData)(vlSelf->__PVT__coeffValid)));
}

VL_INLINE_OPT void VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_6__0(VRopeUnit_RopePairCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_6__0\n"); );
    // Init
    SData/*15:0*/ __PVT__cosLut_io_rd_data;
    __PVT__cosLut_io_rd_data = 0;
    SData/*15:0*/ __PVT__sinLut_io_rd_data;
    __PVT__sinLut_io_rd_data = 0;
    IData/*24:0*/ __PVT__evenFull;
    __PVT__evenFull = 0;
    IData/*24:0*/ __PVT__oddFull;
    __PVT__oddFull = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.io_lut_sin_wr_en) {
        __Vdlyvval__sinLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
    }
    if (vlSymsp->TOP.io_lut_cos_wr_en) {
        __Vdlyvval__cosLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
    }
    if (vlSelf->__PVT__cosLut_io_rd_en) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x7fU & ((IData)(vlSymsp->TOP.RopeUnit__DOT__pairs_6_io_angle_idx) 
                        >> 3U));
        vlSelf->__PVT__cosLut__DOT__rd_col_delayed 
            = (7U & (IData)(vlSymsp->TOP.RopeUnit__DOT__pairs_6_io_angle_idx));
    }
    vlSelf->__PVT__sinLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__sinLut__DOT___GEN_12));
    vlSelf->__PVT__cosLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__cosLut__DOT___GEN_12));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__xOddD1 = 0U;
        vlSelf->__PVT__xEvenD1 = 0U;
    } else if (vlSelf->__PVT__cosLut_io_rd_en) {
        vlSelf->__PVT__xOddD1 = vlSymsp->TOP.io_in_vec_13;
        vlSelf->__PVT__xEvenD1 = vlSymsp->TOP.io_in_vec_12;
    }
    vlSelf->__PVT__expectedRd = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                 && (IData)(vlSelf->__PVT__cosLut_io_rd_en));
    vlSelf->__PVT__expectedCosWr = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSymsp->TOP.io_lut_cos_wr_en));
    vlSelf->__PVT__expectedSinWr = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSymsp->TOP.io_lut_sin_wr_en));
    vlSelf->__PVT__sinLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_sin_wr_en));
    vlSelf->__PVT__cosLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_cos_wr_en));
    vlSelf->__PVT__cosLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__cosLut_io_rd_en));
    vlSelf->__PVT__sinLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_sin_wr_en) 
                                                      & (0x7fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
    vlSelf->__PVT__cosLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_cos_wr_en) 
                                                      & (0x7fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__coeffValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdEven = vlSelf->__PVT__rawEven;
        vlSelf->__PVT__holdOdd = vlSelf->__PVT__rawOdd;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_7[__Vdlyvdim0__sinLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_6[__Vdlyvdim0__sinLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_1[__Vdlyvdim0__sinLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_2[__Vdlyvdim0__sinLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_3[__Vdlyvdim0__sinLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_4[__Vdlyvdim0__sinLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_5[__Vdlyvdim0__sinLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_0[__Vdlyvdim0__sinLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_7[__Vdlyvdim0__cosLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_6[__Vdlyvdim0__cosLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_1[__Vdlyvdim0__cosLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_2[__Vdlyvdim0__cosLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_3[__Vdlyvdim0__cosLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_4[__Vdlyvdim0__cosLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_5[__Vdlyvdim0__cosLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_0[__Vdlyvdim0__cosLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_0__v0;
    }
    if ((7U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_7
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_7
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((6U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_6
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_6
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((5U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_5
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_5
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((4U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_4
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_4
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((3U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_3
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_3
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((2U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_2
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_2
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((1U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_1
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_1
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_0
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_0
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    }
    vlSelf->__PVT__coeffValid = vlSelf->__PVT__cosLut__DOT__io_rd_valid_REG;
    vlSelf->__PVT__sinLut__DOT___GEN_12 = ((IData)(vlSelf->__PVT__sinLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__sinLut__DOT__last_write_ack));
    vlSelf->__PVT__cosLut__DOT___GEN_12 = ((IData)(vlSelf->__PVT__cosLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__cosLut__DOT__last_write_ack));
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_3));
    __PVT__evenFull = (0x1ffffffU & (VL_EXTENDS_II(25,24, 
                                                   (0xffffffU 
                                                    & VL_MULS_III(24, 
                                                                  (0xffffffU 
                                                                   & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xEvenD1))), 
                                                                  (0xffffffU 
                                                                   & VL_EXTENDS_II(24,16, (IData)(__PVT__cosLut_io_rd_data)))))) 
                                     - VL_EXTENDS_II(25,24, 
                                                     (0xffffffU 
                                                      & VL_MULS_III(24, 
                                                                    (0xffffffU 
                                                                     & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xOddD1))), 
                                                                    (0xffffffU 
                                                                     & VL_EXTENDS_II(24,16, (IData)(__PVT__sinLut_io_rd_data))))))));
    __PVT__oddFull = (0x1ffffffU & (VL_EXTENDS_II(25,24, 
                                                  (0xffffffU 
                                                   & VL_MULS_III(24, 
                                                                 (0xffffffU 
                                                                  & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xEvenD1))), 
                                                                 (0xffffffU 
                                                                  & VL_EXTENDS_II(24,16, (IData)(__PVT__sinLut_io_rd_data)))))) 
                                    + VL_EXTENDS_II(25,24, 
                                                    (0xffffffU 
                                                     & VL_MULS_III(24, 
                                                                   (0xffffffU 
                                                                    & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xOddD1))), 
                                                                   (0xffffffU 
                                                                    & VL_EXTENDS_II(24,16, (IData)(__PVT__cosLut_io_rd_data))))))));
    vlSelf->__PVT__rawEven = (VL_LTS_III(11, 0x7fU, 
                                         (0x7ffU & 
                                          (__PVT__evenFull 
                                           >> 0xeU)))
                               ? 0x7fU : (VL_GTS_III(11, 0x780U, 
                                                     (0x7ffU 
                                                      & (__PVT__evenFull 
                                                         >> 0xeU)))
                                           ? 0x80U : 
                                          (0xffU & 
                                           (__PVT__evenFull 
                                            >> 0xeU))));
    vlSelf->__PVT__rawOdd = (VL_LTS_III(11, 0x7fU, 
                                        (0x7ffU & (__PVT__oddFull 
                                                   >> 0xeU)))
                              ? 0x7fU : (VL_GTS_III(11, 0x780U, 
                                                    (0x7ffU 
                                                     & (__PVT__oddFull 
                                                        >> 0xeU)))
                                          ? 0x80U : 
                                         (0xffU & (__PVT__oddFull 
                                                   >> 0xeU))));
    vlSelf->__PVT___GEN_3 = (((IData)(vlSymsp->TOP.io_stall) 
                              & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                 & (IData)(vlSelf->__PVT__coeffValid))) 
                             | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                    & (IData)(vlSelf->__PVT__holdValid))) 
                                & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->io_out_valid = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                            & ((IData)(vlSelf->__PVT__holdValid) 
                               | (IData)(vlSelf->__PVT__coeffValid)));
}

VL_INLINE_OPT void VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_7__0(VRopeUnit_RopePairCore* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_7__0\n"); );
    // Init
    SData/*15:0*/ __PVT__cosLut_io_rd_data;
    __PVT__cosLut_io_rd_data = 0;
    SData/*15:0*/ __PVT__sinLut_io_rd_data;
    __PVT__sinLut_io_rd_data = 0;
    IData/*24:0*/ __PVT__evenFull;
    __PVT__evenFull = 0;
    IData/*24:0*/ __PVT__oddFull;
    __PVT__oddFull = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_0__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_5__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_4__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_3__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_2__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_1__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_6__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvval__cosLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cosLut__DOT__lut_mem_7__v0;
    __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_0__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_5__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_4__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_3__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_2__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_1__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_6__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvval__sinLut__DOT__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinLut__DOT__lut_mem_7__v0;
    __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 0U;
    __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.io_lut_sin_wr_en) {
        __Vdlyvval__sinLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__sinLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__sinLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__sinLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__sinLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__sinLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__sinLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__sinLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__sinLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__sinLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__sinLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
    }
    if (vlSymsp->TOP.io_lut_cos_wr_en) {
        __Vdlyvval__cosLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__cosLut__DOT__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__cosLut__DOT__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__cosLut__DOT__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__cosLut__DOT__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__cosLut__DOT__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__cosLut__DOT__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__cosLut__DOT__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__cosLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__cosLut__DOT__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__cosLut__DOT__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
    }
    if (vlSelf->__PVT__cosLut_io_rd_en) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0 
            = (0x7fU & ((IData)(vlSymsp->TOP.RopeUnit__DOT__pairs_7_io_angle_idx) 
                        >> 3U));
        vlSelf->__PVT__cosLut__DOT__rd_col_delayed 
            = (7U & (IData)(vlSymsp->TOP.RopeUnit__DOT__pairs_7_io_angle_idx));
    }
    vlSelf->__PVT__sinLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__sinLut__DOT___GEN_12));
    vlSelf->__PVT__cosLut__DOT__is_programmed = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && (IData)(vlSelf->__PVT__cosLut__DOT___GEN_12));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__xOddD1 = 0U;
        vlSelf->__PVT__xEvenD1 = 0U;
    } else if (vlSelf->__PVT__cosLut_io_rd_en) {
        vlSelf->__PVT__xOddD1 = vlSymsp->TOP.io_in_vec_15;
        vlSelf->__PVT__xEvenD1 = vlSymsp->TOP.io_in_vec_14;
    }
    vlSelf->__PVT__expectedRd = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                 && (IData)(vlSelf->__PVT__cosLut_io_rd_en));
    vlSelf->__PVT__expectedCosWr = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSymsp->TOP.io_lut_cos_wr_en));
    vlSelf->__PVT__expectedSinWr = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSymsp->TOP.io_lut_sin_wr_en));
    vlSelf->__PVT__sinLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_sin_wr_en));
    vlSelf->__PVT__cosLut__DOT__io_wr_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSymsp->TOP.io_lut_cos_wr_en));
    vlSelf->__PVT__cosLut__DOT__io_rd_valid_REG = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.reset))) 
                                                   && (IData)(vlSelf->__PVT__cosLut_io_rd_en));
    vlSelf->__PVT__sinLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_sin_wr_en) 
                                                      & (0x7fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
    vlSelf->__PVT__cosLut__DOT__last_write_ack = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((IData)(vlSymsp->TOP.io_lut_cos_wr_en) 
                                                      & (0x7fU 
                                                         == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
    if ((((IData)(vlSymsp->TOP.io_stall) & (IData)(vlSelf->__PVT__coeffValid)) 
         & (~ (IData)(vlSelf->__PVT__holdValid)))) {
        vlSelf->__PVT__holdEven = vlSelf->__PVT__rawEven;
        vlSelf->__PVT__holdOdd = vlSelf->__PVT__rawOdd;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_7[__Vdlyvdim0__sinLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_6[__Vdlyvdim0__sinLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_1[__Vdlyvdim0__sinLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_2[__Vdlyvdim0__sinLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_3[__Vdlyvdim0__sinLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_4[__Vdlyvdim0__sinLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_5[__Vdlyvdim0__sinLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__sinLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__sinLut__DOT__lut_mem_0[__Vdlyvdim0__sinLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__sinLut__DOT__lut_mem_0__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_7__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_7[__Vdlyvdim0__cosLut__DOT__lut_mem_7__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_7__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_6__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_6[__Vdlyvdim0__cosLut__DOT__lut_mem_6__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_6__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_1__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_1[__Vdlyvdim0__cosLut__DOT__lut_mem_1__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_1__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_2__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_2[__Vdlyvdim0__cosLut__DOT__lut_mem_2__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_2__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_3__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_3[__Vdlyvdim0__cosLut__DOT__lut_mem_3__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_3__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_4__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_4[__Vdlyvdim0__cosLut__DOT__lut_mem_4__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_4__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_5__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_5[__Vdlyvdim0__cosLut__DOT__lut_mem_5__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_5__v0;
    }
    if (__Vdlyvset__cosLut__DOT__lut_mem_0__v0) {
        vlSelf->__PVT__cosLut__DOT__lut_mem_0[__Vdlyvdim0__cosLut__DOT__lut_mem_0__v0] 
            = __Vdlyvval__cosLut__DOT__lut_mem_0__v0;
    }
    if ((7U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_7
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_7
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((6U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_6
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_6
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((5U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_5
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_5
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((4U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_4
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_4
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((3U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_3
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_3
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((2U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_2
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_2
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else if ((1U == (IData)(vlSelf->__PVT__cosLut__DOT__rd_col_delayed))) {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_1
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_1
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    } else {
        __PVT__cosLut_io_rd_data = vlSelf->__PVT__cosLut__DOT__lut_mem_0
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
        __PVT__sinLut_io_rd_data = vlSelf->__PVT__sinLut__DOT__lut_mem_0
            [vlSelf->__PVT__cosLut__DOT__lut_mem_7_rd_vec_addr_pipe_0];
    }
    vlSelf->__PVT__coeffValid = vlSelf->__PVT__cosLut__DOT__io_rd_valid_REG;
    vlSelf->__PVT__sinLut__DOT___GEN_12 = ((IData)(vlSelf->__PVT__sinLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__sinLut__DOT__last_write_ack));
    vlSelf->__PVT__cosLut__DOT___GEN_12 = ((IData)(vlSelf->__PVT__cosLut__DOT__is_programmed) 
                                           | (IData)(vlSelf->__PVT__cosLut__DOT__last_write_ack));
    vlSelf->__PVT__holdValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (IData)(vlSelf->__PVT___GEN_3));
    __PVT__evenFull = (0x1ffffffU & (VL_EXTENDS_II(25,24, 
                                                   (0xffffffU 
                                                    & VL_MULS_III(24, 
                                                                  (0xffffffU 
                                                                   & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xEvenD1))), 
                                                                  (0xffffffU 
                                                                   & VL_EXTENDS_II(24,16, (IData)(__PVT__cosLut_io_rd_data)))))) 
                                     - VL_EXTENDS_II(25,24, 
                                                     (0xffffffU 
                                                      & VL_MULS_III(24, 
                                                                    (0xffffffU 
                                                                     & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xOddD1))), 
                                                                    (0xffffffU 
                                                                     & VL_EXTENDS_II(24,16, (IData)(__PVT__sinLut_io_rd_data))))))));
    __PVT__oddFull = (0x1ffffffU & (VL_EXTENDS_II(25,24, 
                                                  (0xffffffU 
                                                   & VL_MULS_III(24, 
                                                                 (0xffffffU 
                                                                  & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xEvenD1))), 
                                                                 (0xffffffU 
                                                                  & VL_EXTENDS_II(24,16, (IData)(__PVT__sinLut_io_rd_data)))))) 
                                    + VL_EXTENDS_II(25,24, 
                                                    (0xffffffU 
                                                     & VL_MULS_III(24, 
                                                                   (0xffffffU 
                                                                    & VL_EXTENDS_II(24,8, (IData)(vlSelf->__PVT__xOddD1))), 
                                                                   (0xffffffU 
                                                                    & VL_EXTENDS_II(24,16, (IData)(__PVT__cosLut_io_rd_data))))))));
    vlSelf->__PVT__rawEven = (VL_LTS_III(11, 0x7fU, 
                                         (0x7ffU & 
                                          (__PVT__evenFull 
                                           >> 0xeU)))
                               ? 0x7fU : (VL_GTS_III(11, 0x780U, 
                                                     (0x7ffU 
                                                      & (__PVT__evenFull 
                                                         >> 0xeU)))
                                           ? 0x80U : 
                                          (0xffU & 
                                           (__PVT__evenFull 
                                            >> 0xeU))));
    vlSelf->__PVT__rawOdd = (VL_LTS_III(11, 0x7fU, 
                                        (0x7ffU & (__PVT__oddFull 
                                                   >> 0xeU)))
                              ? 0x7fU : (VL_GTS_III(11, 0x780U, 
                                                    (0x7ffU 
                                                     & (__PVT__oddFull 
                                                        >> 0xeU)))
                                          ? 0x80U : 
                                         (0xffU & (__PVT__oddFull 
                                                   >> 0xeU))));
    vlSelf->__PVT___GEN_3 = (((IData)(vlSymsp->TOP.io_stall) 
                              & ((~ (IData)(vlSelf->__PVT__holdValid)) 
                                 & (IData)(vlSelf->__PVT__coeffValid))) 
                             | ((~ ((~ (IData)(vlSymsp->TOP.io_stall)) 
                                    & (IData)(vlSelf->__PVT__holdValid))) 
                                & (IData)(vlSelf->__PVT__holdValid)));
    vlSelf->io_out_valid = ((~ (IData)(vlSymsp->TOP.io_stall)) 
                            & ((IData)(vlSelf->__PVT__holdValid) 
                               | (IData)(vlSelf->__PVT__coeffValid)));
}
