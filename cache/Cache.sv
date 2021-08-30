import cache_def::cache_data_type;
import cache_def::cache_req_type ;
import cache_def::cache_data_type;

module Cache
(
    output cache_data_type data_read,   // read port
    input  cache_req_type  data_req,    //data request/command, e.g. RW, valid
    input  cache_data_type data_write,   //write port (128-bit line) 
    input  bit clk /* verilator clocker */
);

initial begin
    for (int i=0; i<1024; i++) 
          data_mem[i] = 128'(i);
end
cache_data_type [1023:0] data_mem;

always_ff @( posedge clk ) begin : Cache
    if (data_req.we) begin
        data_mem[data_req.index] <= data_write;
    end
end

assign data_read = data_mem[data_req.index];
endmodule
