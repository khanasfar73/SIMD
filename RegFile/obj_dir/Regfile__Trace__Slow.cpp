// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Regfile__Syms.h"


//======================

void Regfile::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Regfile::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Regfile__Syms* __restrict vlSymsp = static_cast<Regfile__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Regfile::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Regfile::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Regfile__Syms* __restrict vlSymsp = static_cast<Regfile__Syms*>(userp);
    Regfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Regfile::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Regfile__Syms* __restrict vlSymsp = static_cast<Regfile__Syms*>(userp);
    Regfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+19+i*1,"r_data", true,(i+0), 15,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+27+i*1,"w_addr", true,(i+0), 3,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+35+i*1,"r_addr", true,(i+0), 3,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+43+i*1,"w_data", true,(i+0), 15,0);}}
        tracep->declBit(c+51,"wr_en", false,-1);
        tracep->declBit(c+52,"clk", false,-1);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+19+i*1,"Regfile r_data", true,(i+0), 15,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+27+i*1,"Regfile w_addr", true,(i+0), 3,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+35+i*1,"Regfile r_addr", true,(i+0), 3,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+43+i*1,"Regfile w_data", true,(i+0), 15,0);}}
        tracep->declBit(c+51,"Regfile wr_en", false,-1);
        tracep->declBit(c+52,"Regfile clk", false,-1);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+1+i*1,"Regfile reg_array", true,(i+0), 15,0);}}
        tracep->declBus(c+17,"Regfile unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+18,"Regfile unnamedblk2 i", false,-1, 15,0);
        tracep->declBus(c+53,"OpCodes NSIG", false,-1, 31,0);
        tracep->declBus(c+54,"OpCodes NBITS", false,-1, 31,0);
        tracep->declBus(c+55,"OpCodes ADDR_BITS_REGF", false,-1, 31,0);
        tracep->declBus(c+56,"OpCodes READ_PORTS_REGF", false,-1, 31,0);
        tracep->declBus(c+56,"OpCodes WRITE_PORTS_REGF", false,-1, 31,0);
        tracep->declBus(c+55,"OpCodes INTU_CORES", false,-1, 31,0);
        tracep->declBus(c+55,"OpCodes REG_PER_THREAD", false,-1, 31,0);
        tracep->declBus(c+56,"OpCodes REGLD_PER_CLK", false,-1, 31,0);
    }
}

