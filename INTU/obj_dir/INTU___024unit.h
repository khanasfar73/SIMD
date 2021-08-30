// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See INTU.h for the primary calling header

#ifndef _INTU___024UNIT_H_
#define _INTU___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class INTU__Syms;
class INTU_VerilatedVcd;


//----------

VL_MODULE(INTU___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    INTU__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(INTU___024unit);  ///< Copying not allowed
  public:
    INTU___024unit(const char* name = "TOP");
    ~INTU___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(INTU__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
