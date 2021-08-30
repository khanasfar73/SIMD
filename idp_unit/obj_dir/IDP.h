// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _IDP_H_
#define _IDP_H_  // guard

#include "verilated_heavy.h"

//==========

class IDP__Syms;
class IDP_VerilatedVcd;


//----------

VL_MODULE(IDP) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_OUT8(f3_o,2,0);
    VL_OUT8(f2_o,1,0);
    VL_OUT8(f5_o,4,0);
    VL_OUT8(stride_o,4,0);
    VL_IN8(WarpID_in,5,0);
    VL_IN8(thread_mask_in,3,0);
    VL_OUT16(mem_offset_o,11,0);
    VL_IN(Inst_in,31,0);
    VL_OUT8(alu_select_o[4],0,0);
    VL_OUT8(rd_addr_o[8],3,0);
    VL_OUT8(rs1_addr_o[4],3,0);
    VL_OUT8(rs2_addr_o[4],3,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    IData/*31:0*/ IDP__DOT__IDP__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ IDP__DOT__IDP__DOT__unnamedblk2__DOT__i;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vm_traceActivity[1];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    IDP__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(IDP);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    IDP(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~IDP();
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
    static void _eval_initial_loop(IDP__Syms* __restrict vlSymsp);
    void __Vconfigure(IDP__Syms* symsp, bool first);
  private:
    static QData _change_request(IDP__Syms* __restrict vlSymsp);
    static QData _change_request_1(IDP__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(IDP__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(IDP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(IDP__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(IDP__Syms* __restrict vlSymsp);
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