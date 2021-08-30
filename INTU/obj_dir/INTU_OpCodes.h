// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See INTU.h for the primary calling header

#ifndef _INTU_OPCODES_H_
#define _INTU_OPCODES_H_  // guard

#include "verilated_heavy.h"

//==========

class INTU__Syms;
class INTU_VerilatedVcd;


//----------

VL_MODULE(INTU_OpCodes) {
  public:
    
    // TYPEDEFS
    // That were declared public
    enum opcode_int {
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
    INTU__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(INTU_OpCodes);  ///< Copying not allowed
  public:
    INTU_OpCodes(const char* name = "TOP");
    ~INTU_OpCodes();
    
    // INTERNAL METHODS
    void __Vconfigure(INTU__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
