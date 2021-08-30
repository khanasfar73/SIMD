// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Cache__Syms.h"


//======================

void Cache::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Cache::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Cache__Syms* __restrict vlSymsp = static_cast<Cache__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Cache::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Cache::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Cache__Syms* __restrict vlSymsp = static_cast<Cache__Syms*>(userp);
    Cache* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Cache::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Cache__Syms* __restrict vlSymsp = static_cast<Cache__Syms*>(userp);
    Cache* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declArray(c+4098,"data_read", false,-1, 127,0);
        tracep->declBus(c+4102,"data_req", false,-1, 10,0);
        tracep->declArray(c+4103,"data_write", false,-1, 127,0);
        tracep->declBit(c+4107,"clk", false,-1);
        tracep->declArray(c+4098,"Cache data_read", false,-1, 127,0);
        tracep->declBus(c+4102,"Cache data_req", false,-1, 10,0);
        tracep->declArray(c+4103,"Cache data_write", false,-1, 127,0);
        tracep->declBit(c+4107,"Cache clk", false,-1);
        tracep->declArray(c+2,"Cache data_mem", false,-1, 131071,0);
        tracep->declBus(c+1,"Cache unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+4108,"OpCodes NSIG", false,-1, 31,0);
        tracep->declBus(c+4109,"OpCodes NBITS", false,-1, 31,0);
        tracep->declBus(c+4110,"OpCodes ADDR_BITS_REGF", false,-1, 31,0);
        tracep->declBus(c+4111,"OpCodes READ_PORTS_REGF", false,-1, 31,0);
        tracep->declBus(c+4110,"OpCodes WRITE_PORTS_REGF", false,-1, 31,0);
        tracep->declBus(c+4110,"OpCodes INTU_CORES", false,-1, 31,0);
        tracep->declBus(c+4110,"OpCodes REG_PER_THREAD", false,-1, 31,0);
        tracep->declBus(c+4111,"OpCodes REGLD_PER_CLK", false,-1, 31,0);
        tracep->declBus(c+4112,"cache_def TAGMSB", false,-1, 31,0);
        tracep->declBus(c+4113,"cache_def TAGLSB", false,-1, 31,0);
    }
}

void Cache::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Cache::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Cache__Syms* __restrict vlSymsp = static_cast<Cache__Syms*>(userp);
    Cache* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Cache::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Cache__Syms* __restrict vlSymsp = static_cast<Cache__Syms*>(userp);
    Cache* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlTOPp->Cache__DOT__unnamedblk1__DOT__i),32);
        tracep->fullWData(oldp+2,(vlTOPp->Cache__DOT__data_mem),131072);
        tracep->fullWData(oldp+4098,(vlTOPp->data_read),128);
        tracep->fullSData(oldp+4102,(vlTOPp->data_req),11);
        tracep->fullWData(oldp+4103,(vlTOPp->data_write),128);
        tracep->fullBit(oldp+4107,(vlTOPp->clk));
        tracep->fullIData(oldp+4108,(0xfU),32);
        tracep->fullIData(oldp+4109,(0x10U),32);
        tracep->fullIData(oldp+4110,(4U),32);
        tracep->fullIData(oldp+4111,(8U),32);
        tracep->fullIData(oldp+4112,(0x1fU),32);
        tracep->fullIData(oldp+4113,(0xeU),32);
    }
}
