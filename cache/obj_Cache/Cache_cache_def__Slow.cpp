// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Cache.h for the primary calling header

#include "Cache_cache_def.h"
#include "Cache__Syms.h"

//==========

VL_CTOR_IMP(Cache_cache_def) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Cache_cache_def::__Vconfigure(Cache__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Cache_cache_def::~Cache_cache_def() {
}

void Cache_cache_def::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Cache_cache_def::_ctor_var_reset\n"); );
}
