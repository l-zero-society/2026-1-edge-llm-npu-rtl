// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQuantActUnit.h for the primary calling header

#include "VQuantActUnit__pch.h"
#include "VQuantActUnit_QuantActCore.h"
#include "VQuantActUnit__Syms.h"

void VQuantActUnit_QuantActCore___ctor_var_reset(VQuantActUnit_QuantActCore* vlSelf);

VQuantActUnit_QuantActCore::VQuantActUnit_QuantActCore(VQuantActUnit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VQuantActUnit_QuantActCore___ctor_var_reset(this);
}

void VQuantActUnit_QuantActCore___configure_coverage(VQuantActUnit_QuantActCore* vlSelf, bool first);

void VQuantActUnit_QuantActCore::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    VQuantActUnit_QuantActCore___configure_coverage(this, first);
}

VQuantActUnit_QuantActCore::~VQuantActUnit_QuantActCore() {
}

// Coverage
void VQuantActUnit_QuantActCore::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
