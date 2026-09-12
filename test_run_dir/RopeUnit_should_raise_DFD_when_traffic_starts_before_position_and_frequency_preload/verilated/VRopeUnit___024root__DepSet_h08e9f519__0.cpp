// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRopeUnit.h for the primary calling header

#include "VRopeUnit__pch.h"
#include "VRopeUnit__Syms.h"
#include "VRopeUnit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VRopeUnit___024root___dump_triggers__ico(VRopeUnit___024root* vlSelf);
#endif  // VL_DEBUG

void VRopeUnit___024root___eval_triggers__ico(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRopeUnit___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VRopeUnit___024root___ico_sequent__TOP__0(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___ico_sequent__TOP__0\n"); );
    // Init
    QData/*47:0*/ RopeUnit__DOT____VdfgTmp_hb727c52c__0;
    RopeUnit__DOT____VdfgTmp_hb727c52c__0 = 0;
    // Body
    vlSelf->io_prefetch_ready = (1U & ((~ (IData)(vlSelf->io_rope_en)) 
                                       | ((IData)(vlSelf->RopeUnit__DOT__primed) 
                                          & (IData)(vlSelf->io_lut_ready))));
    vlSelf->RopeUnit__DOT___GEN_3 = ((IData)(vlSelf->io_position_init)
                                      ? vlSelf->io_base_m_in
                                      : vlSelf->RopeUnit__DOT__shadowMBase);
    if (vlSelf->io_rope_en) {
        if (vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__holdValid) {
            vlSelf->io_out_vec_0 = vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__holdEven;
            vlSelf->io_out_vec_1 = vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__holdOdd;
        } else {
            vlSelf->io_out_vec_0 = vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__rawEven;
            vlSelf->io_out_vec_1 = vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__rawOdd;
        }
        if (vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__holdValid) {
            vlSelf->io_out_vec_2 = vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__holdEven;
            vlSelf->io_out_vec_3 = vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__holdOdd;
        } else {
            vlSelf->io_out_vec_2 = vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__rawEven;
            vlSelf->io_out_vec_3 = vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__rawOdd;
        }
        if (vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__holdValid) {
            vlSelf->io_out_vec_4 = vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__holdEven;
            vlSelf->io_out_vec_5 = vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__holdOdd;
        } else {
            vlSelf->io_out_vec_4 = vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__rawEven;
            vlSelf->io_out_vec_5 = vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__rawOdd;
        }
        if (vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__holdValid) {
            vlSelf->io_out_vec_6 = vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__holdEven;
            vlSelf->io_out_vec_7 = vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__holdOdd;
        } else {
            vlSelf->io_out_vec_6 = vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__rawEven;
            vlSelf->io_out_vec_7 = vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__rawOdd;
        }
        if (vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__holdValid) {
            vlSelf->io_out_vec_8 = vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__holdEven;
            vlSelf->io_out_vec_9 = vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__holdOdd;
        } else {
            vlSelf->io_out_vec_8 = vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__rawEven;
            vlSelf->io_out_vec_9 = vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__rawOdd;
        }
        if (vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__holdValid) {
            vlSelf->io_out_vec_10 = vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__holdEven;
            vlSelf->io_out_vec_11 = vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__holdOdd;
        } else {
            vlSelf->io_out_vec_10 = vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__rawEven;
            vlSelf->io_out_vec_11 = vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__rawOdd;
        }
        if (vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__holdValid) {
            vlSelf->io_out_vec_12 = vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__holdEven;
            vlSelf->io_out_vec_13 = vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__holdOdd;
        } else {
            vlSelf->io_out_vec_12 = vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__rawEven;
            vlSelf->io_out_vec_13 = vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__rawOdd;
        }
        if (vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__holdValid) {
            vlSelf->io_out_vec_14 = vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__holdEven;
            vlSelf->io_out_vec_15 = vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__holdOdd;
        } else {
            vlSelf->io_out_vec_14 = vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__rawEven;
            vlSelf->io_out_vec_15 = vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__rawOdd;
        }
    } else {
        vlSelf->io_out_vec_0 = vlSelf->io_in_vec_0;
        vlSelf->io_out_vec_1 = vlSelf->io_in_vec_1;
        vlSelf->io_out_vec_2 = vlSelf->io_in_vec_2;
        vlSelf->io_out_vec_3 = vlSelf->io_in_vec_3;
        vlSelf->io_out_vec_4 = vlSelf->io_in_vec_4;
        vlSelf->io_out_vec_5 = vlSelf->io_in_vec_5;
        vlSelf->io_out_vec_6 = vlSelf->io_in_vec_6;
        vlSelf->io_out_vec_7 = vlSelf->io_in_vec_7;
        vlSelf->io_out_vec_8 = vlSelf->io_in_vec_8;
        vlSelf->io_out_vec_9 = vlSelf->io_in_vec_9;
        vlSelf->io_out_vec_10 = vlSelf->io_in_vec_10;
        vlSelf->io_out_vec_11 = vlSelf->io_in_vec_11;
        vlSelf->io_out_vec_12 = vlSelf->io_in_vec_12;
        vlSelf->io_out_vec_13 = vlSelf->io_in_vec_13;
        vlSelf->io_out_vec_14 = vlSelf->io_in_vec_14;
        vlSelf->io_out_vec_15 = vlSelf->io_in_vec_15;
    }
    vlSelf->RopeUnit__DOT___GEN_4 = ((IData)(vlSelf->RopeUnit__DOT__shadowMValid) 
                                     | (IData)(vlSelf->io_position_init));
    vlSelf->RopeUnit__DOT__nextBlockAvailable = ((IData)(vlSelf->RopeUnit__DOT__shadowFreqValid) 
                                                 | (IData)(vlSelf->io_freq_block_valid));
    vlSelf->RopeUnit__DOT___anyValid_T = (((IData)(vlSelf->io_in_valid_15) 
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
    vlSelf->RopeUnit__DOT___GEN_8 = ((IData)(vlSelf->RopeUnit__DOT__shadowMValid) 
                                     | (IData)(vlSelf->RopeUnit__DOT___GEN_4));
    vlSelf->RopeUnit__DOT___GEN_35 = ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                       ? (IData)(vlSelf->RopeUnit__DOT__nextBlockAvailable)
                                       : (IData)(vlSelf->RopeUnit__DOT__activeFreqValid));
    vlSelf->RopeUnit__DOT__pairs_0_io_in_valid = ((0xffffU 
                                                   == (IData)(vlSelf->RopeUnit__DOT___anyValid_T)) 
                                                  & (IData)(vlSelf->io_rope_en));
    vlSelf->RopeUnit__DOT__inputFire = ((0xffffU == (IData)(vlSelf->RopeUnit__DOT___anyValid_T)) 
                                        & ((~ (IData)(vlSelf->io_stall)) 
                                           & (IData)(vlSelf->io_rope_en)));
    vlSelf->RopeUnit__DOT__tileEnd = ((IData)(vlSelf->RopeUnit__DOT__inputFire) 
                                      & (0xfU == (IData)(vlSelf->RopeUnit__DOT__rowCounter)));
    vlSelf->RopeUnit__DOT___GEN_105 = (1U & ((~ (IData)(vlSelf->RopeUnit__DOT__activeFreqValid)) 
                                             | ((IData)(vlSelf->RopeUnit__DOT__inputFire)
                                                 ? (IData)(vlSelf->RopeUnit__DOT___GEN_35)
                                                 : (IData)(vlSelf->RopeUnit__DOT__activeFreqValid))));
    if (vlSelf->RopeUnit__DOT__inputFire) {
        vlSelf->RopeUnit__DOT___GEN_71 = ((~ (IData)(vlSelf->RopeUnit__DOT__freqHalf)) 
                                          & (IData)(vlSelf->RopeUnit__DOT__shadowFreqValid));
        if (vlSelf->RopeUnit__DOT__freqHalf) {
            if (vlSelf->RopeUnit__DOT__nextBlockAvailable) {
                if (vlSelf->io_freq_block_valid) {
                    vlSelf->RopeUnit__DOT___GEN_55 
                        = vlSelf->io_freq_block_in_0;
                    vlSelf->RopeUnit__DOT___GEN_56 
                        = vlSelf->io_freq_block_in_1;
                    vlSelf->RopeUnit__DOT___GEN_57 
                        = vlSelf->io_freq_block_in_2;
                    vlSelf->RopeUnit__DOT___GEN_58 
                        = vlSelf->io_freq_block_in_3;
                    vlSelf->RopeUnit__DOT___GEN_59 
                        = vlSelf->io_freq_block_in_4;
                    vlSelf->RopeUnit__DOT___GEN_60 
                        = vlSelf->io_freq_block_in_5;
                    vlSelf->RopeUnit__DOT___GEN_61 
                        = vlSelf->io_freq_block_in_6;
                    vlSelf->RopeUnit__DOT___GEN_62 
                        = vlSelf->io_freq_block_in_7;
                    vlSelf->RopeUnit__DOT___GEN_63 
                        = vlSelf->io_freq_block_in_8;
                    vlSelf->RopeUnit__DOT___GEN_64 
                        = vlSelf->io_freq_block_in_9;
                    vlSelf->RopeUnit__DOT___GEN_65 
                        = vlSelf->io_freq_block_in_10;
                    vlSelf->RopeUnit__DOT___GEN_66 
                        = vlSelf->io_freq_block_in_11;
                    vlSelf->RopeUnit__DOT___GEN_67 
                        = vlSelf->io_freq_block_in_12;
                    vlSelf->RopeUnit__DOT___GEN_68 
                        = vlSelf->io_freq_block_in_13;
                    vlSelf->RopeUnit__DOT___GEN_69 
                        = vlSelf->io_freq_block_in_14;
                    vlSelf->RopeUnit__DOT___GEN_70 
                        = vlSelf->io_freq_block_in_15;
                } else {
                    vlSelf->RopeUnit__DOT___GEN_55 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_0;
                    vlSelf->RopeUnit__DOT___GEN_56 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_1;
                    vlSelf->RopeUnit__DOT___GEN_57 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_2;
                    vlSelf->RopeUnit__DOT___GEN_58 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_3;
                    vlSelf->RopeUnit__DOT___GEN_59 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_4;
                    vlSelf->RopeUnit__DOT___GEN_60 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_5;
                    vlSelf->RopeUnit__DOT___GEN_61 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_6;
                    vlSelf->RopeUnit__DOT___GEN_62 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_7;
                    vlSelf->RopeUnit__DOT___GEN_63 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_8;
                    vlSelf->RopeUnit__DOT___GEN_64 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_9;
                    vlSelf->RopeUnit__DOT___GEN_65 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_10;
                    vlSelf->RopeUnit__DOT___GEN_66 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_11;
                    vlSelf->RopeUnit__DOT___GEN_67 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_12;
                    vlSelf->RopeUnit__DOT___GEN_68 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_13;
                    vlSelf->RopeUnit__DOT___GEN_69 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_14;
                    vlSelf->RopeUnit__DOT___GEN_70 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_15;
                }
            } else {
                vlSelf->RopeUnit__DOT___GEN_55 = vlSelf->RopeUnit__DOT__activeFreqBlock_0;
                vlSelf->RopeUnit__DOT___GEN_56 = vlSelf->RopeUnit__DOT__activeFreqBlock_1;
                vlSelf->RopeUnit__DOT___GEN_57 = vlSelf->RopeUnit__DOT__activeFreqBlock_2;
                vlSelf->RopeUnit__DOT___GEN_58 = vlSelf->RopeUnit__DOT__activeFreqBlock_3;
                vlSelf->RopeUnit__DOT___GEN_59 = vlSelf->RopeUnit__DOT__activeFreqBlock_4;
                vlSelf->RopeUnit__DOT___GEN_60 = vlSelf->RopeUnit__DOT__activeFreqBlock_5;
                vlSelf->RopeUnit__DOT___GEN_61 = vlSelf->RopeUnit__DOT__activeFreqBlock_6;
                vlSelf->RopeUnit__DOT___GEN_62 = vlSelf->RopeUnit__DOT__activeFreqBlock_7;
                vlSelf->RopeUnit__DOT___GEN_63 = vlSelf->RopeUnit__DOT__activeFreqBlock_8;
                vlSelf->RopeUnit__DOT___GEN_64 = vlSelf->RopeUnit__DOT__activeFreqBlock_9;
                vlSelf->RopeUnit__DOT___GEN_65 = vlSelf->RopeUnit__DOT__activeFreqBlock_10;
                vlSelf->RopeUnit__DOT___GEN_66 = vlSelf->RopeUnit__DOT__activeFreqBlock_11;
                vlSelf->RopeUnit__DOT___GEN_67 = vlSelf->RopeUnit__DOT__activeFreqBlock_12;
                vlSelf->RopeUnit__DOT___GEN_68 = vlSelf->RopeUnit__DOT__activeFreqBlock_13;
                vlSelf->RopeUnit__DOT___GEN_69 = vlSelf->RopeUnit__DOT__activeFreqBlock_14;
                vlSelf->RopeUnit__DOT___GEN_70 = vlSelf->RopeUnit__DOT__activeFreqBlock_15;
            }
        } else {
            vlSelf->RopeUnit__DOT___GEN_55 = vlSelf->RopeUnit__DOT__activeFreqBlock_0;
            vlSelf->RopeUnit__DOT___GEN_56 = vlSelf->RopeUnit__DOT__activeFreqBlock_1;
            vlSelf->RopeUnit__DOT___GEN_57 = vlSelf->RopeUnit__DOT__activeFreqBlock_2;
            vlSelf->RopeUnit__DOT___GEN_58 = vlSelf->RopeUnit__DOT__activeFreqBlock_3;
            vlSelf->RopeUnit__DOT___GEN_59 = vlSelf->RopeUnit__DOT__activeFreqBlock_4;
            vlSelf->RopeUnit__DOT___GEN_60 = vlSelf->RopeUnit__DOT__activeFreqBlock_5;
            vlSelf->RopeUnit__DOT___GEN_61 = vlSelf->RopeUnit__DOT__activeFreqBlock_6;
            vlSelf->RopeUnit__DOT___GEN_62 = vlSelf->RopeUnit__DOT__activeFreqBlock_7;
            vlSelf->RopeUnit__DOT___GEN_63 = vlSelf->RopeUnit__DOT__activeFreqBlock_8;
            vlSelf->RopeUnit__DOT___GEN_64 = vlSelf->RopeUnit__DOT__activeFreqBlock_9;
            vlSelf->RopeUnit__DOT___GEN_65 = vlSelf->RopeUnit__DOT__activeFreqBlock_10;
            vlSelf->RopeUnit__DOT___GEN_66 = vlSelf->RopeUnit__DOT__activeFreqBlock_11;
            vlSelf->RopeUnit__DOT___GEN_67 = vlSelf->RopeUnit__DOT__activeFreqBlock_12;
            vlSelf->RopeUnit__DOT___GEN_68 = vlSelf->RopeUnit__DOT__activeFreqBlock_13;
            vlSelf->RopeUnit__DOT___GEN_69 = vlSelf->RopeUnit__DOT__activeFreqBlock_14;
            vlSelf->RopeUnit__DOT___GEN_70 = vlSelf->RopeUnit__DOT__activeFreqBlock_15;
        }
    } else {
        vlSelf->RopeUnit__DOT___GEN_71 = vlSelf->RopeUnit__DOT__shadowFreqValid;
        vlSelf->RopeUnit__DOT___GEN_55 = vlSelf->RopeUnit__DOT__activeFreqBlock_0;
        vlSelf->RopeUnit__DOT___GEN_56 = vlSelf->RopeUnit__DOT__activeFreqBlock_1;
        vlSelf->RopeUnit__DOT___GEN_57 = vlSelf->RopeUnit__DOT__activeFreqBlock_2;
        vlSelf->RopeUnit__DOT___GEN_58 = vlSelf->RopeUnit__DOT__activeFreqBlock_3;
        vlSelf->RopeUnit__DOT___GEN_59 = vlSelf->RopeUnit__DOT__activeFreqBlock_4;
        vlSelf->RopeUnit__DOT___GEN_60 = vlSelf->RopeUnit__DOT__activeFreqBlock_5;
        vlSelf->RopeUnit__DOT___GEN_61 = vlSelf->RopeUnit__DOT__activeFreqBlock_6;
        vlSelf->RopeUnit__DOT___GEN_62 = vlSelf->RopeUnit__DOT__activeFreqBlock_7;
        vlSelf->RopeUnit__DOT___GEN_63 = vlSelf->RopeUnit__DOT__activeFreqBlock_8;
        vlSelf->RopeUnit__DOT___GEN_64 = vlSelf->RopeUnit__DOT__activeFreqBlock_9;
        vlSelf->RopeUnit__DOT___GEN_65 = vlSelf->RopeUnit__DOT__activeFreqBlock_10;
        vlSelf->RopeUnit__DOT___GEN_66 = vlSelf->RopeUnit__DOT__activeFreqBlock_11;
        vlSelf->RopeUnit__DOT___GEN_67 = vlSelf->RopeUnit__DOT__activeFreqBlock_12;
        vlSelf->RopeUnit__DOT___GEN_68 = vlSelf->RopeUnit__DOT__activeFreqBlock_13;
        vlSelf->RopeUnit__DOT___GEN_69 = vlSelf->RopeUnit__DOT__activeFreqBlock_14;
        vlSelf->RopeUnit__DOT___GEN_70 = vlSelf->RopeUnit__DOT__activeFreqBlock_15;
    }
    vlSelf->io_freq_req_block = ((~ (IData)(vlSelf->RopeUnit__DOT__freqReqOutstanding)) 
                                 & ((IData)(vlSelf->io_rope_en) 
                                    & ((~ (IData)(vlSelf->RopeUnit__DOT__activeFreqValid)) 
                                       | ((IData)(vlSelf->RopeUnit__DOT__inputFire) 
                                          & ((~ (IData)(vlSelf->RopeUnit__DOT__freqHalf)) 
                                             & (~ (IData)(vlSelf->RopeUnit__DOT__shadowFreqValid)))))));
    vlSelf->RopeUnit__DOT__completesBlock = ((IData)(vlSelf->RopeUnit__DOT__inputFire) 
                                             & (IData)(vlSelf->RopeUnit__DOT__freqHalf));
    vlSelf->RopeUnit__DOT___T_3 = ((IData)(vlSelf->RopeUnit__DOT__inputFire) 
                                   & (IData)(vlSelf->io_row_change_update));
    vlSelf->RopeUnit__DOT___GEN_17 = ((IData)(vlSelf->io_freq_req_block) 
                                      | (IData)(vlSelf->RopeUnit__DOT__freqReqOutstanding));
    if (vlSelf->RopeUnit__DOT__completesBlock) {
        vlSelf->RopeUnit__DOT___GEN_72 = vlSelf->RopeUnit__DOT__shadowFreqBlock_0;
        vlSelf->RopeUnit__DOT___GEN_73 = vlSelf->RopeUnit__DOT__shadowFreqBlock_1;
        vlSelf->RopeUnit__DOT___GEN_74 = vlSelf->RopeUnit__DOT__shadowFreqBlock_2;
        vlSelf->RopeUnit__DOT___GEN_75 = vlSelf->RopeUnit__DOT__shadowFreqBlock_3;
        vlSelf->RopeUnit__DOT___GEN_76 = vlSelf->RopeUnit__DOT__shadowFreqBlock_4;
        vlSelf->RopeUnit__DOT___GEN_77 = vlSelf->RopeUnit__DOT__shadowFreqBlock_5;
        vlSelf->RopeUnit__DOT___GEN_78 = vlSelf->RopeUnit__DOT__shadowFreqBlock_6;
        vlSelf->RopeUnit__DOT___GEN_79 = vlSelf->RopeUnit__DOT__shadowFreqBlock_7;
        vlSelf->RopeUnit__DOT___GEN_80 = vlSelf->RopeUnit__DOT__shadowFreqBlock_8;
        vlSelf->RopeUnit__DOT___GEN_81 = vlSelf->RopeUnit__DOT__shadowFreqBlock_9;
        vlSelf->RopeUnit__DOT___GEN_82 = vlSelf->RopeUnit__DOT__shadowFreqBlock_10;
        vlSelf->RopeUnit__DOT___GEN_83 = vlSelf->RopeUnit__DOT__shadowFreqBlock_11;
        vlSelf->RopeUnit__DOT___GEN_84 = vlSelf->RopeUnit__DOT__shadowFreqBlock_12;
        vlSelf->RopeUnit__DOT___GEN_85 = vlSelf->RopeUnit__DOT__shadowFreqBlock_13;
        vlSelf->RopeUnit__DOT___GEN_86 = vlSelf->RopeUnit__DOT__shadowFreqBlock_14;
        vlSelf->RopeUnit__DOT___GEN_87 = vlSelf->RopeUnit__DOT__shadowFreqBlock_15;
    } else {
        vlSelf->RopeUnit__DOT___GEN_72 = vlSelf->io_freq_block_in_0;
        vlSelf->RopeUnit__DOT___GEN_73 = vlSelf->io_freq_block_in_1;
        vlSelf->RopeUnit__DOT___GEN_74 = vlSelf->io_freq_block_in_2;
        vlSelf->RopeUnit__DOT___GEN_75 = vlSelf->io_freq_block_in_3;
        vlSelf->RopeUnit__DOT___GEN_76 = vlSelf->io_freq_block_in_4;
        vlSelf->RopeUnit__DOT___GEN_77 = vlSelf->io_freq_block_in_5;
        vlSelf->RopeUnit__DOT___GEN_78 = vlSelf->io_freq_block_in_6;
        vlSelf->RopeUnit__DOT___GEN_79 = vlSelf->io_freq_block_in_7;
        vlSelf->RopeUnit__DOT___GEN_80 = vlSelf->io_freq_block_in_8;
        vlSelf->RopeUnit__DOT___GEN_81 = vlSelf->io_freq_block_in_9;
        vlSelf->RopeUnit__DOT___GEN_82 = vlSelf->io_freq_block_in_10;
        vlSelf->RopeUnit__DOT___GEN_83 = vlSelf->io_freq_block_in_11;
        vlSelf->RopeUnit__DOT___GEN_84 = vlSelf->io_freq_block_in_12;
        vlSelf->RopeUnit__DOT___GEN_85 = vlSelf->io_freq_block_in_13;
        vlSelf->RopeUnit__DOT___GEN_86 = vlSelf->io_freq_block_in_14;
        vlSelf->RopeUnit__DOT___GEN_87 = vlSelf->io_freq_block_in_15;
    }
    vlSelf->io_sync_alert = (((((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__expectedRd) 
                                != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                               | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__expectedRd) 
                                   != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                  | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__expectedCosWr) 
                                      != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__cosLut__DOT__io_wr_valid_REG)) 
                                     | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__expectedSinWr) 
                                         != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__sinLut__DOT__io_wr_valid_REG)) 
                                        | ((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__holdValid) 
                                           & ((~ (IData)(vlSelf->io_stall)) 
                                              & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__coeffValid))))))) 
                              | ((((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__expectedRd) 
                                   != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                  | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__expectedRd) 
                                      != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                     | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__expectedCosWr) 
                                         != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__cosLut__DOT__io_wr_valid_REG)) 
                                        | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__expectedSinWr) 
                                            != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__sinLut__DOT__io_wr_valid_REG)) 
                                           | ((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__holdValid) 
                                              & ((~ (IData)(vlSelf->io_stall)) 
                                                 & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__coeffValid))))))) 
                                 | ((((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__expectedRd) 
                                      != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                     | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__expectedRd) 
                                         != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                        | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__expectedCosWr) 
                                            != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__cosLut__DOT__io_wr_valid_REG)) 
                                           | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__expectedSinWr) 
                                               != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__sinLut__DOT__io_wr_valid_REG)) 
                                              | ((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__holdValid) 
                                                 & ((~ (IData)(vlSelf->io_stall)) 
                                                    & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__coeffValid))))))) 
                                    | ((((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__expectedRd) 
                                         != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                        | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__expectedRd) 
                                            != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                           | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__expectedCosWr) 
                                               != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__cosLut__DOT__io_wr_valid_REG)) 
                                              | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__expectedSinWr) 
                                                  != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__sinLut__DOT__io_wr_valid_REG)) 
                                                 | ((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__holdValid) 
                                                    & ((~ (IData)(vlSelf->io_stall)) 
                                                       & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__coeffValid))))))) 
                                       | ((((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__expectedRd) 
                                            != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                           | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__expectedRd) 
                                               != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                              | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__expectedCosWr) 
                                                  != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__cosLut__DOT__io_wr_valid_REG)) 
                                                 | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__expectedSinWr) 
                                                     != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__sinLut__DOT__io_wr_valid_REG)) 
                                                    | ((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__holdValid) 
                                                       & ((~ (IData)(vlSelf->io_stall)) 
                                                          & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__coeffValid))))))) 
                                          | ((((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__expectedRd) 
                                               != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                              | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__expectedRd) 
                                                  != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                                 | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__expectedCosWr) 
                                                     != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__cosLut__DOT__io_wr_valid_REG)) 
                                                    | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__expectedSinWr) 
                                                        != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__sinLut__DOT__io_wr_valid_REG)) 
                                                       | ((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__holdValid) 
                                                          & ((~ (IData)(vlSelf->io_stall)) 
                                                             & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__coeffValid))))))) 
                                             | ((((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__expectedRd) 
                                                  != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                                 | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__expectedRd) 
                                                     != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                                    | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__expectedCosWr) 
                                                        != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__cosLut__DOT__io_wr_valid_REG)) 
                                                       | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__expectedSinWr) 
                                                           != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__sinLut__DOT__io_wr_valid_REG)) 
                                                          | ((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__holdValid) 
                                                             & ((~ (IData)(vlSelf->io_stall)) 
                                                                & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__coeffValid))))))) 
                                                | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__expectedRd) 
                                                    != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                                   | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__expectedRd) 
                                                       != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                                      | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__expectedCosWr) 
                                                          != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__cosLut__DOT__io_wr_valid_REG)) 
                                                         | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__expectedSinWr) 
                                                             != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__sinLut__DOT__io_wr_valid_REG)) 
                                                            | ((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__holdValid) 
                                                               & ((~ (IData)(vlSelf->io_stall)) 
                                                                  & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__coeffValid)))))))))))))) 
                             | (((~ (IData)((0xffffU 
                                             == (IData)(vlSelf->RopeUnit__DOT___anyValid_T)))) 
                                 & (0U != (IData)(vlSelf->RopeUnit__DOT___anyValid_T))) 
                                | (((~ ((IData)(vlSelf->RopeUnit__DOT__inputFire) 
                                        & (0U == (IData)(vlSelf->RopeUnit__DOT__rowCounter)))) 
                                    & (IData)(vlSelf->RopeUnit__DOT___T_3)) 
                                   | (((~ (IData)(vlSelf->RopeUnit__DOT__shadowMValid)) 
                                       & (IData)(vlSelf->RopeUnit__DOT___T_3)) 
                                      | (((~ (IData)(vlSelf->RopeUnit__DOT__activeMValid)) 
                                          & ((~ (IData)(vlSelf->RopeUnit__DOT___T_3)) 
                                             & (IData)(vlSelf->RopeUnit__DOT__inputFire))) 
                                         | (((~ (IData)(vlSelf->RopeUnit__DOT__nextBlockAvailable)) 
                                             & (IData)(vlSelf->RopeUnit__DOT__completesBlock)) 
                                            | (((~ (IData)(vlSelf->RopeUnit__DOT__freqReqOutstanding)) 
                                                & (IData)(vlSelf->io_freq_block_valid)) 
                                               | ((~ (IData)(vlSelf->RopeUnit__DOT__primed)) 
                                                  & (IData)(vlSelf->RopeUnit__DOT__inputFire)))))))));
    RopeUnit__DOT____VdfgTmp_hb727c52c__0 = (QData)((IData)(
                                                            (((IData)(vlSelf->RopeUnit__DOT___T_3)
                                                               ? vlSelf->RopeUnit__DOT__shadowMBase
                                                               : vlSelf->RopeUnit__DOT__activeMBase) 
                                                             + (IData)(vlSelf->RopeUnit__DOT__rowCounter))));
    vlSelf->RopeUnit__DOT__pairs_0_io_angle_idx = (0x3ffU 
                                                   & (IData)(
                                                             (0x3ffffffffffULL 
                                                              & ((RopeUnit__DOT____VdfgTmp_hb727c52c__0 
                                                                  * (QData)((IData)(
                                                                                ((0xfU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_15)
                                                                                 : 
                                                                                ((0xeU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_14)
                                                                                 : 
                                                                                ((0xdU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_13)
                                                                                 : 
                                                                                ((0xcU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_12)
                                                                                 : 
                                                                                ((0xbU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_11)
                                                                                 : 
                                                                                ((0xaU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_10)
                                                                                 : 
                                                                                ((9U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_9)
                                                                                 : 
                                                                                ((8U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_8)
                                                                                 : 
                                                                                ((7U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_7)
                                                                                 : 
                                                                                ((6U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_6)
                                                                                 : 
                                                                                ((5U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_5)
                                                                                 : 
                                                                                ((4U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_4)
                                                                                 : 
                                                                                ((3U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_3)
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_2)
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_1)
                                                                                 : (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_0))))))))))))))))))) 
                                                                 >> 6U))));
    vlSelf->RopeUnit__DOT__pairs_1_io_angle_idx = (0x3ffU 
                                                   & (IData)(
                                                             (0x3ffffffffffULL 
                                                              & ((RopeUnit__DOT____VdfgTmp_hb727c52c__0 
                                                                  * (QData)((IData)(
                                                                                ((0xfU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_15)
                                                                                 : 
                                                                                ((0xeU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_14)
                                                                                 : 
                                                                                ((0xdU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_13)
                                                                                 : 
                                                                                ((0xcU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_12)
                                                                                 : 
                                                                                ((0xbU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_11)
                                                                                 : 
                                                                                ((0xaU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_10)
                                                                                 : 
                                                                                ((9U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_9)
                                                                                 : 
                                                                                ((8U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_8)
                                                                                 : 
                                                                                ((7U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_7)
                                                                                 : 
                                                                                ((6U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_6)
                                                                                 : 
                                                                                ((5U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_5)
                                                                                 : 
                                                                                ((4U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_4)
                                                                                 : 
                                                                                ((3U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_3)
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_2)
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_1)
                                                                                 : (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_0))))))))))))))))))) 
                                                                 >> 6U))));
    vlSelf->RopeUnit__DOT__pairs_2_io_angle_idx = (0x3ffU 
                                                   & (IData)(
                                                             (0x3ffffffffffULL 
                                                              & ((RopeUnit__DOT____VdfgTmp_hb727c52c__0 
                                                                  * (QData)((IData)(
                                                                                ((0xfU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_15)
                                                                                 : 
                                                                                ((0xeU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_14)
                                                                                 : 
                                                                                ((0xdU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_13)
                                                                                 : 
                                                                                ((0xcU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_12)
                                                                                 : 
                                                                                ((0xbU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_11)
                                                                                 : 
                                                                                ((0xaU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_10)
                                                                                 : 
                                                                                ((9U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_9)
                                                                                 : 
                                                                                ((8U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_8)
                                                                                 : 
                                                                                ((7U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_7)
                                                                                 : 
                                                                                ((6U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_6)
                                                                                 : 
                                                                                ((5U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_5)
                                                                                 : 
                                                                                ((4U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_4)
                                                                                 : 
                                                                                ((3U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_3)
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_2)
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_1)
                                                                                 : (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_0))))))))))))))))))) 
                                                                 >> 6U))));
    vlSelf->RopeUnit__DOT__pairs_3_io_angle_idx = (0x3ffU 
                                                   & (IData)(
                                                             (0x3ffffffffffULL 
                                                              & ((RopeUnit__DOT____VdfgTmp_hb727c52c__0 
                                                                  * (QData)((IData)(
                                                                                ((0xfU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_15)
                                                                                 : 
                                                                                ((0xeU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_14)
                                                                                 : 
                                                                                ((0xdU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_13)
                                                                                 : 
                                                                                ((0xcU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_12)
                                                                                 : 
                                                                                ((0xbU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_11)
                                                                                 : 
                                                                                ((0xaU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_10)
                                                                                 : 
                                                                                ((9U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_9)
                                                                                 : 
                                                                                ((8U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_8)
                                                                                 : 
                                                                                ((7U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_7)
                                                                                 : 
                                                                                ((6U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_6)
                                                                                 : 
                                                                                ((5U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_5)
                                                                                 : 
                                                                                ((4U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_4)
                                                                                 : 
                                                                                ((3U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_3)
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_2)
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_1)
                                                                                 : (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_0))))))))))))))))))) 
                                                                 >> 6U))));
    vlSelf->RopeUnit__DOT__pairs_4_io_angle_idx = (0x3ffU 
                                                   & (IData)(
                                                             (0x3ffffffffffULL 
                                                              & ((RopeUnit__DOT____VdfgTmp_hb727c52c__0 
                                                                  * (QData)((IData)(
                                                                                ((0xfU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_15)
                                                                                 : 
                                                                                ((0xeU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_14)
                                                                                 : 
                                                                                ((0xdU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_13)
                                                                                 : 
                                                                                ((0xcU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_12)
                                                                                 : 
                                                                                ((0xbU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_11)
                                                                                 : 
                                                                                ((0xaU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_10)
                                                                                 : 
                                                                                ((9U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_9)
                                                                                 : 
                                                                                ((8U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_8)
                                                                                 : 
                                                                                ((7U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_7)
                                                                                 : 
                                                                                ((6U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_6)
                                                                                 : 
                                                                                ((5U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_5)
                                                                                 : 
                                                                                ((4U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_4)
                                                                                 : 
                                                                                ((3U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_3)
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_2)
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_1)
                                                                                 : (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_0))))))))))))))))))) 
                                                                 >> 6U))));
    vlSelf->RopeUnit__DOT__pairs_5_io_angle_idx = (0x3ffU 
                                                   & (IData)(
                                                             (0x3ffffffffffULL 
                                                              & ((RopeUnit__DOT____VdfgTmp_hb727c52c__0 
                                                                  * (QData)((IData)(
                                                                                ((0xfU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_15)
                                                                                 : 
                                                                                ((0xeU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_14)
                                                                                 : 
                                                                                ((0xdU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_13)
                                                                                 : 
                                                                                ((0xcU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_12)
                                                                                 : 
                                                                                ((0xbU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_11)
                                                                                 : 
                                                                                ((0xaU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_10)
                                                                                 : 
                                                                                ((9U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_9)
                                                                                 : 
                                                                                ((8U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_8)
                                                                                 : 
                                                                                ((7U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_7)
                                                                                 : 
                                                                                ((6U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_6)
                                                                                 : 
                                                                                ((5U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_5)
                                                                                 : 
                                                                                ((4U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_4)
                                                                                 : 
                                                                                ((3U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_3)
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_2)
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_1)
                                                                                 : (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_0))))))))))))))))))) 
                                                                 >> 6U))));
    vlSelf->RopeUnit__DOT__pairs_6_io_angle_idx = (0x3ffU 
                                                   & (IData)(
                                                             (0x3ffffffffffULL 
                                                              & ((RopeUnit__DOT____VdfgTmp_hb727c52c__0 
                                                                  * (QData)((IData)(
                                                                                ((0xfU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_15)
                                                                                 : 
                                                                                ((0xeU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_14)
                                                                                 : 
                                                                                ((0xdU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_13)
                                                                                 : 
                                                                                ((0xcU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_12)
                                                                                 : 
                                                                                ((0xbU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_11)
                                                                                 : 
                                                                                ((0xaU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_10)
                                                                                 : 
                                                                                ((9U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_9)
                                                                                 : 
                                                                                ((8U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_8)
                                                                                 : 
                                                                                ((7U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_7)
                                                                                 : 
                                                                                ((6U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_6)
                                                                                 : 
                                                                                ((5U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_5)
                                                                                 : 
                                                                                ((4U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_4)
                                                                                 : 
                                                                                ((3U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_3)
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_2)
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_1)
                                                                                 : (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_0))))))))))))))))))) 
                                                                 >> 6U))));
    vlSelf->RopeUnit__DOT__pairs_7_io_angle_idx = (0x3ffU 
                                                   & (IData)(
                                                             (0x3ffffffffffULL 
                                                              & ((RopeUnit__DOT____VdfgTmp_hb727c52c__0 
                                                                  * (QData)((IData)(
                                                                                ((0xfU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_15)
                                                                                 : 
                                                                                ((0xeU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_14)
                                                                                 : 
                                                                                ((0xdU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_13)
                                                                                 : 
                                                                                ((0xcU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_12)
                                                                                 : 
                                                                                ((0xbU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_11)
                                                                                 : 
                                                                                ((0xaU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_10)
                                                                                 : 
                                                                                ((9U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_9)
                                                                                 : 
                                                                                ((8U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_8)
                                                                                 : 
                                                                                ((7U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_7)
                                                                                 : 
                                                                                ((6U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_6)
                                                                                 : 
                                                                                ((5U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_5)
                                                                                 : 
                                                                                ((4U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_4)
                                                                                 : 
                                                                                ((3U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_3)
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_2)
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_1)
                                                                                 : (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_0))))))))))))))))))) 
                                                                 >> 6U))));
}

