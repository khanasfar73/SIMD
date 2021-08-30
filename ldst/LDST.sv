import OpCodes::REGLD_PER_CLK;

module LDST
(
    output [NSIG:0] Load_o [REGLD_PER_CLK], 
    output [NSIG:0] Store_o [REGLD_PER_CLK],
    input [NSIG:0] Load_i [REGLD_PER_CLK],
    input [NSIG:0] Store_i [REGLD_PER_CLK],
    input wire clk /*verilator clocker*/
);

Load load_unit(Load_o, Load_i, clk);
Store store_unit(Store_o, Store_i, clk);

always_ff @(posedge clk ) begin
    //
end

endmodule
