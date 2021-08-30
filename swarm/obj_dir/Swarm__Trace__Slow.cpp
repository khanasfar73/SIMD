// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Swarm__Syms.h"


//======================

void Swarm::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Swarm::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Swarm__Syms* __restrict vlSymsp = static_cast<Swarm__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Swarm::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Swarm::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Swarm__Syms* __restrict vlSymsp = static_cast<Swarm__Syms*>(userp);
    Swarm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Swarm::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Swarm__Syms* __restrict vlSymsp = static_cast<Swarm__Syms*>(userp);
    Swarm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"O", false,-1);
        tracep->declBit(c+2,"clk", false,-1);
        tracep->declBit(c+1,"Swarm O", false,-1);
        tracep->declBit(c+2,"Swarm clk", false,-1);
        tracep->declBus(c+3,"OpCodes NSIG", false,-1, 31,0);
        tracep->declBus(c+4,"OpCodes NBITS", false,-1, 31,0);
        tracep->declBus(c+5,"OpCodes ADDR_BITS_REGF", false,-1, 31,0);
        tracep->declBus(c+6,"OpCodes READ_PORTS_REGF", false,-1, 31,0);
        tracep->declBus(c+5,"OpCodes WRITE_PORTS_REGF", false,-1, 31,0);
        tracep->declBus(c+5,"OpCodes INTU_CORES", false,-1, 31,0);
        tracep->declBus(c+5,"OpCodes REG_PER_THREAD", false,-1, 31,0);
    }
}

void Swarm::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Swarm::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Swarm__Syms* __restrict vlSymsp = static_cast<Swarm__Syms*>(userp);
    Swarm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Swarm::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Swarm__Syms* __restrict vlSymsp = static_cast<Swarm__Syms*>(userp);
    Swarm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->O));
        tracep->fullBit(oldp+2,(vlTOPp->clk));
        tracep->fullIData(oldp+3,(0xfU),32);
        tracep->fullIData(oldp+4,(0x10U),32);
        tracep->fullIData(oldp+5,(4U),32);
        tracep->fullIData(oldp+6,(8U),32);
    }
}
