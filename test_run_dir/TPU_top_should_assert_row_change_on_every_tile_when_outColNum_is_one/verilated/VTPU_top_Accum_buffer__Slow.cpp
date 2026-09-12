// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTPU_top.h for the primary calling header

#include "VTPU_top__pch.h"
#include "VTPU_top_Accum_buffer.h"
#include "VTPU_top__Syms.h"

void VTPU_top_Accum_buffer___ctor_var_reset(VTPU_top_Accum_buffer* vlSelf);

VTPU_top_Accum_buffer::VTPU_top_Accum_buffer(VTPU_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTPU_top_Accum_buffer___ctor_var_reset(this);
}

void VTPU_top_Accum_buffer___configure_coverage(VTPU_top_Accum_buffer* vlSelf, bool first);

void VTPU_top_Accum_buffer::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    VTPU_top_Accum_buffer___configure_coverage(this, first);
}

VTPU_top_Accum_buffer::~VTPU_top_Accum_buffer() {
}

// Coverage
void VTPU_top_Accum_buffer::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
