// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "IDP__Syms.h"


void IDP::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    IDP__Syms* __restrict vlSymsp = static_cast<IDP__Syms*>(userp);
    IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void IDP::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    IDP__Syms* __restrict vlSymsp = static_cast<IDP__Syms*>(userp);
    IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->alu_select_o[0]));
        tracep->chgBit(oldp+1,(vlTOPp->alu_select_o[1]));
        tracep->chgBit(oldp+2,(vlTOPp->alu_select_o[2]));
        tracep->chgBit(oldp+3,(vlTOPp->alu_select_o[3]));
        tracep->chgCData(oldp+4,(vlTOPp->f3_o),3);
        tracep->chgCData(oldp+5,(vlTOPp->f2_o),2);
        tracep->chgCData(oldp+6,(vlTOPp->f5_o),5);
        tracep->chgSData(oldp+7,(vlTOPp->mem_offset_o),12);
        tracep->chgCData(oldp+8,(vlTOPp->stride_o),5);
        tracep->chgCData(oldp+9,(vlTOPp->rd_addr_o[0]),4);
        tracep->chgCData(oldp+10,(vlTOPp->rd_addr_o[1]),4);
        tracep->chgCData(oldp+11,(vlTOPp->rd_addr_o[2]),4);
        tracep->chgCData(oldp+12,(vlTOPp->rd_addr_o[3]),4);
        tracep->chgCData(oldp+13,(vlTOPp->rd_addr_o[4]),4);
        tracep->chgCData(oldp+14,(vlTOPp->rd_addr_o[5]),4);
        tracep->chgCData(oldp+15,(vlTOPp->rd_addr_o[6]),4);
        tracep->chgCData(oldp+16,(vlTOPp->rd_addr_o[7]),4);
        tracep->chgCData(oldp+17,(vlTOPp->rs1_addr_o[0]),4);
        tracep->chgCData(oldp+18,(vlTOPp->rs1_addr_o[1]),4);
        tracep->chgCData(oldp+19,(vlTOPp->rs1_addr_o[2]),4);
        tracep->chgCData(oldp+20,(vlTOPp->rs1_addr_o[3]),4);
        tracep->chgCData(oldp+21,(vlTOPp->rs2_addr_o[0]),4);
        tracep->chgCData(oldp+22,(vlTOPp->rs2_addr_o[1]),4);
        tracep->chgCData(oldp+23,(vlTOPp->rs2_addr_o[2]),4);
        tracep->chgCData(oldp+24,(vlTOPp->rs2_addr_o[3]),4);
        tracep->chgIData(oldp+25,(vlTOPp->Inst_in),32);
        tracep->chgCData(oldp+26,(vlTOPp->WarpID_in),6);
        tracep->chgCData(oldp+27,(vlTOPp->thread_mask_in),4);
        tracep->chgBit(oldp+28,(vlTOPp->clk));
        tracep->chgCData(oldp+29,((0x7fU & vlTOPp->Inst_in)),7);
        tracep->chgCData(oldp+30,((0x1fU & (vlTOPp->Inst_in 
                                            >> 7U))),5);
        tracep->chgCData(oldp+31,((7U & (vlTOPp->Inst_in 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+32,((0x1fU & (vlTOPp->Inst_in 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+33,((0x1fU & (vlTOPp->Inst_in 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+34,((3U & (vlTOPp->Inst_in 
                                         >> 0x19U))),2);
        tracep->chgCData(oldp+35,((0x1fU & (vlTOPp->Inst_in 
                                            >> 0x1bU))),5);
        tracep->chgIData(oldp+36,(vlTOPp->IDP__DOT__IDP__DOT__unnamedblk1__DOT__i),32);
        tracep->chgIData(oldp+37,(vlTOPp->IDP__DOT__IDP__DOT__unnamedblk2__DOT__i),32);
    }
}

void IDP::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    IDP__Syms* __restrict vlSymsp = static_cast<IDP__Syms*>(userp);
    IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
