// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "EB__Syms.h"
#include "EB.h"
#include "EB___024unit.h"
#include "EB_OpCodes.h"



// FUNCTIONS
EB__Syms::~EB__Syms()
{
}

EB__Syms::EB__Syms(EB* topp, const char* namep)
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