VL_INLINE_OPT void VRopeUnit___024root___ico_sequent__TOP__1(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___ico_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->io_rope_en) {
        vlSelf->io_out_valid_0 = vlSymsp->TOP__RopeUnit__DOT__pairs_0.io_out_valid;
        vlSelf->io_out_valid_1 = vlSymsp->TOP__RopeUnit__DOT__pairs_0.io_out_valid;
        vlSelf->io_out_valid_2 = vlSymsp->TOP__RopeUnit__DOT__pairs_1.io_out_valid;
        vlSelf->io_out_valid_3 = vlSymsp->TOP__RopeUnit__DOT__pairs_1.io_out_valid;
        vlSelf->io_out_valid_4 = vlSymsp->TOP__RopeUnit__DOT__pairs_2.io_out_valid;
        vlSelf->io_out_valid_5 = vlSymsp->TOP__RopeUnit__DOT__pairs_2.io_out_valid;
        vlSelf->io_out_valid_6 = vlSymsp->TOP__RopeUnit__DOT__pairs_3.io_out_valid;
        vlSelf->io_out_valid_7 = vlSymsp->TOP__RopeUnit__DOT__pairs_3.io_out_valid;
        vlSelf->io_out_valid_8 = vlSymsp->TOP__RopeUnit__DOT__pairs_4.io_out_valid;
        vlSelf->io_out_valid_9 = vlSymsp->TOP__RopeUnit__DOT__pairs_4.io_out_valid;
        vlSelf->io_out_valid_10 = vlSymsp->TOP__RopeUnit__DOT__pairs_5.io_out_valid;
        vlSelf->io_out_valid_11 = vlSymsp->TOP__RopeUnit__DOT__pairs_5.io_out_valid;
        vlSelf->io_out_valid_12 = vlSymsp->TOP__RopeUnit__DOT__pairs_6.io_out_valid;
        vlSelf->io_out_valid_13 = vlSymsp->TOP__RopeUnit__DOT__pairs_6.io_out_valid;
        vlSelf->io_out_valid_14 = vlSymsp->TOP__RopeUnit__DOT__pairs_7.io_out_valid;
        vlSelf->io_out_valid_15 = vlSymsp->TOP__RopeUnit__DOT__pairs_7.io_out_valid;
    } else {
        vlSelf->io_out_valid_0 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSelf->io_in_valid_0));
        vlSelf->io_out_valid_1 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSelf->io_in_valid_1));
        vlSelf->io_out_valid_2 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSelf->io_in_valid_2));
        vlSelf->io_out_valid_3 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSelf->io_in_valid_3));
        vlSelf->io_out_valid_4 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSelf->io_in_valid_4));
        vlSelf->io_out_valid_5 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSelf->io_in_valid_5));
        vlSelf->io_out_valid_6 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSelf->io_in_valid_6));
        vlSelf->io_out_valid_7 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSelf->io_in_valid_7));
        vlSelf->io_out_valid_8 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSelf->io_in_valid_8));
        vlSelf->io_out_valid_9 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSelf->io_in_valid_9));
        vlSelf->io_out_valid_10 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSelf->io_in_valid_10));
        vlSelf->io_out_valid_11 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSelf->io_in_valid_11));
        vlSelf->io_out_valid_12 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSelf->io_in_valid_12));
        vlSelf->io_out_valid_13 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSelf->io_in_valid_13));
        vlSelf->io_out_valid_14 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSelf->io_in_valid_14));
        vlSelf->io_out_valid_15 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSelf->io_in_valid_15));
    }
}

