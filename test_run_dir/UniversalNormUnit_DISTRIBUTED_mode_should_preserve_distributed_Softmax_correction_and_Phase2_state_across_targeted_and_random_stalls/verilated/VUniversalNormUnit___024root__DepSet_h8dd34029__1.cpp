// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUniversalNormUnit.h for the primary calling header

#include "VUniversalNormUnit__pch.h"
#include "VUniversalNormUnit__Syms.h"
#include "VUniversalNormUnit___024root.h"

VL_INLINE_OPT void VUniversalNormUnit___024root___nba_sequent__TOP__2(VUniversalNormUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUniversalNormUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUniversalNormUnit___024root___nba_sequent__TOP__2\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    vlSelf->UniversalNormUnit__DOT___T_132 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_1.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_133 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_2.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_134 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_3.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_135 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_4.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_136 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_5.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_137 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_6.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_138 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_7.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_139 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_8.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_140 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_9.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_141 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_10.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_142 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_11.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_143 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_12.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_144 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_13.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_145 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_14.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT___T_146 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_15.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__scaleReady = ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_15.__PVT__is_programmed) 
                                                  & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_14.__PVT__is_programmed) 
                                                     & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_13.__PVT__is_programmed) 
                                                        & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_12.__PVT__is_programmed) 
                                                           & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_11.__PVT__is_programmed) 
                                                              & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_10.__PVT__is_programmed) 
                                                                 & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_9.__PVT__is_programmed) 
                                                                    & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_8.__PVT__is_programmed) 
                                                                       & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_7.__PVT__is_programmed) 
                                                                          & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_6.__PVT__is_programmed) 
                                                                             & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_5.__PVT__is_programmed) 
                                                                                & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_4.__PVT__is_programmed) 
                                                                                & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_3.__PVT__is_programmed) 
                                                                                & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_2.__PVT__is_programmed) 
                                                                                & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_1.__PVT__is_programmed) 
                                                                                & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_0.__PVT__is_programmed))))))))))))))));
    vlSelf->UniversalNormUnit__DOT___T_131 = ((~ (IData)(vlSelf->io_layout_mode)) 
                                              & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_0.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__onlineScaleArriving 
        = ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_15.__PVT__io_rd_valid_REG) 
           & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_14.__PVT__io_rd_valid_REG) 
              & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_13.__PVT__io_rd_valid_REG) 
                 & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_12.__PVT__io_rd_valid_REG) 
                    & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_11.__PVT__io_rd_valid_REG) 
                       & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_10.__PVT__io_rd_valid_REG) 
                          & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_9.__PVT__io_rd_valid_REG) 
                             & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_8.__PVT__io_rd_valid_REG) 
                                & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_7.__PVT__io_rd_valid_REG) 
                                   & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_6.__PVT__io_rd_valid_REG) 
                                      & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_5.__PVT__io_rd_valid_REG) 
                                         & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_4.__PVT__io_rd_valid_REG) 
                                            & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_3.__PVT__io_rd_valid_REG) 
                                               & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_2.__PVT__io_rd_valid_REG) 
                                                  & ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_1.__PVT__io_rd_valid_REG) 
                                                     & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_0.__PVT__io_rd_valid_REG))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo_io_enq_valid 
        = ((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_0.__PVT__io_rd_valid_REG) 
           & (IData)(vlSelf->io_layout_mode));
    __Vtemp_2[0U] = 0x2d41U;
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    __Vtemp_3[0U] = vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_0.io_rd_data;
    __Vtemp_3[1U] = 0U;
    __Vtemp_3[2U] = 0U;
    VL_MUL_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo_io_enq_bits_scale 
        = (0xfffffffffULL & ((3U == (IData)(vlSelf->io_mode_sel))
                              ? ((0x80U & (IData)(vlSelf->UniversalNormUnit__DOT__globalScaleExpReg))
                                  ? VL_SHIFTL_QQI(36,36,8, (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_0.io_rd_data)), (IData)(vlSelf->UniversalNormUnit__DOT__distributedCompletedScale_magnitude))
                                  : VL_SHIFTR_QQI(36,36,8, (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_0.io_rd_data)), (IData)(vlSelf->UniversalNormUnit__DOT__distributedCompletedScale_magnitude)))
                              : VL_SHIFTR_QQI(36,36,7, 
                                              (0xfffffffffULL 
                                               & ((1U 
                                                   & (IData)(vlSelf->UniversalNormUnit__DOT__globalScaleExpReg))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    __Vtemp_4[1U])) 
                                                    << 0x32U) 
                                                   | (((QData)((IData)(
                                                                       __Vtemp_4[1U])) 
                                                       << 0x12U) 
                                                      | ((QData)((IData)(
                                                                         __Vtemp_4[0U])) 
                                                         >> 0xeU)))
                                                   : (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_0.io_rd_data)))), 
                                              (0x7fU 
                                               & ((IData)(vlSelf->UniversalNormUnit__DOT__globalScaleExpReg) 
                                                  >> 1U)))));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_0_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_1_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_1))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_1)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_2_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_2))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_2)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_3_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_3))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_3)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_4_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_4))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_4)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_5_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_5))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_5)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_6_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_6))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_6)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_7_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_7))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_7)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_8_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_8))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_8)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_9_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_9))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_9)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_10_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_10))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_10)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_11_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_11))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_11)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_12_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_12))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_12)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_13_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_13))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_13)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_14_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_14))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_14)));
    vlSelf->UniversalNormUnit__DOT__correctionExpLuts_15_io_rd_addr 
        = ((0x3fU < (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_15))
            ? 0x3fU : (0x3fU & (IData)(vlSelf->UniversalNormUnit__DOT__correctionAddr_mag_15)));
    vlSelf->UniversalNormUnit__DOT__product_32 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale));
    vlSelf->UniversalNormUnit__DOT__product_33 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_1));
    vlSelf->UniversalNormUnit__DOT__product_34 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_2));
    vlSelf->UniversalNormUnit__DOT__product_35 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_3));
    vlSelf->UniversalNormUnit__DOT__product_36 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_4));
    vlSelf->UniversalNormUnit__DOT__product_37 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_5));
    vlSelf->UniversalNormUnit__DOT__product_38 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_6));
    vlSelf->UniversalNormUnit__DOT__product_39 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_7));
    vlSelf->UniversalNormUnit__DOT__product_40 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_8));
    vlSelf->UniversalNormUnit__DOT__product_41 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_9));
    vlSelf->UniversalNormUnit__DOT__product_42 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_10));
    vlSelf->UniversalNormUnit__DOT__product_43 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_11));
    vlSelf->UniversalNormUnit__DOT__product_44 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_12));
    vlSelf->UniversalNormUnit__DOT__product_45 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_13));
    vlSelf->UniversalNormUnit__DOT__product_46 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_14));
    vlSelf->UniversalNormUnit__DOT__product_47 = (0xfffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     ((7U 
                                                                       == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__rd_col_delayed))
                                                                       ? 
                                                                      vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_7
                                                                      [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__rd_col_delayed))
                                                                        ? 
                                                                       vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_6
                                                                       [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__rd_col_delayed))
                                                                         ? 
                                                                        vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_5
                                                                        [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__rd_col_delayed))
                                                                          ? 
                                                                         vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_4
                                                                         [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__rd_col_delayed))
                                                                           ? 
                                                                          vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_3
                                                                          [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__rd_col_delayed))
                                                                            ? 
                                                                           vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_2
                                                                           [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__rd_col_delayed))
                                                                             ? 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_1
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]
                                                                             : 
                                                                            vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_0
                                                                            [vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__lut_mem_7_rd_vec_addr_pipe_0]))))))))) 
                                                     * vlSelf->UniversalNormUnit__DOT__scale_15));
    vlSelf->UniversalNormUnit__DOT__expRespValid = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_0) 
         & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_0.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_0_full 
        = (0x1ffffffffULL & (0x4000ULL + (QData)((IData)(
                                                         (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_0)) 
                                                           * (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_0.io_rd_data))) 
                                                          >> 0xeU)))));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_0_full_1 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_0)) 
                             + (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_0.io_rd_data))));
    vlSelf->UniversalNormUnit__DOT__expRespValid_1 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_1) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_1.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_1_full 
        = (0x1ffffffffULL & (0x4000ULL + (QData)((IData)(
                                                         (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_1)) 
                                                           * (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_1.io_rd_data))) 
                                                          >> 0xeU)))));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_1_full_1 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_1)) 
                             + (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_1.io_rd_data))));
    vlSelf->UniversalNormUnit__DOT__expRespValid_2 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_2) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_2.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_2_full 
        = (0x1ffffffffULL & (0x4000ULL + (QData)((IData)(
                                                         (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_2)) 
                                                           * (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_2.io_rd_data))) 
                                                          >> 0xeU)))));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_2_full_1 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_2)) 
                             + (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_2.io_rd_data))));
    vlSelf->UniversalNormUnit__DOT__expRespValid_3 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_3) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_3.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_3_full 
        = (0x1ffffffffULL & (0x4000ULL + (QData)((IData)(
                                                         (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_3)) 
                                                           * (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_3.io_rd_data))) 
                                                          >> 0xeU)))));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_3_full_1 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_3)) 
                             + (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_3.io_rd_data))));
    vlSelf->UniversalNormUnit__DOT__expRespValid_4 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_4) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_4.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_4_full 
        = (0x1ffffffffULL & (0x4000ULL + (QData)((IData)(
                                                         (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_4)) 
                                                           * (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_4.io_rd_data))) 
                                                          >> 0xeU)))));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_4_full_1 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_4)) 
                             + (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_4.io_rd_data))));
    vlSelf->UniversalNormUnit__DOT__expRespValid_5 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_5) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_5.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_5_full 
        = (0x1ffffffffULL & (0x4000ULL + (QData)((IData)(
                                                         (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_5)) 
                                                           * (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_5.io_rd_data))) 
                                                          >> 0xeU)))));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_5_full_1 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_5)) 
                             + (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_5.io_rd_data))));
    vlSelf->UniversalNormUnit__DOT__expRespValid_6 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_6) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_6.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_6_full 
        = (0x1ffffffffULL & (0x4000ULL + (QData)((IData)(
                                                         (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_6)) 
                                                           * (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_6.io_rd_data))) 
                                                          >> 0xeU)))));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_6_full_1 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_6)) 
                             + (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_6.io_rd_data))));
    vlSelf->UniversalNormUnit__DOT__expRespValid_7 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_7) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_7.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_7_full 
        = (0x1ffffffffULL & (0x4000ULL + (QData)((IData)(
                                                         (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_7)) 
                                                           * (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_7.io_rd_data))) 
                                                          >> 0xeU)))));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_7_full_1 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_7)) 
                             + (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_7.io_rd_data))));
    vlSelf->UniversalNormUnit__DOT__expRespValid_8 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_8) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_8.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_8_full 
        = (0x1ffffffffULL & (0x4000ULL + (QData)((IData)(
                                                         (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_8)) 
                                                           * (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_8.io_rd_data))) 
                                                          >> 0xeU)))));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_8_full_1 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_8)) 
                             + (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_8.io_rd_data))));
    vlSelf->UniversalNormUnit__DOT__expRespValid_9 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_9) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_9.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_9_full 
        = (0x1ffffffffULL & (0x4000ULL + (QData)((IData)(
                                                         (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_9)) 
                                                           * (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_9.io_rd_data))) 
                                                          >> 0xeU)))));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_9_full_1 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_9)) 
                             + (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_9.io_rd_data))));
    vlSelf->UniversalNormUnit__DOT__expRespValid_10 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_10) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_10.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_10_full 
        = (0x1ffffffffULL & (0x4000ULL + (QData)((IData)(
                                                         (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_10)) 
                                                           * (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_10.io_rd_data))) 
                                                          >> 0xeU)))));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_10_full_1 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_10)) 
                             + (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_10.io_rd_data))));
    vlSelf->UniversalNormUnit__DOT__expRespValid_11 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_11) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_11.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_11_full 
        = (0x1ffffffffULL & (0x4000ULL + (QData)((IData)(
                                                         (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_11)) 
                                                           * (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_11.io_rd_data))) 
                                                          >> 0xeU)))));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_11_full_1 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_11)) 
                             + (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_11.io_rd_data))));
    vlSelf->UniversalNormUnit__DOT__expRespValid_12 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_12) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_12.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_12_full 
        = (0x1ffffffffULL & (0x4000ULL + (QData)((IData)(
                                                         (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_12)) 
                                                           * (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_12.io_rd_data))) 
                                                          >> 0xeU)))));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_12_full_1 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_12)) 
                             + (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_12.io_rd_data))));
    vlSelf->UniversalNormUnit__DOT__expRespValid_13 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_13) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_13.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_13_full 
        = (0x1ffffffffULL & (0x4000ULL + (QData)((IData)(
                                                         (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_13)) 
                                                           * (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_13.io_rd_data))) 
                                                          >> 0xeU)))));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_13_full_1 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_13)) 
                             + (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_13.io_rd_data))));
    vlSelf->UniversalNormUnit__DOT__expRespValid_14 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_14) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_14.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_14_full 
        = (0x1ffffffffULL & (0x4000ULL + (QData)((IData)(
                                                         (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_14)) 
                                                           * (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_14.io_rd_data))) 
                                                          >> 0xeU)))));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_14_full_1 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_14)) 
                             + (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_14.io_rd_data))));
    vlSelf->UniversalNormUnit__DOT___io_lut_ready_T_2 
        = (0xffffU == ((((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_15.__PVT__is_programmed) 
                         << 0xfU) | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_14.__PVT__is_programmed) 
                                      << 0xeU) | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_13.__PVT__is_programmed) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_12.__PVT__is_programmed) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_11.__PVT__is_programmed) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_10.__PVT__is_programmed) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_9.__PVT__is_programmed) 
                                                               << 9U) 
                                                              | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_8.__PVT__is_programmed) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_7.__PVT__is_programmed) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_6.__PVT__is_programmed) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_5.__PVT__is_programmed) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_4.__PVT__is_programmed) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_3.__PVT__is_programmed) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_2.__PVT__is_programmed) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_1.__PVT__is_programmed) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_0.__PVT__is_programmed)))))))))))))))) 
                       & ((((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_15.__PVT__is_programmed) 
                            << 0xfU) | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_14.__PVT__is_programmed) 
                                         << 0xeU) | 
                                        (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_13.__PVT__is_programmed) 
                                          << 0xdU) 
                                         | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_12.__PVT__is_programmed) 
                                             << 0xcU) 
                                            | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_11.__PVT__is_programmed) 
                                                << 0xbU) 
                                               | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_10.__PVT__is_programmed) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_9.__PVT__is_programmed) 
                                                      << 9U) 
                                                     | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_8.__PVT__is_programmed) 
                                                         << 8U) 
                                                        | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_7.__PVT__is_programmed) 
                                                            << 7U) 
                                                           | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_6.__PVT__is_programmed) 
                                                               << 6U) 
                                                              | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_5.__PVT__is_programmed) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_4.__PVT__is_programmed) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_3.__PVT__is_programmed) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_2.__PVT__is_programmed) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_1.__PVT__is_programmed) 
                                                                              << 1U) 
                                                                             | (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_0.__PVT__is_programmed)))))))))))))))) 
                          & (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15.__PVT__is_programmed) 
                              << 0xfU) | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14.__PVT__is_programmed) 
                                           << 0xeU) 
                                          | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13.__PVT__is_programmed) 
                                              << 0xdU) 
                                             | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12.__PVT__is_programmed) 
                                                 << 0xcU) 
                                                | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11.__PVT__is_programmed) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10.__PVT__is_programmed) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9.__PVT__is_programmed) 
                                                          << 9U) 
                                                         | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8.__PVT__is_programmed) 
                                                             << 8U) 
                                                            | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7.__PVT__is_programmed) 
                                                                << 7U) 
                                                               | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6.__PVT__is_programmed) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5.__PVT__is_programmed) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4.__PVT__is_programmed) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3.__PVT__is_programmed) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2.__PVT__is_programmed) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1.__PVT__is_programmed) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0.__PVT__is_programmed)))))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__expRespValid_15 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingValid_15) 
           & (IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_15.__PVT__io_rd_valid_REG));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_15_full 
        = (0x1ffffffffULL & (0x4000ULL + (QData)((IData)(
                                                         (((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_15)) 
                                                           * (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_15.io_rd_data))) 
                                                          >> 0xeU)))));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_15_full_1 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->UniversalNormUnit__DOT__softPendingBaseSum_15)) 
                             + (QData)((IData)(vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_15.io_rd_data))));
    vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo_io_deq_valid 
        = ((0U != (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo__DOT__count)) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__distPhase2ContextFifo_io_enq_valid));
    vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent 
        = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_0)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__expRespValid));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_0 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingWasNewMax_0)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_0_full)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_0_full_1));
    if (vlSelf->UniversalNormUnit__DOT__expRespValid) {
        vlSelf->UniversalNormUnit__DOT___GEN_118 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_0)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_0)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_0) {
            vlSelf->UniversalNormUnit__DOT___GEN_115 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_0)));
            vlSelf->UniversalNormUnit__DOT___GEN_117 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_0;
            if (vlSelf->io_layout_mode) {
                vlSelf->UniversalNormUnit__DOT___GEN_114 
                    = vlSelf->UniversalNormUnit__DOT__softFinalMax_0;
                vlSelf->UniversalNormUnit__DOT___GEN_113 
                    = vlSelf->UniversalNormUnit__DOT__softFinalSum_0;
            } else {
                vlSelf->UniversalNormUnit__DOT___GEN_114 
                    = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_0;
                vlSelf->UniversalNormUnit__DOT___GEN_113 
                    = vlSelf->UniversalNormUnit__DOT__softResolvedSum_0;
            }
            vlSelf->UniversalNormUnit__DOT___GEN_116 
                = vlSelf->UniversalNormUnit__DOT__softSumRegs_0;
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_115 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_0));
            vlSelf->UniversalNormUnit__DOT___GEN_117 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_0;
            vlSelf->UniversalNormUnit__DOT___GEN_114 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_0;
            vlSelf->UniversalNormUnit__DOT___GEN_116 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_0;
            vlSelf->UniversalNormUnit__DOT___GEN_113 
                = vlSelf->UniversalNormUnit__DOT__softFinalSum_0;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_118 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_0));
        vlSelf->UniversalNormUnit__DOT___GEN_115 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_0));
        vlSelf->UniversalNormUnit__DOT___GEN_117 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_0;
        vlSelf->UniversalNormUnit__DOT___GEN_114 = vlSelf->UniversalNormUnit__DOT__softFinalMax_0;
        vlSelf->UniversalNormUnit__DOT___GEN_116 = vlSelf->UniversalNormUnit__DOT__softSumRegs_0;
        vlSelf->UniversalNormUnit__DOT___GEN_113 = vlSelf->UniversalNormUnit__DOT__softFinalSum_0;
    }
    vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_1 
        = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_1)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_1));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_1 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingWasNewMax_1)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_1_full)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_1_full_1));
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_1) {
        vlSelf->UniversalNormUnit__DOT___GEN_176 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_1)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_1)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_1) {
            vlSelf->UniversalNormUnit__DOT___GEN_173 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_1)));
            vlSelf->UniversalNormUnit__DOT___GEN_175 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_1;
            if (vlSelf->io_layout_mode) {
                vlSelf->UniversalNormUnit__DOT___GEN_172 
                    = vlSelf->UniversalNormUnit__DOT__softFinalMax_1;
                vlSelf->UniversalNormUnit__DOT___GEN_171 
                    = vlSelf->UniversalNormUnit__DOT__softFinalSum_1;
            } else {
                vlSelf->UniversalNormUnit__DOT___GEN_172 
                    = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_1;
                vlSelf->UniversalNormUnit__DOT___GEN_171 
                    = vlSelf->UniversalNormUnit__DOT__softResolvedSum_1;
            }
            vlSelf->UniversalNormUnit__DOT___GEN_174 
                = vlSelf->UniversalNormUnit__DOT__softSumRegs_1;
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_173 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_1));
            vlSelf->UniversalNormUnit__DOT___GEN_175 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_1;
            vlSelf->UniversalNormUnit__DOT___GEN_172 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_1;
            vlSelf->UniversalNormUnit__DOT___GEN_174 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_1;
            vlSelf->UniversalNormUnit__DOT___GEN_171 
                = vlSelf->UniversalNormUnit__DOT__softFinalSum_1;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_176 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_1));
        vlSelf->UniversalNormUnit__DOT___GEN_173 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_1));
        vlSelf->UniversalNormUnit__DOT___GEN_175 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_1;
        vlSelf->UniversalNormUnit__DOT___GEN_172 = vlSelf->UniversalNormUnit__DOT__softFinalMax_1;
        vlSelf->UniversalNormUnit__DOT___GEN_174 = vlSelf->UniversalNormUnit__DOT__softSumRegs_1;
        vlSelf->UniversalNormUnit__DOT___GEN_171 = vlSelf->UniversalNormUnit__DOT__softFinalSum_1;
    }
    vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_2 
        = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_2)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_2));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_2 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingWasNewMax_2)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_2_full)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_2_full_1));
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_2) {
        vlSelf->UniversalNormUnit__DOT___GEN_232 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_2)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_2)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_2) {
            vlSelf->UniversalNormUnit__DOT___GEN_229 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_2)));
            vlSelf->UniversalNormUnit__DOT___GEN_231 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_2;
            if (vlSelf->io_layout_mode) {
                vlSelf->UniversalNormUnit__DOT___GEN_228 
                    = vlSelf->UniversalNormUnit__DOT__softFinalMax_2;
                vlSelf->UniversalNormUnit__DOT___GEN_227 
                    = vlSelf->UniversalNormUnit__DOT__softFinalSum_2;
            } else {
                vlSelf->UniversalNormUnit__DOT___GEN_228 
                    = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_2;
                vlSelf->UniversalNormUnit__DOT___GEN_227 
                    = vlSelf->UniversalNormUnit__DOT__softResolvedSum_2;
            }
            vlSelf->UniversalNormUnit__DOT___GEN_230 
                = vlSelf->UniversalNormUnit__DOT__softSumRegs_2;
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_229 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_2));
            vlSelf->UniversalNormUnit__DOT___GEN_231 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_2;
            vlSelf->UniversalNormUnit__DOT___GEN_228 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_2;
            vlSelf->UniversalNormUnit__DOT___GEN_230 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_2;
            vlSelf->UniversalNormUnit__DOT___GEN_227 
                = vlSelf->UniversalNormUnit__DOT__softFinalSum_2;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_232 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_2));
        vlSelf->UniversalNormUnit__DOT___GEN_229 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_2));
        vlSelf->UniversalNormUnit__DOT___GEN_231 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_2;
        vlSelf->UniversalNormUnit__DOT___GEN_228 = vlSelf->UniversalNormUnit__DOT__softFinalMax_2;
        vlSelf->UniversalNormUnit__DOT___GEN_230 = vlSelf->UniversalNormUnit__DOT__softSumRegs_2;
        vlSelf->UniversalNormUnit__DOT___GEN_227 = vlSelf->UniversalNormUnit__DOT__softFinalSum_2;
    }
    vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_3 
        = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_3)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_3));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_3 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingWasNewMax_3)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_3_full)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_3_full_1));
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_3) {
        vlSelf->UniversalNormUnit__DOT___GEN_288 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_3)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_3)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_3) {
            vlSelf->UniversalNormUnit__DOT___GEN_285 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_3)));
            vlSelf->UniversalNormUnit__DOT___GEN_287 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_3;
            if (vlSelf->io_layout_mode) {
                vlSelf->UniversalNormUnit__DOT___GEN_284 
                    = vlSelf->UniversalNormUnit__DOT__softFinalMax_3;
                vlSelf->UniversalNormUnit__DOT___GEN_283 
                    = vlSelf->UniversalNormUnit__DOT__softFinalSum_3;
            } else {
                vlSelf->UniversalNormUnit__DOT___GEN_284 
                    = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_3;
                vlSelf->UniversalNormUnit__DOT___GEN_283 
                    = vlSelf->UniversalNormUnit__DOT__softResolvedSum_3;
            }
            vlSelf->UniversalNormUnit__DOT___GEN_286 
                = vlSelf->UniversalNormUnit__DOT__softSumRegs_3;
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_285 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_3));
            vlSelf->UniversalNormUnit__DOT___GEN_287 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_3;
            vlSelf->UniversalNormUnit__DOT___GEN_284 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_3;
            vlSelf->UniversalNormUnit__DOT___GEN_286 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_3;
            vlSelf->UniversalNormUnit__DOT___GEN_283 
                = vlSelf->UniversalNormUnit__DOT__softFinalSum_3;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_288 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_3));
        vlSelf->UniversalNormUnit__DOT___GEN_285 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_3));
        vlSelf->UniversalNormUnit__DOT___GEN_287 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_3;
        vlSelf->UniversalNormUnit__DOT___GEN_284 = vlSelf->UniversalNormUnit__DOT__softFinalMax_3;
        vlSelf->UniversalNormUnit__DOT___GEN_286 = vlSelf->UniversalNormUnit__DOT__softSumRegs_3;
        vlSelf->UniversalNormUnit__DOT___GEN_283 = vlSelf->UniversalNormUnit__DOT__softFinalSum_3;
    }
    vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_4 
        = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_4)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_4));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_4 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingWasNewMax_4)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_4_full)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_4_full_1));
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_4) {
        vlSelf->UniversalNormUnit__DOT___GEN_344 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_4)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_4)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_4) {
            vlSelf->UniversalNormUnit__DOT___GEN_341 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_4)));
            vlSelf->UniversalNormUnit__DOT___GEN_343 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_4;
            if (vlSelf->io_layout_mode) {
                vlSelf->UniversalNormUnit__DOT___GEN_340 
                    = vlSelf->UniversalNormUnit__DOT__softFinalMax_4;
                vlSelf->UniversalNormUnit__DOT___GEN_339 
                    = vlSelf->UniversalNormUnit__DOT__softFinalSum_4;
            } else {
                vlSelf->UniversalNormUnit__DOT___GEN_340 
                    = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_4;
                vlSelf->UniversalNormUnit__DOT___GEN_339 
                    = vlSelf->UniversalNormUnit__DOT__softResolvedSum_4;
            }
            vlSelf->UniversalNormUnit__DOT___GEN_342 
                = vlSelf->UniversalNormUnit__DOT__softSumRegs_4;
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_341 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_4));
            vlSelf->UniversalNormUnit__DOT___GEN_343 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_4;
            vlSelf->UniversalNormUnit__DOT___GEN_340 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_4;
            vlSelf->UniversalNormUnit__DOT___GEN_342 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_4;
            vlSelf->UniversalNormUnit__DOT___GEN_339 
                = vlSelf->UniversalNormUnit__DOT__softFinalSum_4;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_344 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_4));
        vlSelf->UniversalNormUnit__DOT___GEN_341 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_4));
        vlSelf->UniversalNormUnit__DOT___GEN_343 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_4;
        vlSelf->UniversalNormUnit__DOT___GEN_340 = vlSelf->UniversalNormUnit__DOT__softFinalMax_4;
        vlSelf->UniversalNormUnit__DOT___GEN_342 = vlSelf->UniversalNormUnit__DOT__softSumRegs_4;
        vlSelf->UniversalNormUnit__DOT___GEN_339 = vlSelf->UniversalNormUnit__DOT__softFinalSum_4;
    }
    vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_5 
        = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_5)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_5));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_5 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingWasNewMax_5)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_5_full)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_5_full_1));
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_5) {
        vlSelf->UniversalNormUnit__DOT___GEN_400 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_5)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_5)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_5) {
            vlSelf->UniversalNormUnit__DOT___GEN_397 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_5)));
            vlSelf->UniversalNormUnit__DOT___GEN_399 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_5;
            if (vlSelf->io_layout_mode) {
                vlSelf->UniversalNormUnit__DOT___GEN_396 
                    = vlSelf->UniversalNormUnit__DOT__softFinalMax_5;
                vlSelf->UniversalNormUnit__DOT___GEN_395 
                    = vlSelf->UniversalNormUnit__DOT__softFinalSum_5;
            } else {
                vlSelf->UniversalNormUnit__DOT___GEN_396 
                    = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_5;
                vlSelf->UniversalNormUnit__DOT___GEN_395 
                    = vlSelf->UniversalNormUnit__DOT__softResolvedSum_5;
            }
            vlSelf->UniversalNormUnit__DOT___GEN_398 
                = vlSelf->UniversalNormUnit__DOT__softSumRegs_5;
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_397 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_5));
            vlSelf->UniversalNormUnit__DOT___GEN_399 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_5;
            vlSelf->UniversalNormUnit__DOT___GEN_396 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_5;
            vlSelf->UniversalNormUnit__DOT___GEN_398 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_5;
            vlSelf->UniversalNormUnit__DOT___GEN_395 
                = vlSelf->UniversalNormUnit__DOT__softFinalSum_5;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_400 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_5));
        vlSelf->UniversalNormUnit__DOT___GEN_397 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_5));
        vlSelf->UniversalNormUnit__DOT___GEN_399 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_5;
        vlSelf->UniversalNormUnit__DOT___GEN_396 = vlSelf->UniversalNormUnit__DOT__softFinalMax_5;
        vlSelf->UniversalNormUnit__DOT___GEN_398 = vlSelf->UniversalNormUnit__DOT__softSumRegs_5;
        vlSelf->UniversalNormUnit__DOT___GEN_395 = vlSelf->UniversalNormUnit__DOT__softFinalSum_5;
    }
    vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_6 
        = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_6)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_6));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_6 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingWasNewMax_6)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_6_full)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_6_full_1));
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_6) {
        vlSelf->UniversalNormUnit__DOT___GEN_456 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_6)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_6)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_6) {
            vlSelf->UniversalNormUnit__DOT___GEN_453 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_6)));
            vlSelf->UniversalNormUnit__DOT___GEN_455 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_6;
            if (vlSelf->io_layout_mode) {
                vlSelf->UniversalNormUnit__DOT___GEN_452 
                    = vlSelf->UniversalNormUnit__DOT__softFinalMax_6;
                vlSelf->UniversalNormUnit__DOT___GEN_451 
                    = vlSelf->UniversalNormUnit__DOT__softFinalSum_6;
            } else {
                vlSelf->UniversalNormUnit__DOT___GEN_452 
                    = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_6;
                vlSelf->UniversalNormUnit__DOT___GEN_451 
                    = vlSelf->UniversalNormUnit__DOT__softResolvedSum_6;
            }
            vlSelf->UniversalNormUnit__DOT___GEN_454 
                = vlSelf->UniversalNormUnit__DOT__softSumRegs_6;
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_453 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_6));
            vlSelf->UniversalNormUnit__DOT___GEN_455 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_6;
            vlSelf->UniversalNormUnit__DOT___GEN_452 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_6;
            vlSelf->UniversalNormUnit__DOT___GEN_454 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_6;
            vlSelf->UniversalNormUnit__DOT___GEN_451 
                = vlSelf->UniversalNormUnit__DOT__softFinalSum_6;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_456 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_6));
        vlSelf->UniversalNormUnit__DOT___GEN_453 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_6));
        vlSelf->UniversalNormUnit__DOT___GEN_455 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_6;
        vlSelf->UniversalNormUnit__DOT___GEN_452 = vlSelf->UniversalNormUnit__DOT__softFinalMax_6;
        vlSelf->UniversalNormUnit__DOT___GEN_454 = vlSelf->UniversalNormUnit__DOT__softSumRegs_6;
        vlSelf->UniversalNormUnit__DOT___GEN_451 = vlSelf->UniversalNormUnit__DOT__softFinalSum_6;
    }
    vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_7 
        = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_7)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_7));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_7 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingWasNewMax_7)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_7_full)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_7_full_1));
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_7) {
        vlSelf->UniversalNormUnit__DOT___GEN_512 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_7)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_7)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_7) {
            vlSelf->UniversalNormUnit__DOT___GEN_509 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_7)));
            vlSelf->UniversalNormUnit__DOT___GEN_511 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_7;
            if (vlSelf->io_layout_mode) {
                vlSelf->UniversalNormUnit__DOT___GEN_508 
                    = vlSelf->UniversalNormUnit__DOT__softFinalMax_7;
                vlSelf->UniversalNormUnit__DOT___GEN_507 
                    = vlSelf->UniversalNormUnit__DOT__softFinalSum_7;
            } else {
                vlSelf->UniversalNormUnit__DOT___GEN_508 
                    = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_7;
                vlSelf->UniversalNormUnit__DOT___GEN_507 
                    = vlSelf->UniversalNormUnit__DOT__softResolvedSum_7;
            }
            vlSelf->UniversalNormUnit__DOT___GEN_510 
                = vlSelf->UniversalNormUnit__DOT__softSumRegs_7;
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_509 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_7));
            vlSelf->UniversalNormUnit__DOT___GEN_511 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_7;
            vlSelf->UniversalNormUnit__DOT___GEN_508 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_7;
            vlSelf->UniversalNormUnit__DOT___GEN_510 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_7;
            vlSelf->UniversalNormUnit__DOT___GEN_507 
                = vlSelf->UniversalNormUnit__DOT__softFinalSum_7;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_512 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_7));
        vlSelf->UniversalNormUnit__DOT___GEN_509 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_7));
        vlSelf->UniversalNormUnit__DOT___GEN_511 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_7;
        vlSelf->UniversalNormUnit__DOT___GEN_508 = vlSelf->UniversalNormUnit__DOT__softFinalMax_7;
        vlSelf->UniversalNormUnit__DOT___GEN_510 = vlSelf->UniversalNormUnit__DOT__softSumRegs_7;
        vlSelf->UniversalNormUnit__DOT___GEN_507 = vlSelf->UniversalNormUnit__DOT__softFinalSum_7;
    }
    vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_8 
        = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_8)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_8));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_8 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingWasNewMax_8)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_8_full)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_8_full_1));
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_8) {
        vlSelf->UniversalNormUnit__DOT___GEN_568 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_8)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_8)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_8) {
            vlSelf->UniversalNormUnit__DOT___GEN_565 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_8)));
            vlSelf->UniversalNormUnit__DOT___GEN_567 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_8;
            if (vlSelf->io_layout_mode) {
                vlSelf->UniversalNormUnit__DOT___GEN_564 
                    = vlSelf->UniversalNormUnit__DOT__softFinalMax_8;
                vlSelf->UniversalNormUnit__DOT___GEN_563 
                    = vlSelf->UniversalNormUnit__DOT__softFinalSum_8;
            } else {
                vlSelf->UniversalNormUnit__DOT___GEN_564 
                    = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_8;
                vlSelf->UniversalNormUnit__DOT___GEN_563 
                    = vlSelf->UniversalNormUnit__DOT__softResolvedSum_8;
            }
            vlSelf->UniversalNormUnit__DOT___GEN_566 
                = vlSelf->UniversalNormUnit__DOT__softSumRegs_8;
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_565 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_8));
            vlSelf->UniversalNormUnit__DOT___GEN_567 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_8;
            vlSelf->UniversalNormUnit__DOT___GEN_564 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_8;
            vlSelf->UniversalNormUnit__DOT___GEN_566 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_8;
            vlSelf->UniversalNormUnit__DOT___GEN_563 
                = vlSelf->UniversalNormUnit__DOT__softFinalSum_8;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_568 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_8));
        vlSelf->UniversalNormUnit__DOT___GEN_565 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_8));
        vlSelf->UniversalNormUnit__DOT___GEN_567 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_8;
        vlSelf->UniversalNormUnit__DOT___GEN_564 = vlSelf->UniversalNormUnit__DOT__softFinalMax_8;
        vlSelf->UniversalNormUnit__DOT___GEN_566 = vlSelf->UniversalNormUnit__DOT__softSumRegs_8;
        vlSelf->UniversalNormUnit__DOT___GEN_563 = vlSelf->UniversalNormUnit__DOT__softFinalSum_8;
    }
    vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_9 
        = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_9)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_9));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_9 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingWasNewMax_9)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_9_full)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_9_full_1));
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_9) {
        vlSelf->UniversalNormUnit__DOT___GEN_624 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_9)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_9)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_9) {
            vlSelf->UniversalNormUnit__DOT___GEN_621 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_9)));
            vlSelf->UniversalNormUnit__DOT___GEN_623 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_9;
            if (vlSelf->io_layout_mode) {
                vlSelf->UniversalNormUnit__DOT___GEN_620 
                    = vlSelf->UniversalNormUnit__DOT__softFinalMax_9;
                vlSelf->UniversalNormUnit__DOT___GEN_619 
                    = vlSelf->UniversalNormUnit__DOT__softFinalSum_9;
            } else {
                vlSelf->UniversalNormUnit__DOT___GEN_620 
                    = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_9;
                vlSelf->UniversalNormUnit__DOT___GEN_619 
                    = vlSelf->UniversalNormUnit__DOT__softResolvedSum_9;
            }
            vlSelf->UniversalNormUnit__DOT___GEN_622 
                = vlSelf->UniversalNormUnit__DOT__softSumRegs_9;
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_621 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_9));
            vlSelf->UniversalNormUnit__DOT___GEN_623 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_9;
            vlSelf->UniversalNormUnit__DOT___GEN_620 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_9;
            vlSelf->UniversalNormUnit__DOT___GEN_622 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_9;
            vlSelf->UniversalNormUnit__DOT___GEN_619 
                = vlSelf->UniversalNormUnit__DOT__softFinalSum_9;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_624 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_9));
        vlSelf->UniversalNormUnit__DOT___GEN_621 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_9));
        vlSelf->UniversalNormUnit__DOT___GEN_623 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_9;
        vlSelf->UniversalNormUnit__DOT___GEN_620 = vlSelf->UniversalNormUnit__DOT__softFinalMax_9;
        vlSelf->UniversalNormUnit__DOT___GEN_622 = vlSelf->UniversalNormUnit__DOT__softSumRegs_9;
        vlSelf->UniversalNormUnit__DOT___GEN_619 = vlSelf->UniversalNormUnit__DOT__softFinalSum_9;
    }
    vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_10 
        = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_10)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_10));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_10 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingWasNewMax_10)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_10_full)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_10_full_1));
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_10) {
        vlSelf->UniversalNormUnit__DOT___GEN_680 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_10)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_10)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_10) {
            vlSelf->UniversalNormUnit__DOT___GEN_677 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_10)));
            vlSelf->UniversalNormUnit__DOT___GEN_679 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_10;
            if (vlSelf->io_layout_mode) {
                vlSelf->UniversalNormUnit__DOT___GEN_676 
                    = vlSelf->UniversalNormUnit__DOT__softFinalMax_10;
                vlSelf->UniversalNormUnit__DOT___GEN_675 
                    = vlSelf->UniversalNormUnit__DOT__softFinalSum_10;
            } else {
                vlSelf->UniversalNormUnit__DOT___GEN_676 
                    = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_10;
                vlSelf->UniversalNormUnit__DOT___GEN_675 
                    = vlSelf->UniversalNormUnit__DOT__softResolvedSum_10;
            }
            vlSelf->UniversalNormUnit__DOT___GEN_678 
                = vlSelf->UniversalNormUnit__DOT__softSumRegs_10;
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_677 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_10));
            vlSelf->UniversalNormUnit__DOT___GEN_679 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_10;
            vlSelf->UniversalNormUnit__DOT___GEN_676 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_10;
            vlSelf->UniversalNormUnit__DOT___GEN_678 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_10;
            vlSelf->UniversalNormUnit__DOT___GEN_675 
                = vlSelf->UniversalNormUnit__DOT__softFinalSum_10;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_680 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_10));
        vlSelf->UniversalNormUnit__DOT___GEN_677 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_10));
        vlSelf->UniversalNormUnit__DOT___GEN_679 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_10;
        vlSelf->UniversalNormUnit__DOT___GEN_676 = vlSelf->UniversalNormUnit__DOT__softFinalMax_10;
        vlSelf->UniversalNormUnit__DOT___GEN_678 = vlSelf->UniversalNormUnit__DOT__softSumRegs_10;
        vlSelf->UniversalNormUnit__DOT___GEN_675 = vlSelf->UniversalNormUnit__DOT__softFinalSum_10;
    }
    vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_11 
        = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_11)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_11));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_11 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingWasNewMax_11)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_11_full)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_11_full_1));
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_11) {
        vlSelf->UniversalNormUnit__DOT___GEN_736 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_11)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_11)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_11) {
            vlSelf->UniversalNormUnit__DOT___GEN_733 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_11)));
            vlSelf->UniversalNormUnit__DOT___GEN_735 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_11;
            if (vlSelf->io_layout_mode) {
                vlSelf->UniversalNormUnit__DOT___GEN_732 
                    = vlSelf->UniversalNormUnit__DOT__softFinalMax_11;
                vlSelf->UniversalNormUnit__DOT___GEN_731 
                    = vlSelf->UniversalNormUnit__DOT__softFinalSum_11;
            } else {
                vlSelf->UniversalNormUnit__DOT___GEN_732 
                    = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_11;
                vlSelf->UniversalNormUnit__DOT___GEN_731 
                    = vlSelf->UniversalNormUnit__DOT__softResolvedSum_11;
            }
            vlSelf->UniversalNormUnit__DOT___GEN_734 
                = vlSelf->UniversalNormUnit__DOT__softSumRegs_11;
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_733 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_11));
            vlSelf->UniversalNormUnit__DOT___GEN_735 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_11;
            vlSelf->UniversalNormUnit__DOT___GEN_732 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_11;
            vlSelf->UniversalNormUnit__DOT___GEN_734 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_11;
            vlSelf->UniversalNormUnit__DOT___GEN_731 
                = vlSelf->UniversalNormUnit__DOT__softFinalSum_11;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_736 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_11));
        vlSelf->UniversalNormUnit__DOT___GEN_733 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_11));
        vlSelf->UniversalNormUnit__DOT___GEN_735 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_11;
        vlSelf->UniversalNormUnit__DOT___GEN_732 = vlSelf->UniversalNormUnit__DOT__softFinalMax_11;
        vlSelf->UniversalNormUnit__DOT___GEN_734 = vlSelf->UniversalNormUnit__DOT__softSumRegs_11;
        vlSelf->UniversalNormUnit__DOT___GEN_731 = vlSelf->UniversalNormUnit__DOT__softFinalSum_11;
    }
    vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_12 
        = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_12)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_12));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_12 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingWasNewMax_12)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_12_full)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_12_full_1));
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_12) {
        vlSelf->UniversalNormUnit__DOT___GEN_792 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_12)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_12)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_12) {
            vlSelf->UniversalNormUnit__DOT___GEN_789 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_12)));
            vlSelf->UniversalNormUnit__DOT___GEN_791 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_12;
            if (vlSelf->io_layout_mode) {
                vlSelf->UniversalNormUnit__DOT___GEN_788 
                    = vlSelf->UniversalNormUnit__DOT__softFinalMax_12;
                vlSelf->UniversalNormUnit__DOT___GEN_787 
                    = vlSelf->UniversalNormUnit__DOT__softFinalSum_12;
            } else {
                vlSelf->UniversalNormUnit__DOT___GEN_788 
                    = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_12;
                vlSelf->UniversalNormUnit__DOT___GEN_787 
                    = vlSelf->UniversalNormUnit__DOT__softResolvedSum_12;
            }
            vlSelf->UniversalNormUnit__DOT___GEN_790 
                = vlSelf->UniversalNormUnit__DOT__softSumRegs_12;
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_789 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_12));
            vlSelf->UniversalNormUnit__DOT___GEN_791 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_12;
            vlSelf->UniversalNormUnit__DOT___GEN_788 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_12;
            vlSelf->UniversalNormUnit__DOT___GEN_790 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_12;
            vlSelf->UniversalNormUnit__DOT___GEN_787 
                = vlSelf->UniversalNormUnit__DOT__softFinalSum_12;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_792 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_12));
        vlSelf->UniversalNormUnit__DOT___GEN_789 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_12));
        vlSelf->UniversalNormUnit__DOT___GEN_791 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_12;
        vlSelf->UniversalNormUnit__DOT___GEN_788 = vlSelf->UniversalNormUnit__DOT__softFinalMax_12;
        vlSelf->UniversalNormUnit__DOT___GEN_790 = vlSelf->UniversalNormUnit__DOT__softSumRegs_12;
        vlSelf->UniversalNormUnit__DOT___GEN_787 = vlSelf->UniversalNormUnit__DOT__softFinalSum_12;
    }
    vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_13 
        = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_13)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_13));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_13 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingWasNewMax_13)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_13_full)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_13_full_1));
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_13) {
        vlSelf->UniversalNormUnit__DOT___GEN_848 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_13)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_13)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_13) {
            vlSelf->UniversalNormUnit__DOT___GEN_845 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_13)));
            vlSelf->UniversalNormUnit__DOT___GEN_847 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_13;
            if (vlSelf->io_layout_mode) {
                vlSelf->UniversalNormUnit__DOT___GEN_844 
                    = vlSelf->UniversalNormUnit__DOT__softFinalMax_13;
                vlSelf->UniversalNormUnit__DOT___GEN_843 
                    = vlSelf->UniversalNormUnit__DOT__softFinalSum_13;
            } else {
                vlSelf->UniversalNormUnit__DOT___GEN_844 
                    = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_13;
                vlSelf->UniversalNormUnit__DOT___GEN_843 
                    = vlSelf->UniversalNormUnit__DOT__softResolvedSum_13;
            }
            vlSelf->UniversalNormUnit__DOT___GEN_846 
                = vlSelf->UniversalNormUnit__DOT__softSumRegs_13;
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_845 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_13));
            vlSelf->UniversalNormUnit__DOT___GEN_847 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_13;
            vlSelf->UniversalNormUnit__DOT___GEN_844 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_13;
            vlSelf->UniversalNormUnit__DOT___GEN_846 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_13;
            vlSelf->UniversalNormUnit__DOT___GEN_843 
                = vlSelf->UniversalNormUnit__DOT__softFinalSum_13;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_848 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_13));
        vlSelf->UniversalNormUnit__DOT___GEN_845 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_13));
        vlSelf->UniversalNormUnit__DOT___GEN_847 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_13;
        vlSelf->UniversalNormUnit__DOT___GEN_844 = vlSelf->UniversalNormUnit__DOT__softFinalMax_13;
        vlSelf->UniversalNormUnit__DOT___GEN_846 = vlSelf->UniversalNormUnit__DOT__softSumRegs_13;
        vlSelf->UniversalNormUnit__DOT___GEN_843 = vlSelf->UniversalNormUnit__DOT__softFinalSum_13;
    }
    vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_14 
        = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_14)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_14));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_14 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingWasNewMax_14)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_14_full)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_14_full_1));
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_14) {
        vlSelf->UniversalNormUnit__DOT___GEN_904 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_14)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_14)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_14) {
            vlSelf->UniversalNormUnit__DOT___GEN_901 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_14)));
            vlSelf->UniversalNormUnit__DOT___GEN_903 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_14;
            if (vlSelf->io_layout_mode) {
                vlSelf->UniversalNormUnit__DOT___GEN_900 
                    = vlSelf->UniversalNormUnit__DOT__softFinalMax_14;
                vlSelf->UniversalNormUnit__DOT___GEN_899 
                    = vlSelf->UniversalNormUnit__DOT__softFinalSum_14;
            } else {
                vlSelf->UniversalNormUnit__DOT___GEN_900 
                    = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_14;
                vlSelf->UniversalNormUnit__DOT___GEN_899 
                    = vlSelf->UniversalNormUnit__DOT__softResolvedSum_14;
            }
            vlSelf->UniversalNormUnit__DOT___GEN_902 
                = vlSelf->UniversalNormUnit__DOT__softSumRegs_14;
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_901 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_14));
            vlSelf->UniversalNormUnit__DOT___GEN_903 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_14;
            vlSelf->UniversalNormUnit__DOT___GEN_900 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_14;
            vlSelf->UniversalNormUnit__DOT___GEN_902 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_14;
            vlSelf->UniversalNormUnit__DOT___GEN_899 
                = vlSelf->UniversalNormUnit__DOT__softFinalSum_14;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_904 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_14));
        vlSelf->UniversalNormUnit__DOT___GEN_901 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_14));
        vlSelf->UniversalNormUnit__DOT___GEN_903 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_14;
        vlSelf->UniversalNormUnit__DOT___GEN_900 = vlSelf->UniversalNormUnit__DOT__softFinalMax_14;
        vlSelf->UniversalNormUnit__DOT___GEN_902 = vlSelf->UniversalNormUnit__DOT__softSumRegs_14;
        vlSelf->UniversalNormUnit__DOT___GEN_899 = vlSelf->UniversalNormUnit__DOT__softFinalSum_14;
    }
    vlSelf->io_lut_ready = ((IData)(vlSelf->UniversalNormUnit__DOT__scaleReady) 
                            & ((3U != (IData)(vlSelf->io_mode_sel)) 
                               | (IData)(vlSelf->UniversalNormUnit__DOT___io_lut_ready_T_2)));
    vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_15 
        = ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_15)) 
           & (IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_15));
    vlSelf->UniversalNormUnit__DOT__distFinalRespReady 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__distFinalAwaitingResp) 
           & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_15)) 
               | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_15) 
                  & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_15))) 
              & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_14)) 
                  | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_14) 
                     & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_14))) 
                 & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_13)) 
                     | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_13) 
                        & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_13))) 
                    & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_12)) 
                        | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_12) 
                           & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_12))) 
                       & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_11)) 
                           | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_11) 
                              & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_11))) 
                          & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_10)) 
                              | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_10) 
                                 & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_10))) 
                             & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_9)) 
                                 | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_9) 
                                    & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_9))) 
                                & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_8)) 
                                    | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_8) 
                                       & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_8))) 
                                   & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_7)) 
                                       | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_7) 
                                          & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_7))) 
                                      & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_6)) 
                                          | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_6) 
                                             & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_6))) 
                                         & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_5)) 
                                             | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_5) 
                                                & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_5))) 
                                            & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_4)) 
                                                | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_4) 
                                                   & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_4))) 
                                               & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_3)) 
                                                   | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_3) 
                                                      & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_3))) 
                                                  & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_2)) 
                                                      | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_2) 
                                                         & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_2))) 
                                                     & (((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_1)) 
                                                         | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid_1) 
                                                            & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_1))) 
                                                        & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__distFinalLaneMask_0)) 
                                                           | ((IData)(vlSelf->UniversalNormUnit__DOT__expRespValid) 
                                                              & (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_0)))))))))))))))))));
    vlSelf->UniversalNormUnit__DOT__softResolvedSum_15 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__softPendingWasNewMax_15)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_15_full)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softResolvedSum_15_full_1));
    if (vlSelf->UniversalNormUnit__DOT__expRespValid_15) {
        vlSelf->UniversalNormUnit__DOT___GEN_960 = 
            (1U & ((~ (IData)(vlSelf->UniversalNormUnit__DOT__softPendingLast_15)) 
                   | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_15)));
        if (vlSelf->UniversalNormUnit__DOT__softPendingLast_15) {
            vlSelf->UniversalNormUnit__DOT___GEN_957 
                = (1U & ((~ (IData)(vlSelf->io_layout_mode)) 
                         | (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_15)));
            vlSelf->UniversalNormUnit__DOT___GEN_959 
                = vlSelf->UniversalNormUnit__DOT__softMaxRegs_15;
            if (vlSelf->io_layout_mode) {
                vlSelf->UniversalNormUnit__DOT___GEN_956 
                    = vlSelf->UniversalNormUnit__DOT__softFinalMax_15;
                vlSelf->UniversalNormUnit__DOT___GEN_955 
                    = vlSelf->UniversalNormUnit__DOT__softFinalSum_15;
            } else {
                vlSelf->UniversalNormUnit__DOT___GEN_956 
                    = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_15;
                vlSelf->UniversalNormUnit__DOT___GEN_955 
                    = vlSelf->UniversalNormUnit__DOT__softResolvedSum_15;
            }
            vlSelf->UniversalNormUnit__DOT___GEN_958 
                = vlSelf->UniversalNormUnit__DOT__softSumRegs_15;
        } else {
            vlSelf->UniversalNormUnit__DOT___GEN_957 
                = (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_15));
            vlSelf->UniversalNormUnit__DOT___GEN_959 
                = vlSelf->UniversalNormUnit__DOT__softPendingNewMax_15;
            vlSelf->UniversalNormUnit__DOT___GEN_956 
                = vlSelf->UniversalNormUnit__DOT__softFinalMax_15;
            vlSelf->UniversalNormUnit__DOT___GEN_958 
                = vlSelf->UniversalNormUnit__DOT__softResolvedSum_15;
            vlSelf->UniversalNormUnit__DOT___GEN_955 
                = vlSelf->UniversalNormUnit__DOT__softFinalSum_15;
        }
    } else {
        vlSelf->UniversalNormUnit__DOT___GEN_960 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_15));
        vlSelf->UniversalNormUnit__DOT___GEN_957 = 
            (1U & (IData)(vlSelf->UniversalNormUnit__DOT__softFinalReady_15));
        vlSelf->UniversalNormUnit__DOT___GEN_959 = vlSelf->UniversalNormUnit__DOT__softMaxRegs_15;
        vlSelf->UniversalNormUnit__DOT___GEN_956 = vlSelf->UniversalNormUnit__DOT__softFinalMax_15;
        vlSelf->UniversalNormUnit__DOT___GEN_958 = vlSelf->UniversalNormUnit__DOT__softSumRegs_15;
        vlSelf->UniversalNormUnit__DOT___GEN_955 = vlSelf->UniversalNormUnit__DOT__softFinalSum_15;
    }
    vlSelf->UniversalNormUnit__DOT__softBaseMax_0 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent)
          ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_0)
          : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_0));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_0 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_0));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_1 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_1)
          ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_1)
          : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_1));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_1 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_1) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_1));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_2 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_2)
          ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_2)
          : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_2));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_2 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_2) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_2));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_3 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_3)
          ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_3)
          : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_3));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_3 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_3) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_3));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_4 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_4)
          ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_4)
          : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_4));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_4 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_4) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_4));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_5 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_5)
          ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_5)
          : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_5));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_5 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_5) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_5));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_6 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_6)
          ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_6)
          : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_6));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_6 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_6) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_6));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_7 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_7)
          ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_7)
          : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_7));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_7 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_7) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_7));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_8 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_8)
          ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_8)
          : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_8));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_8 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_8) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_8));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_9 = 
        ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_9)
          ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_9)
          : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_9));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_9 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_9) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_9));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_10 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_10)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_10)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_10));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_10 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_10) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_10));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_11 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_11)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_11)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_11));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_11 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_11) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_11));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_12 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_12)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_12)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_12));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_12 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_12) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_12));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_13 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_13)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_13)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_13));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_13 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_13) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_13));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_14 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_14)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_14)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_14));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_14 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_14) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_14));
    vlSelf->UniversalNormUnit__DOT__softBaseMax_15 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_15)
            ? (IData)(vlSelf->UniversalNormUnit__DOT__softPendingNewMax_15)
            : (IData)(vlSelf->UniversalNormUnit__DOT__softMaxRegs_15));
    vlSelf->UniversalNormUnit__DOT__softBaseSeen_15 
        = ((IData)(vlSelf->UniversalNormUnit__DOT__responseFeedsCurrent_15) 
           | (IData)(vlSelf->UniversalNormUnit__DOT__softSeen_15));
    vlSelf->UniversalNormUnit__DOT__isNewMax = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_0), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_0));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_0_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_0), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_0))
                     ? ((IData)(vlSelf->io_phase1_in_vec_0) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_0))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_0) 
                        - (IData)(vlSelf->io_phase1_in_vec_0))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_1 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_1), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_1));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_1_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_1), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_1))
                     ? ((IData)(vlSelf->io_phase1_in_vec_1) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_1))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_1) 
                        - (IData)(vlSelf->io_phase1_in_vec_1))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_2 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_2), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_2));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_2_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_2), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_2))
                     ? ((IData)(vlSelf->io_phase1_in_vec_2) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_2))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_2) 
                        - (IData)(vlSelf->io_phase1_in_vec_2))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_3 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_3), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_3));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_3_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_3), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_3))
                     ? ((IData)(vlSelf->io_phase1_in_vec_3) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_3))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_3) 
                        - (IData)(vlSelf->io_phase1_in_vec_3))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_4 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_4), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_4));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_4_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_4), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_4))
                     ? ((IData)(vlSelf->io_phase1_in_vec_4) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_4))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_4) 
                        - (IData)(vlSelf->io_phase1_in_vec_4))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_5 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_5), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_5));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_5_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_5), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_5))
                     ? ((IData)(vlSelf->io_phase1_in_vec_5) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_5))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_5) 
                        - (IData)(vlSelf->io_phase1_in_vec_5))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_6 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_6), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_6));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_6_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_6), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_6))
                     ? ((IData)(vlSelf->io_phase1_in_vec_6) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_6))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_6) 
                        - (IData)(vlSelf->io_phase1_in_vec_6))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_7 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_7), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_7));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_7_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_7), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_7))
                     ? ((IData)(vlSelf->io_phase1_in_vec_7) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_7))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_7) 
                        - (IData)(vlSelf->io_phase1_in_vec_7))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_8 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_8), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_8));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_8_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_8), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_8))
                     ? ((IData)(vlSelf->io_phase1_in_vec_8) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_8))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_8) 
                        - (IData)(vlSelf->io_phase1_in_vec_8))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_9 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_9), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_9));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_9_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_9), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_9))
                     ? ((IData)(vlSelf->io_phase1_in_vec_9) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_9))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_9) 
                        - (IData)(vlSelf->io_phase1_in_vec_9))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_10 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_10), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_10));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_10_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_10), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_10))
                     ? ((IData)(vlSelf->io_phase1_in_vec_10) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_10))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_10) 
                        - (IData)(vlSelf->io_phase1_in_vec_10))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_11 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_11), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_11));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_11_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_11), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_11))
                     ? ((IData)(vlSelf->io_phase1_in_vec_11) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_11))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_11) 
                        - (IData)(vlSelf->io_phase1_in_vec_11))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_12 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_12), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_12));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_12_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_12), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_12))
                     ? ((IData)(vlSelf->io_phase1_in_vec_12) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_12))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_12) 
                        - (IData)(vlSelf->io_phase1_in_vec_12))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_13 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_13), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_13));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_13_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_13), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_13))
                     ? ((IData)(vlSelf->io_phase1_in_vec_13) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_13))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_13) 
                        - (IData)(vlSelf->io_phase1_in_vec_13))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_14 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_14), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_14));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_14_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_14), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_14))
                     ? ((IData)(vlSelf->io_phase1_in_vec_14) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_14))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_14) 
                        - (IData)(vlSelf->io_phase1_in_vec_14))));
    vlSelf->UniversalNormUnit__DOT__isNewMax_15 = VL_GTS_III(8, (IData)(vlSelf->io_phase1_in_vec_15), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_15));
    vlSelf->UniversalNormUnit__DOT__streamExpAddr_15_mag 
        = (0xffU & (VL_GTES_III(8, (IData)(vlSelf->io_phase1_in_vec_15), (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_15))
                     ? ((IData)(vlSelf->io_phase1_in_vec_15) 
                        - (IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_15))
                     : ((IData)(vlSelf->UniversalNormUnit__DOT__softBaseMax_15) 
                        - (IData)(vlSelf->io_phase1_in_vec_15))));
}

