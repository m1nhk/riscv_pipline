/* verilator lint_off UNOPTFLAT */
module ripple_adder#(parameter data_size = 32)(		
	input logic [data_size-1:0] a,b,		//input 8 bit
	input logic cin,
	output logic [data_size-1:0] sum,	//output 8 bit
	output logic cout			//overflow bit
);

wire [31:0] carry;

genvar i;
generate
    fulladder adder0(a[0], b[0], cin, sum[0], carry[0]);
    for(i = 1; i < data_size; i++) begin
        fulladder adder(a[i], b[i], carry[i-1], sum[i], carry[i]);
    end
    assign cout = carry[data_size-1];
endgenerate

endmodule
