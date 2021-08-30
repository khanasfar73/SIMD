// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Cache.h for the primary calling header

#ifndef _CACHE___024UNIT_H_
#define _CACHE___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Cache__Syms;
class Cache_VerilatedVcd;


//----------

VL_MODULE(Cache___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Cache__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Cache___024unit);  ///< Copying not allowed
  public:
    Cache___024unit(const char* name = "TOP");
    ~Cache___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(Cache__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
