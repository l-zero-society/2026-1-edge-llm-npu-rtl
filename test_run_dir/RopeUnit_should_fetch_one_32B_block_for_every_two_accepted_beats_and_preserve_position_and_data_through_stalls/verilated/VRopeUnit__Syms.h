// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VROPEUNIT__SYMS_H_
#define VERILATED_VROPEUNIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VRopeUnit.h"

// INCLUDE MODULE CLASSES
#include "VRopeUnit___024root.h"
#include "VRopeUnit_RopePairCore.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VRopeUnit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VRopeUnit* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VRopeUnit___024root            TOP;
    VRopeUnit_RopePairCore         TOP__RopeUnit__DOT__pairs_0;
    VRopeUnit_RopePairCore         TOP__RopeUnit__DOT__pairs_1;
    VRopeUnit_RopePairCore         TOP__RopeUnit__DOT__pairs_2;
    VRopeUnit_RopePairCore         TOP__RopeUnit__DOT__pairs_3;
    VRopeUnit_RopePairCore         TOP__RopeUnit__DOT__pairs_4;
    VRopeUnit_RopePairCore         TOP__RopeUnit__DOT__pairs_5;
    VRopeUnit_RopePairCore         TOP__RopeUnit__DOT__pairs_6;
    VRopeUnit_RopePairCore         TOP__RopeUnit__DOT__pairs_7;

    // CONSTRUCTORS
    VRopeUnit__Syms(VerilatedContext* contextp, const char* namep, VRopeUnit* modelp);
    ~VRopeUnit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
