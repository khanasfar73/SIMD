#ifndef CACHE_TB_H
#define CACHE_TB_H

#include "obj_Cache/Cache.h"
#include "/home/hafroy/Workspace/SystemVerilog/GPU/include/TermColor.hpp"
#include "/home/hafroy/Workspace/SystemVerilog/GPU/include/helper.hpp"

struct cache_req_type
{
    const uint16_t index; // 10-bit index = 1024 entries
    const bool we;        // write enable

    cache_req_type(const uint16_t i, const bool _we)
        : index(i), we(_we)
    {
    }
};

struct cache_data_type
{
    const uint64_t t[2]; // 128 bit
};

struct TestBench
{
    const cache_req_type data_req;
    const cache_data_type data_write, exp_data_read;
};

TestBench all_cases[] =
    {
        {cache_req_type(1, 1)},
};
#endif /* CACHE_TB_H */