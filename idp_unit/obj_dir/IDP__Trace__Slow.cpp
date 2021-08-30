// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "IDP__Syms.h"


//======================

void IDP::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void IDP::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    IDP__Syms* __restrict vlSymsp = static_cast<IDP__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    IDP::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void IDP::traceInitTop(void* userp, VerilatedVcd* tracep) {
    IDP__Syms* __restrict vlSymsp = static_cast<IDP__Syms*>(userp);
    IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void IDP::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    IDP__Syms* __restrict vlSymsp = static_cast<IDP__Syms*>(userp);
    IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        {int i; for (i=0; i<4; i++) {
                tracep->declBit(c+1+i*1,"alu_select_o", true,(i+0));}}
        tracep->declBus(c+5,"f3_o", false,-1, 2,0);
        tracep->declBus(c+6,"f2_o", false,-1, 1,0);
        tracep->declBus(c+7,"f5_o", false,-1, 4,0);
        tracep->declBus(c+8,"mem_offset_o", false,-1, 11,0);
        tracep->declBus(c+9,"stride_o", false,-1, 4,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+10+i*1,"rd_addr_o", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+18+i*1,"rs1_addr_o", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+22+i*1,"rs2_addr_o", true,(i+0), 3,0);}}
        tracep->declBus(c+26,"Inst_in", false,-1, 31,0);
        tracep->declBus(c+27,"WarpID_in", false,-1, 5,0);
        tracep->declBus(c+28,"thread_mask_in", false,-1, 3,0);
        tracep->declBit(c+29,"clk", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declBit(c+1+i*1,"IDP alu_select_o", true,(i+0));}}
        tracep->declBus(c+5,"IDP f3_o", false,-1, 2,0);
        tracep->declBus(c+6,"IDP f2_o", false,-1, 1,0);
        tracep->declBus(c+7,"IDP f5_o", false,-1, 4,0);
        tracep->declBus(c+8,"IDP mem_offset_o", false,-1, 11,0);
        tracep->declBus(c+9,"IDP stride_o", false,-1, 4,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+10+i*1,"IDP rd_addr_o", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+18+i*1,"IDP rs1_addr_o", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+22+i*1,"IDP rs2_addr_o", true,(i+0), 3,0);}}
        tracep->declBus(c+26,"IDP Inst_in", false,-1, 31,0);
        tracep->declBus(c+27,"IDP WarpID_in", false,-1, 5,0);
        tracep->declBus(c+28,"IDP thread_mask_in", false,-1, 3,0);
        tracep->declBit(c+29,"IDP clk", false,-1);
        tracep->declBus(c+30,"IDP OP", false,-1, 6,0);
        tracep->declBus(c+31,"IDP rd", false,-1, 4,0);
        tracep->declBus(c+32,"IDP funct3", false,-1, 2,0);
        tracep->declBus(c+33,"IDP rs1", false,-1, 4,0);
        tracep->declBus(c+34,"IDP rs2", false,-1, 4,0);
        tracep->declBus(c+35,"IDP funct2", false,-1, 1,0);
        tracep->declBus(c+36,"IDP funct5", false,-1, 4,0);
        tracep->declBus(c+27,"IDP ThreadID", false,-1, 5,0);
        tracep->declBus(c+37,"IDP IDP unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+38,"IDP IDP unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+39,"OpCodes NSIG", false,-1, 31,0);
        tracep->declBus(c+40,"OpCodes NBITS", false,-1, 31,0);
        tracep->declBus(c+41,"OpCodes ADDR_BITS_REGF", false,-1, 31,0);
        tracep->declBus(c+42,"OpCodes READ_PORTS_REGF", false,-1, 31,0);
        tracep->declBus(c+42,"OpCodes WRITE_PORTS_REGF", false,-1, 31,0);
        tracep->declBus(c+41,"OpCodes INTU_CORES", false,-1, 31,0);
        tracep->declBus(c+41,"OpCodes REG_PER_THREAD", false,-1, 31,0);
        tracep->declBus(c+42,"OpCodes REGLD_PER_CLK", false,-1, 31,0);
    }
}

