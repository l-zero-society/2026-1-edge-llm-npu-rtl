# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VComputeUnit.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 1
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VComputeUnit \
	VComputeUnit___024root__DepSet_hbf3c279a__0 \
	VComputeUnit___024root__DepSet_hbf3c279a__1 \
	VComputeUnit___024root__DepSet_hbf3c279a__2 \
	VComputeUnit___024root__DepSet_hbf3c279a__3 \
	VComputeUnit___024root__DepSet_hbf3c279a__4 \
	VComputeUnit___024root__DepSet_h7fd68f8a__0 \
	VComputeUnit_TransposerUnit__DepSet_hdc10289a__0 \
	VComputeUnit_TransposerUnit__DepSet_hdc10289a__1 \
	VComputeUnit_Accum_buffer__DepSet_h265611f5__0 \
	VComputeUnit_QuantActCore__DepSet_h262f5f5c__0 \
	VComputeUnit_QuantActCore__DepSet_h5224a2b0__0 \
	VComputeUnit_Universal_Wide_LUT_16__DepSet_hd3547f1c__0 \
	VComputeUnit_Universal_Wide_LUT_16__DepSet_hd3547f1c__1 \
	VComputeUnit_RopePairCore__DepSet_hea819d62__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VComputeUnit__ConstPool_0 \
	VComputeUnit___024root__Slow \
	VComputeUnit___024root__DepSet_hbf3c279a__0__Slow \
	VComputeUnit___024root__DepSet_hbf3c279a__1__Slow \
	VComputeUnit___024root__DepSet_hbf3c279a__2__Slow \
	VComputeUnit___024root__DepSet_h7fd68f8a__0__Slow \
	VComputeUnit_TransposerUnit__Slow \
	VComputeUnit_TransposerUnit__DepSet_hc035c0a4__0__Slow \
	VComputeUnit_TransposerUnit__DepSet_hdc10289a__0__Slow \
	VComputeUnit_Accum_buffer__Slow \
	VComputeUnit_Accum_buffer__DepSet_heeba5580__0__Slow \
	VComputeUnit_Accum_buffer__DepSet_h265611f5__0__Slow \
	VComputeUnit_QuantActCore__Slow \
	VComputeUnit_QuantActCore__DepSet_h262f5f5c__0__Slow \
	VComputeUnit_QuantActCore__DepSet_h5224a2b0__0__Slow \
	VComputeUnit_Universal_Wide_LUT_16__Slow \
	VComputeUnit_Universal_Wide_LUT_16__DepSet_h07cffcd6__0__Slow \
	VComputeUnit_RopePairCore__Slow \
	VComputeUnit_RopePairCore__DepSet_hefaa6444__0__Slow \
	VComputeUnit_RopePairCore__DepSet_hea819d62__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VComputeUnit__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_cov \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
