#include <iostream>
#include "verilated.h"
#include "tb_LDST.hpp"

using namespace std;
using namespace helper;

int main(int argc, char **argv, char **env)
{
	Verilated::commandArgs(argc, argv);
	Verilated::traceEverOn(true);
	LDST *tb = new LDST;

	tb->eval();

	for (auto test : all_cases)
	{
		auto size = sizeof(tb->Load_i) / sizeof(tb->Load_i[0]);
		for (size_t i = 0; i < size; i++)
		{
			tb->Load_i[i] = test.Load_i[i];
		}

		for (size_t i = 0; i < size; i++)
		{
			tb->Store_i[i] = test.Store_i[i];
		}
		bool bPassed = true;

		tb->clk = 0;
		tb->eval();

		tb->clk = 1;
		tb->eval();

		tb->clk = 0;
		tb->eval();

		comp_array(tb->Load_o, test.exp_Load_o, "Load Failed", bPassed, true);
		comp_array(tb->Store_o, test.exp_Store_o, "Store Failed", bPassed, true);

		if (bPassed)
			cout << bold << green << "Passed!" << def << reset << endl;
		else
			cout << bold << yellow << "Failed!" << def << reset << endl;
	}

	exit(0);
}
