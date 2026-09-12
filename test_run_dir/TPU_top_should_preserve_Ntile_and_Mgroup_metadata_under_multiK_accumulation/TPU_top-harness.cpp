#include "VTPU_top.h"
#include "verilated.h"

#define TOP_CLASS VTPU_top

#ifndef VM_TRACE_FST
#define VM_TRACE_FST 0
#endif

static const bool verbose = false;

#if VM_TRACE
#if VM_TRACE_FST
  #include "verilated_fst_c.h"
  #define VERILATED_C VerilatedFstC
#else // !(VM_TRACE_FST)
  #include "verilated_vcd_c.h"
  #define VERILATED_C VerilatedVcdC
#endif
#else // !(VM_TRACE)
  #define VERILATED_C VerilatedVcdC
#endif
#include <iostream>


// Override Verilator definition so first $finish ends simulation
// Note: VL_USER_FINISH needs to be defined when compiling Verilator code
static bool encounteredFinish = false;
void vl_finish(const char* filename, int linenum, const char* hier) {
  // std::cout << "finish! (" << filename << ", " << linenum << ", " << hier << ")" << std::endl;
  Verilated::flushCall();
  encounteredFinish = true;
}


static bool encounteredFatal = false;
void vl_fatal(const char* filename, int linenum, const char* hier, const char* msg) {
  std::cerr << "fatal! (" << filename << ", " << linenum << ", " << hier << ", " << msg << ")" << std::endl;
  Verilated::flushCall();
  encounteredFatal = true;
}


static bool encounteredStop = false;
void vl_stop(const char* filename, int linenum, const char* hier) {
  // std::cout << "stop! (" << filename << ", " << linenum << ", " << hier << ")" << std::endl;
  Verilated::flushCall();
  encounteredStop = true;
}


// Global because older versions of verilator do not support contexts
static vluint64_t global_time = 0;
double sc_time_stamp () { return global_time; }

static void _startCoverageAndDump(VERILATED_C** tfp, const std::string& dumpfile, TOP_CLASS* top) {

#if VM_TRACE || VM_COVERAGE
    Verilated::traceEverOn(true);
#endif
#if VM_TRACE
    if (verbose) VL_PRINTF("Enabling waves..\n");
    *tfp = new VERILATED_C;
    top->trace(*tfp, 99);
    (*tfp)->open(dumpfile.c_str());
#endif
}

static int64_t _step(VERILATED_C* tfp, TOP_CLASS* top, vluint64_t& main_time) {
    top->clock = 0;
    global_time = main_time;
    top->eval();
#if VM_TRACE
    if (tfp) tfp->dump(main_time);
#endif
    main_time++;
    top->clock = 1;
    global_time = main_time;
    top->eval();
#if VM_TRACE
    if (tfp) tfp->dump(main_time);
#endif
    main_time++;
    if(encounteredStop) {
      // vl_stop is called by verilator when an assertion fails or when the fatal command is executed
      encounteredStop = false;
      encounteredFinish = false;
      return 2;
    } else if(encounteredFinish) {
      // vl_finish is called by verilator when a finish command is executed (stop(0))
      encounteredFinish = false;
      return 1;
    } else if(encounteredFatal) {
      encounteredFatal = false;
      return 3;
    }
    return 0;
}

static void _finish(VERILATED_C* tfp, TOP_CLASS* top) {
#if VM_TRACE
  if (tfp) tfp->close();
  delete tfp;
#endif
#if VM_COVERAGE
  VerilatedCov::write(R"(/workspace/lzero_01_rtl/test_run_dir/TPU_top_should_preserve_Ntile_and_Mgroup_metadata_under_multiK_accumulation/coverage.dat)");
#endif
  top->final();
  // TODO: re-enable!
  // delete top;
}

struct sim_state {
  TOP_CLASS* dut;
  VERILATED_C* tfp;
  vluint64_t main_time;

