// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See EB.h for the primary calling header

#ifndef _EB___024UNIT_H_
#define _EB___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class EB__Syms;
class EB_VerilatedVcd;


//----------

VL_MODULE(EB___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    EB__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(EB___024unit);  ///< Copying not allowed
  public:
    EB___024unit(const char* name = "TOP");
    ~EB___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(EB__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
