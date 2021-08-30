#!/bin/bash

#rm -r obj_dir

MODULES='../OpCodes.sv'
TOP=INTU

verilator -Wall --trace -cc $MODULES $TOP.sv -prefix $TOP --exe tb_$TOP.cpp -CFLAGS "-std=c++11" --build -j 6
$1
./obj_dir/$TOP