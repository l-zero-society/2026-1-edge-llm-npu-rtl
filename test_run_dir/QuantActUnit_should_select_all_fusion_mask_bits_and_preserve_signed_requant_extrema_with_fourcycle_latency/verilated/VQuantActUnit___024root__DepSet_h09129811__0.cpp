// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQuantActUnit.h for the primary calling header

#include "VQuantActUnit__pch.h"
#include "VQuantActUnit__Syms.h"
#include "VQuantActUnit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VQuantActUnit___024root___dump_triggers__ico(VQuantActUnit___024root* vlSelf);
#endif  // VL_DEBUG

void VQuantActUnit___024root___eval_triggers__ico(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VQuantActUnit___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VQuantActUnit___024root___ico_sequent__TOP__0(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_out_lookahead_0 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__s3Valid));
    vlSelf->io_out_lookahead_1 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__s3Valid));
    vlSelf->io_out_lookahead_2 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__s3Valid));
    vlSelf->io_out_lookahead_3 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__s3Valid));
    vlSelf->io_out_lookahead_4 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__s3Valid));
    vlSelf->io_out_lookahead_5 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__s3Valid));
    vlSelf->io_out_lookahead_6 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__s3Valid));
    vlSelf->io_out_lookahead_7 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__s3Valid));
    vlSelf->io_out_lookahead_8 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__s3Valid));
    vlSelf->io_out_lookahead_9 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__s3Valid));
    vlSelf->io_out_lookahead_10 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__s3Valid));
    vlSelf->io_out_lookahead_11 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__s3Valid));
    vlSelf->io_out_lookahead_12 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__s3Valid));
    vlSelf->io_out_lookahead_13 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__s3Valid));
    vlSelf->io_out_lookahead_14 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__s3Valid));
    vlSelf->io_out_lookahead_15 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__s3Valid));
    vlSelf->io_out_valid_0 = ((~ (IData)(vlSelf->io_stall)) 
                              & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__holdValid) 
                                 | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__rawValid)));
    vlSelf->io_out_valid_1 = ((~ (IData)(vlSelf->io_stall)) 
                              & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__holdValid) 
                                 | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__rawValid)));
    vlSelf->io_out_valid_2 = ((~ (IData)(vlSelf->io_stall)) 
                              & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__holdValid) 
                                 | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__rawValid)));
    vlSelf->io_out_valid_3 = ((~ (IData)(vlSelf->io_stall)) 
                              & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__holdValid) 
                                 | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__rawValid)));
    vlSelf->io_out_valid_4 = ((~ (IData)(vlSelf->io_stall)) 
                              & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__holdValid) 
                                 | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__rawValid)));
    vlSelf->io_out_valid_5 = ((~ (IData)(vlSelf->io_stall)) 
                              & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__holdValid) 
                                 | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__rawValid)));
    vlSelf->io_out_valid_6 = ((~ (IData)(vlSelf->io_stall)) 
                              & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__holdValid) 
                                 | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__rawValid)));
    vlSelf->io_out_valid_7 = ((~ (IData)(vlSelf->io_stall)) 
                              & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__holdValid) 
                                 | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__rawValid)));
    vlSelf->io_out_valid_8 = ((~ (IData)(vlSelf->io_stall)) 
                              & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__holdValid) 
                                 | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__rawValid)));
    vlSelf->io_out_valid_9 = ((~ (IData)(vlSelf->io_stall)) 
                              & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__holdValid) 
                                 | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__rawValid)));
    vlSelf->io_out_valid_10 = ((~ (IData)(vlSelf->io_stall)) 
                               & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__holdValid) 
                                  | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__rawValid)));
    vlSelf->io_out_valid_11 = ((~ (IData)(vlSelf->io_stall)) 
                               & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__holdValid) 
                                  | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__rawValid)));
    vlSelf->io_out_valid_12 = ((~ (IData)(vlSelf->io_stall)) 
                               & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__holdValid) 
                                  | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__rawValid)));
    vlSelf->io_out_valid_13 = ((~ (IData)(vlSelf->io_stall)) 
                               & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__holdValid) 
                                  | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__rawValid)));
    vlSelf->io_out_valid_14 = ((~ (IData)(vlSelf->io_stall)) 
                               & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__holdValid) 
                                  | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__rawValid)));
    vlSelf->io_out_valid_15 = ((~ (IData)(vlSelf->io_stall)) 
                               & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__holdValid) 
                                  | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__rawValid)));
    vlSelf->QuantActUnit__DOT__perChannel = ((~ (IData)(vlSelf->io_input_mode)) 
                                             & (IData)(vlSelf->io_param_mode));
    vlSelf->QuantActUnit__DOT___anyValid_T = (((IData)(vlSelf->io_in_valid_15) 
                                               << 0xfU) 
                                              | (((IData)(vlSelf->io_in_valid_14) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->io_in_valid_13) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->io_in_valid_12) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->io_in_valid_11) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->io_in_valid_10) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->io_in_valid_9) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->io_in_valid_8) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->io_in_valid_7) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->io_in_valid_6) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->io_in_valid_5) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->io_in_valid_4) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->io_in_valid_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->io_in_valid_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->io_in_valid_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->io_in_valid_0))))))))))))))));
    vlSelf->QuantActUnit__DOT___T_1 = (1U & ((~ (IData)(vlSelf->QuantActUnit__DOT__perChannel)) 
                                             | (IData)(vlSelf->io_soft_reset)));
    vlSelf->io_prefetch_ready = (1U & ((~ (IData)(vlSelf->QuantActUnit__DOT__perChannel)) 
                                       | ((IData)(vlSelf->QuantActUnit__DOT__primed) 
                                          & (IData)(vlSelf->io_lut_ready))));
    vlSelf->QuantActUnit__DOT__inputFire = ((~ (IData)(vlSelf->io_stall)) 
                                            & (0xffffU 
                                               == (IData)(vlSelf->QuantActUnit__DOT___anyValid_T)));
    vlSelf->QuantActUnit__DOT__tileEnd = ((IData)(vlSelf->QuantActUnit__DOT__inputFire) 
                                          & (0xfU == (IData)(vlSelf->QuantActUnit__DOT__rowCounter)));
    vlSelf->QuantActUnit__DOT__tileStart = ((IData)(vlSelf->QuantActUnit__DOT__inputFire) 
                                            & (0U == (IData)(vlSelf->QuantActUnit__DOT__rowCounter)));
    if (vlSelf->QuantActUnit__DOT__perChannel) {
        if (vlSelf->QuantActUnit__DOT__tileStart) {
            vlSelf->QuantActUnit__DOT__cores_0_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_0;
            vlSelf->QuantActUnit__DOT__cores_1_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_1;
            vlSelf->QuantActUnit__DOT__cores_2_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_2;
            vlSelf->QuantActUnit__DOT__cores_3_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_3;
            vlSelf->QuantActUnit__DOT__cores_4_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_4;
            vlSelf->QuantActUnit__DOT__cores_5_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_5;
            vlSelf->QuantActUnit__DOT__cores_6_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_6;
            vlSelf->QuantActUnit__DOT__cores_7_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_7;
            vlSelf->QuantActUnit__DOT__cores_8_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_8;
            vlSelf->QuantActUnit__DOT__cores_9_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_9;
            vlSelf->QuantActUnit__DOT__cores_10_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_10;
            vlSelf->QuantActUnit__DOT__cores_11_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_11;
            vlSelf->QuantActUnit__DOT__cores_12_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_12;
            vlSelf->QuantActUnit__DOT__cores_13_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_13;
            vlSelf->QuantActUnit__DOT__cores_14_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_14;
            vlSelf->QuantActUnit__DOT__cores_15_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_15;
            vlSelf->QuantActUnit__DOT__consumeShadow = 1U;
        } else {
            vlSelf->QuantActUnit__DOT__cores_0_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_0;
            vlSelf->QuantActUnit__DOT__cores_1_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_1;
            vlSelf->QuantActUnit__DOT__cores_2_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_2;
            vlSelf->QuantActUnit__DOT__cores_3_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_3;
            vlSelf->QuantActUnit__DOT__cores_4_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_4;
            vlSelf->QuantActUnit__DOT__cores_5_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_5;
            vlSelf->QuantActUnit__DOT__cores_6_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_6;
            vlSelf->QuantActUnit__DOT__cores_7_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_7;
            vlSelf->QuantActUnit__DOT__cores_8_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_8;
            vlSelf->QuantActUnit__DOT__cores_9_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_9;
            vlSelf->QuantActUnit__DOT__cores_10_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_10;
            vlSelf->QuantActUnit__DOT__cores_11_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_11;
            vlSelf->QuantActUnit__DOT__cores_12_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_12;
            vlSelf->QuantActUnit__DOT__cores_13_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_13;
            vlSelf->QuantActUnit__DOT__cores_14_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_14;
            vlSelf->QuantActUnit__DOT__cores_15_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_15;
            vlSelf->QuantActUnit__DOT__consumeShadow = 0U;
        }
    } else {
        vlSelf->QuantActUnit__DOT__cores_0_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_1_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_2_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_3_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_4_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_5_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_6_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_7_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_8_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_9_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_10_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_11_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_12_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_13_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_14_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_15_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__consumeShadow = 0U;
    }
    vlSelf->QuantActUnit__DOT___GEN_55 = (((IData)(vlSelf->io_qparam_line_valid) 
                                           & (IData)(vlSelf->QuantActUnit__DOT__perChannel)) 
                                          | ((~ (IData)(vlSelf->QuantActUnit__DOT__consumeShadow)) 
                                             & (IData)(vlSelf->QuantActUnit__DOT__shadowValid)));
    vlSelf->io_qparam_req_line = ((IData)(vlSelf->QuantActUnit__DOT__perChannel) 
                                  & ((~ (IData)(vlSelf->io_soft_reset)) 
                                     & ((~ (IData)(vlSelf->QuantActUnit__DOT__reqOutstanding)) 
                                        & ((~ (IData)(vlSelf->QuantActUnit__DOT__shadowValid)) 
                                           | (IData)(vlSelf->QuantActUnit__DOT__consumeShadow)))));
    vlSelf->io_sync_alert = (((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__expectedRdValid) 
                                != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__actLut__DOT__io_rd_valid_REG)) 
                               | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__expectedWrValid) 
                                   != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                  | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__holdValid) 
                                     & ((~ (IData)(vlSelf->io_stall)) 
                                        & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__rawValid))))) 
                              | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__expectedRdValid) 
                                   != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                  | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__expectedWrValid) 
                                      != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                     | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__holdValid) 
                                        & ((~ (IData)(vlSelf->io_stall)) 
                                           & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__rawValid))))) 
                                 | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__expectedRdValid) 
                                      != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                     | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__expectedWrValid) 
                                         != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                        | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__holdValid) 
                                           & ((~ (IData)(vlSelf->io_stall)) 
                                              & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__rawValid))))) 
                                    | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__expectedRdValid) 
                                         != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                        | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__expectedWrValid) 
                                            != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                           | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__holdValid) 
                                              & ((~ (IData)(vlSelf->io_stall)) 
                                                 & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__rawValid))))) 
                                       | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__expectedRdValid) 
                                            != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                           | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__expectedWrValid) 
                                               != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                              | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__holdValid) 
                                                 & ((~ (IData)(vlSelf->io_stall)) 
                                                    & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__rawValid))))) 
                                          | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__expectedRdValid) 
                                               != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                              | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__expectedWrValid) 
                                                  != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                 | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__holdValid) 
                                                    & ((~ (IData)(vlSelf->io_stall)) 
                                                       & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__rawValid))))) 
                                             | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__expectedRdValid) 
                                                  != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                 | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__expectedWrValid) 
                                                     != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                    | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__holdValid) 
                                                       & ((~ (IData)(vlSelf->io_stall)) 
                                                          & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__rawValid))))) 
                                                | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__expectedRdValid) 
                                                     != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                    | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__expectedWrValid) 
                                                        != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                       | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__holdValid) 
                                                          & ((~ (IData)(vlSelf->io_stall)) 
                                                             & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__rawValid))))) 
                                                   | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__expectedRdValid) 
                                                        != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                       | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__expectedWrValid) 
                                                           != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                          | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__holdValid) 
                                                             & ((~ (IData)(vlSelf->io_stall)) 
                                                                & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__rawValid))))) 
                                                      | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__expectedRdValid) 
                                                           != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                          | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__expectedWrValid) 
                                                              != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                             | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__holdValid) 
                                                                & ((~ (IData)(vlSelf->io_stall)) 
                                                                   & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__rawValid))))) 
                                                         | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__expectedRdValid) 
                                                              != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                             | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__expectedWrValid) 
                                                                 != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                                | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__holdValid) 
                                                                   & ((~ (IData)(vlSelf->io_stall)) 
                                                                      & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__rawValid))))) 
                                                            | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__expectedRdValid) 
                                                                 != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                                | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__expectedWrValid) 
                                                                    != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                                   | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__holdValid) 
                                                                      & ((~ (IData)(vlSelf->io_stall)) 
                                                                         & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__rawValid))))) 
                                                               | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__expectedRdValid) 
                                                                    != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                                   | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__expectedWrValid) 
                                                                       != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                                      | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__holdValid) 
                                                                         & ((~ (IData)(vlSelf->io_stall)) 
                                                                            & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__rawValid))))) 
                                                                  | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__expectedRdValid) 
                                                                       != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                                      | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__expectedWrValid) 
                                                                          != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                                         | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__holdValid) 
                                                                            & ((~ (IData)(vlSelf->io_stall)) 
                                                                               & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__rawValid))))) 
                                                                     | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__expectedRdValid) 
                                                                          != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                                         | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__expectedWrValid) 
                                                                             != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                                            | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__holdValid) 
                                                                               & ((~ (IData)(vlSelf->io_stall)) 
                                                                                & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__rawValid))))) 
                                                                        | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__expectedRdValid) 
                                                                            != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                                           | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__expectedWrValid) 
                                                                               != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                                              | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__holdValid) 
                                                                                & ((~ (IData)(vlSelf->io_stall)) 
                                                                                & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__rawValid)))))))))))))))))))) 
                             | (((~ (IData)((0xffffU 
                                             == (IData)(vlSelf->QuantActUnit__DOT___anyValid_T)))) 
                                 & (0U != (IData)(vlSelf->QuantActUnit__DOT___anyValid_T))) 
                                | (((~ (IData)(vlSelf->QuantActUnit__DOT__shadowValid)) 
                                    & (IData)(vlSelf->QuantActUnit__DOT__consumeShadow)) 
                                   | (((IData)(vlSelf->QuantActUnit__DOT__perChannel) 
                                       & ((~ ((IData)(vlSelf->QuantActUnit__DOT__tileStart) 
                                              | (IData)(vlSelf->QuantActUnit__DOT__activeValid))) 
                                          & (IData)(vlSelf->QuantActUnit__DOT__inputFire))) 
                                      | ((~ (IData)(vlSelf->QuantActUnit__DOT__consumeShadow)) 
                                         & ((IData)(vlSelf->QuantActUnit__DOT__perChannel) 
                                            & ((IData)(vlSelf->QuantActUnit__DOT__shadowValid) 
                                               & (IData)(vlSelf->io_qparam_line_valid))))))));
    vlSelf->QuantActUnit__DOT___GEN_3 = ((IData)(vlSelf->io_qparam_req_line) 
                                         | (IData)(vlSelf->QuantActUnit__DOT__reqOutstanding));
}

