module regfile(
	input i_clk,
	input i_rst_n,
	input  logic [4:0]  i_rs1_addr,
	input  logic [4:0]  i_rs2_addr,
	output logic [31:0] o_rs1_data,
	output logic [31:0] o_rs2_data,
	input  logic [4:0]  i_rd_addr,
	input  logic [31:0] i_rd_data,
	input  logic 		i_rd_wren
);
logic [31:0] register[31:0];

integer i;

always @(posedge i_clk or negedge i_rst_n) begin
	if (!i_rst_n) begin
		for (i = 0; i < 32; i = i +1) begin
			register[i] <= 32'b0;
		end
	end else 
	if (i_rd_wren && (i_rd_addr != 5'd0)) begin
        register[i_rd_addr] <= i_rd_data;
	end
end

always_comb begin
	o_rs1_data = (i_rd_wren && (i_rd_addr == i_rs1_addr)) ? i_rd_data : register[i_rs1_addr];
	o_rs2_data = (i_rd_wren && (i_rd_addr == i_rs2_addr)) ? i_rd_data : register[i_rs2_addr];
end

// always_comb begin
//     o_rs1_data = register[i_rs1_addr];
//     o_rs2_data = register[i_rs2_addr];
// end

endmodule
