#!/bin/bash

#rm -r obj_Cache

MODULES='../OpCodes.sv cache_def.sv'
TOP=Cache

verilator -Wall --trace -cc $MODULES $TOP.sv -Mdir obj_$TOP -prefix $TOP --top $TOP --exe tb_$TOP.cpp -CFLAGS "-std=c++11" --build -j 6
$1
./obj_$TOP/$TOP