void VQuantActUnit_QuantActCore___ico_sequent__TOP__QuantActUnit__DOT__cores_0__0(VQuantActUnit_QuantActCore* vlSelf);

void VQuantActUnit___024root___eval_ico(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VQuantActUnit___024root___ico_sequent__TOP__0(vlSelf);
        VQuantActUnit_QuantActCore___ico_sequent__TOP__QuantActUnit__DOT__cores_0__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_0));
        VQuantActUnit_QuantActCore___ico_sequent__TOP__QuantActUnit__DOT__cores_0__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_1));
        VQuantActUnit_QuantActCore___ico_sequent__TOP__QuantActUnit__DOT__cores_0__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_2));
        VQuantActUnit_QuantActCore___ico_sequent__TOP__QuantActUnit__DOT__cores_0__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_3));
        VQuantActUnit_QuantActCore___ico_sequent__TOP__QuantActUnit__DOT__cores_0__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_4));
        VQuantActUnit_QuantActCore___ico_sequent__TOP__QuantActUnit__DOT__cores_0__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_5));
        VQuantActUnit_QuantActCore___ico_sequent__TOP__QuantActUnit__DOT__cores_0__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_6));
        VQuantActUnit_QuantActCore___ico_sequent__TOP__QuantActUnit__DOT__cores_0__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_7));
        VQuantActUnit_QuantActCore___ico_sequent__TOP__QuantActUnit__DOT__cores_0__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_8));
        VQuantActUnit_QuantActCore___ico_sequent__TOP__QuantActUnit__DOT__cores_0__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_9));
        VQuantActUnit_QuantActCore___ico_sequent__TOP__QuantActUnit__DOT__cores_0__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_10));
        VQuantActUnit_QuantActCore___ico_sequent__TOP__QuantActUnit__DOT__cores_0__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_11));
        VQuantActUnit_QuantActCore___ico_sequent__TOP__QuantActUnit__DOT__cores_0__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_12));
        VQuantActUnit_QuantActCore___ico_sequent__TOP__QuantActUnit__DOT__cores_0__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_13));
        VQuantActUnit_QuantActCore___ico_sequent__TOP__QuantActUnit__DOT__cores_0__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_14));
        VQuantActUnit_QuantActCore___ico_sequent__TOP__QuantActUnit__DOT__cores_0__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_15));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VQuantActUnit___024root___dump_triggers__act(VQuantActUnit___024root* vlSelf);
