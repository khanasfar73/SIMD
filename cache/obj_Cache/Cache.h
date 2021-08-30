// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _CACHE_H_
#define _CACHE_H_  // guard

#include "verilated_heavy.h"

//==========

class Cache__Syms;
class Cache_VerilatedVcd;
class Cache_OpCodes;
class Cache_cache_def;


//----------

VL_MODULE(Cache) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Cache_OpCodes* __PVT__OpCodes;
    Cache_cache_def* __PVT__cache_def;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN16(data_req,10,0);
    VL_OUTW(data_read,127,0,4);
    VL_INW(data_write,127,0,4);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    WData/*131071:0*/ Cache__DOT__data_mem[4096];
    IData/*31:0*/ Cache__DOT__unnamedblk1__DOT__i;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Cache__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Cache);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Cache(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Cache();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
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
    
    // INTERNAL METHODS
    static void _eval_initial_loop(Cache__Syms* __restrict vlSymsp);
    void __Vconfigure(Cache__Syms* symsp, bool first);
  private:
    static QData _change_request(Cache__Syms* __restrict vlSymsp);
    static QData _change_request_1(Cache__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Cache__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Cache__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Cache__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Cache__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Cache__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Cache__Syms* __restrict vlSymsp);
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
