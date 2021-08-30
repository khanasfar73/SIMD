// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Regfile.h for the primary calling header

#ifndef _REGFILE_OPCODES_H_
#define _REGFILE_OPCODES_H_  // guard

#include "verilated_heavy.h"

//==========

class Regfile__Syms;
class Regfile_VerilatedVcd;


//----------

VL_MODULE(Regfile_OpCodes) {
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
    Regfile__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Regfile_OpCodes);  ///< Copying not allowed
  public:
    Regfile_OpCodes(const char* name = "TOP");
    ~Regfile_OpCodes();
    
    // INTERNAL METHODS
    void __Vconfigure(Regfile__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
