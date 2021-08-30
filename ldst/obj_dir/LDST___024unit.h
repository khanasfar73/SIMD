// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See LDST.h for the primary calling header

#ifndef _LDST___024UNIT_H_
#define _LDST___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class LDST__Syms;
class LDST_VerilatedVcd;


//----------

VL_MODULE(LDST___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    LDST__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(LDST___024unit);  ///< Copying not allowed
  public:
    LDST___024unit(const char* name = "TOP");
    ~LDST___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(LDST__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
