#ifndef FPU_H
#define FPU_H

#include "FPU.h"
#include "FPU_OpCodes.h"
#include "/home/hafroy/Workspace/SystemVerilog/GPU/include/TermColor.hpp"
#include "/home/hafroy/Workspace/SystemVerilog/GPU/include/helper.hpp"

struct TestCases
{
    const char *name;
    uint16_t A, B, C;
    uint8_t OP;
    uint16_t expected_output;
};

TestCases all_cases[] =
    {
        {"FMAD", 1, 2, 0, FPU_OpCodes::opcode_fp::FMAD, 02},
        {"FMAD", 3, 4, 7, FPU_OpCodes::opcode_fp::FMAD, 19},
};
#endif /* TEMPLATE_H */