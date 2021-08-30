#include "verilated.h"
#include "tb_Cache.hpp"
#include "Cache_cache_def.h"

using namespace std;

int main(int argc, char **argv, char **env)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Cache *tb = new Cache;

    tb->eval();

    for (auto test : all_cases)
    {

        tb->eval();
        /*
        if (tb->O == test.exp_O)
        {
            cout << bold << green << "Passed!" << def << reset << endl;
        }
        else
        {
            cout << bold << yellow << "Failed!: " << def << reset;
            cout << "expected " << helper::cast_u8(test.exp_O) << " but found " << helper::cast_u8(tb->O) << endl;
        }
        */
    }

    delete tb;
    exit(0);
}