void IDP::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void IDP::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    IDP__Syms* __restrict vlSymsp = static_cast<IDP__Syms*>(userp);
    IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void IDP::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    IDP__Syms* __restrict vlSymsp = static_cast<IDP__Syms*>(userp);
    IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->alu_select_o[0]));
        tracep->fullBit(oldp+2,(vlTOPp->alu_select_o[1]));
        tracep->fullBit(oldp+3,(vlTOPp->alu_select_o[2]));
        tracep->fullBit(oldp+4,(vlTOPp->alu_select_o[3]));
        tracep->fullCData(oldp+5,(vlTOPp->f3_o),3);
        tracep->fullCData(oldp+6,(vlTOPp->f2_o),2);
        tracep->fullCData(oldp+7,(vlTOPp->f5_o),5);
        tracep->fullSData(oldp+8,(vlTOPp->mem_offset_o),12);
        tracep->fullCData(oldp+9,(vlTOPp->stride_o),5);
        tracep->fullCData(oldp+10,(vlTOPp->rd_addr_o[0]),4);
        tracep->fullCData(oldp+11,(vlTOPp->rd_addr_o[1]),4);
        tracep->fullCData(oldp+12,(vlTOPp->rd_addr_o[2]),4);
        tracep->fullCData(oldp+13,(vlTOPp->rd_addr_o[3]),4);
        tracep->fullCData(oldp+14,(vlTOPp->rd_addr_o[4]),4);
        tracep->fullCData(oldp+15,(vlTOPp->rd_addr_o[5]),4);
        tracep->fullCData(oldp+16,(vlTOPp->rd_addr_o[6]),4);
        tracep->fullCData(oldp+17,(vlTOPp->rd_addr_o[7]),4);
        tracep->fullCData(oldp+18,(vlTOPp->rs1_addr_o[0]),4);
        tracep->fullCData(oldp+19,(vlTOPp->rs1_addr_o[1]),4);
        tracep->fullCData(oldp+20,(vlTOPp->rs1_addr_o[2]),4);
        tracep->fullCData(oldp+21,(vlTOPp->rs1_addr_o[3]),4);
        tracep->fullCData(oldp+22,(vlTOPp->rs2_addr_o[0]),4);
        tracep->fullCData(oldp+23,(vlTOPp->rs2_addr_o[1]),4);
        tracep->fullCData(oldp+24,(vlTOPp->rs2_addr_o[2]),4);
        tracep->fullCData(oldp+25,(vlTOPp->rs2_addr_o[3]),4);
        tracep->fullIData(oldp+26,(vlTOPp->Inst_in),32);
        tracep->fullCData(oldp+27,(vlTOPp->WarpID_in),6);
        tracep->fullCData(oldp+28,(vlTOPp->thread_mask_in),4);
        tracep->fullBit(oldp+29,(vlTOPp->clk));
        tracep->fullCData(oldp+30,((0x7fU & vlTOPp->Inst_in)),7);
        tracep->fullCData(oldp+31,((0x1fU & (vlTOPp->Inst_in 
                                             >> 7U))),5);
        tracep->fullCData(oldp+32,((7U & (vlTOPp->Inst_in 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+33,((0x1fU & (vlTOPp->Inst_in 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+34,((0x1fU & (vlTOPp->Inst_in 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+35,((3U & (vlTOPp->Inst_in 
                                          >> 0x19U))),2);
        tracep->fullCData(oldp+36,((0x1fU & (vlTOPp->Inst_in 
                                             >> 0x1bU))),5);
        tracep->fullIData(oldp+37,(vlTOPp->IDP__DOT__IDP__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+38,(vlTOPp->IDP__DOT__IDP__DOT__unnamedblk2__DOT__i),32);
        tracep->fullIData(oldp+39,(0xfU),32);
        tracep->fullIData(oldp+40,(0x10U),32);
        tracep->fullIData(oldp+41,(4U),32);
        tracep->fullIData(oldp+42,(8U),32);
    }
}
