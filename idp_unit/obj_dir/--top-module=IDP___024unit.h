// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See --top-module=IDP.h for the primary calling header

#ifndef ___TOP_MODULE_IDP___024UNIT_H_
#define ___TOP_MODULE_IDP___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class --top-module=IDP__Syms;
class --top-module=IDP_VerilatedVcd;


//----------

VL_MODULE(--top-module=IDP___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    --top-module=IDP__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(--top-module=IDP___024unit);  ///< Copying not allowed
  public:
    --top-module=IDP___024unit(const char* name = "TOP");
    ~--top-module=IDP___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(--top-module=IDP__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
