// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _REGFILE_H_
#define _REGFILE_H_  // guard

#include "verilated_heavy.h"

//==========

class Regfile__Syms;
class Regfile_VerilatedVcd;
class Regfile_OpCodes;


//----------

VL_MODULE(Regfile) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Regfile_OpCodes* __PVT__OpCodes;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(wr_en,0,0);
    VL_OUT16(r_data[8],15,0);
    VL_IN8(w_addr[8],3,0);
    VL_IN8(r_addr[8],3,0);
    VL_IN16(w_data[8],15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    SData/*15:0*/ Regfile__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ Regfile__DOT__unnamedblk1__DOT__j;
    SData/*15:0*/ Regfile__DOT__reg_array[16];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Regfile__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Regfile);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Regfile(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Regfile();
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
    static void _eval_initial_loop(Regfile__Syms* __restrict vlSymsp);
    void __Vconfigure(Regfile__Syms* symsp, bool first);
  private:
    static QData _change_request(Regfile__Syms* __restrict vlSymsp);
    static QData _change_request_1(Regfile__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Regfile__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Regfile__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Regfile__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Regfile__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__2(Regfile__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Regfile__Syms* __restrict vlSymsp);
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
