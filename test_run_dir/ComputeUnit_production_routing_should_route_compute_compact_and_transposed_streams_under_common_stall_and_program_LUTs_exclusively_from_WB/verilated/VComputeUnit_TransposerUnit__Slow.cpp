// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComputeUnit.h for the primary calling header

#include "VComputeUnit__pch.h"
#include "VComputeUnit_TransposerUnit.h"
#include "VComputeUnit__Syms.h"

void VComputeUnit_TransposerUnit___ctor_var_reset(VComputeUnit_TransposerUnit* vlSelf);

VComputeUnit_TransposerUnit::VComputeUnit_TransposerUnit(VComputeUnit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VComputeUnit_TransposerUnit___ctor_var_reset(this);
}

void VComputeUnit_TransposerUnit___configure_coverage(VComputeUnit_TransposerUnit* vlSelf, bool first);

void VComputeUnit_TransposerUnit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    VComputeUnit_TransposerUnit___configure_coverage(this, first);
}

VComputeUnit_TransposerUnit::~VComputeUnit_TransposerUnit() {
}

// Coverage
void VComputeUnit_TransposerUnit::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