#endif  // VL_DEBUG

void VQuantActUnit___024root___eval_triggers__act(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))));
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VQuantActUnit___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VQuantActUnit___024root___nba_sequent__TOP__0(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_out_vec_0 = ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__holdValid)
                             ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__holdData)
                             : ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__actLut__DOT__io_rd_valid_REG)
                                 ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__actLut_io_rd_data)
                                 : (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__linearDataD1)));
    vlSelf->io_out_valid_0 = ((~ (IData)(vlSelf->io_stall)) 
                              & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__holdValid) 
                                 | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__rawValid)));
    vlSelf->io_out_lookahead_0 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__s3Valid));
    vlSelf->io_out_vec_1 = ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__holdValid)
                             ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__holdData)
                             : ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__actLut__DOT__io_rd_valid_REG)
                                 ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__actLut_io_rd_data)
                                 : (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__linearDataD1)));
    vlSelf->io_out_valid_1 = ((~ (IData)(vlSelf->io_stall)) 
                              & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__holdValid) 
                                 | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__rawValid)));
    vlSelf->io_out_lookahead_1 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__s3Valid));
    vlSelf->io_out_vec_2 = ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__holdValid)
                             ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__holdData)
                             : ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__actLut__DOT__io_rd_valid_REG)
                                 ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__actLut_io_rd_data)
                                 : (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__linearDataD1)));
    vlSelf->io_out_valid_2 = ((~ (IData)(vlSelf->io_stall)) 
                              & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__holdValid) 
                                 | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__rawValid)));
    vlSelf->io_out_lookahead_2 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__s3Valid));
    vlSelf->io_out_vec_3 = ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__holdValid)
                             ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__holdData)
                             : ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__actLut__DOT__io_rd_valid_REG)
                                 ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__actLut_io_rd_data)
                                 : (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__linearDataD1)));
    vlSelf->io_out_valid_3 = ((~ (IData)(vlSelf->io_stall)) 
                              & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__holdValid) 
                                 | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__rawValid)));
    vlSelf->io_out_lookahead_3 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__s3Valid));
    vlSelf->io_out_vec_4 = ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__holdValid)
                             ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__holdData)
                             : ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__actLut__DOT__io_rd_valid_REG)
                                 ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__actLut_io_rd_data)
                                 : (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__linearDataD1)));
    vlSelf->io_out_valid_4 = ((~ (IData)(vlSelf->io_stall)) 
                              & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__holdValid) 
                                 | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__rawValid)));
    vlSelf->io_out_lookahead_4 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__s3Valid));
    vlSelf->io_out_vec_5 = ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__holdValid)
                             ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__holdData)
                             : ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__actLut__DOT__io_rd_valid_REG)
                                 ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__actLut_io_rd_data)
                                 : (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__linearDataD1)));
    vlSelf->io_out_valid_5 = ((~ (IData)(vlSelf->io_stall)) 
                              & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__holdValid) 
                                 | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__rawValid)));
    vlSelf->io_out_lookahead_5 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__s3Valid));
    vlSelf->io_out_vec_6 = ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__holdValid)
                             ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__holdData)
                             : ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__actLut__DOT__io_rd_valid_REG)
                                 ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__actLut_io_rd_data)
                                 : (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__linearDataD1)));
    vlSelf->io_out_valid_6 = ((~ (IData)(vlSelf->io_stall)) 
                              & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__holdValid) 
                                 | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__rawValid)));
    vlSelf->io_out_lookahead_6 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__s3Valid));
    vlSelf->io_out_vec_7 = ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__holdValid)
                             ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__holdData)
                             : ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__actLut__DOT__io_rd_valid_REG)
                                 ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__actLut_io_rd_data)
                                 : (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__linearDataD1)));
    vlSelf->io_out_valid_7 = ((~ (IData)(vlSelf->io_stall)) 
                              & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__holdValid) 
                                 | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__rawValid)));
    vlSelf->io_out_lookahead_7 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__s3Valid));
    vlSelf->io_out_vec_8 = ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__holdValid)
                             ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__holdData)
                             : ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__actLut__DOT__io_rd_valid_REG)
                                 ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__actLut_io_rd_data)
                                 : (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__linearDataD1)));
    vlSelf->io_out_valid_8 = ((~ (IData)(vlSelf->io_stall)) 
                              & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__holdValid) 
                                 | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__rawValid)));
    vlSelf->io_out_lookahead_8 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__s3Valid));
    vlSelf->io_out_vec_9 = ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__holdValid)
                             ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__holdData)
                             : ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__actLut__DOT__io_rd_valid_REG)
                                 ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__actLut_io_rd_data)
                                 : (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__linearDataD1)));
    vlSelf->io_out_valid_9 = ((~ (IData)(vlSelf->io_stall)) 
                              & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__holdValid) 
                                 | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__rawValid)));
    vlSelf->io_out_lookahead_9 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__s3Valid));
    vlSelf->io_out_vec_10 = ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__holdValid)
                              ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__holdData)
                              : ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__actLut__DOT__io_rd_valid_REG)
                                  ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__actLut_io_rd_data)
                                  : (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__linearDataD1)));
    vlSelf->io_out_valid_10 = ((~ (IData)(vlSelf->io_stall)) 
                               & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__holdValid) 
                                  | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__rawValid)));
    vlSelf->io_out_lookahead_10 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__s3Valid));
    vlSelf->io_out_vec_11 = ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__holdValid)
                              ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__holdData)
                              : ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__actLut__DOT__io_rd_valid_REG)
                                  ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__actLut_io_rd_data)
                                  : (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__linearDataD1)));
    vlSelf->io_out_valid_11 = ((~ (IData)(vlSelf->io_stall)) 
                               & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__holdValid) 
                                  | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__rawValid)));
    vlSelf->io_out_lookahead_11 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__s3Valid));
    vlSelf->io_out_vec_12 = ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__holdValid)
                              ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__holdData)
                              : ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__actLut__DOT__io_rd_valid_REG)
                                  ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__actLut_io_rd_data)
                                  : (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__linearDataD1)));
    vlSelf->io_out_valid_12 = ((~ (IData)(vlSelf->io_stall)) 
                               & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__holdValid) 
                                  | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__rawValid)));
    vlSelf->io_out_lookahead_12 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__s3Valid));
    vlSelf->io_out_vec_13 = ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__holdValid)
                              ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__holdData)
                              : ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__actLut__DOT__io_rd_valid_REG)
                                  ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__actLut_io_rd_data)
                                  : (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__linearDataD1)));
    vlSelf->io_out_valid_13 = ((~ (IData)(vlSelf->io_stall)) 
                               & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__holdValid) 
                                  | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__rawValid)));
    vlSelf->io_out_lookahead_13 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__s3Valid));
    vlSelf->io_out_vec_14 = ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__holdValid)
                              ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__holdData)
                              : ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__actLut__DOT__io_rd_valid_REG)
                                  ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__actLut_io_rd_data)
                                  : (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__linearDataD1)));
    vlSelf->io_out_valid_14 = ((~ (IData)(vlSelf->io_stall)) 
                               & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__holdValid) 
                                  | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__rawValid)));
    vlSelf->io_out_lookahead_14 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__s3Valid));
    vlSelf->io_lut_ready = ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__actLut__DOT__is_programmed) 
                            & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__actLut__DOT__is_programmed) 
                               & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__actLut__DOT__is_programmed) 
                                  & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__actLut__DOT__is_programmed) 
                                     & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__actLut__DOT__is_programmed) 
                                        & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__actLut__DOT__is_programmed) 
                                           & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__actLut__DOT__is_programmed) 
                                              & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__actLut__DOT__is_programmed) 
                                                 & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__actLut__DOT__is_programmed) 
                                                    & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__actLut__DOT__is_programmed) 
                                                       & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__actLut__DOT__is_programmed) 
                                                          & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__actLut__DOT__is_programmed) 
                                                             & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__actLut__DOT__is_programmed) 
                                                                & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__actLut__DOT__is_programmed) 
                                                                   & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__actLut__DOT__is_programmed) 
                                                                      & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__actLut__DOT__is_programmed))))))))))))))));
    vlSelf->io_out_vec_15 = ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__holdValid)
                              ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__holdData)
                              : ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__actLut__DOT__io_rd_valid_REG)
                                  ? (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__actLut_io_rd_data)
                                  : (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__linearDataD1)));
    vlSelf->io_out_valid_15 = ((~ (IData)(vlSelf->io_stall)) 
                               & ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__holdValid) 
                                  | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__rawValid)));
    vlSelf->io_out_lookahead_15 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__s3Valid));
    vlSelf->io_busy = (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__s1Valid) 
                        | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__s2Valid) 
                           | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__s3Valid) 
                              | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__rawValid) 
                                 | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__holdValid))))) 
                       | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__s1Valid) 
                           | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__s2Valid) 
                              | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__s3Valid) 
                                 | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__rawValid) 
                                    | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__holdValid))))) 
                          | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__s1Valid) 
                              | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__s2Valid) 
                                 | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__s3Valid) 
                                    | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__rawValid) 
                                       | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__holdValid))))) 
                             | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__s1Valid) 
                                 | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__s2Valid) 
                                    | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__s3Valid) 
                                       | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__rawValid) 
                                          | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__holdValid))))) 
                                | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__s1Valid) 
                                    | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__s2Valid) 
                                       | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__s3Valid) 
                                          | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__rawValid) 
                                             | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__holdValid))))) 
                                   | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__s1Valid) 
                                       | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__s2Valid) 
                                          | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__s3Valid) 
                                             | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__rawValid) 
                                                | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__holdValid))))) 
                                      | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__s1Valid) 
                                          | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__s2Valid) 
                                             | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__s3Valid) 
                                                | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__rawValid) 
                                                   | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__holdValid))))) 
                                         | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__s1Valid) 
                                             | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__s2Valid) 
                                                | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__s3Valid) 
                                                   | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__rawValid) 
                                                      | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__holdValid))))) 
                                            | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__s1Valid) 
                                                | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__s2Valid) 
                                                   | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__s3Valid) 
                                                      | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__rawValid) 
                                                         | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__holdValid))))) 
                                               | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__s1Valid) 
                                                   | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__s2Valid) 
                                                      | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__s3Valid) 
                                                         | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__rawValid) 
                                                            | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__holdValid))))) 
                                                  | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__s1Valid) 
                                                      | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__s2Valid) 
                                                         | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__s3Valid) 
                                                            | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__rawValid) 
                                                               | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__holdValid))))) 
                                                     | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__s1Valid) 
                                                         | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__s2Valid) 
                                                            | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__s3Valid) 
                                                               | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__rawValid) 
                                                                  | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__holdValid))))) 
                                                        | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__s1Valid) 
                                                            | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__s2Valid) 
                                                               | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__s3Valid) 
                                                                  | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__rawValid) 
                                                                     | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__holdValid))))) 
                                                           | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__s1Valid) 
                                                               | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__s2Valid) 
                                                                  | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__s3Valid) 
                                                                     | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__rawValid) 
                                                                        | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__holdValid))))) 
                                                              | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__s1Valid) 
                                                                  | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__s2Valid) 
                                                                     | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__s3Valid) 
                                                                        | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__rawValid) 
                                                                           | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__holdValid))))) 
                                                                 | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__s1Valid) 
                                                                    | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__s2Valid) 
                                                                       | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__s3Valid) 
                                                                          | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__rawValid) 
                                                                             | (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__holdValid))))))))))))))))))));
    vlSelf->QuantActUnit__DOT__primed = ((1U & (~ (IData)(vlSelf->reset))) 
                                         && ((1U & 
                                              (~ (IData)(vlSelf->QuantActUnit__DOT___T_1))) 
                                             && (IData)(vlSelf->QuantActUnit__DOT___GEN_92)));
    if (vlSelf->reset) {
        vlSelf->QuantActUnit__DOT__activeValid = 0U;
        vlSelf->QuantActUnit__DOT__rowCounter = 0U;
        vlSelf->QuantActUnit__DOT__activeParam_0 = 0U;
        vlSelf->QuantActUnit__DOT__activeParam_1 = 0U;
        vlSelf->QuantActUnit__DOT__activeParam_2 = 0U;
        vlSelf->QuantActUnit__DOT__activeParam_3 = 0U;
        vlSelf->QuantActUnit__DOT__activeParam_4 = 0U;
        vlSelf->QuantActUnit__DOT__activeParam_5 = 0U;
        vlSelf->QuantActUnit__DOT__activeParam_6 = 0U;
        vlSelf->QuantActUnit__DOT__activeParam_7 = 0U;
        vlSelf->QuantActUnit__DOT__activeParam_8 = 0U;
        vlSelf->QuantActUnit__DOT__activeParam_9 = 0U;
        vlSelf->QuantActUnit__DOT__activeParam_10 = 0U;
        vlSelf->QuantActUnit__DOT__activeParam_11 = 0U;
        vlSelf->QuantActUnit__DOT__activeParam_12 = 0U;
        vlSelf->QuantActUnit__DOT__activeParam_13 = 0U;
        vlSelf->QuantActUnit__DOT__activeParam_14 = 0U;
        vlSelf->QuantActUnit__DOT__activeParam_15 = 0U;
        vlSelf->QuantActUnit__DOT__shadowParam_0 = 0U;
        vlSelf->QuantActUnit__DOT__shadowParam_1 = 0U;
        vlSelf->QuantActUnit__DOT__shadowParam_2 = 0U;
        vlSelf->QuantActUnit__DOT__shadowParam_3 = 0U;
        vlSelf->QuantActUnit__DOT__shadowParam_4 = 0U;
        vlSelf->QuantActUnit__DOT__shadowParam_5 = 0U;
        vlSelf->QuantActUnit__DOT__shadowParam_6 = 0U;
        vlSelf->QuantActUnit__DOT__shadowParam_7 = 0U;
        vlSelf->QuantActUnit__DOT__shadowParam_8 = 0U;
        vlSelf->QuantActUnit__DOT__shadowParam_9 = 0U;
        vlSelf->QuantActUnit__DOT__shadowParam_10 = 0U;
        vlSelf->QuantActUnit__DOT__shadowParam_11 = 0U;
        vlSelf->QuantActUnit__DOT__shadowParam_12 = 0U;
        vlSelf->QuantActUnit__DOT__shadowParam_13 = 0U;
        vlSelf->QuantActUnit__DOT__shadowParam_14 = 0U;
        vlSelf->QuantActUnit__DOT__shadowParam_15 = 0U;
    } else {
        if (vlSelf->QuantActUnit__DOT___T_1) {
            vlSelf->QuantActUnit__DOT__activeValid = 0U;
        } else if (vlSelf->QuantActUnit__DOT__consumeShadow) {
            vlSelf->QuantActUnit__DOT__activeValid 
                = vlSelf->QuantActUnit__DOT___GEN_20;
        }
        if ((1U & ((IData)(vlSelf->io_soft_reset) | 
                   (~ (IData)(vlSelf->QuantActUnit__DOT__perChannel))))) {
            vlSelf->QuantActUnit__DOT__rowCounter = 0U;
        } else if (vlSelf->QuantActUnit__DOT__inputFire) {
            vlSelf->QuantActUnit__DOT__rowCounter = 
                ((IData)(vlSelf->QuantActUnit__DOT__tileEnd)
                  ? 0U : (IData)(vlSelf->QuantActUnit__DOT___rowCounter_T_1));
        }
        if ((1U & (~ (IData)(vlSelf->QuantActUnit__DOT___T_1)))) {
            if (vlSelf->QuantActUnit__DOT__consumeShadow) {
                if (vlSelf->QuantActUnit__DOT__shadowValid) {
                    vlSelf->QuantActUnit__DOT__activeParam_0 
                        = vlSelf->QuantActUnit__DOT__shadowParam_0;
                    vlSelf->QuantActUnit__DOT__activeParam_1 
                        = vlSelf->QuantActUnit__DOT__shadowParam_1;
                    vlSelf->QuantActUnit__DOT__activeParam_2 
                        = vlSelf->QuantActUnit__DOT__shadowParam_2;
                    vlSelf->QuantActUnit__DOT__activeParam_3 
                        = vlSelf->QuantActUnit__DOT__shadowParam_3;
                    vlSelf->QuantActUnit__DOT__activeParam_4 
                        = vlSelf->QuantActUnit__DOT__shadowParam_4;
                    vlSelf->QuantActUnit__DOT__activeParam_5 
                        = vlSelf->QuantActUnit__DOT__shadowParam_5;
                    vlSelf->QuantActUnit__DOT__activeParam_6 
                        = vlSelf->QuantActUnit__DOT__shadowParam_6;
                    vlSelf->QuantActUnit__DOT__activeParam_7 
                        = vlSelf->QuantActUnit__DOT__shadowParam_7;
                    vlSelf->QuantActUnit__DOT__activeParam_8 
                        = vlSelf->QuantActUnit__DOT__shadowParam_8;
                    vlSelf->QuantActUnit__DOT__activeParam_9 
                        = vlSelf->QuantActUnit__DOT__shadowParam_9;
                    vlSelf->QuantActUnit__DOT__activeParam_10 
                        = vlSelf->QuantActUnit__DOT__shadowParam_10;
                    vlSelf->QuantActUnit__DOT__activeParam_11 
                        = vlSelf->QuantActUnit__DOT__shadowParam_11;
                    vlSelf->QuantActUnit__DOT__activeParam_12 
                        = vlSelf->QuantActUnit__DOT__shadowParam_12;
                    vlSelf->QuantActUnit__DOT__activeParam_13 
                        = vlSelf->QuantActUnit__DOT__shadowParam_13;
                    vlSelf->QuantActUnit__DOT__activeParam_14 
                        = vlSelf->QuantActUnit__DOT__shadowParam_14;
                    vlSelf->QuantActUnit__DOT__activeParam_15 
                        = vlSelf->QuantActUnit__DOT__shadowParam_15;
                }
            }
            if (((IData)(vlSelf->io_qparam_line_valid) 
                 & (IData)(vlSelf->QuantActUnit__DOT__perChannel))) {
                vlSelf->QuantActUnit__DOT__shadowParam_0 
                    = vlSelf->io_qparam_line_in_0;
                vlSelf->QuantActUnit__DOT__shadowParam_1 
                    = vlSelf->io_qparam_line_in_1;
                vlSelf->QuantActUnit__DOT__shadowParam_2 
                    = vlSelf->io_qparam_line_in_2;
                vlSelf->QuantActUnit__DOT__shadowParam_3 
                    = vlSelf->io_qparam_line_in_3;
                vlSelf->QuantActUnit__DOT__shadowParam_4 
                    = vlSelf->io_qparam_line_in_4;
                vlSelf->QuantActUnit__DOT__shadowParam_5 
                    = vlSelf->io_qparam_line_in_5;
                vlSelf->QuantActUnit__DOT__shadowParam_6 
                    = vlSelf->io_qparam_line_in_6;
                vlSelf->QuantActUnit__DOT__shadowParam_7 
                    = vlSelf->io_qparam_line_in_7;
                vlSelf->QuantActUnit__DOT__shadowParam_8 
                    = vlSelf->io_qparam_line_in_8;
                vlSelf->QuantActUnit__DOT__shadowParam_9 
                    = vlSelf->io_qparam_line_in_9;
                vlSelf->QuantActUnit__DOT__shadowParam_10 
                    = vlSelf->io_qparam_line_in_10;
                vlSelf->QuantActUnit__DOT__shadowParam_11 
                    = vlSelf->io_qparam_line_in_11;
                vlSelf->QuantActUnit__DOT__shadowParam_12 
                    = vlSelf->io_qparam_line_in_12;
                vlSelf->QuantActUnit__DOT__shadowParam_13 
                    = vlSelf->io_qparam_line_in_13;
                vlSelf->QuantActUnit__DOT__shadowParam_14 
                    = vlSelf->io_qparam_line_in_14;
                vlSelf->QuantActUnit__DOT__shadowParam_15 
                    = vlSelf->io_qparam_line_in_15;
            }
        }
    }
    vlSelf->QuantActUnit__DOT__reqOutstanding = ((1U 
                                                  & (~ (IData)(vlSelf->reset))) 
                                                 && ((1U 
                                                      & (~ (IData)(vlSelf->QuantActUnit__DOT___T_1))) 
                                                     && ((1U 
                                                          & (~ 
                                                             ((IData)(vlSelf->io_qparam_line_valid) 
                                                              & (IData)(vlSelf->QuantActUnit__DOT__perChannel)))) 
                                                         && (IData)(vlSelf->QuantActUnit__DOT___GEN_3))));
    vlSelf->QuantActUnit__DOT___rowCounter_T_1 = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->QuantActUnit__DOT__rowCounter)));
    vlSelf->QuantActUnit__DOT__shadowValid = ((1U & 
                                               (~ (IData)(vlSelf->reset))) 
                                              && ((1U 
                                                   & (~ (IData)(vlSelf->QuantActUnit__DOT___T_1))) 
                                                  && (IData)(vlSelf->QuantActUnit__DOT___GEN_55)));
    vlSelf->QuantActUnit__DOT___GEN_20 = ((IData)(vlSelf->QuantActUnit__DOT__activeValid) 
                                          | (IData)(vlSelf->QuantActUnit__DOT__shadowValid));
    vlSelf->QuantActUnit__DOT___GEN_92 = ((IData)(vlSelf->QuantActUnit__DOT__primed) 
                                          | (IData)(vlSelf->QuantActUnit__DOT__shadowValid));
}

