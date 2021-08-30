// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See IDP.h for the primary calling header

#include "IDP.h"
#include "IDP__Syms.h"

//==========

void IDP::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate IDP::eval\n"); );
    IDP__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("IDP.sv", 15, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void IDP::_eval_initial_loop(IDP__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("IDP.sv", 15, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void IDP::_sequent__TOP__1(IDP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    IDP::_sequent__TOP__1\n"); );
    IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvval__rd_addr_o__v0;
    CData/*0:0*/ __Vdlyvset__rd_addr_o__v0;
    CData/*3:0*/ __Vdlyvval__rd_addr_o__v1;
    CData/*0:0*/ __Vdlyvset__rd_addr_o__v2;
    CData/*3:0*/ __Vdlyvval__rd_addr_o__v4;
    CData/*0:0*/ __Vdlyvset__rd_addr_o__v4;
    CData/*3:0*/ __Vdlyvval__rd_addr_o__v5;
    CData/*0:0*/ __Vdlyvset__rd_addr_o__v6;
    CData/*3:0*/ __Vdlyvval__rd_addr_o__v8;
    CData/*0:0*/ __Vdlyvset__rd_addr_o__v8;
    CData/*3:0*/ __Vdlyvval__rd_addr_o__v9;
    CData/*0:0*/ __Vdlyvset__rd_addr_o__v10;
    CData/*3:0*/ __Vdlyvval__rd_addr_o__v12;
    CData/*0:0*/ __Vdlyvset__rd_addr_o__v12;
    CData/*3:0*/ __Vdlyvval__rd_addr_o__v13;
    CData/*0:0*/ __Vdlyvset__rd_addr_o__v14;
    CData/*0:0*/ __Vdlyvset__rd_addr_o__v16;
    CData/*0:0*/ __Vdlyvval__alu_select_o__v0;
    CData/*0:0*/ __Vdlyvval__alu_select_o__v1;
    CData/*0:0*/ __Vdlyvval__alu_select_o__v2;
    CData/*0:0*/ __Vdlyvval__alu_select_o__v3;
    CData/*3:0*/ __Vdlyvval__rs1_addr_o__v0;
    CData/*3:0*/ __Vdlyvval__rs1_addr_o__v1;
    CData/*3:0*/ __Vdlyvval__rs1_addr_o__v2;
    CData/*3:0*/ __Vdlyvval__rs1_addr_o__v3;
    CData/*3:0*/ __Vdlyvval__rs2_addr_o__v0;
    CData/*3:0*/ __Vdlyvval__rs2_addr_o__v1;
    CData/*3:0*/ __Vdlyvval__rs2_addr_o__v2;
    CData/*3:0*/ __Vdlyvval__rs2_addr_o__v3;
    // Body
    vlTOPp->IDP__DOT__IDP__DOT__unnamedblk1__DOT__i = 4U;
    __Vdlyvset__rd_addr_o__v0 = 0U;
    __Vdlyvset__rd_addr_o__v2 = 0U;
    __Vdlyvset__rd_addr_o__v4 = 0U;
    __Vdlyvset__rd_addr_o__v6 = 0U;
    __Vdlyvset__rd_addr_o__v8 = 0U;
    __Vdlyvset__rd_addr_o__v10 = 0U;
    __Vdlyvset__rd_addr_o__v12 = 0U;
    __Vdlyvset__rd_addr_o__v14 = 0U;
    __Vdlyvset__rd_addr_o__v16 = 0U;
    __Vdlyvval__alu_select_o__v0 = (1U & (IData)(vlTOPp->thread_mask_in));
    __Vdlyvval__alu_select_o__v1 = (1U & ((IData)(vlTOPp->thread_mask_in) 
                                          >> 1U));
    __Vdlyvval__alu_select_o__v2 = (1U & ((IData)(vlTOPp->thread_mask_in) 
                                          >> 2U));
    __Vdlyvval__alu_select_o__v3 = (1U & ((IData)(vlTOPp->thread_mask_in) 
                                          >> 3U));
    __Vdlyvval__rs2_addr_o__v0 = ((1U & (IData)(vlTOPp->thread_mask_in))
                                   ? (0xfU & (vlTOPp->Inst_in 
                                              >> 0x14U))
                                   : 0U);
    __Vdlyvval__rs2_addr_o__v1 = ((2U & (IData)(vlTOPp->thread_mask_in))
                                   ? (0xfU & ((IData)(4U) 
                                              + (vlTOPp->Inst_in 
                                                 >> 0x14U)))
                                   : 0U);
    __Vdlyvval__rs2_addr_o__v2 = ((4U & (IData)(vlTOPp->thread_mask_in))
                                   ? (0xfU & ((IData)(8U) 
                                              + (vlTOPp->Inst_in 
                                                 >> 0x14U)))
                                   : 0U);
    __Vdlyvval__rs2_addr_o__v3 = ((8U & (IData)(vlTOPp->thread_mask_in))
                                   ? (0xfU & ((IData)(0xcU) 
                                              + (vlTOPp->Inst_in 
                                                 >> 0x14U)))
                                   : 0U);
    __Vdlyvval__rs1_addr_o__v0 = ((1U & (IData)(vlTOPp->thread_mask_in))
                                   ? (0xfU & (vlTOPp->Inst_in 
                                              >> 0xfU))
                                   : 0U);
    __Vdlyvval__rs1_addr_o__v1 = ((2U & (IData)(vlTOPp->thread_mask_in))
                                   ? (0xfU & ((IData)(4U) 
                                              + (vlTOPp->Inst_in 
                                                 >> 0xfU)))
                                   : 0U);
    __Vdlyvval__rs1_addr_o__v2 = ((4U & (IData)(vlTOPp->thread_mask_in))
                                   ? (0xfU & ((IData)(8U) 
                                              + (vlTOPp->Inst_in 
                                                 >> 0xfU)))
                                   : 0U);
    __Vdlyvval__rs1_addr_o__v3 = ((8U & (IData)(vlTOPp->thread_mask_in))
                                   ? (0xfU & ((IData)(0xcU) 
                                              + (vlTOPp->Inst_in 
                                                 >> 0xfU)))
                                   : 0U);
    if ((1U & (IData)(vlTOPp->thread_mask_in))) {
        __Vdlyvval__rd_addr_o__v0 = (0xfU & (vlTOPp->Inst_in 
                                             >> 7U));
        __Vdlyvset__rd_addr_o__v0 = 1U;
        __Vdlyvval__rd_addr_o__v1 = (0xfU & (vlTOPp->Inst_in 
                                             >> 7U));
    } else {
        __Vdlyvset__rd_addr_o__v2 = 1U;
    }
    if ((2U & (IData)(vlTOPp->thread_mask_in))) {
        __Vdlyvval__rd_addr_o__v4 = (0xfU & ((IData)(4U) 
                                             + (vlTOPp->Inst_in 
                                                >> 7U)));
        __Vdlyvset__rd_addr_o__v4 = 1U;
        __Vdlyvval__rd_addr_o__v5 = (0xfU & ((IData)(4U) 
                                             + (vlTOPp->Inst_in 
                                                >> 7U)));
    } else {
        __Vdlyvset__rd_addr_o__v6 = 1U;
    }
    if ((4U & (IData)(vlTOPp->thread_mask_in))) {
        __Vdlyvval__rd_addr_o__v8 = (0xfU & ((IData)(8U) 
                                             + (vlTOPp->Inst_in 
                                                >> 7U)));
        __Vdlyvset__rd_addr_o__v8 = 1U;
        __Vdlyvval__rd_addr_o__v9 = (0xfU & ((IData)(8U) 
                                             + (vlTOPp->Inst_in 
                                                >> 7U)));
    } else {
        __Vdlyvset__rd_addr_o__v10 = 1U;
    }
    if ((8U & (IData)(vlTOPp->thread_mask_in))) {
        __Vdlyvval__rd_addr_o__v12 = (0xfU & ((IData)(0xcU) 
                                              + (vlTOPp->Inst_in 
                                                 >> 7U)));
        __Vdlyvset__rd_addr_o__v12 = 1U;
        __Vdlyvval__rd_addr_o__v13 = (0xfU & ((IData)(0xcU) 
                                              + (vlTOPp->Inst_in 
                                                 >> 7U)));
    } else {
        __Vdlyvset__rd_addr_o__v14 = 1U;
    }
    if ((0x40U & vlTOPp->Inst_in)) {
        if ((0x20U & vlTOPp->Inst_in)) {
            if (VL_UNLIKELY((0x10U & vlTOPp->Inst_in))) {
                VL_WRITEF("Unknown Instruction type: %3#\n",
                          7,(0x7fU & vlTOPp->Inst_in));
            } else {
                if ((8U & vlTOPp->Inst_in)) {
                    if (VL_LIKELY((4U & vlTOPp->Inst_in))) {
                        if (VL_LIKELY((2U & vlTOPp->Inst_in))) {
                            if (VL_UNLIKELY((1U & (~ vlTOPp->Inst_in)))) {
                                VL_WRITEF("Unknown Instruction type: %3#\n",
                                          7,(0x7fU 
                                             & vlTOPp->Inst_in));
                            }
                        } else {
                            VL_WRITEF("Unknown Instruction type: %3#\n",
                                      7,(0x7fU & vlTOPp->Inst_in));
                        }
                    } else {
                        VL_WRITEF("Unknown Instruction type: %3#\n",
                                  7,(0x7fU & vlTOPp->Inst_in));
                    }
                } else {
                    if (VL_UNLIKELY((4U & vlTOPp->Inst_in))) {
                        VL_WRITEF("Unknown Instruction type: %3#\n",
                                  7,(0x7fU & vlTOPp->Inst_in));
                    } else {
                        if (VL_LIKELY((2U & vlTOPp->Inst_in))) {
                            if ((1U & vlTOPp->Inst_in)) {
                                VL_WRITEF("Branch Instruction Encounter\n");
                            } else {
                                VL_WRITEF("Unknown Instruction type: %3#\n",
                                          7,(0x7fU 
                                             & vlTOPp->Inst_in));
                            }
                        } else {
                            VL_WRITEF("Unknown Instruction type: %3#\n",
                                      7,(0x7fU & vlTOPp->Inst_in));
                        }
                    }
                }
            }
        } else {
            if (VL_UNLIKELY((0x10U & vlTOPp->Inst_in))) {
                VL_WRITEF("Unknown Instruction type: %3#\n",
                          7,(0x7fU & vlTOPp->Inst_in));
            } else {
                if (VL_UNLIKELY((8U & vlTOPp->Inst_in))) {
                    VL_WRITEF("Unknown Instruction type: %3#\n",
                              7,(0x7fU & vlTOPp->Inst_in));
                } else {
                    if (VL_UNLIKELY((4U & vlTOPp->Inst_in))) {
                        VL_WRITEF("Unknown Instruction type: %3#\n",
                                  7,(0x7fU & vlTOPp->Inst_in));
                    } else {
                        if (VL_LIKELY((2U & vlTOPp->Inst_in))) {
                            if (VL_LIKELY((1U & vlTOPp->Inst_in))) {
                                vlTOPp->f3_o = (7U 
                                                & (vlTOPp->Inst_in 
                                                   >> 0xcU));
                                vlTOPp->f2_o = (3U 
                                                & (vlTOPp->Inst_in 
                                                   >> 0x19U));
                                vlTOPp->f5_o = (0x1fU 
                                                & (vlTOPp->Inst_in 
                                                   >> 0x1bU));
                            } else {
                                VL_WRITEF("Unknown Instruction type: %3#\n",
                                          7,(0x7fU 
                                             & vlTOPp->Inst_in));
                            }
                        } else {
                            VL_WRITEF("Unknown Instruction type: %3#\n",
                                      7,(0x7fU & vlTOPp->Inst_in));
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & vlTOPp->Inst_in)) {
            if ((0x10U & vlTOPp->Inst_in)) {
                if (VL_UNLIKELY((8U & vlTOPp->Inst_in))) {
                    VL_WRITEF("Unknown Instruction type: %3#\n",
                              7,(0x7fU & vlTOPp->Inst_in));
                } else {
                    if ((4U & vlTOPp->Inst_in)) {
                        if (VL_LIKELY((2U & vlTOPp->Inst_in))) {
                            if (VL_UNLIKELY((1U & (~ vlTOPp->Inst_in)))) {
                                VL_WRITEF("Unknown Instruction type: %3#\n",
                                          7,(0x7fU 
                                             & vlTOPp->Inst_in));
                            }
                        } else {
                            VL_WRITEF("Unknown Instruction type: %3#\n",
                                      7,(0x7fU & vlTOPp->Inst_in));
                        }
                    } else {
                        if (VL_LIKELY((2U & vlTOPp->Inst_in))) {
                            if (VL_LIKELY((1U & vlTOPp->Inst_in))) {
                                vlTOPp->f3_o = (7U 
                                                & (vlTOPp->Inst_in 
                                                   >> 0xcU));
                                vlTOPp->f2_o = (3U 
                                                & (vlTOPp->Inst_in 
                                                   >> 0x19U));
                                vlTOPp->f5_o = (0x1fU 
                                                & (vlTOPp->Inst_in 
                                                   >> 0x1bU));
                            } else {
                                VL_WRITEF("Unknown Instruction type: %3#\n",
                                          7,(0x7fU 
                                             & vlTOPp->Inst_in));
                            }
                        } else {
                            VL_WRITEF("Unknown Instruction type: %3#\n",
                                      7,(0x7fU & vlTOPp->Inst_in));
                        }
                    }
                }
            } else {
                if (VL_UNLIKELY((8U & vlTOPp->Inst_in))) {
                    VL_WRITEF("Unknown Instruction type: %3#\n",
                              7,(0x7fU & vlTOPp->Inst_in));
                } else {
                    if ((4U & vlTOPp->Inst_in)) {
                        if (VL_LIKELY((2U & vlTOPp->Inst_in))) {
                            if ((1U & vlTOPp->Inst_in)) {
                                VL_WRITEF("FP Store Instruction\n");
                            } else {
                                VL_WRITEF("Unknown Instruction type: %3#\n",
                                          7,(0x7fU 
                                             & vlTOPp->Inst_in));
                            }
                        } else {
                            VL_WRITEF("Unknown Instruction type: %3#\n",
                                      7,(0x7fU & vlTOPp->Inst_in));
                        }
                    } else {
                        if (VL_LIKELY((2U & vlTOPp->Inst_in))) {
                            if (VL_LIKELY((1U & vlTOPp->Inst_in))) {
                                vlTOPp->mem_offset_o 
                                    = ((0xf80U & (vlTOPp->Inst_in 
                                                  >> 0x14U)) 
                                       | ((0x60U & 
                                           (vlTOPp->Inst_in 
                                            >> 0x14U)) 
                                          | (0x1fU 
                                             & (vlTOPp->Inst_in 
                                                >> 7U))));
                            } else {
                                VL_WRITEF("Unknown Instruction type: %3#\n",
                                          7,(0x7fU 
                                             & vlTOPp->Inst_in));
                            }
                        } else {
                            VL_WRITEF("Unknown Instruction type: %3#\n",
                                      7,(0x7fU & vlTOPp->Inst_in));
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlTOPp->Inst_in)) {
                if (VL_UNLIKELY((8U & vlTOPp->Inst_in))) {
                    VL_WRITEF("Unknown Instruction type: %3#\n",
                              7,(0x7fU & vlTOPp->Inst_in));
                } else {
                    if ((4U & vlTOPp->Inst_in)) {
                        if (VL_LIKELY((2U & vlTOPp->Inst_in))) {
                            if (VL_UNLIKELY((1U & (~ vlTOPp->Inst_in)))) {
                                VL_WRITEF("Unknown Instruction type: %3#\n",
                                          7,(0x7fU 
                                             & vlTOPp->Inst_in));
                            }
                        } else {
                            VL_WRITEF("Unknown Instruction type: %3#\n",
                                      7,(0x7fU & vlTOPp->Inst_in));
                        }
                    } else {
                        if (VL_LIKELY((2U & vlTOPp->Inst_in))) {
                            if ((1U & vlTOPp->Inst_in)) {
                                VL_WRITEF("I type instrcution\n");
                                vlTOPp->mem_offset_o 
                                    = (0xfffU & (vlTOPp->Inst_in 
                                                 >> 0x14U));
                            } else {
                                VL_WRITEF("Unknown Instruction type: %3#\n",
                                          7,(0x7fU 
                                             & vlTOPp->Inst_in));
                            }
                        } else {
                            VL_WRITEF("Unknown Instruction type: %3#\n",
                                      7,(0x7fU & vlTOPp->Inst_in));
                        }
                    }
                }
            } else {
                if (VL_UNLIKELY((8U & vlTOPp->Inst_in))) {
                    VL_WRITEF("Unknown Instruction type: %3#\n",
                              7,(0x7fU & vlTOPp->Inst_in));
                } else {
                    if ((4U & vlTOPp->Inst_in)) {
                        if (VL_LIKELY((2U & vlTOPp->Inst_in))) {
                            if (VL_LIKELY((1U & vlTOPp->Inst_in))) {
                                vlTOPp->stride_o = 
                                    (0x1fU & (vlTOPp->Inst_in 
                                              >> 0x14U));
                            } else {
                                VL_WRITEF("Unknown Instruction type: %3#\n",
                                          7,(0x7fU 
                                             & vlTOPp->Inst_in));
                            }
                        } else {
                            VL_WRITEF("Unknown Instruction type: %3#\n",
                                      7,(0x7fU & vlTOPp->Inst_in));
                        }
                    } else {
                        if (VL_LIKELY((2U & vlTOPp->Inst_in))) {
                            if (VL_LIKELY((1U & vlTOPp->Inst_in))) {
                                vlTOPp->IDP__DOT__IDP__DOT__unnamedblk2__DOT__i = 4U;
                                vlTOPp->mem_offset_o 
                                    = (0xfffU & (vlTOPp->Inst_in 
                                                 >> 0x14U));
                                __Vdlyvset__rd_addr_o__v16 = 1U;
                            } else {
                                VL_WRITEF("Unknown Instruction type: %3#\n",
                                          7,(0x7fU 
                                             & vlTOPp->Inst_in));
                            }
                        } else {
                            VL_WRITEF("Unknown Instruction type: %3#\n",
                                      7,(0x7fU & vlTOPp->Inst_in));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->alu_select_o[0U] = __Vdlyvval__alu_select_o__v0;
    vlTOPp->alu_select_o[1U] = __Vdlyvval__alu_select_o__v1;
    vlTOPp->alu_select_o[2U] = __Vdlyvval__alu_select_o__v2;
    vlTOPp->alu_select_o[3U] = __Vdlyvval__alu_select_o__v3;
    vlTOPp->rs2_addr_o[0U] = __Vdlyvval__rs2_addr_o__v0;
    vlTOPp->rs2_addr_o[1U] = __Vdlyvval__rs2_addr_o__v1;
    vlTOPp->rs2_addr_o[2U] = __Vdlyvval__rs2_addr_o__v2;
    vlTOPp->rs2_addr_o[3U] = __Vdlyvval__rs2_addr_o__v3;
    vlTOPp->rs1_addr_o[0U] = __Vdlyvval__rs1_addr_o__v0;
    vlTOPp->rs1_addr_o[1U] = __Vdlyvval__rs1_addr_o__v1;
    vlTOPp->rs1_addr_o[2U] = __Vdlyvval__rs1_addr_o__v2;
    vlTOPp->rs1_addr_o[3U] = __Vdlyvval__rs1_addr_o__v3;
    if (__Vdlyvset__rd_addr_o__v0) {
        vlTOPp->rd_addr_o[0U] = __Vdlyvval__rd_addr_o__v0;
        vlTOPp->rd_addr_o[1U] = __Vdlyvval__rd_addr_o__v1;
    }
    if (__Vdlyvset__rd_addr_o__v2) {
        vlTOPp->rd_addr_o[0U] = 0U;
        vlTOPp->rd_addr_o[1U] = 0U;
    }
    if (__Vdlyvset__rd_addr_o__v4) {
        vlTOPp->rd_addr_o[2U] = __Vdlyvval__rd_addr_o__v4;
        vlTOPp->rd_addr_o[3U] = __Vdlyvval__rd_addr_o__v5;
    }
    if (__Vdlyvset__rd_addr_o__v6) {
        vlTOPp->rd_addr_o[2U] = 0U;
        vlTOPp->rd_addr_o[3U] = 0U;
    }
    if (__Vdlyvset__rd_addr_o__v8) {
        vlTOPp->rd_addr_o[4U] = __Vdlyvval__rd_addr_o__v8;
        vlTOPp->rd_addr_o[5U] = __Vdlyvval__rd_addr_o__v9;
    }
    if (__Vdlyvset__rd_addr_o__v10) {
        vlTOPp->rd_addr_o[4U] = 0U;
        vlTOPp->rd_addr_o[5U] = 0U;
    }
    if (__Vdlyvset__rd_addr_o__v12) {
        vlTOPp->rd_addr_o[6U] = __Vdlyvval__rd_addr_o__v12;
        vlTOPp->rd_addr_o[7U] = __Vdlyvval__rd_addr_o__v13;
    }
    if (__Vdlyvset__rd_addr_o__v14) {
        vlTOPp->rd_addr_o[6U] = 0U;
        vlTOPp->rd_addr_o[7U] = 0U;
    }
    if (__Vdlyvset__rd_addr_o__v16) {
        vlTOPp->rd_addr_o[1U] = 0U;
        vlTOPp->rd_addr_o[3U] = 0U;
        vlTOPp->rd_addr_o[5U] = 0U;
        vlTOPp->rd_addr_o[7U] = 0U;
    }
}

void IDP::_eval(IDP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    IDP::_eval\n"); );
    IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData IDP::_change_request(IDP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    IDP::_change_request\n"); );
    IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData IDP::_change_request_1(IDP__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    IDP::_change_request_1\n"); );
    IDP* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void IDP::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    IDP::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((WarpID_in & 0xc0U))) {
        Verilated::overWidthError("WarpID_in");}
    if (VL_UNLIKELY((thread_mask_in & 0xf0U))) {
        Verilated::overWidthError("thread_mask_in");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
