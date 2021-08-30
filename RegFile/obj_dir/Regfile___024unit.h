// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Regfile.h for the primary calling header

#ifndef _REGFILE___024UNIT_H_
#define _REGFILE___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Regfile__Syms;
class Regfile_VerilatedVcd;


//----------

VL_MODULE(Regfile___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Regfile__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Regfile___024unit);  ///< Copying not allowed
  public:
    Regfile___024unit(const char* name = "TOP");
    ~Regfile___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(Regfile__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