VL_INLINE_OPT void VQuantActUnit___024root___nba_sequent__TOP__1(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->io_prefetch_ready = (1U & ((~ (IData)(vlSelf->QuantActUnit__DOT__perChannel)) 
                                       | ((IData)(vlSelf->QuantActUnit__DOT__primed) 
                                          & (IData)(vlSelf->io_lut_ready))));
    vlSelf->QuantActUnit__DOT__tileEnd = ((IData)(vlSelf->QuantActUnit__DOT__inputFire) 
                                          & (0xfU == (IData)(vlSelf->QuantActUnit__DOT__rowCounter)));
    vlSelf->QuantActUnit__DOT__tileStart = ((IData)(vlSelf->QuantActUnit__DOT__inputFire) 
                                            & (0U == (IData)(vlSelf->QuantActUnit__DOT__rowCounter)));
    if (vlSelf->QuantActUnit__DOT__perChannel) {
        if (vlSelf->QuantActUnit__DOT__tileStart) {
            vlSelf->QuantActUnit__DOT__consumeShadow = 1U;
            vlSelf->QuantActUnit__DOT__cores_0_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_0;
            vlSelf->QuantActUnit__DOT__cores_1_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_1;
            vlSelf->QuantActUnit__DOT__cores_2_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_2;
            vlSelf->QuantActUnit__DOT__cores_3_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_3;
            vlSelf->QuantActUnit__DOT__cores_4_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_4;
            vlSelf->QuantActUnit__DOT__cores_5_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_5;
            vlSelf->QuantActUnit__DOT__cores_6_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_6;
            vlSelf->QuantActUnit__DOT__cores_7_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_7;
            vlSelf->QuantActUnit__DOT__cores_8_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_8;
            vlSelf->QuantActUnit__DOT__cores_9_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_9;
            vlSelf->QuantActUnit__DOT__cores_10_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_10;
            vlSelf->QuantActUnit__DOT__cores_11_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_11;
            vlSelf->QuantActUnit__DOT__cores_12_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_12;
            vlSelf->QuantActUnit__DOT__cores_13_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_13;
            vlSelf->QuantActUnit__DOT__cores_14_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_14;
            vlSelf->QuantActUnit__DOT__cores_15_io_param 
                = vlSelf->QuantActUnit__DOT__shadowParam_15;
        } else {
            vlSelf->QuantActUnit__DOT__consumeShadow = 0U;
            vlSelf->QuantActUnit__DOT__cores_0_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_0;
            vlSelf->QuantActUnit__DOT__cores_1_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_1;
            vlSelf->QuantActUnit__DOT__cores_2_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_2;
            vlSelf->QuantActUnit__DOT__cores_3_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_3;
            vlSelf->QuantActUnit__DOT__cores_4_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_4;
            vlSelf->QuantActUnit__DOT__cores_5_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_5;
            vlSelf->QuantActUnit__DOT__cores_6_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_6;
            vlSelf->QuantActUnit__DOT__cores_7_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_7;
            vlSelf->QuantActUnit__DOT__cores_8_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_8;
            vlSelf->QuantActUnit__DOT__cores_9_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_9;
            vlSelf->QuantActUnit__DOT__cores_10_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_10;
            vlSelf->QuantActUnit__DOT__cores_11_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_11;
            vlSelf->QuantActUnit__DOT__cores_12_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_12;
            vlSelf->QuantActUnit__DOT__cores_13_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_13;
            vlSelf->QuantActUnit__DOT__cores_14_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_14;
            vlSelf->QuantActUnit__DOT__cores_15_io_param 
                = vlSelf->QuantActUnit__DOT__activeParam_15;
        }
    } else {
        vlSelf->QuantActUnit__DOT__consumeShadow = 0U;
        vlSelf->QuantActUnit__DOT__cores_0_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_1_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_2_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_3_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_4_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_5_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_6_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_7_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_8_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_9_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_10_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_11_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_12_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_13_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_14_io_param 
            = vlSelf->io_matrix_param;
        vlSelf->QuantActUnit__DOT__cores_15_io_param 
            = vlSelf->io_matrix_param;
    }
    vlSelf->QuantActUnit__DOT___GEN_55 = (((IData)(vlSelf->io_qparam_line_valid) 
                                           & (IData)(vlSelf->QuantActUnit__DOT__perChannel)) 
                                          | ((~ (IData)(vlSelf->QuantActUnit__DOT__consumeShadow)) 
                                             & (IData)(vlSelf->QuantActUnit__DOT__shadowValid)));
    vlSelf->io_qparam_req_line = ((IData)(vlSelf->QuantActUnit__DOT__perChannel) 
                                  & ((~ (IData)(vlSelf->io_soft_reset)) 
                                     & ((~ (IData)(vlSelf->QuantActUnit__DOT__reqOutstanding)) 
                                        & ((~ (IData)(vlSelf->QuantActUnit__DOT__shadowValid)) 
                                           | (IData)(vlSelf->QuantActUnit__DOT__consumeShadow)))));
    vlSelf->io_sync_alert = (((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__expectedRdValid) 
                                != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__actLut__DOT__io_rd_valid_REG)) 
                               | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__expectedWrValid) 
                                   != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                  | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__holdValid) 
                                     & ((~ (IData)(vlSelf->io_stall)) 
                                        & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_15.__PVT__rawValid))))) 
                              | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__expectedRdValid) 
                                   != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                  | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__expectedWrValid) 
                                      != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                     | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__holdValid) 
                                        & ((~ (IData)(vlSelf->io_stall)) 
                                           & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_14.__PVT__rawValid))))) 
                                 | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__expectedRdValid) 
                                      != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                     | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__expectedWrValid) 
                                         != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                        | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__holdValid) 
                                           & ((~ (IData)(vlSelf->io_stall)) 
                                              & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_13.__PVT__rawValid))))) 
                                    | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__expectedRdValid) 
                                         != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                        | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__expectedWrValid) 
                                            != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                           | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__holdValid) 
                                              & ((~ (IData)(vlSelf->io_stall)) 
                                                 & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_12.__PVT__rawValid))))) 
                                       | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__expectedRdValid) 
                                            != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                           | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__expectedWrValid) 
                                               != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                              | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__holdValid) 
                                                 & ((~ (IData)(vlSelf->io_stall)) 
                                                    & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_11.__PVT__rawValid))))) 
                                          | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__expectedRdValid) 
                                               != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                              | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__expectedWrValid) 
                                                  != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                 | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__holdValid) 
                                                    & ((~ (IData)(vlSelf->io_stall)) 
                                                       & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_10.__PVT__rawValid))))) 
                                             | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__expectedRdValid) 
                                                  != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                 | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__expectedWrValid) 
                                                     != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                    | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__holdValid) 
                                                       & ((~ (IData)(vlSelf->io_stall)) 
                                                          & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_9.__PVT__rawValid))))) 
                                                | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__expectedRdValid) 
                                                     != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                    | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__expectedWrValid) 
                                                        != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                       | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__holdValid) 
                                                          & ((~ (IData)(vlSelf->io_stall)) 
                                                             & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_8.__PVT__rawValid))))) 
                                                   | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__expectedRdValid) 
                                                        != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                       | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__expectedWrValid) 
                                                           != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                          | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__holdValid) 
                                                             & ((~ (IData)(vlSelf->io_stall)) 
                                                                & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_7.__PVT__rawValid))))) 
                                                      | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__expectedRdValid) 
                                                           != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                          | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__expectedWrValid) 
                                                              != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                             | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__holdValid) 
                                                                & ((~ (IData)(vlSelf->io_stall)) 
                                                                   & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_6.__PVT__rawValid))))) 
                                                         | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__expectedRdValid) 
                                                              != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                             | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__expectedWrValid) 
                                                                 != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                                | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__holdValid) 
                                                                   & ((~ (IData)(vlSelf->io_stall)) 
                                                                      & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_5.__PVT__rawValid))))) 
                                                            | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__expectedRdValid) 
                                                                 != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                                | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__expectedWrValid) 
                                                                    != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                                   | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__holdValid) 
                                                                      & ((~ (IData)(vlSelf->io_stall)) 
                                                                         & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_4.__PVT__rawValid))))) 
                                                               | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__expectedRdValid) 
                                                                    != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                                   | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__expectedWrValid) 
                                                                       != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                                      | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__holdValid) 
                                                                         & ((~ (IData)(vlSelf->io_stall)) 
                                                                            & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_3.__PVT__rawValid))))) 
                                                                  | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__expectedRdValid) 
                                                                       != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                                      | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__expectedWrValid) 
                                                                          != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                                         | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__holdValid) 
                                                                            & ((~ (IData)(vlSelf->io_stall)) 
                                                                               & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_2.__PVT__rawValid))))) 
                                                                     | ((((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__expectedRdValid) 
                                                                          != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                                         | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__expectedWrValid) 
                                                                             != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                                            | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__holdValid) 
                                                                               & ((~ (IData)(vlSelf->io_stall)) 
                                                                                & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_1.__PVT__rawValid))))) 
                                                                        | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__expectedRdValid) 
                                                                            != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__actLut__DOT__io_rd_valid_REG)) 
                                                                           | (((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__expectedWrValid) 
                                                                               != (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__actLut__DOT__io_wr_valid_REG)) 
                                                                              | ((IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__holdValid) 
                                                                                & ((~ (IData)(vlSelf->io_stall)) 
                                                                                & (IData)(vlSymsp->TOP__QuantActUnit__DOT__cores_0.__PVT__rawValid)))))))))))))))))))) 
                             | (((~ (IData)((0xffffU 
                                             == (IData)(vlSelf->QuantActUnit__DOT___anyValid_T)))) 
                                 & (0U != (IData)(vlSelf->QuantActUnit__DOT___anyValid_T))) 
                                | (((~ (IData)(vlSelf->QuantActUnit__DOT__shadowValid)) 
                                    & (IData)(vlSelf->QuantActUnit__DOT__consumeShadow)) 
                                   | (((IData)(vlSelf->QuantActUnit__DOT__perChannel) 
                                       & ((~ ((IData)(vlSelf->QuantActUnit__DOT__tileStart) 
                                              | (IData)(vlSelf->QuantActUnit__DOT__activeValid))) 
                                          & (IData)(vlSelf->QuantActUnit__DOT__inputFire))) 
                                      | ((~ (IData)(vlSelf->QuantActUnit__DOT__consumeShadow)) 
                                         & ((IData)(vlSelf->QuantActUnit__DOT__perChannel) 
                                            & ((IData)(vlSelf->QuantActUnit__DOT__shadowValid) 
                                               & (IData)(vlSelf->io_qparam_line_valid))))))));
    vlSelf->QuantActUnit__DOT___GEN_3 = ((IData)(vlSelf->io_qparam_req_line) 
                                         | (IData)(vlSelf->QuantActUnit__DOT__reqOutstanding));
}