  sim_state() :
    dut(new TOP_CLASS),
    tfp(nullptr),
    main_time(0)
  {
    // std::cout << "Allocating! " << ((long long) dut) << std::endl;
  }

  inline int64_t step(int32_t cycles) {
    for(int32_t i = 0; i < cycles; i++) {
      const int64_t status = _step(tfp, dut, main_time);
      if(status > 0) {
        // early exit on failure
        return (status << 32) | ((int64_t)(i + 1));
      }
    }
    return (int64_t)cycles;
  }
  inline void update() { dut->eval(); }
  inline void finish() {
    dut->eval();
    _finish(tfp, dut);
  }
  inline void resetCoverage() { VerilatedCov::zero(); }
  inline void writeCoverage(const char* filename) {
    VerilatedCov::write(filename);
  }
  inline void poke(int32_t id, int64_t value) {
    const uint64_t u = value;
    // std::cout << "poking: " << std::hex << u << std::endl;
    switch(id) {
      case 0 : dut->reset = u; break;
      case 1 : dut->io_in_input_0 = u; break;
      case 2 : dut->io_in_input_1 = u; break;
      case 3 : dut->io_in_input_2 = u; break;
      case 4 : dut->io_in_input_3 = u; break;
      case 5 : dut->io_in_input_4 = u; break;
      case 6 : dut->io_in_input_5 = u; break;
      case 7 : dut->io_in_input_6 = u; break;
      case 8 : dut->io_in_input_7 = u; break;
      case 9 : dut->io_in_input_8 = u; break;
      case 10 : dut->io_in_input_9 = u; break;
      case 11 : dut->io_in_input_10 = u; break;
      case 12 : dut->io_in_input_11 = u; break;
      case 13 : dut->io_in_input_12 = u; break;
      case 14 : dut->io_in_input_13 = u; break;
      case 15 : dut->io_in_input_14 = u; break;
      case 16 : dut->io_in_input_15 = u; break;
      case 17 : dut->io_input_valid = u; break;
      case 18 : dut->io_input_tile_start = u; break;
      case 19 : dut->io_in_weight_0 = u; break;
      case 20 : dut->io_in_weight_1 = u; break;
      case 21 : dut->io_in_weight_2 = u; break;
      case 22 : dut->io_in_weight_3 = u; break;
      case 23 : dut->io_in_weight_4 = u; break;
      case 24 : dut->io_in_weight_5 = u; break;
      case 25 : dut->io_in_weight_6 = u; break;
      case 26 : dut->io_in_weight_7 = u; break;
      case 27 : dut->io_in_weight_8 = u; break;
      case 28 : dut->io_in_weight_9 = u; break;
      case 29 : dut->io_in_weight_10 = u; break;
      case 30 : dut->io_in_weight_11 = u; break;
      case 31 : dut->io_in_weight_12 = u; break;
      case 32 : dut->io_in_weight_13 = u; break;
      case 33 : dut->io_in_weight_14 = u; break;
      case 34 : dut->io_in_weight_15 = u; break;
      case 35 : dut->io_weight_valid = u; break;
      case 36 : dut->io_clear_W = u; break;
      case 37 : dut->io_intermNum = u; break;
      case 38 : dut->io_outColNum = u; break;
      case 39 : dut->io_stall = u; break;

    default:
      std::cerr << "Cannot find the object of id = " << id << std::endl;
      finish();
      break;
    }
  }
  inline int64_t peek(int32_t id) {
    uint64_t value = 0;
    switch(id) {
      case 0 : value = dut->reset; break;
      case 1 : value = dut->io_in_input_0; break;
      case 2 : value = dut->io_in_input_1; break;
      case 3 : value = dut->io_in_input_2; break;
      case 4 : value = dut->io_in_input_3; break;
      case 5 : value = dut->io_in_input_4; break;
      case 6 : value = dut->io_in_input_5; break;
      case 7 : value = dut->io_in_input_6; break;
      case 8 : value = dut->io_in_input_7; break;
      case 9 : value = dut->io_in_input_8; break;
      case 10 : value = dut->io_in_input_9; break;
      case 11 : value = dut->io_in_input_10; break;
      case 12 : value = dut->io_in_input_11; break;
      case 13 : value = dut->io_in_input_12; break;
      case 14 : value = dut->io_in_input_13; break;
      case 15 : value = dut->io_in_input_14; break;
      case 16 : value = dut->io_in_input_15; break;
      case 17 : value = dut->io_input_valid; break;
      case 18 : value = dut->io_input_tile_start; break;
      case 19 : value = dut->io_in_weight_0; break;
      case 20 : value = dut->io_in_weight_1; break;
      case 21 : value = dut->io_in_weight_2; break;
      case 22 : value = dut->io_in_weight_3; break;
      case 23 : value = dut->io_in_weight_4; break;
      case 24 : value = dut->io_in_weight_5; break;
      case 25 : value = dut->io_in_weight_6; break;
      case 26 : value = dut->io_in_weight_7; break;
      case 27 : value = dut->io_in_weight_8; break;
      case 28 : value = dut->io_in_weight_9; break;
      case 29 : value = dut->io_in_weight_10; break;
      case 30 : value = dut->io_in_weight_11; break;
      case 31 : value = dut->io_in_weight_12; break;
      case 32 : value = dut->io_in_weight_13; break;
      case 33 : value = dut->io_in_weight_14; break;
      case 34 : value = dut->io_in_weight_15; break;
      case 35 : value = dut->io_weight_valid; break;
      case 36 : value = dut->io_clear_W; break;
      case 37 : value = dut->io_intermNum; break;
      case 38 : value = dut->io_outColNum; break;
      case 39 : value = dut->io_stall; break;
      case 40 : value = dut->io_out_accum_0; break;
      case 41 : value = dut->io_out_accum_1; break;
      case 42 : value = dut->io_out_accum_2; break;
      case 43 : value = dut->io_out_accum_3; break;
      case 44 : value = dut->io_out_accum_4; break;
      case 45 : value = dut->io_out_accum_5; break;
      case 46 : value = dut->io_out_accum_6; break;
      case 47 : value = dut->io_out_accum_7; break;
      case 48 : value = dut->io_out_accum_8; break;
      case 49 : value = dut->io_out_accum_9; break;
      case 50 : value = dut->io_out_accum_10; break;
      case 51 : value = dut->io_out_accum_11; break;
      case 52 : value = dut->io_out_accum_12; break;
      case 53 : value = dut->io_out_accum_13; break;
      case 54 : value = dut->io_out_accum_14; break;
      case 55 : value = dut->io_out_accum_15; break;
      case 56 : value = dut->io_out_valid_0; break;
      case 57 : value = dut->io_out_valid_1; break;
      case 58 : value = dut->io_out_valid_2; break;
      case 59 : value = dut->io_out_valid_3; break;
      case 60 : value = dut->io_out_valid_4; break;
      case 61 : value = dut->io_out_valid_5; break;
      case 62 : value = dut->io_out_valid_6; break;
      case 63 : value = dut->io_out_valid_7; break;
      case 64 : value = dut->io_out_valid_8; break;
      case 65 : value = dut->io_out_valid_9; break;
      case 66 : value = dut->io_out_valid_10; break;
      case 67 : value = dut->io_out_valid_11; break;
      case 68 : value = dut->io_out_valid_12; break;
      case 69 : value = dut->io_out_valid_13; break;
      case 70 : value = dut->io_out_valid_14; break;
      case 71 : value = dut->io_out_valid_15; break;
      case 72 : value = dut->io_out_meta_row_change_update; break;
      case 73 : value = dut->io_fusion_req; break;
      case 74 : value = dut->io_fatal_alert; break;

    default:
      std::cerr << "Cannot find the object of id = " << id << std::endl;
      finish();
      return -1;
    }
    // std::cout << "peeking: " << std::hex << value << std::endl;
    return value;
  }
  inline void poke_wide(int32_t id, int32_t offset, int64_t value) {
    const uint64_t u = value;
    WData* data = nullptr;
    size_t words = 0;
    switch(id) {

    default:
      std::cerr << "Cannot find the object of id = " << id << std::endl;
      finish();
      break;
    }
    const size_t firstWord = offset * 2;
    const size_t secondWord = firstWord + 1;
    if(firstWord >= words || firstWord < 0) {
      std::cerr << "Out of bounds index for id = " << id << " index = " << offset << std::endl;
      finish();
    } else if(secondWord >= words) {
      data[firstWord] = u;
    } else {
      data[firstWord] = u & 0xffffffffu;
      data[secondWord] = (u >> 32) & 0xffffffffu;
    }
  }
  inline int64_t peek_wide(int32_t id, int32_t offset) {
    WData* data = nullptr;
    size_t words = 0;
    switch(id) {

    default:
      std::cerr << "Cannot find the object of id = " << id << std::endl;
      finish();
      return -1;
    }
    const size_t firstWord = offset * 2;
    const size_t secondWord = firstWord + 1;
    if(firstWord >= words || firstWord < 0) {
      std::cerr << "Out of bounds index for id = " << id << " index = " << offset << std::endl;
      finish();
      return -1;
    } else if(secondWord >= words) {
      return (uint64_t)data[firstWord];
    } else {
      return (((uint64_t)data[secondWord]) << 32) | ((uint64_t)data[firstWord]);
    }
  }

