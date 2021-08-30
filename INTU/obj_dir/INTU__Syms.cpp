// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "INTU__Syms.h"
#include "INTU.h"
#include "INTU___024unit.h"
#include "INTU_OpCodes.h"



// FUNCTIONS
INTU__Syms::~INTU__Syms()
{
}

INTU__Syms::INTU__Syms(INTU* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
