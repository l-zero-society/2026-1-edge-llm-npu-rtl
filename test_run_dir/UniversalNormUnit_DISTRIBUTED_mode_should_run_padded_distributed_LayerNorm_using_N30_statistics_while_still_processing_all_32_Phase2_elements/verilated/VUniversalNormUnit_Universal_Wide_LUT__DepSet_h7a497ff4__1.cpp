// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUniversalNormUnit.h for the primary calling header

#include "VUniversalNormUnit__pch.h"
#include "VUniversalNormUnit_Universal_Wide_LUT.h"
#include "VUniversalNormUnit__Syms.h"

VL_INLINE_OPT void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_13__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUniversalNormUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_13__0\n"); );
    // Init
    CData/*2:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.UniversalNormUnit__DOT__scaleLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
    }
    if (vlSymsp->TOP.UniversalNormUnit__DOT__scaleLuts_1_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (7U & ((IData)(vlSymsp->TOP.UniversalNormUnit__DOT__scaleLuts_13_io_rd_addr) 
                     >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.UniversalNormUnit__DOT__scaleLuts_13_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.UniversalNormUnit__DOT__scaleLuts_1_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.UniversalNormUnit__DOT__scaleLuts_0_io_wr_en) 
                                         & (7U == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->io_rd_data = ((7U == (IData)(vlSelf->__PVT__rd_col_delayed))
                           ? vlSelf->__PVT__lut_mem_7
                          [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                           : ((6U == (IData)(vlSelf->__PVT__rd_col_delayed))
                               ? vlSelf->__PVT__lut_mem_6
                              [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                               : ((5U == (IData)(vlSelf->__PVT__rd_col_delayed))
                                   ? vlSelf->__PVT__lut_mem_5
                                  [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                   : ((4U == (IData)(vlSelf->__PVT__rd_col_delayed))
                                       ? vlSelf->__PVT__lut_mem_4
                                      [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                       : ((3U == (IData)(vlSelf->__PVT__rd_col_delayed))
                                           ? vlSelf->__PVT__lut_mem_3
                                          [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                           : ((2U == (IData)(vlSelf->__PVT__rd_col_delayed))
                                               ? vlSelf->__PVT__lut_mem_2
                                              [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                               : ((1U 
                                                   == (IData)(vlSelf->__PVT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__lut_mem_1
                                                  [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                   : 
                                                  vlSelf->__PVT__lut_mem_0
                                                  [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0])))))));
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_14__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUniversalNormUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_14__0\n"); );
    // Init
    CData/*2:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.UniversalNormUnit__DOT__scaleLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
    }
    if (vlSymsp->TOP.UniversalNormUnit__DOT__scaleLuts_1_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (7U & ((IData)(vlSymsp->TOP.UniversalNormUnit__DOT__scaleLuts_14_io_rd_addr) 
                     >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.UniversalNormUnit__DOT__scaleLuts_14_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.UniversalNormUnit__DOT__scaleLuts_1_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.UniversalNormUnit__DOT__scaleLuts_0_io_wr_en) 
                                         & (7U == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->io_rd_data = ((7U == (IData)(vlSelf->__PVT__rd_col_delayed))
                           ? vlSelf->__PVT__lut_mem_7
                          [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                           : ((6U == (IData)(vlSelf->__PVT__rd_col_delayed))
                               ? vlSelf->__PVT__lut_mem_6
                              [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                               : ((5U == (IData)(vlSelf->__PVT__rd_col_delayed))
                                   ? vlSelf->__PVT__lut_mem_5
                                  [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                   : ((4U == (IData)(vlSelf->__PVT__rd_col_delayed))
                                       ? vlSelf->__PVT__lut_mem_4
                                      [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                       : ((3U == (IData)(vlSelf->__PVT__rd_col_delayed))
                                           ? vlSelf->__PVT__lut_mem_3
                                          [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                           : ((2U == (IData)(vlSelf->__PVT__rd_col_delayed))
                                               ? vlSelf->__PVT__lut_mem_2
                                              [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                               : ((1U 
                                                   == (IData)(vlSelf->__PVT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__lut_mem_1
                                                  [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                   : 
                                                  vlSelf->__PVT__lut_mem_0
                                                  [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0])))))));
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}

VL_INLINE_OPT void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_15__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUniversalNormUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_15__0\n"); );
    // Init
    CData/*2:0*/ __Vdlyvdim0__lut_mem_0__v0;
    __Vdlyvdim0__lut_mem_0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_0__v0;
    __Vdlyvval__lut_mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_0__v0;
    __Vdlyvset__lut_mem_0__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__lut_mem_5__v0;
    __Vdlyvdim0__lut_mem_5__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_5__v0;
    __Vdlyvval__lut_mem_5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_5__v0;
    __Vdlyvset__lut_mem_5__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__lut_mem_4__v0;
    __Vdlyvdim0__lut_mem_4__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_4__v0;
    __Vdlyvval__lut_mem_4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_4__v0;
    __Vdlyvset__lut_mem_4__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__lut_mem_3__v0;
    __Vdlyvdim0__lut_mem_3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_3__v0;
    __Vdlyvval__lut_mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_3__v0;
    __Vdlyvset__lut_mem_3__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__lut_mem_2__v0;
    __Vdlyvdim0__lut_mem_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_2__v0;
    __Vdlyvval__lut_mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_2__v0;
    __Vdlyvset__lut_mem_2__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__lut_mem_1__v0;
    __Vdlyvdim0__lut_mem_1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_1__v0;
    __Vdlyvval__lut_mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_1__v0;
    __Vdlyvset__lut_mem_1__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__lut_mem_6__v0;
    __Vdlyvdim0__lut_mem_6__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_6__v0;
    __Vdlyvval__lut_mem_6__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_6__v0;
    __Vdlyvset__lut_mem_6__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__lut_mem_7__v0;
    __Vdlyvdim0__lut_mem_7__v0 = 0;
    SData/*15:0*/ __Vdlyvval__lut_mem_7__v0;
    __Vdlyvval__lut_mem_7__v0 = 0;
    CData/*0:0*/ __Vdlyvset__lut_mem_7__v0;
    __Vdlyvset__lut_mem_7__v0 = 0;
    // Body
    __Vdlyvset__lut_mem_7__v0 = 0U;
    __Vdlyvset__lut_mem_6__v0 = 0U;
    __Vdlyvset__lut_mem_1__v0 = 0U;
    __Vdlyvset__lut_mem_2__v0 = 0U;
    __Vdlyvset__lut_mem_3__v0 = 0U;
    __Vdlyvset__lut_mem_4__v0 = 0U;
    __Vdlyvset__lut_mem_5__v0 = 0U;
    __Vdlyvset__lut_mem_0__v0 = 0U;
    if (vlSymsp->TOP.UniversalNormUnit__DOT__scaleLuts_0_io_wr_en) {
        __Vdlyvval__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_data_7;
        __Vdlyvset__lut_mem_7__v0 = 1U;
        __Vdlyvdim0__lut_mem_7__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_data_6;
        __Vdlyvset__lut_mem_6__v0 = 1U;
        __Vdlyvdim0__lut_mem_6__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_data_1;
        __Vdlyvset__lut_mem_1__v0 = 1U;
        __Vdlyvdim0__lut_mem_1__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_data_2;
        __Vdlyvset__lut_mem_2__v0 = 1U;
        __Vdlyvdim0__lut_mem_2__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_data_3;
        __Vdlyvset__lut_mem_3__v0 = 1U;
        __Vdlyvdim0__lut_mem_3__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_data_4;
        __Vdlyvset__lut_mem_4__v0 = 1U;
        __Vdlyvdim0__lut_mem_4__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_data_5;
        __Vdlyvset__lut_mem_5__v0 = 1U;
        __Vdlyvdim0__lut_mem_5__v0 = vlSymsp->TOP.io_lut_wr_addr;
        __Vdlyvval__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_data_0;
        __Vdlyvset__lut_mem_0__v0 = 1U;
        __Vdlyvdim0__lut_mem_0__v0 = vlSymsp->TOP.io_lut_wr_addr;
    }
    if (vlSymsp->TOP.UniversalNormUnit__DOT__scaleLuts_1_io_rd_en) {
        vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0 
            = (7U & ((IData)(vlSymsp->TOP.UniversalNormUnit__DOT__scaleLuts_15_io_rd_addr) 
                     >> 3U));
        vlSelf->__PVT__rd_col_delayed = (7U & (IData)(vlSymsp->TOP.UniversalNormUnit__DOT__scaleLuts_15_io_rd_addr));
    }
    vlSelf->__PVT__is_programmed = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT__io_rd_valid_REG = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSymsp->TOP.UniversalNormUnit__DOT__scaleLuts_1_io_rd_en));
    vlSelf->__PVT__last_write_ack = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((IData)(vlSymsp->TOP.UniversalNormUnit__DOT__scaleLuts_0_io_wr_en) 
                                         & (7U == (IData)(vlSymsp->TOP.io_lut_wr_addr))));
    if (__Vdlyvset__lut_mem_7__v0) {
        vlSelf->__PVT__lut_mem_7[__Vdlyvdim0__lut_mem_7__v0] 
            = __Vdlyvval__lut_mem_7__v0;
    }
    if (__Vdlyvset__lut_mem_6__v0) {
        vlSelf->__PVT__lut_mem_6[__Vdlyvdim0__lut_mem_6__v0] 
            = __Vdlyvval__lut_mem_6__v0;
    }
    if (__Vdlyvset__lut_mem_1__v0) {
        vlSelf->__PVT__lut_mem_1[__Vdlyvdim0__lut_mem_1__v0] 
            = __Vdlyvval__lut_mem_1__v0;
    }
    if (__Vdlyvset__lut_mem_2__v0) {
        vlSelf->__PVT__lut_mem_2[__Vdlyvdim0__lut_mem_2__v0] 
            = __Vdlyvval__lut_mem_2__v0;
    }
    if (__Vdlyvset__lut_mem_3__v0) {
        vlSelf->__PVT__lut_mem_3[__Vdlyvdim0__lut_mem_3__v0] 
            = __Vdlyvval__lut_mem_3__v0;
    }
    if (__Vdlyvset__lut_mem_4__v0) {
        vlSelf->__PVT__lut_mem_4[__Vdlyvdim0__lut_mem_4__v0] 
            = __Vdlyvval__lut_mem_4__v0;
    }
    if (__Vdlyvset__lut_mem_5__v0) {
        vlSelf->__PVT__lut_mem_5[__Vdlyvdim0__lut_mem_5__v0] 
            = __Vdlyvval__lut_mem_5__v0;
    }
    if (__Vdlyvset__lut_mem_0__v0) {
        vlSelf->__PVT__lut_mem_0[__Vdlyvdim0__lut_mem_0__v0] 
            = __Vdlyvval__lut_mem_0__v0;
    }
    vlSelf->io_rd_data = ((7U == (IData)(vlSelf->__PVT__rd_col_delayed))
                           ? vlSelf->__PVT__lut_mem_7
                          [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                           : ((6U == (IData)(vlSelf->__PVT__rd_col_delayed))
                               ? vlSelf->__PVT__lut_mem_6
                              [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                               : ((5U == (IData)(vlSelf->__PVT__rd_col_delayed))
                                   ? vlSelf->__PVT__lut_mem_5
                                  [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                   : ((4U == (IData)(vlSelf->__PVT__rd_col_delayed))
                                       ? vlSelf->__PVT__lut_mem_4
                                      [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                       : ((3U == (IData)(vlSelf->__PVT__rd_col_delayed))
                                           ? vlSelf->__PVT__lut_mem_3
                                          [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                           : ((2U == (IData)(vlSelf->__PVT__rd_col_delayed))
                                               ? vlSelf->__PVT__lut_mem_2
                                              [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                               : ((1U 
                                                   == (IData)(vlSelf->__PVT__rd_col_delayed))
                                                   ? 
                                                  vlSelf->__PVT__lut_mem_1
                                                  [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                   : 
                                                  vlSelf->__PVT__lut_mem_0
                                                  [vlSelf->__PVT__lut_mem_7_rd_vec_addr_pipe_0])))))));
    vlSelf->__PVT___GEN_12 = ((IData)(vlSelf->__PVT__is_programmed) 
                              | (IData)(vlSelf->__PVT__last_write_ack));
}