  inline void set_args(int32_t argc, const char** argv) {
    Verilated::commandArgs(argc, argv);
  }
};

static sim_state* create_sim_state() {
  sim_state *s = new sim_state();
  std::string dumpfile = R"(/workspace/lzero_01_rtl/test_run_dir/TPU_top_should_preserve_Ntile_and_Mgroup_metadata_under_multiK_accumulation/TPU_top.)";
  _startCoverageAndDump(&s->tfp, dumpfile, s->dut);
  return s;
}
// we only export the symbols that we prefixed with a unique id
#if defined _WIN32 || defined __CYGWIN__ || defined __MINGW32__ || defined __MINGW64__
#define _EXPORT __declspec(dllexport)
#else
#define _EXPORT __attribute__((visibility("default")))
#endif
extern "C" {

_EXPORT void* sim_init() {
  // void* ptr = create_sim_state();
  // std::cout << "native ptr: " << std::hex << ptr << std::endl;
  // return ptr;
  return (void*) create_sim_state();
}

_EXPORT int64_t step(void* s, int32_t cycles) {
  return ((sim_state*)s)->step(cycles);
}

_EXPORT void update(void* s) {
  ((sim_state*)s)->update();
}

_EXPORT void finish(void* s) {
  ((sim_state*)s)->finish();
}

_EXPORT void resetCoverage(void* s) {
  ((sim_state*)s)->resetCoverage();
}

_EXPORT void writeCoverage(void* s, const char* filename) {
  ((sim_state*)s)->writeCoverage(filename);
}

_EXPORT void poke(void* s, int32_t id, int64_t value) {
  ((sim_state*)s)->poke(id, value);
}

_EXPORT int64_t peek(void* s, int32_t id) {
  return ((sim_state*)s)->peek(id);
}

_EXPORT void poke_wide(void* s, int32_t id, int32_t offset, int64_t value) {
  ((sim_state*)s)->poke_wide(id, offset, value);
}

_EXPORT int64_t peek_wide(void* s, int32_t id, int32_t offset) {
  return ((sim_state*)s)->peek_wide(id, offset);
}

_EXPORT void set_args(void* s, int32_t argc, const char** argv) {
  ((sim_state*)s)->set_args(argc, argv);
}
} /* extern C */