void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_0__0(VQuantActUnit_QuantActCore* vlSelf);
void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_1__0(VQuantActUnit_QuantActCore* vlSelf);
void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_2__0(VQuantActUnit_QuantActCore* vlSelf);
void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_3__0(VQuantActUnit_QuantActCore* vlSelf);
void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_4__0(VQuantActUnit_QuantActCore* vlSelf);
void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_5__0(VQuantActUnit_QuantActCore* vlSelf);
void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_6__0(VQuantActUnit_QuantActCore* vlSelf);
void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_7__0(VQuantActUnit_QuantActCore* vlSelf);
void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_8__0(VQuantActUnit_QuantActCore* vlSelf);
void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_9__0(VQuantActUnit_QuantActCore* vlSelf);
void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_10__0(VQuantActUnit_QuantActCore* vlSelf);
void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_11__0(VQuantActUnit_QuantActCore* vlSelf);
void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_12__0(VQuantActUnit_QuantActCore* vlSelf);
void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_13__0(VQuantActUnit_QuantActCore* vlSelf);
void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_14__0(VQuantActUnit_QuantActCore* vlSelf);
void VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_15__0(VQuantActUnit_QuantActCore* vlSelf);

void VQuantActUnit___024root___eval_nba(VQuantActUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQuantActUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQuantActUnit___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_0__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_0));
        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_1__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_1));
        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_2__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_2));
        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_3__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_3));
        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_4__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_4));
        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_5__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_5));
        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_6__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_6));
        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_7__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_7));
        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_8__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_8));
        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_9__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_9));
        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_10__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_10));
        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_11__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_11));
        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_12__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_12));
        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_13__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_13));
        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_14__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_14));
        VQuantActUnit_QuantActCore___nba_sequent__TOP__QuantActUnit__DOT__cores_15__0((&vlSymsp->TOP__QuantActUnit__DOT__cores_15));
        VQuantActUnit___024root___nba_sequent__TOP__0(vlSelf);
        VQuantActUnit___024root___nba_sequent__TOP__1(vlSelf);
    }
}
