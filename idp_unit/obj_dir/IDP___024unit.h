// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See IDP.h for the primary calling header

#ifndef _IDP___024UNIT_H_
#define _IDP___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class IDP__Syms;
class IDP_VerilatedVcd;


//----------

VL_MODULE(IDP___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    IDP__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(IDP___024unit);  ///< Copying not allowed
  public:
    IDP___024unit(const char* name = "TOP");
    ~IDP___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(IDP__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
