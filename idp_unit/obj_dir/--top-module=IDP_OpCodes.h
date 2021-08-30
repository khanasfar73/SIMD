// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See --top-module=IDP.h for the primary calling header

#ifndef ___TOP_MODULE_IDP_OPCODES_H_
#define ___TOP_MODULE_IDP_OPCODES_H_  // guard

#include "verilated_heavy.h"

//==========

class --top-module=IDP__Syms;
class --top-module=IDP_VerilatedVcd;


//----------

VL_MODULE(--top-module=IDP_OpCodes) {
  public:
    
    // TYPEDEFS
    // That were declared public
    enum opcode {
        IADD = 0U,
        IMUL = 1U,
        IMAD = 2U
    };
    
    enum opcode_ldst {
        MOV = 0U,
        LD = 1U
    };
    
    enum opcode_fp {
        FMAD = 0U
    };
    
    enum opcode_sfu {
        SQRT = 0U,
        INV = 1U,
        INV_SQRT = 2U
    };
    
    // INTERNAL VARIABLES
  private:
    --top-module=IDP__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(--top-module=IDP_OpCodes);  ///< Copying not allowed
  public:
    --top-module=IDP_OpCodes(const char* name = "TOP");
    ~--top-module=IDP_OpCodes();
    
    // INTERNAL METHODS
    void __Vconfigure(--top-module=IDP__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
