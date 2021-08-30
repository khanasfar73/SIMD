// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef ___TOP_MODULE_IDP__SYMS_H_
#define ___TOP_MODULE_IDP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "--top-module=IDP.h"
#include "--top-module=IDP___024unit.h"
#include "--top-module=IDP_OpCodes.h"

// SYMS CLASS
class --top-module=IDP__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    --top-module=IDP*              TOPp;
    
    // CREATORS
    --top-module=IDP__Syms(--top-module=IDP* topp, const char* namep);
    ~--top-module=IDP__Syms();
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
