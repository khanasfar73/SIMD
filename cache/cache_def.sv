package cache_def;
    parameter int TAGMSB = 31; // tag MSB
    parameter int TAGLSB = 14; // tag LSB

    //data structure for cache tag
    typedef struct packed {
        bit validity;           //validity bit
        bit dirty;              // dirty bit
        bit [TAGMSB:TAGLSB] tag;// Tag
    } cache_tag_type /* verilator public */;

    //data structure for cache memory request
    typedef struct packed {
        bit [9:0] index;    // 10-bit index = 1024 entries
        bit we;             // write enable
    } cache_req_type /* verilator public */;

    //128-bit cache line data
    typedef bit [127:0] cache_data_type;

    // data structures for CPU<->Cache controller interface

    // CPU request (CPU->cache controller)
    typedef struct packed {
        bit [31:0] addr;    //32-bit request addr
        bit [31:0] data;    //32-bit request data (used when write)
        bit rw;             //request type : 0 = read, 1 = write
        bit valid;          //request is valid
    } cpu_req_type /* verilator public */;

    // Cache result (cache controller->cpu)
    typedef struct packed {
        bit [31:0] data;    //32-bit data
        bit ready;          //result is ready
    } cpu_result_type /* verilator public */;

    //----------------------------------------------------------------------
    // data structures for cache controller<->memory interface
 
    // memory request (cache controller->memory)
    typedef struct packed {
        bit [31:0] addr;    //request byte addr
        bit [127:0] data;   //128-bit request data (used when write)
        bit rw;             //request type : 0 = read, 1 = write
        bit valid;          //request is valid
    } mem_req_type /* verilator public */;

    // memory controller response (memory -> cache controller)
    typedef struct packed {
        cache_data_type data;    //128-bit read back data
        bit    ready;           //data is ready
    } mem_data_type /* verilator public */;

endpackage