void VRopeUnit_RopePairCore___ico_sequent__TOP__RopeUnit__DOT__pairs_0__0(VRopeUnit_RopePairCore* vlSelf);

void VRopeUnit___024root___eval_ico(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VRopeUnit___024root___ico_sequent__TOP__0(vlSelf);
        VRopeUnit_RopePairCore___ico_sequent__TOP__RopeUnit__DOT__pairs_0__0((&vlSymsp->TOP__RopeUnit__DOT__pairs_0));
        VRopeUnit_RopePairCore___ico_sequent__TOP__RopeUnit__DOT__pairs_0__0((&vlSymsp->TOP__RopeUnit__DOT__pairs_1));
        VRopeUnit_RopePairCore___ico_sequent__TOP__RopeUnit__DOT__pairs_0__0((&vlSymsp->TOP__RopeUnit__DOT__pairs_2));
        VRopeUnit_RopePairCore___ico_sequent__TOP__RopeUnit__DOT__pairs_0__0((&vlSymsp->TOP__RopeUnit__DOT__pairs_3));
        VRopeUnit_RopePairCore___ico_sequent__TOP__RopeUnit__DOT__pairs_0__0((&vlSymsp->TOP__RopeUnit__DOT__pairs_4));
        VRopeUnit_RopePairCore___ico_sequent__TOP__RopeUnit__DOT__pairs_0__0((&vlSymsp->TOP__RopeUnit__DOT__pairs_5));
        VRopeUnit_RopePairCore___ico_sequent__TOP__RopeUnit__DOT__pairs_0__0((&vlSymsp->TOP__RopeUnit__DOT__pairs_6));
        VRopeUnit_RopePairCore___ico_sequent__TOP__RopeUnit__DOT__pairs_0__0((&vlSymsp->TOP__RopeUnit__DOT__pairs_7));
        VRopeUnit___024root___ico_sequent__TOP__1(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRopeUnit___024root___dump_triggers__act(VRopeUnit___024root* vlSelf);
#endif  // VL_DEBUG

void VRopeUnit___024root___eval_triggers__act(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))));
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRopeUnit___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VRopeUnit___024root___nba_sequent__TOP__0(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__RopeUnit__DOT__freqHalf;
    __Vdly__RopeUnit__DOT__freqHalf = 0;
    // Body
    __Vdly__RopeUnit__DOT__freqHalf = vlSelf->RopeUnit__DOT__freqHalf;
    if (vlSelf->io_rope_en) {
        if (vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__holdValid) {
            vlSelf->io_out_vec_0 = vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__holdEven;
            vlSelf->io_out_vec_1 = vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__holdOdd;
        } else {
            vlSelf->io_out_vec_0 = vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__rawEven;
            vlSelf->io_out_vec_1 = vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__rawOdd;
        }
        vlSelf->io_out_valid_0 = vlSymsp->TOP__RopeUnit__DOT__pairs_0.io_out_valid;
        vlSelf->io_out_valid_1 = vlSymsp->TOP__RopeUnit__DOT__pairs_0.io_out_valid;
        if (vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__holdValid) {
            vlSelf->io_out_vec_2 = vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__holdEven;
            vlSelf->io_out_vec_3 = vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__holdOdd;
        } else {
            vlSelf->io_out_vec_2 = vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__rawEven;
            vlSelf->io_out_vec_3 = vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__rawOdd;
        }
        vlSelf->io_out_valid_2 = vlSymsp->TOP__RopeUnit__DOT__pairs_1.io_out_valid;
        vlSelf->io_out_valid_3 = vlSymsp->TOP__RopeUnit__DOT__pairs_1.io_out_valid;
        if (vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__holdValid) {
            vlSelf->io_out_vec_4 = vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__holdEven;
            vlSelf->io_out_vec_5 = vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__holdOdd;
        } else {
            vlSelf->io_out_vec_4 = vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__rawEven;
            vlSelf->io_out_vec_5 = vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__rawOdd;
        }
        vlSelf->io_out_valid_4 = vlSymsp->TOP__RopeUnit__DOT__pairs_2.io_out_valid;
        vlSelf->io_out_valid_5 = vlSymsp->TOP__RopeUnit__DOT__pairs_2.io_out_valid;
        if (vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__holdValid) {
            vlSelf->io_out_vec_6 = vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__holdEven;
            vlSelf->io_out_vec_7 = vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__holdOdd;
        } else {
            vlSelf->io_out_vec_6 = vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__rawEven;
            vlSelf->io_out_vec_7 = vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__rawOdd;
        }
        vlSelf->io_out_valid_6 = vlSymsp->TOP__RopeUnit__DOT__pairs_3.io_out_valid;
        vlSelf->io_out_valid_7 = vlSymsp->TOP__RopeUnit__DOT__pairs_3.io_out_valid;
        if (vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__holdValid) {
            vlSelf->io_out_vec_8 = vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__holdEven;
            vlSelf->io_out_vec_9 = vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__holdOdd;
        } else {
            vlSelf->io_out_vec_8 = vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__rawEven;
            vlSelf->io_out_vec_9 = vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__rawOdd;
        }
        vlSelf->io_out_valid_8 = vlSymsp->TOP__RopeUnit__DOT__pairs_4.io_out_valid;
        vlSelf->io_out_valid_9 = vlSymsp->TOP__RopeUnit__DOT__pairs_4.io_out_valid;
        if (vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__holdValid) {
            vlSelf->io_out_vec_10 = vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__holdEven;
            vlSelf->io_out_vec_11 = vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__holdOdd;
        } else {
            vlSelf->io_out_vec_10 = vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__rawEven;
            vlSelf->io_out_vec_11 = vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__rawOdd;
        }
        vlSelf->io_out_valid_10 = vlSymsp->TOP__RopeUnit__DOT__pairs_5.io_out_valid;
        vlSelf->io_out_valid_11 = vlSymsp->TOP__RopeUnit__DOT__pairs_5.io_out_valid;
        if (vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__holdValid) {
            vlSelf->io_out_vec_12 = vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__holdEven;
            vlSelf->io_out_vec_13 = vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__holdOdd;
        } else {
            vlSelf->io_out_vec_12 = vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__rawEven;
            vlSelf->io_out_vec_13 = vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__rawOdd;
        }
        vlSelf->io_out_valid_12 = vlSymsp->TOP__RopeUnit__DOT__pairs_6.io_out_valid;
        vlSelf->io_out_valid_13 = vlSymsp->TOP__RopeUnit__DOT__pairs_6.io_out_valid;
        if (vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__holdValid) {
            vlSelf->io_out_vec_14 = vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__holdEven;
            vlSelf->io_out_vec_15 = vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__holdOdd;
        } else {
            vlSelf->io_out_vec_14 = vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__rawEven;
            vlSelf->io_out_vec_15 = vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__rawOdd;
        }
        vlSelf->io_out_valid_14 = vlSymsp->TOP__RopeUnit__DOT__pairs_7.io_out_valid;
        vlSelf->io_out_valid_15 = vlSymsp->TOP__RopeUnit__DOT__pairs_7.io_out_valid;
    } else {
        vlSelf->io_out_vec_0 = vlSelf->io_in_vec_0;
        vlSelf->io_out_vec_1 = vlSelf->io_in_vec_1;
        vlSelf->io_out_valid_0 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSelf->io_in_valid_0));
        vlSelf->io_out_valid_1 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSelf->io_in_valid_1));
        vlSelf->io_out_vec_2 = vlSelf->io_in_vec_2;
        vlSelf->io_out_vec_3 = vlSelf->io_in_vec_3;
        vlSelf->io_out_valid_2 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSelf->io_in_valid_2));
        vlSelf->io_out_valid_3 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSelf->io_in_valid_3));
        vlSelf->io_out_vec_4 = vlSelf->io_in_vec_4;
        vlSelf->io_out_vec_5 = vlSelf->io_in_vec_5;
        vlSelf->io_out_valid_4 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSelf->io_in_valid_4));
        vlSelf->io_out_valid_5 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSelf->io_in_valid_5));
        vlSelf->io_out_vec_6 = vlSelf->io_in_vec_6;
        vlSelf->io_out_vec_7 = vlSelf->io_in_vec_7;
        vlSelf->io_out_valid_6 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSelf->io_in_valid_6));
        vlSelf->io_out_valid_7 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSelf->io_in_valid_7));
        vlSelf->io_out_vec_8 = vlSelf->io_in_vec_8;
        vlSelf->io_out_vec_9 = vlSelf->io_in_vec_9;
        vlSelf->io_out_valid_8 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSelf->io_in_valid_8));
        vlSelf->io_out_valid_9 = ((~ (IData)(vlSelf->io_stall)) 
                                  & (IData)(vlSelf->io_in_valid_9));
        vlSelf->io_out_vec_10 = vlSelf->io_in_vec_10;
        vlSelf->io_out_vec_11 = vlSelf->io_in_vec_11;
        vlSelf->io_out_valid_10 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSelf->io_in_valid_10));
        vlSelf->io_out_valid_11 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSelf->io_in_valid_11));
        vlSelf->io_out_vec_12 = vlSelf->io_in_vec_12;
        vlSelf->io_out_vec_13 = vlSelf->io_in_vec_13;
        vlSelf->io_out_valid_12 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSelf->io_in_valid_12));
        vlSelf->io_out_valid_13 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSelf->io_in_valid_13));
        vlSelf->io_out_vec_14 = vlSelf->io_in_vec_14;
        vlSelf->io_out_vec_15 = vlSelf->io_in_vec_15;
        vlSelf->io_out_valid_14 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSelf->io_in_valid_14));
        vlSelf->io_out_valid_15 = ((~ (IData)(vlSelf->io_stall)) 
                                   & (IData)(vlSelf->io_in_valid_15));
    }
    vlSelf->io_lut_ready = (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__cosLut__DOT__is_programmed) 
                             & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__sinLut__DOT__is_programmed)) 
                            & (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__cosLut__DOT__is_programmed) 
                                & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__sinLut__DOT__is_programmed)) 
                               & (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__cosLut__DOT__is_programmed) 
                                   & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__sinLut__DOT__is_programmed)) 
                                  & (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__cosLut__DOT__is_programmed) 
                                      & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__sinLut__DOT__is_programmed)) 
                                     & (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__cosLut__DOT__is_programmed) 
                                         & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__sinLut__DOT__is_programmed)) 
                                        & (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__cosLut__DOT__is_programmed) 
                                            & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__sinLut__DOT__is_programmed)) 
                                           & (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__cosLut__DOT__is_programmed) 
                                               & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__sinLut__DOT__is_programmed)) 
                                              & ((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__cosLut__DOT__is_programmed) 
                                                 & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__sinLut__DOT__is_programmed)))))))));
    vlSelf->RopeUnit__DOT__primed = ((1U & (~ (IData)(vlSelf->reset))) 
                                     && ((1U & (~ ((IData)(vlSelf->io_soft_reset) 
                                                   | (~ (IData)(vlSelf->io_rope_en))))) 
                                         && (IData)(vlSelf->RopeUnit__DOT___GEN_322)));
    vlSelf->RopeUnit__DOT__freqReqOutstanding = ((1U 
                                                  & (~ (IData)(vlSelf->reset))) 
                                                 && ((1U 
                                                      & (~ (IData)(vlSelf->io_soft_reset))) 
                                                     && ((1U 
                                                          & (~ (IData)(vlSelf->io_freq_block_valid))) 
                                                         && (IData)(vlSelf->RopeUnit__DOT___GEN_17))));
    vlSelf->RopeUnit__DOT__shadowFreqValid = ((1U & 
                                               (~ (IData)(vlSelf->reset))) 
                                              && ((1U 
                                                   & (~ (IData)(vlSelf->io_soft_reset))) 
                                                  && (1U 
                                                      & ((IData)(vlSelf->io_freq_block_valid)
                                                          ? 
                                                         ((IData)(vlSelf->RopeUnit__DOT__activeFreqValid)
                                                           ? 
                                                          ((~ (IData)(vlSelf->RopeUnit__DOT__completesBlock)) 
                                                           | (IData)(vlSelf->RopeUnit__DOT___GEN_71))
                                                           : (IData)(vlSelf->RopeUnit__DOT___GEN_71))
                                                          : (IData)(vlSelf->RopeUnit__DOT___GEN_71)))));
    if (vlSelf->reset) {
        __Vdly__RopeUnit__DOT__freqHalf = 0U;
        vlSelf->RopeUnit__DOT__activeMValid = 0U;
        vlSelf->RopeUnit__DOT__rowCounter = 0U;
        vlSelf->RopeUnit__DOT__shadowFreqBlock_15 = 0U;
        vlSelf->RopeUnit__DOT__shadowFreqBlock_7 = 0U;
        vlSelf->RopeUnit__DOT__shadowFreqBlock_6 = 0U;
        vlSelf->RopeUnit__DOT__shadowFreqBlock_2 = 0U;
        vlSelf->RopeUnit__DOT__shadowFreqBlock_13 = 0U;
        vlSelf->RopeUnit__DOT__shadowFreqBlock_10 = 0U;
        vlSelf->RopeUnit__DOT__shadowFreqBlock_0 = 0U;
        vlSelf->RopeUnit__DOT__shadowFreqBlock_9 = 0U;
        vlSelf->RopeUnit__DOT__shadowFreqBlock_14 = 0U;
        vlSelf->RopeUnit__DOT__shadowFreqBlock_1 = 0U;
        vlSelf->RopeUnit__DOT__shadowFreqBlock_3 = 0U;
        vlSelf->RopeUnit__DOT__shadowFreqBlock_4 = 0U;
        vlSelf->RopeUnit__DOT__shadowFreqBlock_5 = 0U;
        vlSelf->RopeUnit__DOT__shadowFreqBlock_8 = 0U;
        vlSelf->RopeUnit__DOT__shadowFreqBlock_11 = 0U;
        vlSelf->RopeUnit__DOT__shadowFreqBlock_12 = 0U;
        vlSelf->RopeUnit__DOT__activeFreqBlock_14 = 0U;
        vlSelf->RopeUnit__DOT__activeFreqBlock_13 = 0U;
        vlSelf->RopeUnit__DOT__activeFreqBlock_12 = 0U;
        vlSelf->RopeUnit__DOT__activeFreqBlock_11 = 0U;
        vlSelf->RopeUnit__DOT__activeFreqBlock_10 = 0U;
        vlSelf->RopeUnit__DOT__activeFreqBlock_9 = 0U;
        vlSelf->RopeUnit__DOT__activeFreqBlock_8 = 0U;
        vlSelf->RopeUnit__DOT__activeFreqBlock_6 = 0U;
        vlSelf->RopeUnit__DOT__activeFreqBlock_5 = 0U;
        vlSelf->RopeUnit__DOT__activeFreqBlock_15 = 0U;
        vlSelf->RopeUnit__DOT__activeFreqBlock_4 = 0U;
        vlSelf->RopeUnit__DOT__activeFreqBlock_0 = 0U;
        vlSelf->RopeUnit__DOT__activeFreqBlock_2 = 0U;
        vlSelf->RopeUnit__DOT__activeFreqBlock_7 = 0U;
        vlSelf->RopeUnit__DOT__activeFreqBlock_1 = 0U;
        vlSelf->RopeUnit__DOT__activeFreqBlock_3 = 0U;
        vlSelf->RopeUnit__DOT__activeMBase = 0U;
        vlSelf->RopeUnit__DOT__shadowMBase = 0U;
        vlSelf->RopeUnit__DOT__activeFreqValid = 0U;
    } else {
        if ((1U & ((IData)(vlSelf->io_soft_reset) | 
                   ((~ (IData)(vlSelf->io_rope_en)) 
                    & (~ (IData)(vlSelf->io_stall)))))) {
            vlSelf->RopeUnit__DOT__rowCounter = 0U;
        } else if (vlSelf->RopeUnit__DOT__inputFire) {
            vlSelf->RopeUnit__DOT__rowCounter = ((IData)(vlSelf->RopeUnit__DOT__tileEnd)
                                                  ? 0U
                                                  : (IData)(vlSelf->RopeUnit__DOT___rowCounter_T_1));
        }
        if ((1U & (~ (IData)(vlSelf->io_soft_reset)))) {
            if (vlSelf->io_freq_block_valid) {
                if (vlSelf->RopeUnit__DOT__activeFreqValid) {
                    vlSelf->RopeUnit__DOT__shadowFreqBlock_15 
                        = vlSelf->RopeUnit__DOT___GEN_87;
                    vlSelf->RopeUnit__DOT__shadowFreqBlock_7 
                        = vlSelf->RopeUnit__DOT___GEN_79;
                    vlSelf->RopeUnit__DOT__shadowFreqBlock_6 
                        = vlSelf->RopeUnit__DOT___GEN_78;
                    vlSelf->RopeUnit__DOT__shadowFreqBlock_2 
                        = vlSelf->RopeUnit__DOT___GEN_74;
                    vlSelf->RopeUnit__DOT__shadowFreqBlock_13 
                        = vlSelf->RopeUnit__DOT___GEN_85;
                    vlSelf->RopeUnit__DOT__shadowFreqBlock_10 
                        = vlSelf->RopeUnit__DOT___GEN_82;
                    vlSelf->RopeUnit__DOT__shadowFreqBlock_0 
                        = vlSelf->RopeUnit__DOT___GEN_72;
                    vlSelf->RopeUnit__DOT__shadowFreqBlock_9 
                        = vlSelf->RopeUnit__DOT___GEN_81;
                    vlSelf->RopeUnit__DOT__shadowFreqBlock_14 
                        = vlSelf->RopeUnit__DOT___GEN_86;
                    vlSelf->RopeUnit__DOT__shadowFreqBlock_1 
                        = vlSelf->RopeUnit__DOT___GEN_73;
                    vlSelf->RopeUnit__DOT__shadowFreqBlock_3 
                        = vlSelf->RopeUnit__DOT___GEN_75;
                    vlSelf->RopeUnit__DOT__shadowFreqBlock_4 
                        = vlSelf->RopeUnit__DOT___GEN_76;
                    vlSelf->RopeUnit__DOT__shadowFreqBlock_5 
                        = vlSelf->RopeUnit__DOT___GEN_77;
                    vlSelf->RopeUnit__DOT__shadowFreqBlock_8 
                        = vlSelf->RopeUnit__DOT___GEN_80;
                    vlSelf->RopeUnit__DOT__shadowFreqBlock_11 
                        = vlSelf->RopeUnit__DOT___GEN_83;
                    vlSelf->RopeUnit__DOT__shadowFreqBlock_12 
                        = vlSelf->RopeUnit__DOT___GEN_84;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_14 
                        = vlSelf->RopeUnit__DOT___GEN_69;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_13 
                        = vlSelf->RopeUnit__DOT___GEN_68;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_12 
                        = vlSelf->RopeUnit__DOT___GEN_67;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_11 
                        = vlSelf->RopeUnit__DOT___GEN_66;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_10 
                        = vlSelf->RopeUnit__DOT___GEN_65;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_9 
                        = vlSelf->RopeUnit__DOT___GEN_64;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_8 
                        = vlSelf->RopeUnit__DOT___GEN_63;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_6 
                        = vlSelf->RopeUnit__DOT___GEN_61;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_5 
                        = vlSelf->RopeUnit__DOT___GEN_60;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_15 
                        = vlSelf->RopeUnit__DOT___GEN_70;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_4 
                        = vlSelf->RopeUnit__DOT___GEN_59;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_0 
                        = vlSelf->RopeUnit__DOT___GEN_55;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_2 
                        = vlSelf->RopeUnit__DOT___GEN_57;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_7 
                        = vlSelf->RopeUnit__DOT___GEN_62;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_1 
                        = vlSelf->RopeUnit__DOT___GEN_56;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_3 
                        = vlSelf->RopeUnit__DOT___GEN_58;
                } else {
                    vlSelf->RopeUnit__DOT__activeFreqBlock_14 
                        = vlSelf->io_freq_block_in_14;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_13 
                        = vlSelf->io_freq_block_in_13;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_12 
                        = vlSelf->io_freq_block_in_12;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_11 
                        = vlSelf->io_freq_block_in_11;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_10 
                        = vlSelf->io_freq_block_in_10;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_9 
                        = vlSelf->io_freq_block_in_9;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_8 
                        = vlSelf->io_freq_block_in_8;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_6 
                        = vlSelf->io_freq_block_in_6;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_5 
                        = vlSelf->io_freq_block_in_5;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_15 
                        = vlSelf->io_freq_block_in_15;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_4 
                        = vlSelf->io_freq_block_in_4;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_0 
                        = vlSelf->io_freq_block_in_0;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_2 
                        = vlSelf->io_freq_block_in_2;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_7 
                        = vlSelf->io_freq_block_in_7;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_1 
                        = vlSelf->io_freq_block_in_1;
                    vlSelf->RopeUnit__DOT__activeFreqBlock_3 
                        = vlSelf->io_freq_block_in_3;
                }
            } else {
                vlSelf->RopeUnit__DOT__activeFreqBlock_14 
                    = vlSelf->RopeUnit__DOT___GEN_69;
                vlSelf->RopeUnit__DOT__activeFreqBlock_13 
                    = vlSelf->RopeUnit__DOT___GEN_68;
                vlSelf->RopeUnit__DOT__activeFreqBlock_12 
                    = vlSelf->RopeUnit__DOT___GEN_67;
                vlSelf->RopeUnit__DOT__activeFreqBlock_11 
                    = vlSelf->RopeUnit__DOT___GEN_66;
                vlSelf->RopeUnit__DOT__activeFreqBlock_10 
                    = vlSelf->RopeUnit__DOT___GEN_65;
                vlSelf->RopeUnit__DOT__activeFreqBlock_9 
                    = vlSelf->RopeUnit__DOT___GEN_64;
                vlSelf->RopeUnit__DOT__activeFreqBlock_8 
                    = vlSelf->RopeUnit__DOT___GEN_63;
                vlSelf->RopeUnit__DOT__activeFreqBlock_6 
                    = vlSelf->RopeUnit__DOT___GEN_61;
                vlSelf->RopeUnit__DOT__activeFreqBlock_5 
                    = vlSelf->RopeUnit__DOT___GEN_60;
                vlSelf->RopeUnit__DOT__activeFreqBlock_15 
                    = vlSelf->RopeUnit__DOT___GEN_70;
                vlSelf->RopeUnit__DOT__activeFreqBlock_4 
                    = vlSelf->RopeUnit__DOT___GEN_59;
                vlSelf->RopeUnit__DOT__activeFreqBlock_0 
                    = vlSelf->RopeUnit__DOT___GEN_55;
                vlSelf->RopeUnit__DOT__activeFreqBlock_2 
                    = vlSelf->RopeUnit__DOT___GEN_57;
                vlSelf->RopeUnit__DOT__activeFreqBlock_7 
                    = vlSelf->RopeUnit__DOT___GEN_62;
                vlSelf->RopeUnit__DOT__activeFreqBlock_1 
                    = vlSelf->RopeUnit__DOT___GEN_56;
                vlSelf->RopeUnit__DOT__activeFreqBlock_3 
                    = vlSelf->RopeUnit__DOT___GEN_58;
            }
        }
        if (vlSelf->io_soft_reset) {
            __Vdly__RopeUnit__DOT__freqHalf = 0U;
            vlSelf->RopeUnit__DOT__activeMValid = 0U;
            vlSelf->RopeUnit__DOT__activeMBase = 0U;
            vlSelf->RopeUnit__DOT__shadowMBase = 0U;
            vlSelf->RopeUnit__DOT__activeFreqValid = 0U;
        } else {
            if (vlSelf->RopeUnit__DOT__inputFire) {
                __Vdly__RopeUnit__DOT__freqHalf = (1U 
                                                   & (~ (IData)(vlSelf->RopeUnit__DOT__freqHalf)));
            }
            if (((IData)(vlSelf->RopeUnit__DOT__inputFire) 
                 & (IData)(vlSelf->io_row_change_update))) {
                vlSelf->RopeUnit__DOT__activeMValid 
                    = vlSelf->RopeUnit__DOT___GEN_6;
                if (vlSelf->RopeUnit__DOT__shadowMValid) {
                    vlSelf->RopeUnit__DOT__activeMBase 
                        = vlSelf->RopeUnit__DOT__shadowMBase;
                    vlSelf->RopeUnit__DOT__shadowMBase 
                        = vlSelf->RopeUnit__DOT___shadowMBase_T_1;
                } else {
                    vlSelf->RopeUnit__DOT__shadowMBase 
                        = vlSelf->RopeUnit__DOT___GEN_3;
                }
            } else {
                vlSelf->RopeUnit__DOT__shadowMBase 
                    = vlSelf->RopeUnit__DOT___GEN_3;
            }
            if (vlSelf->io_freq_block_valid) {
                vlSelf->RopeUnit__DOT__activeFreqValid 
                    = vlSelf->RopeUnit__DOT___GEN_105;
            } else if (vlSelf->RopeUnit__DOT__inputFire) {
                vlSelf->RopeUnit__DOT__activeFreqValid 
                    = vlSelf->RopeUnit__DOT___GEN_35;
            }
        }
    }
    vlSelf->RopeUnit__DOT__freqHalf = __Vdly__RopeUnit__DOT__freqHalf;
    vlSelf->io_prefetch_ready = (1U & ((~ (IData)(vlSelf->io_rope_en)) 
                                       | ((IData)(vlSelf->RopeUnit__DOT__primed) 
                                          & (IData)(vlSelf->io_lut_ready))));
    vlSelf->RopeUnit__DOT___rowCounter_T_1 = (0xfU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->RopeUnit__DOT__rowCounter)));
    vlSelf->RopeUnit__DOT__nextBlockAvailable = ((IData)(vlSelf->RopeUnit__DOT__shadowFreqValid) 
                                                 | (IData)(vlSelf->io_freq_block_valid));
    vlSelf->RopeUnit__DOT___shadowMBase_T_1 = ((IData)(0x10U) 
                                               + vlSelf->RopeUnit__DOT__shadowMBase);
    vlSelf->RopeUnit__DOT___GEN_3 = ((IData)(vlSelf->io_position_init)
                                      ? vlSelf->io_base_m_in
                                      : vlSelf->RopeUnit__DOT__shadowMBase);
    vlSelf->RopeUnit__DOT__shadowMValid = ((1U & (~ (IData)(vlSelf->reset))) 
                                           && ((1U 
                                                & (~ (IData)(vlSelf->io_soft_reset))) 
                                               && (((IData)(vlSelf->RopeUnit__DOT__inputFire) 
                                                    & (IData)(vlSelf->io_row_change_update))
                                                    ? (IData)(vlSelf->RopeUnit__DOT___GEN_8)
                                                    : (IData)(vlSelf->RopeUnit__DOT___GEN_4))));
    vlSelf->RopeUnit__DOT___GEN_35 = ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                       ? (IData)(vlSelf->RopeUnit__DOT__nextBlockAvailable)
                                       : (IData)(vlSelf->RopeUnit__DOT__activeFreqValid));
    vlSelf->RopeUnit__DOT___GEN_6 = ((IData)(vlSelf->RopeUnit__DOT__activeMValid) 
                                     | (IData)(vlSelf->RopeUnit__DOT__shadowMValid));
    vlSelf->RopeUnit__DOT___GEN_322 = (((IData)(vlSelf->RopeUnit__DOT__activeFreqValid) 
                                        & (IData)(vlSelf->RopeUnit__DOT__shadowMValid)) 
                                       | (IData)(vlSelf->RopeUnit__DOT__primed));
    vlSelf->RopeUnit__DOT___GEN_4 = ((IData)(vlSelf->RopeUnit__DOT__shadowMValid) 
                                     | (IData)(vlSelf->io_position_init));
    vlSelf->RopeUnit__DOT___GEN_8 = ((IData)(vlSelf->RopeUnit__DOT__shadowMValid) 
                                     | (IData)(vlSelf->RopeUnit__DOT___GEN_4));
}

