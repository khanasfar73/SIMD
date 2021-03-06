// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _LDST_H_
#define _LDST_H_  // guard

#include "verilated_heavy.h"

//==========

class LDST__Syms;
class LDST_VerilatedVcd;
class LDST_OpCodes;


//----------

VL_MODULE(LDST) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    LDST_OpCodes* __PVT__OpCodes;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_OUT16(Load_o[8],15,0);
    VL_OUT16(Store_o[8],15,0);
    VL_IN16(Load_i[8],15,0);
    VL_IN16(Store_i[8],15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    IData/*31:0*/ LDST__DOT__load_unit__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ LDST__DOT__store_unit__DOT__unnamedblk1__DOT__i;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*15:0*/ LDST__DOT____Vcellinp__load_unit____pinNumber2[8];
    SData/*15:0*/ LDST__DOT____Vcellout__load_unit____pinNumber1[8];
    SData/*15:0*/ LDST__DOT____Vcellinp__store_unit____pinNumber2[8];
    SData/*15:0*/ LDST__DOT____Vcellout__store_unit____pinNumber1[8];
    CData/*0:0*/ __Vm_traceActivity[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    LDST__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(LDST);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    LDST(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~LDST();
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
    static void _eval_initial_loop(LDST__Syms* __restrict vlSymsp);
    void __Vconfigure(LDST__Syms* symsp, bool first);
  private:
    static QData _change_request(LDST__Syms* __restrict vlSymsp);
    static QData _change_request_1(LDST__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(LDST__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(LDST__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(LDST__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(LDST__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(LDST__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(LDST__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
