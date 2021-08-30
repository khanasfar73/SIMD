// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See IDP.h for the primary calling header

#ifndef _IDP_OPCODES_H_
#define _IDP_OPCODES_H_  // guard

#include "verilated_heavy.h"

//==========

class IDP__Syms;
class IDP_VerilatedVcd;


//----------

VL_MODULE(IDP_OpCodes) {
  public:
    
    // TYPEDEFS
    // That were declared public
    enum opcode {
        RInt = 0x33U,
        RFloat = 0x43U,
        I = 0x13U,
        L = 3U,
        S = 0x23U,
        Branch = 0x63U,
        U = 0x37U
    };
    
    // INTERNAL VARIABLES
  private:
    IDP__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(IDP_OpCodes);  ///< Copying not allowed
  public:
    IDP_OpCodes(const char* name = "TOP");
    ~IDP_OpCodes();
    
    // INTERNAL METHODS
    void __Vconfigure(IDP__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