VL_INLINE_OPT void VRopeUnit___024root___nba_sequent__TOP__1(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___nba_sequent__TOP__1\n"); );
    // Init
    QData/*47:0*/ RopeUnit__DOT____VdfgTmp_hb727c52c__0;
    RopeUnit__DOT____VdfgTmp_hb727c52c__0 = 0;
    // Body
    if (vlSelf->RopeUnit__DOT__inputFire) {
        vlSelf->RopeUnit__DOT__tileEnd = (0xfU == (IData)(vlSelf->RopeUnit__DOT__rowCounter));
        vlSelf->RopeUnit__DOT___GEN_71 = ((~ (IData)(vlSelf->RopeUnit__DOT__freqHalf)) 
                                          & (IData)(vlSelf->RopeUnit__DOT__shadowFreqValid));
        if (vlSelf->RopeUnit__DOT__freqHalf) {
            if (vlSelf->RopeUnit__DOT__nextBlockAvailable) {
                if (vlSelf->io_freq_block_valid) {
                    vlSelf->RopeUnit__DOT___GEN_55 
                        = vlSelf->io_freq_block_in_0;
                    vlSelf->RopeUnit__DOT___GEN_56 
                        = vlSelf->io_freq_block_in_1;
                    vlSelf->RopeUnit__DOT___GEN_57 
                        = vlSelf->io_freq_block_in_2;
                    vlSelf->RopeUnit__DOT___GEN_58 
                        = vlSelf->io_freq_block_in_3;
                    vlSelf->RopeUnit__DOT___GEN_59 
                        = vlSelf->io_freq_block_in_4;
                    vlSelf->RopeUnit__DOT___GEN_60 
                        = vlSelf->io_freq_block_in_5;
                    vlSelf->RopeUnit__DOT___GEN_61 
                        = vlSelf->io_freq_block_in_6;
                    vlSelf->RopeUnit__DOT___GEN_62 
                        = vlSelf->io_freq_block_in_7;
                    vlSelf->RopeUnit__DOT___GEN_63 
                        = vlSelf->io_freq_block_in_8;
                    vlSelf->RopeUnit__DOT___GEN_64 
                        = vlSelf->io_freq_block_in_9;
                    vlSelf->RopeUnit__DOT___GEN_65 
                        = vlSelf->io_freq_block_in_10;
                    vlSelf->RopeUnit__DOT___GEN_66 
                        = vlSelf->io_freq_block_in_11;
                    vlSelf->RopeUnit__DOT___GEN_67 
                        = vlSelf->io_freq_block_in_12;
                    vlSelf->RopeUnit__DOT___GEN_68 
                        = vlSelf->io_freq_block_in_13;
                    vlSelf->RopeUnit__DOT___GEN_69 
                        = vlSelf->io_freq_block_in_14;
                    vlSelf->RopeUnit__DOT___GEN_70 
                        = vlSelf->io_freq_block_in_15;
                } else {
                    vlSelf->RopeUnit__DOT___GEN_55 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_0;
                    vlSelf->RopeUnit__DOT___GEN_56 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_1;
                    vlSelf->RopeUnit__DOT___GEN_57 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_2;
                    vlSelf->RopeUnit__DOT___GEN_58 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_3;
                    vlSelf->RopeUnit__DOT___GEN_59 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_4;
                    vlSelf->RopeUnit__DOT___GEN_60 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_5;
                    vlSelf->RopeUnit__DOT___GEN_61 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_6;
                    vlSelf->RopeUnit__DOT___GEN_62 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_7;
                    vlSelf->RopeUnit__DOT___GEN_63 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_8;
                    vlSelf->RopeUnit__DOT___GEN_64 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_9;
                    vlSelf->RopeUnit__DOT___GEN_65 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_10;
                    vlSelf->RopeUnit__DOT___GEN_66 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_11;
                    vlSelf->RopeUnit__DOT___GEN_67 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_12;
                    vlSelf->RopeUnit__DOT___GEN_68 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_13;
                    vlSelf->RopeUnit__DOT___GEN_69 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_14;
                    vlSelf->RopeUnit__DOT___GEN_70 
                        = vlSelf->RopeUnit__DOT__shadowFreqBlock_15;
                }
            } else {
                vlSelf->RopeUnit__DOT___GEN_55 = vlSelf->RopeUnit__DOT__activeFreqBlock_0;
                vlSelf->RopeUnit__DOT___GEN_56 = vlSelf->RopeUnit__DOT__activeFreqBlock_1;
                vlSelf->RopeUnit__DOT___GEN_57 = vlSelf->RopeUnit__DOT__activeFreqBlock_2;
                vlSelf->RopeUnit__DOT___GEN_58 = vlSelf->RopeUnit__DOT__activeFreqBlock_3;
                vlSelf->RopeUnit__DOT___GEN_59 = vlSelf->RopeUnit__DOT__activeFreqBlock_4;
                vlSelf->RopeUnit__DOT___GEN_60 = vlSelf->RopeUnit__DOT__activeFreqBlock_5;
                vlSelf->RopeUnit__DOT___GEN_61 = vlSelf->RopeUnit__DOT__activeFreqBlock_6;
                vlSelf->RopeUnit__DOT___GEN_62 = vlSelf->RopeUnit__DOT__activeFreqBlock_7;
                vlSelf->RopeUnit__DOT___GEN_63 = vlSelf->RopeUnit__DOT__activeFreqBlock_8;
                vlSelf->RopeUnit__DOT___GEN_64 = vlSelf->RopeUnit__DOT__activeFreqBlock_9;
                vlSelf->RopeUnit__DOT___GEN_65 = vlSelf->RopeUnit__DOT__activeFreqBlock_10;
                vlSelf->RopeUnit__DOT___GEN_66 = vlSelf->RopeUnit__DOT__activeFreqBlock_11;
                vlSelf->RopeUnit__DOT___GEN_67 = vlSelf->RopeUnit__DOT__activeFreqBlock_12;
                vlSelf->RopeUnit__DOT___GEN_68 = vlSelf->RopeUnit__DOT__activeFreqBlock_13;
                vlSelf->RopeUnit__DOT___GEN_69 = vlSelf->RopeUnit__DOT__activeFreqBlock_14;
                vlSelf->RopeUnit__DOT___GEN_70 = vlSelf->RopeUnit__DOT__activeFreqBlock_15;
            }
        } else {
            vlSelf->RopeUnit__DOT___GEN_55 = vlSelf->RopeUnit__DOT__activeFreqBlock_0;
            vlSelf->RopeUnit__DOT___GEN_56 = vlSelf->RopeUnit__DOT__activeFreqBlock_1;
            vlSelf->RopeUnit__DOT___GEN_57 = vlSelf->RopeUnit__DOT__activeFreqBlock_2;
            vlSelf->RopeUnit__DOT___GEN_58 = vlSelf->RopeUnit__DOT__activeFreqBlock_3;
            vlSelf->RopeUnit__DOT___GEN_59 = vlSelf->RopeUnit__DOT__activeFreqBlock_4;
            vlSelf->RopeUnit__DOT___GEN_60 = vlSelf->RopeUnit__DOT__activeFreqBlock_5;
            vlSelf->RopeUnit__DOT___GEN_61 = vlSelf->RopeUnit__DOT__activeFreqBlock_6;
            vlSelf->RopeUnit__DOT___GEN_62 = vlSelf->RopeUnit__DOT__activeFreqBlock_7;
            vlSelf->RopeUnit__DOT___GEN_63 = vlSelf->RopeUnit__DOT__activeFreqBlock_8;
            vlSelf->RopeUnit__DOT___GEN_64 = vlSelf->RopeUnit__DOT__activeFreqBlock_9;
            vlSelf->RopeUnit__DOT___GEN_65 = vlSelf->RopeUnit__DOT__activeFreqBlock_10;
            vlSelf->RopeUnit__DOT___GEN_66 = vlSelf->RopeUnit__DOT__activeFreqBlock_11;
            vlSelf->RopeUnit__DOT___GEN_67 = vlSelf->RopeUnit__DOT__activeFreqBlock_12;
            vlSelf->RopeUnit__DOT___GEN_68 = vlSelf->RopeUnit__DOT__activeFreqBlock_13;
            vlSelf->RopeUnit__DOT___GEN_69 = vlSelf->RopeUnit__DOT__activeFreqBlock_14;
            vlSelf->RopeUnit__DOT___GEN_70 = vlSelf->RopeUnit__DOT__activeFreqBlock_15;
        }
    } else {
        vlSelf->RopeUnit__DOT__tileEnd = 0U;
        vlSelf->RopeUnit__DOT___GEN_71 = vlSelf->RopeUnit__DOT__shadowFreqValid;
        vlSelf->RopeUnit__DOT___GEN_55 = vlSelf->RopeUnit__DOT__activeFreqBlock_0;
        vlSelf->RopeUnit__DOT___GEN_56 = vlSelf->RopeUnit__DOT__activeFreqBlock_1;
        vlSelf->RopeUnit__DOT___GEN_57 = vlSelf->RopeUnit__DOT__activeFreqBlock_2;
        vlSelf->RopeUnit__DOT___GEN_58 = vlSelf->RopeUnit__DOT__activeFreqBlock_3;
        vlSelf->RopeUnit__DOT___GEN_59 = vlSelf->RopeUnit__DOT__activeFreqBlock_4;
        vlSelf->RopeUnit__DOT___GEN_60 = vlSelf->RopeUnit__DOT__activeFreqBlock_5;
        vlSelf->RopeUnit__DOT___GEN_61 = vlSelf->RopeUnit__DOT__activeFreqBlock_6;
        vlSelf->RopeUnit__DOT___GEN_62 = vlSelf->RopeUnit__DOT__activeFreqBlock_7;
        vlSelf->RopeUnit__DOT___GEN_63 = vlSelf->RopeUnit__DOT__activeFreqBlock_8;
        vlSelf->RopeUnit__DOT___GEN_64 = vlSelf->RopeUnit__DOT__activeFreqBlock_9;
        vlSelf->RopeUnit__DOT___GEN_65 = vlSelf->RopeUnit__DOT__activeFreqBlock_10;
        vlSelf->RopeUnit__DOT___GEN_66 = vlSelf->RopeUnit__DOT__activeFreqBlock_11;
        vlSelf->RopeUnit__DOT___GEN_67 = vlSelf->RopeUnit__DOT__activeFreqBlock_12;
        vlSelf->RopeUnit__DOT___GEN_68 = vlSelf->RopeUnit__DOT__activeFreqBlock_13;
        vlSelf->RopeUnit__DOT___GEN_69 = vlSelf->RopeUnit__DOT__activeFreqBlock_14;
        vlSelf->RopeUnit__DOT___GEN_70 = vlSelf->RopeUnit__DOT__activeFreqBlock_15;
    }
    vlSelf->io_freq_req_block = ((~ (IData)(vlSelf->RopeUnit__DOT__freqReqOutstanding)) 
                                 & ((IData)(vlSelf->io_rope_en) 
                                    & ((~ (IData)(vlSelf->RopeUnit__DOT__activeFreqValid)) 
                                       | ((IData)(vlSelf->RopeUnit__DOT__inputFire) 
                                          & ((~ (IData)(vlSelf->RopeUnit__DOT__freqHalf)) 
                                             & (~ (IData)(vlSelf->RopeUnit__DOT__shadowFreqValid)))))));
    vlSelf->RopeUnit__DOT__completesBlock = ((IData)(vlSelf->RopeUnit__DOT__inputFire) 
                                             & (IData)(vlSelf->RopeUnit__DOT__freqHalf));
    vlSelf->RopeUnit__DOT___GEN_105 = (1U & ((~ (IData)(vlSelf->RopeUnit__DOT__activeFreqValid)) 
                                             | ((IData)(vlSelf->RopeUnit__DOT__inputFire)
                                                 ? (IData)(vlSelf->RopeUnit__DOT___GEN_35)
                                                 : (IData)(vlSelf->RopeUnit__DOT__activeFreqValid))));
    RopeUnit__DOT____VdfgTmp_hb727c52c__0 = (QData)((IData)(
                                                            (((IData)(vlSelf->RopeUnit__DOT___T_3)
                                                               ? vlSelf->RopeUnit__DOT__shadowMBase
                                                               : vlSelf->RopeUnit__DOT__activeMBase) 
                                                             + (IData)(vlSelf->RopeUnit__DOT__rowCounter))));
    vlSelf->RopeUnit__DOT___GEN_17 = ((IData)(vlSelf->io_freq_req_block) 
                                      | (IData)(vlSelf->RopeUnit__DOT__freqReqOutstanding));
    if (vlSelf->RopeUnit__DOT__completesBlock) {
        vlSelf->RopeUnit__DOT___GEN_72 = vlSelf->RopeUnit__DOT__shadowFreqBlock_0;
        vlSelf->RopeUnit__DOT___GEN_73 = vlSelf->RopeUnit__DOT__shadowFreqBlock_1;
        vlSelf->RopeUnit__DOT___GEN_74 = vlSelf->RopeUnit__DOT__shadowFreqBlock_2;
        vlSelf->RopeUnit__DOT___GEN_75 = vlSelf->RopeUnit__DOT__shadowFreqBlock_3;
        vlSelf->RopeUnit__DOT___GEN_76 = vlSelf->RopeUnit__DOT__shadowFreqBlock_4;
        vlSelf->RopeUnit__DOT___GEN_77 = vlSelf->RopeUnit__DOT__shadowFreqBlock_5;
        vlSelf->RopeUnit__DOT___GEN_78 = vlSelf->RopeUnit__DOT__shadowFreqBlock_6;
        vlSelf->RopeUnit__DOT___GEN_79 = vlSelf->RopeUnit__DOT__shadowFreqBlock_7;
        vlSelf->RopeUnit__DOT___GEN_80 = vlSelf->RopeUnit__DOT__shadowFreqBlock_8;
        vlSelf->RopeUnit__DOT___GEN_81 = vlSelf->RopeUnit__DOT__shadowFreqBlock_9;
        vlSelf->RopeUnit__DOT___GEN_82 = vlSelf->RopeUnit__DOT__shadowFreqBlock_10;
        vlSelf->RopeUnit__DOT___GEN_83 = vlSelf->RopeUnit__DOT__shadowFreqBlock_11;
        vlSelf->RopeUnit__DOT___GEN_84 = vlSelf->RopeUnit__DOT__shadowFreqBlock_12;
        vlSelf->RopeUnit__DOT___GEN_85 = vlSelf->RopeUnit__DOT__shadowFreqBlock_13;
        vlSelf->RopeUnit__DOT___GEN_86 = vlSelf->RopeUnit__DOT__shadowFreqBlock_14;
        vlSelf->RopeUnit__DOT___GEN_87 = vlSelf->RopeUnit__DOT__shadowFreqBlock_15;
    } else {
        vlSelf->RopeUnit__DOT___GEN_72 = vlSelf->io_freq_block_in_0;
        vlSelf->RopeUnit__DOT___GEN_73 = vlSelf->io_freq_block_in_1;
        vlSelf->RopeUnit__DOT___GEN_74 = vlSelf->io_freq_block_in_2;
        vlSelf->RopeUnit__DOT___GEN_75 = vlSelf->io_freq_block_in_3;
        vlSelf->RopeUnit__DOT___GEN_76 = vlSelf->io_freq_block_in_4;
        vlSelf->RopeUnit__DOT___GEN_77 = vlSelf->io_freq_block_in_5;
        vlSelf->RopeUnit__DOT___GEN_78 = vlSelf->io_freq_block_in_6;
        vlSelf->RopeUnit__DOT___GEN_79 = vlSelf->io_freq_block_in_7;
        vlSelf->RopeUnit__DOT___GEN_80 = vlSelf->io_freq_block_in_8;
        vlSelf->RopeUnit__DOT___GEN_81 = vlSelf->io_freq_block_in_9;
        vlSelf->RopeUnit__DOT___GEN_82 = vlSelf->io_freq_block_in_10;
        vlSelf->RopeUnit__DOT___GEN_83 = vlSelf->io_freq_block_in_11;
        vlSelf->RopeUnit__DOT___GEN_84 = vlSelf->io_freq_block_in_12;
        vlSelf->RopeUnit__DOT___GEN_85 = vlSelf->io_freq_block_in_13;
        vlSelf->RopeUnit__DOT___GEN_86 = vlSelf->io_freq_block_in_14;
        vlSelf->RopeUnit__DOT___GEN_87 = vlSelf->io_freq_block_in_15;
    }
    vlSelf->io_sync_alert = (((((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__expectedRd) 
                                != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                               | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__expectedRd) 
                                   != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                  | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__expectedCosWr) 
                                      != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__cosLut__DOT__io_wr_valid_REG)) 
                                     | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__expectedSinWr) 
                                         != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__sinLut__DOT__io_wr_valid_REG)) 
                                        | ((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__holdValid) 
                                           & ((~ (IData)(vlSelf->io_stall)) 
                                              & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_7.__PVT__coeffValid))))))) 
                              | ((((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__expectedRd) 
                                   != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                  | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__expectedRd) 
                                      != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                     | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__expectedCosWr) 
                                         != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__cosLut__DOT__io_wr_valid_REG)) 
                                        | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__expectedSinWr) 
                                            != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__sinLut__DOT__io_wr_valid_REG)) 
                                           | ((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__holdValid) 
                                              & ((~ (IData)(vlSelf->io_stall)) 
                                                 & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_6.__PVT__coeffValid))))))) 
                                 | ((((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__expectedRd) 
                                      != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                     | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__expectedRd) 
                                         != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                        | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__expectedCosWr) 
                                            != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__cosLut__DOT__io_wr_valid_REG)) 
                                           | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__expectedSinWr) 
                                               != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__sinLut__DOT__io_wr_valid_REG)) 
                                              | ((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__holdValid) 
                                                 & ((~ (IData)(vlSelf->io_stall)) 
                                                    & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_5.__PVT__coeffValid))))))) 
                                    | ((((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__expectedRd) 
                                         != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                        | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__expectedRd) 
                                            != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                           | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__expectedCosWr) 
                                               != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__cosLut__DOT__io_wr_valid_REG)) 
                                              | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__expectedSinWr) 
                                                  != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__sinLut__DOT__io_wr_valid_REG)) 
                                                 | ((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__holdValid) 
                                                    & ((~ (IData)(vlSelf->io_stall)) 
                                                       & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_4.__PVT__coeffValid))))))) 
                                       | ((((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__expectedRd) 
                                            != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                           | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__expectedRd) 
                                               != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                              | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__expectedCosWr) 
                                                  != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__cosLut__DOT__io_wr_valid_REG)) 
                                                 | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__expectedSinWr) 
                                                     != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__sinLut__DOT__io_wr_valid_REG)) 
                                                    | ((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__holdValid) 
                                                       & ((~ (IData)(vlSelf->io_stall)) 
                                                          & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_3.__PVT__coeffValid))))))) 
                                          | ((((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__expectedRd) 
                                               != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                              | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__expectedRd) 
                                                  != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                                 | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__expectedCosWr) 
                                                     != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__cosLut__DOT__io_wr_valid_REG)) 
                                                    | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__expectedSinWr) 
                                                        != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__sinLut__DOT__io_wr_valid_REG)) 
                                                       | ((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__holdValid) 
                                                          & ((~ (IData)(vlSelf->io_stall)) 
                                                             & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_2.__PVT__coeffValid))))))) 
                                             | ((((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__expectedRd) 
                                                  != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                                 | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__expectedRd) 
                                                     != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                                    | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__expectedCosWr) 
                                                        != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__cosLut__DOT__io_wr_valid_REG)) 
                                                       | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__expectedSinWr) 
                                                           != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__sinLut__DOT__io_wr_valid_REG)) 
                                                          | ((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__holdValid) 
                                                             & ((~ (IData)(vlSelf->io_stall)) 
                                                                & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_1.__PVT__coeffValid))))))) 
                                                | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__expectedRd) 
                                                    != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                                   | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__expectedRd) 
                                                       != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__cosLut__DOT__io_rd_valid_REG)) 
                                                      | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__expectedCosWr) 
                                                          != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__cosLut__DOT__io_wr_valid_REG)) 
                                                         | (((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__expectedSinWr) 
                                                             != (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__sinLut__DOT__io_wr_valid_REG)) 
                                                            | ((IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__holdValid) 
                                                               & ((~ (IData)(vlSelf->io_stall)) 
                                                                  & (IData)(vlSymsp->TOP__RopeUnit__DOT__pairs_0.__PVT__coeffValid)))))))))))))) 
                             | (((~ (IData)((0xffffU 
                                             == (IData)(vlSelf->RopeUnit__DOT___anyValid_T)))) 
                                 & (0U != (IData)(vlSelf->RopeUnit__DOT___anyValid_T))) 
                                | (((~ ((IData)(vlSelf->RopeUnit__DOT__inputFire) 
                                        & (0U == (IData)(vlSelf->RopeUnit__DOT__rowCounter)))) 
                                    & (IData)(vlSelf->RopeUnit__DOT___T_3)) 
                                   | (((~ (IData)(vlSelf->RopeUnit__DOT__shadowMValid)) 
                                       & (IData)(vlSelf->RopeUnit__DOT___T_3)) 
                                      | (((~ (IData)(vlSelf->RopeUnit__DOT__activeMValid)) 
                                          & ((~ (IData)(vlSelf->RopeUnit__DOT___T_3)) 
                                             & (IData)(vlSelf->RopeUnit__DOT__inputFire))) 
                                         | (((~ (IData)(vlSelf->RopeUnit__DOT__nextBlockAvailable)) 
                                             & (IData)(vlSelf->RopeUnit__DOT__completesBlock)) 
                                            | (((~ (IData)(vlSelf->RopeUnit__DOT__freqReqOutstanding)) 
                                                & (IData)(vlSelf->io_freq_block_valid)) 
                                               | ((~ (IData)(vlSelf->RopeUnit__DOT__primed)) 
                                                  & (IData)(vlSelf->RopeUnit__DOT__inputFire)))))))));
    vlSelf->RopeUnit__DOT__pairs_0_io_angle_idx = (0x3ffU 
                                                   & (IData)(
                                                             (0x3ffffffffffULL 
                                                              & ((RopeUnit__DOT____VdfgTmp_hb727c52c__0 
                                                                  * (QData)((IData)(
                                                                                ((0xfU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_15)
                                                                                 : 
                                                                                ((0xeU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_14)
                                                                                 : 
                                                                                ((0xdU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_13)
                                                                                 : 
                                                                                ((0xcU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_12)
                                                                                 : 
                                                                                ((0xbU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_11)
                                                                                 : 
                                                                                ((0xaU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_10)
                                                                                 : 
                                                                                ((9U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_9)
                                                                                 : 
                                                                                ((8U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_8)
                                                                                 : 
                                                                                ((7U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_7)
                                                                                 : 
                                                                                ((6U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_6)
                                                                                 : 
                                                                                ((5U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_5)
                                                                                 : 
                                                                                ((4U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_4)
                                                                                 : 
                                                                                ((3U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_3)
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_2)
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 8U
                                                                                 : 0U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_1)
                                                                                 : (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_0))))))))))))))))))) 
                                                                 >> 6U))));
    vlSelf->RopeUnit__DOT__pairs_1_io_angle_idx = (0x3ffU 
                                                   & (IData)(
                                                             (0x3ffffffffffULL 
                                                              & ((RopeUnit__DOT____VdfgTmp_hb727c52c__0 
                                                                  * (QData)((IData)(
                                                                                ((0xfU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_15)
                                                                                 : 
                                                                                ((0xeU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_14)
                                                                                 : 
                                                                                ((0xdU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_13)
                                                                                 : 
                                                                                ((0xcU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_12)
                                                                                 : 
                                                                                ((0xbU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_11)
                                                                                 : 
                                                                                ((0xaU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_10)
                                                                                 : 
                                                                                ((9U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_9)
                                                                                 : 
                                                                                ((8U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_8)
                                                                                 : 
                                                                                ((7U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_7)
                                                                                 : 
                                                                                ((6U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_6)
                                                                                 : 
                                                                                ((5U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_5)
                                                                                 : 
                                                                                ((4U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_4)
                                                                                 : 
                                                                                ((3U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_3)
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_2)
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 9U
                                                                                 : 1U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_1)
                                                                                 : (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_0))))))))))))))))))) 
                                                                 >> 6U))));
    vlSelf->RopeUnit__DOT__pairs_2_io_angle_idx = (0x3ffU 
                                                   & (IData)(
                                                             (0x3ffffffffffULL 
                                                              & ((RopeUnit__DOT____VdfgTmp_hb727c52c__0 
                                                                  * (QData)((IData)(
                                                                                ((0xfU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_15)
                                                                                 : 
                                                                                ((0xeU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_14)
                                                                                 : 
                                                                                ((0xdU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_13)
                                                                                 : 
                                                                                ((0xcU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_12)
                                                                                 : 
                                                                                ((0xbU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_11)
                                                                                 : 
                                                                                ((0xaU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_10)
                                                                                 : 
                                                                                ((9U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_9)
                                                                                 : 
                                                                                ((8U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_8)
                                                                                 : 
                                                                                ((7U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_7)
                                                                                 : 
                                                                                ((6U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_6)
                                                                                 : 
                                                                                ((5U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_5)
                                                                                 : 
                                                                                ((4U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_4)
                                                                                 : 
                                                                                ((3U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_3)
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_2)
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xaU
                                                                                 : 2U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_1)
                                                                                 : (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_0))))))))))))))))))) 
                                                                 >> 6U))));
    vlSelf->RopeUnit__DOT__pairs_3_io_angle_idx = (0x3ffU 
                                                   & (IData)(
                                                             (0x3ffffffffffULL 
                                                              & ((RopeUnit__DOT____VdfgTmp_hb727c52c__0 
                                                                  * (QData)((IData)(
                                                                                ((0xfU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_15)
                                                                                 : 
                                                                                ((0xeU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_14)
                                                                                 : 
                                                                                ((0xdU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_13)
                                                                                 : 
                                                                                ((0xcU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_12)
                                                                                 : 
                                                                                ((0xbU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_11)
                                                                                 : 
                                                                                ((0xaU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_10)
                                                                                 : 
                                                                                ((9U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_9)
                                                                                 : 
                                                                                ((8U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_8)
                                                                                 : 
                                                                                ((7U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_7)
                                                                                 : 
                                                                                ((6U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_6)
                                                                                 : 
                                                                                ((5U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_5)
                                                                                 : 
                                                                                ((4U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_4)
                                                                                 : 
                                                                                ((3U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_3)
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_2)
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xbU
                                                                                 : 3U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_1)
                                                                                 : (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_0))))))))))))))))))) 
                                                                 >> 6U))));
    vlSelf->RopeUnit__DOT__pairs_4_io_angle_idx = (0x3ffU 
                                                   & (IData)(
                                                             (0x3ffffffffffULL 
                                                              & ((RopeUnit__DOT____VdfgTmp_hb727c52c__0 
                                                                  * (QData)((IData)(
                                                                                ((0xfU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_15)
                                                                                 : 
                                                                                ((0xeU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_14)
                                                                                 : 
                                                                                ((0xdU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_13)
                                                                                 : 
                                                                                ((0xcU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_12)
                                                                                 : 
                                                                                ((0xbU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_11)
                                                                                 : 
                                                                                ((0xaU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_10)
                                                                                 : 
                                                                                ((9U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_9)
                                                                                 : 
                                                                                ((8U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_8)
                                                                                 : 
                                                                                ((7U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_7)
                                                                                 : 
                                                                                ((6U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_6)
                                                                                 : 
                                                                                ((5U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_5)
                                                                                 : 
                                                                                ((4U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_4)
                                                                                 : 
                                                                                ((3U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_3)
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_2)
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xcU
                                                                                 : 4U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_1)
                                                                                 : (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_0))))))))))))))))))) 
                                                                 >> 6U))));
    vlSelf->RopeUnit__DOT__pairs_5_io_angle_idx = (0x3ffU 
                                                   & (IData)(
                                                             (0x3ffffffffffULL 
                                                              & ((RopeUnit__DOT____VdfgTmp_hb727c52c__0 
                                                                  * (QData)((IData)(
                                                                                ((0xfU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_15)
                                                                                 : 
                                                                                ((0xeU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_14)
                                                                                 : 
                                                                                ((0xdU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_13)
                                                                                 : 
                                                                                ((0xcU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_12)
                                                                                 : 
                                                                                ((0xbU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_11)
                                                                                 : 
                                                                                ((0xaU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_10)
                                                                                 : 
                                                                                ((9U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_9)
                                                                                 : 
                                                                                ((8U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_8)
                                                                                 : 
                                                                                ((7U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_7)
                                                                                 : 
                                                                                ((6U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_6)
                                                                                 : 
                                                                                ((5U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_5)
                                                                                 : 
                                                                                ((4U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_4)
                                                                                 : 
                                                                                ((3U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_3)
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_2)
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xdU
                                                                                 : 5U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_1)
                                                                                 : (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_0))))))))))))))))))) 
                                                                 >> 6U))));
    vlSelf->RopeUnit__DOT__pairs_6_io_angle_idx = (0x3ffU 
                                                   & (IData)(
                                                             (0x3ffffffffffULL 
                                                              & ((RopeUnit__DOT____VdfgTmp_hb727c52c__0 
                                                                  * (QData)((IData)(
                                                                                ((0xfU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_15)
                                                                                 : 
                                                                                ((0xeU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_14)
                                                                                 : 
                                                                                ((0xdU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_13)
                                                                                 : 
                                                                                ((0xcU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_12)
                                                                                 : 
                                                                                ((0xbU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_11)
                                                                                 : 
                                                                                ((0xaU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_10)
                                                                                 : 
                                                                                ((9U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_9)
                                                                                 : 
                                                                                ((8U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_8)
                                                                                 : 
                                                                                ((7U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_7)
                                                                                 : 
                                                                                ((6U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_6)
                                                                                 : 
                                                                                ((5U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_5)
                                                                                 : 
                                                                                ((4U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_4)
                                                                                 : 
                                                                                ((3U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_3)
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_2)
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xeU
                                                                                 : 6U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_1)
                                                                                 : (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_0))))))))))))))))))) 
                                                                 >> 6U))));
    vlSelf->RopeUnit__DOT__pairs_7_io_angle_idx = (0x3ffU 
                                                   & (IData)(
                                                             (0x3ffffffffffULL 
                                                              & ((RopeUnit__DOT____VdfgTmp_hb727c52c__0 
                                                                  * (QData)((IData)(
                                                                                ((0xfU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_15)
                                                                                 : 
                                                                                ((0xeU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_14)
                                                                                 : 
                                                                                ((0xdU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_13)
                                                                                 : 
                                                                                ((0xcU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_12)
                                                                                 : 
                                                                                ((0xbU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_11)
                                                                                 : 
                                                                                ((0xaU 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_10)
                                                                                 : 
                                                                                ((9U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_9)
                                                                                 : 
                                                                                ((8U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_8)
                                                                                 : 
                                                                                ((7U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_7)
                                                                                 : 
                                                                                ((6U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_6)
                                                                                 : 
                                                                                ((5U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_5)
                                                                                 : 
                                                                                ((4U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_4)
                                                                                 : 
                                                                                ((3U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_3)
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_2)
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->RopeUnit__DOT__freqHalf)
                                                                                 ? 0xfU
                                                                                 : 7U))
                                                                                 ? (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_1)
                                                                                 : (IData)(vlSelf->RopeUnit__DOT__activeFreqBlock_0))))))))))))))))))) 
                                                                 >> 6U))));
}

void VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_0__0(VRopeUnit_RopePairCore* vlSelf);
void VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_1__0(VRopeUnit_RopePairCore* vlSelf);
void VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_2__0(VRopeUnit_RopePairCore* vlSelf);
void VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_3__0(VRopeUnit_RopePairCore* vlSelf);
void VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_4__0(VRopeUnit_RopePairCore* vlSelf);
void VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_5__0(VRopeUnit_RopePairCore* vlSelf);
void VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_6__0(VRopeUnit_RopePairCore* vlSelf);
void VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_7__0(VRopeUnit_RopePairCore* vlSelf);

void VRopeUnit___024root___eval_nba(VRopeUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRopeUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRopeUnit___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_0__0((&vlSymsp->TOP__RopeUnit__DOT__pairs_0));
        VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_1__0((&vlSymsp->TOP__RopeUnit__DOT__pairs_1));
        VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_2__0((&vlSymsp->TOP__RopeUnit__DOT__pairs_2));
        VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_3__0((&vlSymsp->TOP__RopeUnit__DOT__pairs_3));
        VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_4__0((&vlSymsp->TOP__RopeUnit__DOT__pairs_4));
        VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_5__0((&vlSymsp->TOP__RopeUnit__DOT__pairs_5));
        VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_6__0((&vlSymsp->TOP__RopeUnit__DOT__pairs_6));
        VRopeUnit_RopePairCore___nba_sequent__TOP__RopeUnit__DOT__pairs_7__0((&vlSymsp->TOP__RopeUnit__DOT__pairs_7));
        VRopeUnit___024root___nba_sequent__TOP__0(vlSelf);
        VRopeUnit___024root___nba_sequent__TOP__1(vlSelf);
    }
}
