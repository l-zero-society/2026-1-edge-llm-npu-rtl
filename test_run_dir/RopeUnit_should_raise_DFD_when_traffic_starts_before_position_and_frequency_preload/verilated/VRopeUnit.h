// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VROPEUNIT_H_
#define VERILATED_VROPEUNIT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class VRopeUnit__Syms;
class VRopeUnit___024root;
class VRopeUnit_RopePairCore;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VRopeUnit VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VRopeUnit__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&io_in_vec_0,7,0);
    VL_IN8(&io_in_vec_1,7,0);
    VL_IN8(&io_in_vec_2,7,0);
    VL_IN8(&io_in_vec_3,7,0);
    VL_IN8(&io_in_vec_4,7,0);
    VL_IN8(&io_in_vec_5,7,0);
    VL_IN8(&io_in_vec_6,7,0);
    VL_IN8(&io_in_vec_7,7,0);
    VL_IN8(&io_in_vec_8,7,0);
    VL_IN8(&io_in_vec_9,7,0);
    VL_IN8(&io_in_vec_10,7,0);
    VL_IN8(&io_in_vec_11,7,0);
    VL_IN8(&io_in_vec_12,7,0);
    VL_IN8(&io_in_vec_13,7,0);
    VL_IN8(&io_in_vec_14,7,0);
    VL_IN8(&io_in_vec_15,7,0);
    VL_IN8(&io_in_valid_0,0,0);
    VL_IN8(&io_in_valid_1,0,0);
    VL_IN8(&io_in_valid_2,0,0);
    VL_IN8(&io_in_valid_3,0,0);
    VL_IN8(&io_in_valid_4,0,0);
    VL_IN8(&io_in_valid_5,0,0);
    VL_IN8(&io_in_valid_6,0,0);
    VL_IN8(&io_in_valid_7,0,0);
    VL_IN8(&io_in_valid_8,0,0);
    VL_IN8(&io_in_valid_9,0,0);
    VL_IN8(&io_in_valid_10,0,0);
    VL_IN8(&io_in_valid_11,0,0);
    VL_IN8(&io_in_valid_12,0,0);
    VL_IN8(&io_in_valid_13,0,0);
    VL_IN8(&io_in_valid_14,0,0);
    VL_IN8(&io_in_valid_15,0,0);
    VL_IN8(&io_rope_en,0,0);
    VL_IN8(&io_stall,0,0);
    VL_IN8(&io_soft_reset,0,0);
    VL_IN8(&io_row_change_update,0,0);
    VL_IN8(&io_position_init,0,0);
    VL_OUT8(&io_freq_req_block,0,0);
    VL_IN8(&io_freq_block_valid,0,0);
    VL_IN8(&io_lut_cos_wr_en,0,0);
    VL_IN8(&io_lut_sin_wr_en,0,0);
    VL_IN8(&io_lut_wr_addr,6,0);
    VL_OUT8(&io_out_vec_0,7,0);
    VL_OUT8(&io_out_vec_1,7,0);
    VL_OUT8(&io_out_vec_2,7,0);
    VL_OUT8(&io_out_vec_3,7,0);
    VL_OUT8(&io_out_vec_4,7,0);
    VL_OUT8(&io_out_vec_5,7,0);
    VL_OUT8(&io_out_vec_6,7,0);
    VL_OUT8(&io_out_vec_7,7,0);
    VL_OUT8(&io_out_vec_8,7,0);
    VL_OUT8(&io_out_vec_9,7,0);
    VL_OUT8(&io_out_vec_10,7,0);
    VL_OUT8(&io_out_vec_11,7,0);
    VL_OUT8(&io_out_vec_12,7,0);
    VL_OUT8(&io_out_vec_13,7,0);
    VL_OUT8(&io_out_vec_14,7,0);
    VL_OUT8(&io_out_vec_15,7,0);
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
    VL_OUT8(&io_prefetch_ready,0,0);
    VL_OUT8(&io_lut_ready,0,0);
    VL_OUT8(&io_sync_alert,0,0);
    VL_IN16(&io_freq_block_in_0,15,0);
    VL_IN16(&io_freq_block_in_1,15,0);
    VL_IN16(&io_freq_block_in_2,15,0);
    VL_IN16(&io_freq_block_in_3,15,0);
    VL_IN16(&io_freq_block_in_4,15,0);
    VL_IN16(&io_freq_block_in_5,15,0);
    VL_IN16(&io_freq_block_in_6,15,0);
    VL_IN16(&io_freq_block_in_7,15,0);
    VL_IN16(&io_freq_block_in_8,15,0);
    VL_IN16(&io_freq_block_in_9,15,0);
    VL_IN16(&io_freq_block_in_10,15,0);
    VL_IN16(&io_freq_block_in_11,15,0);
    VL_IN16(&io_freq_block_in_12,15,0);
    VL_IN16(&io_freq_block_in_13,15,0);
    VL_IN16(&io_freq_block_in_14,15,0);
    VL_IN16(&io_freq_block_in_15,15,0);
    VL_IN16(&io_lut_wr_data_0,15,0);
    VL_IN16(&io_lut_wr_data_1,15,0);
    VL_IN16(&io_lut_wr_data_2,15,0);
    VL_IN16(&io_lut_wr_data_3,15,0);
    VL_IN16(&io_lut_wr_data_4,15,0);
    VL_IN16(&io_lut_wr_data_5,15,0);
    VL_IN16(&io_lut_wr_data_6,15,0);
    VL_IN16(&io_lut_wr_data_7,15,0);
    VL_IN(&io_base_m_in,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VRopeUnit_RopePairCore* const __PVT__RopeUnit__DOT__pairs_0;
    VRopeUnit_RopePairCore* const __PVT__RopeUnit__DOT__pairs_1;
    VRopeUnit_RopePairCore* const __PVT__RopeUnit__DOT__pairs_2;
    VRopeUnit_RopePairCore* const __PVT__RopeUnit__DOT__pairs_3;
    VRopeUnit_RopePairCore* const __PVT__RopeUnit__DOT__pairs_4;
    VRopeUnit_RopePairCore* const __PVT__RopeUnit__DOT__pairs_5;
    VRopeUnit_RopePairCore* const __PVT__RopeUnit__DOT__pairs_6;
    VRopeUnit_RopePairCore* const __PVT__RopeUnit__DOT__pairs_7;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VRopeUnit___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VRopeUnit(VerilatedContext* contextp, const char* name = "TOP");
    explicit VRopeUnit(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VRopeUnit();
  private:
    VL_UNCOPYABLE(VRopeUnit);  ///< Copying not allowed

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
