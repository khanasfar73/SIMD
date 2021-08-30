#include <iostream>
#include "verilated.h"
#include "Swarm.h"
#include "tb_Swarm.hpp"

int main(int argc, char **argv, char **env)
{
	Verilated::commandArgs(argc, argv);
	Verilated::traceEverOn(true);
	Swarm *swarm = new Swarm;

	swarm->clk = 0;
	swarm->eval();

	swarm->clk = 1;
	swarm->eval();

	swarm->clk = 0;
	swarm->eval();

	delete swarm;
	exit(0);
}
