module mux_data(
	input logic [31:0] pc_four,
	input logic [31:0] ld_data,
	input logic [31:0] alu_data,
	input logic [1:0] wb_sel,
	output logic [31:0] wb_data
);

always @(*) begin
	case(wb_sel)		
		2'b00: begin	// Store
		wb_data = alu_data;
		end

		2'b01: begin	// Load
		wb_data = ld_data;
		end

		2'b10: begin	// Branch
		wb_data = pc_four;
		end

		2'b11: begin	// Jump
		wb_data = pc_four;
		end
	endcase
end

endmodule
