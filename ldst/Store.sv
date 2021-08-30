// Store 8 or 16 N-bit values from Registers back to Memory (and Caches if need be)
import OpCodes::NSIG;
import OpCodes::REGLD_PER_CLK;

module Store
(
    output logic [NSIG:0] data_o [REGLD_PER_CLK],
    input wire [NSIG:0] data_i [REGLD_PER_CLK],
    input wire clk /*verilator clocker*/
);

always_ff @(posedge clk ) begin
    for (int i = 0; i < REGLD_PER_CLK; i++) begin
        data_o[i] <= data_i[i];
    end
end

endmodule
