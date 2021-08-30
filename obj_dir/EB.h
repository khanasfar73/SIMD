// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _EB_H_
#define _EB_H_  // guard

#include "verilated_heavy.h"

//==========

class EB__Syms;
class EB_VerilatedVcd;
class EB_OpCodes;


//----------

VL_MODULE(EB) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    EB_OpCodes* __PVT__OpCodes;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(OP,6,0);
    VL_IN8(wr_en,0,0);
    VL_IN8(feed_data,0,0);
    VL_OUT16(Result_out[8],15,0);
    VL_IN16(Input_in[8],15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    SData/*15:0*/ EB__DOT__idp__DOT__unnamedblk1__DOT__i;
    SData/*15:0*/ EB__DOT__idp__DOT__IDP__DOT__unnamedblk2__DOT__i;
    SData/*15:0*/ EB__DOT__rf__DOT__unnamedblk2__DOT__i;
    SData/*15:0*/ EB__DOT__genblk2__BRA__0__KET____DOT__int_unit__DOT__ALU_Result;
    SData/*15:0*/ EB__DOT__genblk2__BRA__1__KET____DOT__int_unit__DOT__ALU_Result;
    SData/*15:0*/ EB__DOT__genblk2__BRA__2__KET____DOT__int_unit__DOT__ALU_Result;
    SData/*15:0*/ EB__DOT__genblk2__BRA__3__KET____DOT__int_unit__DOT__ALU_Result;
    IData/*31:0*/ EB__DOT__rf__DOT__unnamedblk1__DOT__j;
    IData/*31:0*/ EB__DOT__ldst1__DOT__load_unit__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ EB__DOT__ldst1__DOT__store_unit__DOT__unnamedblk1__DOT__i;
    SData/*15:0*/ EB__DOT__w_data[8];
    SData/*15:0*/ EB__DOT__Load_data[8];
    SData/*15:0*/ EB__DOT__alu_out_w[4];
    SData/*15:0*/ EB__DOT__to_mem_w[8];
    CData/*3:0*/ EB__DOT__w_addr[8];
    CData/*3:0*/ EB__DOT__r_addr[8];
    SData/*15:0*/ EB__DOT__rf__DOT__reg_array[16];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*3:0*/ EB__DOT____Vcellout__idp__r_addr_o[8];
    CData/*3:0*/ EB__DOT____Vcellout__idp__w_addr_o[8];
    SData/*15:0*/ EB__DOT____Vcellinp__rf__w_data[8];
    CData/*3:0*/ EB__DOT____Vcellinp__rf__r_addr[8];
    CData/*3:0*/ EB__DOT____Vcellinp__rf__w_addr[8];
    SData/*15:0*/ EB__DOT____Vcellout__rf__r_data[8];
    SData/*15:0*/ EB__DOT____Vcellinp__ldst1__Store_i[8];
    SData/*15:0*/ EB__DOT____Vcellout__ldst1__Store_o[8];
    SData/*15:0*/ EB__DOT____Vcellinp__ldst1__Load_i[8];
    SData/*15:0*/ EB__DOT____Vcellout__ldst1__Load_o[8];
    SData/*15:0*/ EB__DOT__ldst1__DOT____Vcellinp__load_unit____pinNumber2[8];
    SData/*15:0*/ EB__DOT__ldst1__DOT____Vcellout__load_unit____pinNumber1[8];
    SData/*15:0*/ EB__DOT__ldst1__DOT____Vcellinp__store_unit____pinNumber2[8];
    SData/*15:0*/ EB__DOT__ldst1__DOT____Vcellout__store_unit____pinNumber1[8];
    CData/*0:0*/ __Vm_traceActivity[4];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    EB__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(EB);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    EB(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~EB();
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
    static void _eval_initial_loop(EB__Syms* __restrict vlSymsp);
    void __Vconfigure(EB__Syms* symsp, bool first);
  private:
    static QData _change_request(EB__Syms* __restrict vlSymsp);
    static QData _change_request_1(EB__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(EB__Syms* __restrict vlSymsp);
    static void _combo__TOP__6(EB__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(EB__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(EB__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(EB__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(EB__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(EB__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(EB__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(EB__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
