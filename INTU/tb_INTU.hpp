#ifndef INTU_H
#define INTU_H

#include "obj_dir/INTU.h"
#include "obj_dir/INTU_OpCodes.h"
#include "/home/hafroy/Workspace/SystemVerilog/GPU/include/TermColor.hpp"
#include "/home/hafroy/Workspace/SystemVerilog/GPU/include/helper.hpp"

struct TestCases
{
    const char *name;
    uint16_t A;
    uint16_t B;
    uint8_t OP;
    uint16_t expected_output;
};

TestCases all_cases[] =
    {
        {"ADD", 0x1, 0x1, INTU_OpCodes::opcode_int::IADD, 0x2},
        {"MUL", 0x2, 0x3, INTU_OpCodes::opcode_int::IMUL, 0x6},
};

#endif /* TEMPLATE_H */