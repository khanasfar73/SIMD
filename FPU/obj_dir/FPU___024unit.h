// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See FPU.h for the primary calling header

#ifndef _FPU___024UNIT_H_
#define _FPU___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class FPU__Syms;
class FPU_VerilatedVcd;


//----------

VL_MODULE(FPU___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    FPU__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(FPU___024unit);  ///< Copying not allowed
  public:
    FPU___024unit(const char* name = "TOP");
    ~FPU___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(FPU__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
