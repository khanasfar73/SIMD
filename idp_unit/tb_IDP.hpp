
#ifndef TEST_IDP_H
#define TEST_IDP_H

#include "obj_dir/IDP_OpCodes.h"
#include "/home/hafroy/Workspace/SystemVerilog/GPU/include/TermColor.hpp"
#include "/home/hafroy/Workspace/SystemVerilog/GPU/include/helper.hpp"

#define RO(rs1)                          \
    {                                    \
        rs1, rs1 + 4, rs1 + 8, rs1 + 12, \
    }

#define WO(rd)                                                   \
    {                                                            \
        rd, rd, rd + 4, rd + 4, rd + 8, rd + 8, rd + 12, rd + 12 \
    }

#define I(n) Instruction::n

struct FInst
{
    uint32_t Inst_in;
    uint8_t WarpID_in;
    uint8_t thread_mask_in;

    FInst(uint32_t Inst, uint8_t WarpID, uint8_t thread_mask)
        : Inst_in(Inst), WarpID_in(WarpID), thread_mask_in(thread_mask)
    {
    }
};

struct Test_R
{
    FInst I;
    uint8_t expected_w_addr_o[8],
        expected_rs2_addr_o[4], expected_rs1_addr_o[4];
    uint8_t exp_alu_select_o[4];
    uint8_t exp_f5_o, exp_f2_o, exp_f3_o;
};

Test_R R[] =
    {
        //      (f5,f2,rs2,rs1,f3,rd,op)
        {{I(makeR(0, 0, 1, 1, 0, 0, 51)), 0b0000, 0b1111}, WO(0), RO(1), RO(1), {1, 1, 1, 1}, 0, 0, 0},
        //{{I(makeR(0, 0, 1, 1, 0, 0, 51)), 0b00000, 0b1111}, WO(0), RO(1, 1), {1, 1, 1, 1}, {0}, {0}, {0}},
        {
            {I(makeR(1, 0, 2, 1, 0, 3, 67)),
             0b00001,
             0b1010},
            {0, 0, 7, 7, 0, 0, 15, 15},
            {0, 6, 0, 14},
            {0, 5, 0, 13},
            {1, 0, 1, 0},
            1,
            0,
            0,
        },
        {{I(makeR(0, 0, 2, 0, 0, 3, 67)), 0b00010, 0b1111}, WO(3), RO(2), RO(0), {1, 1, 1, 1}, 0, 0, 0},
};

struct Test_S
{
    FInst I;
    const uint8_t exp_rs2_addr_o[4], exp_rs1_addr_o[4];
    uint16_t exp_mem_offset;
};

Test_S Store[] = {
    {{I(makeS(0, 1, 0, 0, 1, 0x23)), 0b0000, 0b1111}, RO(1), RO(0), 1},
};

struct Test_L
{
    FInst I;
    const uint8_t exp_rd_addr_o[8];
    const uint8_t exp_rs1_addr_o[4];
    const uint16_t exp_mem_offset_o;
};

Test_L Load[] = {
    {{I(makeI(48, 0, 0, 1, 0x03)), 0b0000, 0b1111}, {1, 0, 5, 0, 9, 0, 13, 0}, {0, 4, 8, 12}, 48},
};

struct Test_U
{
    FInst I;
};

Test_U U[] = {
    {{I(makeU(0, 1, 0x37)), 0b0000, 0b1111}},
    {{I(makeU(0, 1, 0x17)), 0b0000, 0b1111}},
    {{I(makeU(0, 1, 0x6F)), 0b0000, 0b1111}},
};

struct Test_FPLoad
{
    FInst I;
    const uint8_t exp_stride_o;
};

Test_FPLoad FPLoad[] = {
    {{I(makeVectorFP(0, 0, 0, 0, 0x0, 0x0, 0, 0x3, 0x07)), 0b0000, 0b1111}, 0},
    {{I(makeVectorFP(0, 0, 0, 0, 0x0, 0x0, 0, 0x3, 0x27)), 0b0000, 0b1111}, 0},
};

#undef I
#endif
/* TEST_IDP_H */