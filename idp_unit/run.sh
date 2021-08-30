#!/bin/bash

#rm -r obj_dir

MODULES='../OpCodes.sv'
TOP=IDP

verilator -Wall --trace -cc $MODULES $TOP.sv -prefix $TOP --exe tb_$TOP.cpp -CFLAGS "-std=c++20" --build -j 6 
$1
./obj_dir/$TOP
