// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See EB.h for the primary calling header

#ifndef _EB_OPCODES_H_
#define _EB_OPCODES_H_  // guard

#include "verilated_heavy.h"

//==========

class EB__Syms;
class EB_VerilatedVcd;


//----------

VL_MODULE(EB_OpCodes) {
  public:
    
    // TYPEDEFS
    // That were declared public
    enum opcode {
        LD = 0U,
        IADD = 1U,
        IMUL = 2U,
        IMAD = 3U
    };
    
    enum opcode_fp {
        FMAD = 0U
    };
    
    // INTERNAL VARIABLES
  private:
    EB__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(EB_OpCodes);  ///< Copying not allowed
  public:
    EB_OpCodes(const char* name = "TOP");
    ~EB_OpCodes();
    
    // INTERNAL METHODS
    void __Vconfigure(EB__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
