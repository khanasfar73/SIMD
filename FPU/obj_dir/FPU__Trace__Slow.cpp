// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "FPU__Syms.h"


//======================

void FPU::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void FPU::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    FPU__Syms* __restrict vlSymsp = static_cast<FPU__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    FPU::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void FPU::traceInitTop(void* userp, VerilatedVcd* tracep) {
    FPU__Syms* __restrict vlSymsp = static_cast<FPU__Syms*>(userp);
    FPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void FPU::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    FPU__Syms* __restrict vlSymsp = static_cast<FPU__Syms*>(userp);
    FPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"FPU_Out", false,-1, 15,0);
        tracep->declBus(c+2,"A", false,-1, 15,0);
        tracep->declBus(c+3,"B", false,-1, 15,0);
        tracep->declBus(c+4,"C", false,-1, 15,0);
        tracep->declBus(c+5,"OP", false,-1, 2,0);
        tracep->declBit(c+6,"clk", false,-1);
        tracep->declBus(c+1,"FPU FPU_Out", false,-1, 15,0);
        tracep->declBus(c+2,"FPU A", false,-1, 15,0);
        tracep->declBus(c+3,"FPU B", false,-1, 15,0);
        tracep->declBus(c+4,"FPU C", false,-1, 15,0);
        tracep->declBus(c+5,"FPU OP", false,-1, 2,0);
        tracep->declBit(c+6,"FPU clk", false,-1);
        tracep->declBus(c+7,"FPU FPU_Result", false,-1, 15,0);
        tracep->declBus(c+8,"OpCodes NSIG", false,-1, 31,0);
        tracep->declBus(c+9,"OpCodes NBITS", false,-1, 31,0);
        tracep->declBus(c+10,"OpCodes ADDR_BITS_REGF", false,-1, 31,0);
        tracep->declBus(c+11,"OpCodes READ_PORTS_REGF", false,-1, 31,0);
        tracep->declBus(c+10,"OpCodes WRITE_PORTS_REGF", false,-1, 31,0);
        tracep->declBus(c+10,"OpCodes INTU_CORES", false,-1, 31,0);
        tracep->declBus(c+10,"OpCodes REG_PER_THREAD", false,-1, 31,0);
    }
}

void FPU::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void FPU::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    FPU__Syms* __restrict vlSymsp = static_cast<FPU__Syms*>(userp);
    FPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void FPU::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    FPU__Syms* __restrict vlSymsp = static_cast<FPU__Syms*>(userp);
    FPU* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlTOPp->FPU_Out),16);
        tracep->fullSData(oldp+2,(vlTOPp->A),16);
        tracep->fullSData(oldp+3,(vlTOPp->B),16);
        tracep->fullSData(oldp+4,(vlTOPp->C),16);
        tracep->fullCData(oldp+5,(vlTOPp->OP),3);
        tracep->fullBit(oldp+6,(vlTOPp->clk));
        tracep->fullSData(oldp+7,(vlTOPp->FPU__DOT__FPU_Result),16);
        tracep->fullIData(oldp+8,(0xfU),32);
        tracep->fullIData(oldp+9,(0x10U),32);
        tracep->fullIData(oldp+10,(4U),32);
        tracep->fullIData(oldp+11,(8U),32);
    }
}
