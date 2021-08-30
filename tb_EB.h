#ifndef TEST_EB_H
#define TEST_EB_H

#include <iostream>
#include "include/TermColor.hpp"
#include "include/helper.hpp"
#include "obj_dir/EB.h"
#include "obj_dir/EB_OpCodes.h"

enum EReg
{
    R0,
    R1,
    R2,
    R3,
    R4,
    R5,
    R6,
    R7,
    R8,
    R9,
    R10,
    R11,
    R12,
    R13,
    R14,
    R15
};

struct TestCases
{
    const char *name;
    const bool wr_en, feed_data; // 1 bit
    const uint16_t Input_in[8];
    const uint8_t OP;
    const uint16_t expected_output[8];
};

TestCases all_cases[] =
    {
        {
            "WASTE CLK",
            false,
            false,
            {0, 0, 0, 0, 0, 0, 0, 0},
            EB_OpCodes::LD,
            {0, 0, 0, 0, 0, 0, 0, 0},
        },
        {
            "LOAD",
            true,
            true,
            {69, 3, 0, 0, 4, 5, 0, 0}, //, 8, 9, 0, 0, 12, 13, 0, 0},
            EB_OpCodes::LD,
            {0, 0, 0, 0, 0, 0, 0, 0},
        },
        {
            "READ",
            false,
            false,
            {0, 0, 0, 0, 0, 0, 0, 0},
            EB_OpCodes::LD,
            {69, 3, 4, 5, 8, 9, 12, 13},
        },
        {
            "LOAD",
            true,
            true,
            {8, 9, 0, 0, 12, 13, 0, 0},
            EB_OpCodes::LD,
            {69, 3, 4, 5, 8, 9, 12, 13},
        },
        {
            "READ",
            false,
            false,
            {0, 0, 0, 0, 0, 0, 0, 0},
            EB_OpCodes::LD,
            {69, 3, 4, 5, 8, 9, 12, 13},
        },
        {
            "ADD",
            true,
            false,
            {0, 0, 0, 0, 0, 0, 0, 0},
            EB_OpCodes::IADD,
            {69, 3, 4, 5, 8, 9, 12, 13},
        },
        {
            "READ",
            false,
            false,
            {0, 0, 0, 0, 0, 0, 0, 0},
            EB_OpCodes::IADD,
            {69, 3, 4, 5, 8, 9, 12, 13},
        },
        {
            "MUL",
            true,
            false,
            {0, 0, 0, 0, 0, 0, 0, 0},
            EB_OpCodes::IMUL,
            {69, 3, 4, 5, 8, 9, 12, 13},
        },
        {
            "READ",
            false,
            false,
            {0, 0, 0, 0, 0, 0, 0, 0},
            EB_OpCodes::IADD,
            {69, 3, 4, 5, 8, 9, 12, 13},
        },
};

void comp_array(const char *name, const uint16_t *r_data, const uint16_t *exp_op)
{
    bool bPassed = true;
    for (int i = 0; i < (sizeof(r_data)); i++)
    {
        if (r_data[i] == exp_op[i])
            continue;
        else
        {
            bPassed = false;
            std::cout << bold << l_magenta << name << reset << yellow << ": Failed[" << i
                      << "], expected " << exp_op[i] << " but was " << r_data[i] << def << std::endl;
        }
    }

    if (bPassed)
        std::cout << bold << l_magenta << name << reset << green << ": Passed\n"
                  << def;
}
#endif
/* TEST_EB_H */