void Regfile::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Regfile::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Regfile__Syms* __restrict vlSymsp = static_cast<Regfile__Syms*>(userp);
    Regfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Regfile::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Regfile__Syms* __restrict vlSymsp = static_cast<Regfile__Syms*>(userp);
    Regfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlTOPp->Regfile__DOT__reg_array[0]),16);
        tracep->fullSData(oldp+2,(vlTOPp->Regfile__DOT__reg_array[1]),16);
        tracep->fullSData(oldp+3,(vlTOPp->Regfile__DOT__reg_array[2]),16);
        tracep->fullSData(oldp+4,(vlTOPp->Regfile__DOT__reg_array[3]),16);
        tracep->fullSData(oldp+5,(vlTOPp->Regfile__DOT__reg_array[4]),16);
        tracep->fullSData(oldp+6,(vlTOPp->Regfile__DOT__reg_array[5]),16);
        tracep->fullSData(oldp+7,(vlTOPp->Regfile__DOT__reg_array[6]),16);
        tracep->fullSData(oldp+8,(vlTOPp->Regfile__DOT__reg_array[7]),16);
        tracep->fullSData(oldp+9,(vlTOPp->Regfile__DOT__reg_array[8]),16);
        tracep->fullSData(oldp+10,(vlTOPp->Regfile__DOT__reg_array[9]),16);
        tracep->fullSData(oldp+11,(vlTOPp->Regfile__DOT__reg_array[10]),16);
        tracep->fullSData(oldp+12,(vlTOPp->Regfile__DOT__reg_array[11]),16);
        tracep->fullSData(oldp+13,(vlTOPp->Regfile__DOT__reg_array[12]),16);
        tracep->fullSData(oldp+14,(vlTOPp->Regfile__DOT__reg_array[13]),16);
        tracep->fullSData(oldp+15,(vlTOPp->Regfile__DOT__reg_array[14]),16);
        tracep->fullSData(oldp+16,(vlTOPp->Regfile__DOT__reg_array[15]),16);
        tracep->fullIData(oldp+17,(vlTOPp->Regfile__DOT__unnamedblk1__DOT__j),32);
        tracep->fullSData(oldp+18,(vlTOPp->Regfile__DOT__unnamedblk2__DOT__i),16);
        tracep->fullSData(oldp+19,(vlTOPp->r_data[0]),16);
        tracep->fullSData(oldp+20,(vlTOPp->r_data[1]),16);
        tracep->fullSData(oldp+21,(vlTOPp->r_data[2]),16);
        tracep->fullSData(oldp+22,(vlTOPp->r_data[3]),16);
        tracep->fullSData(oldp+23,(vlTOPp->r_data[4]),16);
        tracep->fullSData(oldp+24,(vlTOPp->r_data[5]),16);
        tracep->fullSData(oldp+25,(vlTOPp->r_data[6]),16);
        tracep->fullSData(oldp+26,(vlTOPp->r_data[7]),16);
        tracep->fullCData(oldp+27,(vlTOPp->w_addr[0]),4);
        tracep->fullCData(oldp+28,(vlTOPp->w_addr[1]),4);
        tracep->fullCData(oldp+29,(vlTOPp->w_addr[2]),4);
        tracep->fullCData(oldp+30,(vlTOPp->w_addr[3]),4);
        tracep->fullCData(oldp+31,(vlTOPp->w_addr[4]),4);
        tracep->fullCData(oldp+32,(vlTOPp->w_addr[5]),4);
        tracep->fullCData(oldp+33,(vlTOPp->w_addr[6]),4);
        tracep->fullCData(oldp+34,(vlTOPp->w_addr[7]),4);
        tracep->fullCData(oldp+35,(vlTOPp->r_addr[0]),4);
        tracep->fullCData(oldp+36,(vlTOPp->r_addr[1]),4);
        tracep->fullCData(oldp+37,(vlTOPp->r_addr[2]),4);
        tracep->fullCData(oldp+38,(vlTOPp->r_addr[3]),4);
        tracep->fullCData(oldp+39,(vlTOPp->r_addr[4]),4);
        tracep->fullCData(oldp+40,(vlTOPp->r_addr[5]),4);
        tracep->fullCData(oldp+41,(vlTOPp->r_addr[6]),4);
        tracep->fullCData(oldp+42,(vlTOPp->r_addr[7]),4);
        tracep->fullSData(oldp+43,(vlTOPp->w_data[0]),16);
        tracep->fullSData(oldp+44,(vlTOPp->w_data[1]),16);
        tracep->fullSData(oldp+45,(vlTOPp->w_data[2]),16);
        tracep->fullSData(oldp+46,(vlTOPp->w_data[3]),16);
        tracep->fullSData(oldp+47,(vlTOPp->w_data[4]),16);
        tracep->fullSData(oldp+48,(vlTOPp->w_data[5]),16);
        tracep->fullSData(oldp+49,(vlTOPp->w_data[6]),16);
        tracep->fullSData(oldp+50,(vlTOPp->w_data[7]),16);
        tracep->fullBit(oldp+51,(vlTOPp->wr_en));
        tracep->fullBit(oldp+52,(vlTOPp->clk));
        tracep->fullIData(oldp+53,(0xfU),32);
        tracep->fullIData(oldp+54,(0x10U),32);
        tracep->fullIData(oldp+55,(4U),32);
        tracep->fullIData(oldp+56,(8U),32);
    }
}