void VUniversalNormUnit___024root___nba_sequent__TOP__0(VUniversalNormUnit___024root* vlSelf);
void VUniversalNormUnit___024root___nba_sequent__TOP__1(VUniversalNormUnit___024root* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_1__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_2__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_3__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_4__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_5__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_6__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_7__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_8__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_9__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_10__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_11__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_12__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_13__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_14__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_15__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_0__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_0__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_1__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_2__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_3__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_4__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_5__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_6__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_7__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_8__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_9__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_10__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_11__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_12__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_13__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_14__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_15__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_0__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_1__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_2__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_3__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_4__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_5__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_6__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_7__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_8__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_9__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_10__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_11__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_12__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_13__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_14__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_15__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_0__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_1__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_2__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_3__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_4__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_5__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_6__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_7__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_8__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_9__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_10__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_11__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_12__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_13__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_14__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_15__0(VUniversalNormUnit_Universal_Wide_LUT* vlSelf);
void VUniversalNormUnit___024root___nba_sequent__TOP__3(VUniversalNormUnit___024root* vlSelf);

void VUniversalNormUnit___024root___eval_nba(VUniversalNormUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUniversalNormUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUniversalNormUnit___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VUniversalNormUnit___024root___nba_sequent__TOP__0(vlSelf);
        VUniversalNormUnit___024root___nba_sequent__TOP__1(vlSelf);
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_1__0((&vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_1));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_2__0((&vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_2));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_3__0((&vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_3));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_4__0((&vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_4));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_5__0((&vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_5));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_6__0((&vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_6));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_7__0((&vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_7));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_8__0((&vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_8));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_9__0((&vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_9));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_10__0((&vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_10));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_11__0((&vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_11));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_12__0((&vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_12));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_13__0((&vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_13));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_14__0((&vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_14));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_15__0((&vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_15));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__scaleLuts_0__0((&vlSymsp->TOP__UniversalNormUnit__DOT__scaleLuts_0));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_0__0((&vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_0));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_1__0((&vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_1));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_2__0((&vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_2));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_3__0((&vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_3));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_4__0((&vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_4));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_5__0((&vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_5));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_6__0((&vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_6));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_7__0((&vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_7));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_8__0((&vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_8));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_9__0((&vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_9));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_10__0((&vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_10));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_11__0((&vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_11));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_12__0((&vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_12));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_13__0((&vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_13));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_14__0((&vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_14));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__correctionExpLuts_15__0((&vlSymsp->TOP__UniversalNormUnit__DOT__correctionExpLuts_15));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_0__0((&vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_0));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_1__0((&vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_1));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_2__0((&vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_2));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_3__0((&vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_3));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_4__0((&vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_4));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_5__0((&vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_5));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_6__0((&vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_6));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_7__0((&vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_7));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_8__0((&vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_8));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_9__0((&vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_9));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_10__0((&vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_10));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_11__0((&vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_11));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_12__0((&vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_12));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_13__0((&vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_13));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_14__0((&vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_14));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__phase2ExpLuts_15__0((&vlSymsp->TOP__UniversalNormUnit__DOT__phase2ExpLuts_15));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_0__0((&vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_0));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_1__0((&vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_1));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_2__0((&vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_2));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_3__0((&vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_3));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_4__0((&vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_4));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_5__0((&vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_5));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_6__0((&vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_6));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_7__0((&vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_7));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_8__0((&vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_8));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_9__0((&vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_9));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_10__0((&vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_10));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_11__0((&vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_11));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_12__0((&vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_12));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_13__0((&vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_13));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_14__0((&vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_14));
        VUniversalNormUnit_Universal_Wide_LUT___nba_sequent__TOP__UniversalNormUnit__DOT__streamExpLuts_15__0((&vlSymsp->TOP__UniversalNormUnit__DOT__streamExpLuts_15));
        VUniversalNormUnit___024root___nba_sequent__TOP__2(vlSelf);
        VUniversalNormUnit___024root___nba_sequent__TOP__3(vlSelf);
    }
}
