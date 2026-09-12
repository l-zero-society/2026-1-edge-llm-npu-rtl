// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCOMPUTEUNIT__SYMS_H_
#define VERILATED_VCOMPUTEUNIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VComputeUnit.h"

// INCLUDE MODULE CLASSES
#include "VComputeUnit___024root.h"
#include "VComputeUnit_TransposerUnit.h"
#include "VComputeUnit_Accum_buffer.h"
#include "VComputeUnit_QuantActCore.h"
#include "VComputeUnit_Universal_Wide_LUT_16.h"
#include "VComputeUnit_RopePairCore.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VComputeUnit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VComputeUnit* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VComputeUnit___024root         TOP;
    VComputeUnit_TransposerUnit    TOP__ComputeUnit__DOT__outTransposer__DOT__ping;
    VComputeUnit_TransposerUnit    TOP__ComputeUnit__DOT__outTransposer__DOT__pong;
    VComputeUnit_Accum_buffer      TOP__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_0;
    VComputeUnit_Accum_buffer      TOP__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_1;
    VComputeUnit_Accum_buffer      TOP__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_10;
    VComputeUnit_Accum_buffer      TOP__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_11;
    VComputeUnit_Accum_buffer      TOP__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_12;
    VComputeUnit_Accum_buffer      TOP__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_13;
    VComputeUnit_Accum_buffer      TOP__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_14;
    VComputeUnit_Accum_buffer      TOP__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_15;
    VComputeUnit_Accum_buffer      TOP__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_2;
    VComputeUnit_Accum_buffer      TOP__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_3;
    VComputeUnit_Accum_buffer      TOP__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_4;
    VComputeUnit_Accum_buffer      TOP__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_5;
    VComputeUnit_Accum_buffer      TOP__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_6;
    VComputeUnit_Accum_buffer      TOP__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_7;
    VComputeUnit_Accum_buffer      TOP__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_8;
    VComputeUnit_Accum_buffer      TOP__ComputeUnit__DOT__tpu__DOT__accumulator__DOT__buffers_9;
    VComputeUnit_TransposerUnit    TOP__ComputeUnit__DOT__ubTransposer__DOT__ping;
    VComputeUnit_TransposerUnit    TOP__ComputeUnit__DOT__ubTransposer__DOT__pong;
    VComputeUnit_QuantActCore      TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_0;
    VComputeUnit_QuantActCore      TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_1;
    VComputeUnit_QuantActCore      TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_10;
    VComputeUnit_QuantActCore      TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_11;
    VComputeUnit_QuantActCore      TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_12;
    VComputeUnit_QuantActCore      TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_13;
    VComputeUnit_QuantActCore      TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_14;
    VComputeUnit_QuantActCore      TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_15;
    VComputeUnit_QuantActCore      TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_2;
    VComputeUnit_QuantActCore      TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_3;
    VComputeUnit_QuantActCore      TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_4;
    VComputeUnit_QuantActCore      TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_5;
    VComputeUnit_QuantActCore      TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_6;
    VComputeUnit_QuantActCore      TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_7;
    VComputeUnit_QuantActCore      TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_8;
    VComputeUnit_QuantActCore      TOP__ComputeUnit__DOT__vpu1__DOT__quant__DOT__cores_9;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_0;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_1;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_10;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_11;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_12;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_13;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_14;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_15;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_2;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_3;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_4;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_5;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_6;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_7;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_8;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__correctionExpLuts_9;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_0;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_1;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_10;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_11;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_12;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_13;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_14;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_15;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_2;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_3;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_4;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_5;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_6;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_7;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_8;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__phase2ExpLuts_9;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_0;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_1;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_10;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_11;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_12;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_13;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_14;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_15;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_2;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_3;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_4;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_5;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_6;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_7;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_8;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__scaleLuts_9;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_0;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_1;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_10;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_11;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_12;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_13;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_14;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_15;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_2;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_3;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_4;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_5;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_6;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_7;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_8;
    VComputeUnit_Universal_Wide_LUT_16 TOP__ComputeUnit__DOT__vpu2__DOT__norm__DOT__streamExpLuts_9;
    VComputeUnit_RopePairCore      TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_0;
    VComputeUnit_RopePairCore      TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_1;
    VComputeUnit_RopePairCore      TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_2;
    VComputeUnit_RopePairCore      TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_3;
    VComputeUnit_RopePairCore      TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_4;
    VComputeUnit_RopePairCore      TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_5;
    VComputeUnit_RopePairCore      TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_6;
    VComputeUnit_RopePairCore      TOP__ComputeUnit__DOT__vpu2__DOT__rope__DOT__pairs_7;
    VComputeUnit_TransposerUnit    TOP__ComputeUnit__DOT__wbTransposer__DOT__ping;
    VComputeUnit_TransposerUnit    TOP__ComputeUnit__DOT__wbTransposer__DOT__pong;

    // CONSTRUCTORS
    VComputeUnit__Syms(VerilatedContext* contextp, const char* namep, VComputeUnit* modelp);
    ~VComputeUnit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
