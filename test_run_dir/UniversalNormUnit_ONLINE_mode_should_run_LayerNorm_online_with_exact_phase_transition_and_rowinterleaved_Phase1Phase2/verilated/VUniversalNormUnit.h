// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VUNIVERSALNORMUNIT_H_
#define VERILATED_VUNIVERSALNORMUNIT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class VUniversalNormUnit__Syms;
class VUniversalNormUnit___024root;
class VUniversalNormUnit_Universal_Wide_LUT;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VUniversalNormUnit VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VUniversalNormUnit__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&io_phase1_in_vec_0,7,0);
    VL_IN8(&io_phase1_in_vec_1,7,0);
    VL_IN8(&io_phase1_in_vec_2,7,0);
    VL_IN8(&io_phase1_in_vec_3,7,0);
    VL_IN8(&io_phase1_in_vec_4,7,0);
    VL_IN8(&io_phase1_in_vec_5,7,0);
    VL_IN8(&io_phase1_in_vec_6,7,0);
    VL_IN8(&io_phase1_in_vec_7,7,0);
    VL_IN8(&io_phase1_in_vec_8,7,0);
    VL_IN8(&io_phase1_in_vec_9,7,0);
    VL_IN8(&io_phase1_in_vec_10,7,0);
    VL_IN8(&io_phase1_in_vec_11,7,0);
    VL_IN8(&io_phase1_in_vec_12,7,0);
    VL_IN8(&io_phase1_in_vec_13,7,0);
    VL_IN8(&io_phase1_in_vec_14,7,0);
    VL_IN8(&io_phase1_in_vec_15,7,0);
    VL_IN8(&io_phase1_valid_vec_0,0,0);
    VL_IN8(&io_phase1_valid_vec_1,0,0);
    VL_IN8(&io_phase1_valid_vec_2,0,0);
    VL_IN8(&io_phase1_valid_vec_3,0,0);
    VL_IN8(&io_phase1_valid_vec_4,0,0);
    VL_IN8(&io_phase1_valid_vec_5,0,0);
    VL_IN8(&io_phase1_valid_vec_6,0,0);
    VL_IN8(&io_phase1_valid_vec_7,0,0);
    VL_IN8(&io_phase1_valid_vec_8,0,0);
    VL_IN8(&io_phase1_valid_vec_9,0,0);
    VL_IN8(&io_phase1_valid_vec_10,0,0);
    VL_IN8(&io_phase1_valid_vec_11,0,0);
    VL_IN8(&io_phase1_valid_vec_12,0,0);
    VL_IN8(&io_phase1_valid_vec_13,0,0);
    VL_IN8(&io_phase1_valid_vec_14,0,0);
    VL_IN8(&io_phase1_valid_vec_15,0,0);
    VL_IN8(&io_phase1_row_change_update_in,0,0);
    VL_OUT8(&io_phase1_out_vec_0,7,0);
    VL_OUT8(&io_phase1_out_vec_1,7,0);
    VL_OUT8(&io_phase1_out_vec_2,7,0);
    VL_OUT8(&io_phase1_out_vec_3,7,0);
    VL_OUT8(&io_phase1_out_vec_4,7,0);
    VL_OUT8(&io_phase1_out_vec_5,7,0);
    VL_OUT8(&io_phase1_out_vec_6,7,0);
    VL_OUT8(&io_phase1_out_vec_7,7,0);
    VL_OUT8(&io_phase1_out_vec_8,7,0);
    VL_OUT8(&io_phase1_out_vec_9,7,0);
    VL_OUT8(&io_phase1_out_vec_10,7,0);
    VL_OUT8(&io_phase1_out_vec_11,7,0);
    VL_OUT8(&io_phase1_out_vec_12,7,0);
    VL_OUT8(&io_phase1_out_vec_13,7,0);
    VL_OUT8(&io_phase1_out_vec_14,7,0);
    VL_OUT8(&io_phase1_out_vec_15,7,0);
    VL_OUT8(&io_phase1_out_valid_vec_0,0,0);
    VL_OUT8(&io_phase1_out_valid_vec_1,0,0);
    VL_OUT8(&io_phase1_out_valid_vec_2,0,0);
    VL_OUT8(&io_phase1_out_valid_vec_3,0,0);
    VL_OUT8(&io_phase1_out_valid_vec_4,0,0);
    VL_OUT8(&io_phase1_out_valid_vec_5,0,0);
    VL_OUT8(&io_phase1_out_valid_vec_6,0,0);
    VL_OUT8(&io_phase1_out_valid_vec_7,0,0);
    VL_OUT8(&io_phase1_out_valid_vec_8,0,0);
    VL_OUT8(&io_phase1_out_valid_vec_9,0,0);
    VL_OUT8(&io_phase1_out_valid_vec_10,0,0);
    VL_OUT8(&io_phase1_out_valid_vec_11,0,0);
    VL_OUT8(&io_phase1_out_valid_vec_12,0,0);
    VL_OUT8(&io_phase1_out_valid_vec_13,0,0);
    VL_OUT8(&io_phase1_out_valid_vec_14,0,0);
    VL_OUT8(&io_phase1_out_valid_vec_15,0,0);
    VL_IN8(&io_phase2_in_vec_0,7,0);
    VL_IN8(&io_phase2_in_vec_1,7,0);
    VL_IN8(&io_phase2_in_vec_2,7,0);
    VL_IN8(&io_phase2_in_vec_3,7,0);
    VL_IN8(&io_phase2_in_vec_4,7,0);
    VL_IN8(&io_phase2_in_vec_5,7,0);
    VL_IN8(&io_phase2_in_vec_6,7,0);
    VL_IN8(&io_phase2_in_vec_7,7,0);
    VL_IN8(&io_phase2_in_vec_8,7,0);
    VL_IN8(&io_phase2_in_vec_9,7,0);
    VL_IN8(&io_phase2_in_vec_10,7,0);
    VL_IN8(&io_phase2_in_vec_11,7,0);
    VL_IN8(&io_phase2_in_vec_12,7,0);
    VL_IN8(&io_phase2_in_vec_13,7,0);
    VL_IN8(&io_phase2_in_vec_14,7,0);
    VL_IN8(&io_phase2_in_vec_15,7,0);
    VL_IN8(&io_phase2_valid_vec_0,0,0);
    VL_IN8(&io_phase2_valid_vec_1,0,0);
    VL_IN8(&io_phase2_valid_vec_2,0,0);
    VL_IN8(&io_phase2_valid_vec_3,0,0);
    VL_IN8(&io_phase2_valid_vec_4,0,0);
    VL_IN8(&io_phase2_valid_vec_5,0,0);
    VL_IN8(&io_phase2_valid_vec_6,0,0);
    VL_IN8(&io_phase2_valid_vec_7,0,0);
    VL_IN8(&io_phase2_valid_vec_8,0,0);
    VL_IN8(&io_phase2_valid_vec_9,0,0);
    VL_IN8(&io_phase2_valid_vec_10,0,0);
    VL_IN8(&io_phase2_valid_vec_11,0,0);
    VL_IN8(&io_phase2_valid_vec_12,0,0);
    VL_IN8(&io_phase2_valid_vec_13,0,0);
    VL_IN8(&io_phase2_valid_vec_14,0,0);
    VL_IN8(&io_phase2_valid_vec_15,0,0);
    VL_OUT8(&io_phase2_out_vec_0,7,0);
    VL_OUT8(&io_phase2_out_vec_1,7,0);
    VL_OUT8(&io_phase2_out_vec_2,7,0);
    VL_OUT8(&io_phase2_out_vec_3,7,0);
    VL_OUT8(&io_phase2_out_vec_4,7,0);
    VL_OUT8(&io_phase2_out_vec_5,7,0);
    VL_OUT8(&io_phase2_out_vec_6,7,0);
    VL_OUT8(&io_phase2_out_vec_7,7,0);
    VL_OUT8(&io_phase2_out_vec_8,7,0);
    VL_OUT8(&io_phase2_out_vec_9,7,0);
    VL_OUT8(&io_phase2_out_vec_10,7,0);
    VL_OUT8(&io_phase2_out_vec_11,7,0);
    VL_OUT8(&io_phase2_out_vec_12,7,0);
    VL_OUT8(&io_phase2_out_vec_13,7,0);
    VL_OUT8(&io_phase2_out_vec_14,7,0);
    VL_OUT8(&io_phase2_out_vec_15,7,0);
    VL_OUT8(&io_phase2_out_valid_vec_0,0,0);
    VL_OUT8(&io_phase2_out_valid_vec_1,0,0);
    VL_OUT8(&io_phase2_out_valid_vec_2,0,0);
    VL_OUT8(&io_phase2_out_valid_vec_3,0,0);
    VL_OUT8(&io_phase2_out_valid_vec_4,0,0);
    VL_OUT8(&io_phase2_out_valid_vec_5,0,0);
    VL_OUT8(&io_phase2_out_valid_vec_6,0,0);
    VL_OUT8(&io_phase2_out_valid_vec_7,0,0);
    VL_OUT8(&io_phase2_out_valid_vec_8,0,0);
    VL_OUT8(&io_phase2_out_valid_vec_9,0,0);
    VL_OUT8(&io_phase2_out_valid_vec_10,0,0);
    VL_OUT8(&io_phase2_out_valid_vec_11,0,0);
    VL_OUT8(&io_phase2_out_valid_vec_12,0,0);
    VL_OUT8(&io_phase2_out_valid_vec_13,0,0);
    VL_OUT8(&io_phase2_out_valid_vec_14,0,0);
    VL_OUT8(&io_phase2_out_valid_vec_15,0,0);
    VL_OUT8(&io_phase2_row_change_update_out,0,0);
    VL_IN8(&io_mode_sel,1,0);
    VL_IN8(&io_layout_mode,0,0);
    VL_IN8(&io_clr_acc,0,0);
    VL_IN8(&io_stall,0,0);
    VL_OUT8(&io_phase2_req,0,0);
    VL_IN8(&io_lut_wr_en,0,0);
    VL_IN8(&io_lut_is_exp,0,0);
    VL_IN8(&io_lut_wr_addr,4,0);
    VL_OUT8(&io_lut_ready,0,0);
    VL_OUT8(&io_sync_alert,0,0);
    VL_OUT8(&io_phase1_vector_done,0,0);
    VL_IN16(&io_lut_wr_data_0,15,0);
    VL_IN16(&io_lut_wr_data_1,15,0);
    VL_IN16(&io_lut_wr_data_2,15,0);
    VL_IN16(&io_lut_wr_data_3,15,0);
    VL_IN16(&io_lut_wr_data_4,15,0);
    VL_IN16(&io_lut_wr_data_5,15,0);
    VL_IN16(&io_lut_wr_data_6,15,0);
    VL_IN16(&io_lut_wr_data_7,15,0);
    VL_OUT16(&io_metadata_count,8,0);
    VL_IN(&io_logical_vector_length,31,0);
    VL_IN(&io_inv_vector_length,23,0);
    VL_IN(&io_epsilon,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__streamExpLuts_0;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__streamExpLuts_1;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__streamExpLuts_2;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__streamExpLuts_3;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__streamExpLuts_4;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__streamExpLuts_5;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__streamExpLuts_6;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__streamExpLuts_7;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__streamExpLuts_8;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__streamExpLuts_9;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__streamExpLuts_10;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__streamExpLuts_11;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__streamExpLuts_12;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__streamExpLuts_13;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__streamExpLuts_14;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__streamExpLuts_15;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__correctionExpLuts_0;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__correctionExpLuts_1;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__correctionExpLuts_2;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__correctionExpLuts_3;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__correctionExpLuts_4;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__correctionExpLuts_5;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__correctionExpLuts_6;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__correctionExpLuts_7;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__correctionExpLuts_8;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__correctionExpLuts_9;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__correctionExpLuts_10;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__correctionExpLuts_11;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__correctionExpLuts_12;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__correctionExpLuts_13;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__correctionExpLuts_14;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__correctionExpLuts_15;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__phase2ExpLuts_0;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__phase2ExpLuts_1;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__phase2ExpLuts_2;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__phase2ExpLuts_3;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__phase2ExpLuts_4;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__phase2ExpLuts_5;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__phase2ExpLuts_6;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__phase2ExpLuts_7;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__phase2ExpLuts_8;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__phase2ExpLuts_9;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__phase2ExpLuts_10;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__phase2ExpLuts_11;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__phase2ExpLuts_12;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__phase2ExpLuts_13;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__phase2ExpLuts_14;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__phase2ExpLuts_15;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__scaleLuts_0;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__scaleLuts_1;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__scaleLuts_2;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__scaleLuts_3;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__scaleLuts_4;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__scaleLuts_5;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__scaleLuts_6;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__scaleLuts_7;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__scaleLuts_8;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__scaleLuts_9;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__scaleLuts_10;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__scaleLuts_11;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__scaleLuts_12;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__scaleLuts_13;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__scaleLuts_14;
    VUniversalNormUnit_Universal_Wide_LUT* const __PVT__UniversalNormUnit__DOT__scaleLuts_15;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VUniversalNormUnit___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VUniversalNormUnit(VerilatedContext* contextp, const char* name = "TOP");
    explicit VUniversalNormUnit(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VUniversalNormUnit();
  private:
    VL_UNCOPYABLE(VUniversalNormUnit);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
};

#endif  // guard
