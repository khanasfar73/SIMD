import OpCodes::WRITE_PORTS_REGF;

module m2to1(
    output wire [NSIG : 0] Out [WRITE_PORTS_REGF],
    input wire [NSIG : 0] D1 [WRITE_PORTS_REGF], D0 [WRITE_PORTS_REGF],
    input wire sel
);
generate
genvar i;
    for (i = 0; i < WRITE_PORTS_REGF; i++) begin
        assign Out[i] = (sel==1) ? D1[i] : D0[i];
    end
endgenerate
endmodule