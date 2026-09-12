// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTPU_TOP_H_
#define VERILATED_VTPU_TOP_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class VTPU_top__Syms;
class VTPU_top___024root;
class VTPU_top_Accum_buffer;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VTPU_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VTPU_top__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&io_in_input_0,7,0);
    VL_IN8(&io_in_input_1,7,0);
    VL_IN8(&io_in_input_2,7,0);
    VL_IN8(&io_in_input_3,7,0);
    VL_IN8(&io_in_input_4,7,0);
    VL_IN8(&io_in_input_5,7,0);
    VL_IN8(&io_in_input_6,7,0);
    VL_IN8(&io_in_input_7,7,0);
    VL_IN8(&io_in_input_8,7,0);
    VL_IN8(&io_in_input_9,7,0);
    VL_IN8(&io_in_input_10,7,0);
    VL_IN8(&io_in_input_11,7,0);
    VL_IN8(&io_in_input_12,7,0);
    VL_IN8(&io_in_input_13,7,0);
    VL_IN8(&io_in_input_14,7,0);
    VL_IN8(&io_in_input_15,7,0);
    VL_IN8(&io_input_valid,0,0);
    VL_IN8(&io_input_tile_start,0,0);
    VL_IN8(&io_in_weight_0,7,0);
    VL_IN8(&io_in_weight_1,7,0);
    VL_IN8(&io_in_weight_2,7,0);
    VL_IN8(&io_in_weight_3,7,0);
    VL_IN8(&io_in_weight_4,7,0);
    VL_IN8(&io_in_weight_5,7,0);
    VL_IN8(&io_in_weight_6,7,0);
    VL_IN8(&io_in_weight_7,7,0);
    VL_IN8(&io_in_weight_8,7,0);
    VL_IN8(&io_in_weight_9,7,0);
    VL_IN8(&io_in_weight_10,7,0);
    VL_IN8(&io_in_weight_11,7,0);
    VL_IN8(&io_in_weight_12,7,0);
    VL_IN8(&io_in_weight_13,7,0);
    VL_IN8(&io_in_weight_14,7,0);
    VL_IN8(&io_in_weight_15,7,0);
    VL_IN8(&io_weight_valid,0,0);
    VL_IN8(&io_clear_W,0,0);
    VL_IN8(&io_stall,0,0);
    VL_OUT8(&io_out_valid_0,0,0);
    VL_OUT8(&io_out_valid_1,0,0);
    VL_OUT8(&io_out_valid_2,0,0);
    VL_OUT8(&io_out_valid_3,0,0);
    VL_OUT8(&io_out_valid_4,0,0);
    VL_OUT8(&io_out_valid_5,0,0);
    VL_OUT8(&io_out_valid_6,0,0);
    VL_OUT8(&io_out_valid_7,0,0);
    VL_OUT8(&io_out_valid_8,0,0);
    VL_OUT8(&io_out_valid_9,0,0);
    VL_OUT8(&io_out_valid_10,0,0);
    VL_OUT8(&io_out_valid_11,0,0);
    VL_OUT8(&io_out_valid_12,0,0);
    VL_OUT8(&io_out_valid_13,0,0);
    VL_OUT8(&io_out_valid_14,0,0);
    VL_OUT8(&io_out_valid_15,0,0);
    VL_OUT8(&io_out_meta_row_change_update,0,0);
    VL_OUT8(&io_fusion_req,0,0);
    VL_OUT8(&io_fatal_alert,0,0);
    VL_IN(&io_intermNum,31,0);
    VL_IN(&io_outColNum,31,0);
    VL_OUT(&io_out_accum_0,31,0);
    VL_OUT(&io_out_accum_1,31,0);
    VL_OUT(&io_out_accum_2,31,0);
    VL_OUT(&io_out_accum_3,31,0);
    VL_OUT(&io_out_accum_4,31,0);
    VL_OUT(&io_out_accum_5,31,0);
    VL_OUT(&io_out_accum_6,31,0);
    VL_OUT(&io_out_accum_7,31,0);
    VL_OUT(&io_out_accum_8,31,0);
    VL_OUT(&io_out_accum_9,31,0);
    VL_OUT(&io_out_accum_10,31,0);
    VL_OUT(&io_out_accum_11,31,0);
    VL_OUT(&io_out_accum_12,31,0);
    VL_OUT(&io_out_accum_13,31,0);
    VL_OUT(&io_out_accum_14,31,0);
    VL_OUT(&io_out_accum_15,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VTPU_top_Accum_buffer* const __PVT__TPU_top__DOT__accumulator__DOT__buffers_0;
    VTPU_top_Accum_buffer* const __PVT__TPU_top__DOT__accumulator__DOT__buffers_1;
    VTPU_top_Accum_buffer* const __PVT__TPU_top__DOT__accumulator__DOT__buffers_2;
    VTPU_top_Accum_buffer* const __PVT__TPU_top__DOT__accumulator__DOT__buffers_3;
    VTPU_top_Accum_buffer* const __PVT__TPU_top__DOT__accumulator__DOT__buffers_4;
    VTPU_top_Accum_buffer* const __PVT__TPU_top__DOT__accumulator__DOT__buffers_5;
    VTPU_top_Accum_buffer* const __PVT__TPU_top__DOT__accumulator__DOT__buffers_6;
    VTPU_top_Accum_buffer* const __PVT__TPU_top__DOT__accumulator__DOT__buffers_7;
    VTPU_top_Accum_buffer* const __PVT__TPU_top__DOT__accumulator__DOT__buffers_8;
    VTPU_top_Accum_buffer* const __PVT__TPU_top__DOT__accumulator__DOT__buffers_9;
    VTPU_top_Accum_buffer* const __PVT__TPU_top__DOT__accumulator__DOT__buffers_10;
    VTPU_top_Accum_buffer* const __PVT__TPU_top__DOT__accumulator__DOT__buffers_11;
    VTPU_top_Accum_buffer* const __PVT__TPU_top__DOT__accumulator__DOT__buffers_12;
    VTPU_top_Accum_buffer* const __PVT__TPU_top__DOT__accumulator__DOT__buffers_13;
    VTPU_top_Accum_buffer* const __PVT__TPU_top__DOT__accumulator__DOT__buffers_14;
    VTPU_top_Accum_buffer* const __PVT__TPU_top__DOT__accumulator__DOT__buffers_15;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VTPU_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VTPU_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit VTPU_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VTPU_top();
  private:
    VL_UNCOPYABLE(VTPU_top);  ///< Copying not allowed

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
