/* verilator lint_off UNUSED */
/* verilator lint_off BLKSEQ */
module lsu(
	input i_clk,
	input i_rst_n,
	input  logic [2:0] load_sel,
	input  logic [1:0] store_sel,
	
	input  wire [31:0] i_lsu_addr, // aludata
	input  logic [31:0] i_st_data, 	// rs2_data
	input  logic 		i_lsu_wren,	// mem_wren
	//input  logic 		i_lsu_rden,	// mem_rden
	input  logic [31:0] i_io_sw,
	//input  logic [3:0] 	i_io_btn,
	output logic [31:0] o_ld_data,	// ld_data
	output logic [31:0] o_io_ledr,
	output logic [31:0] o_io_ledg,
	output logic [6:0] 	o_io_hex0,
	output logic [6:0] 	o_io_hex1, 
	output logic [6:0] 	o_io_hex2, 
	output logic [6:0] 	o_io_hex3, 
	output logic [6:0] 	o_io_hex4,  
	output logic [6:0] 	o_io_hex5, 
	output logic [6:0] 	o_io_hex6,
	output logic [6:0] 	o_io_hex7,  
	output logic [31:0] o_io_lcd
);

//reg  [31:0] ld_temp_data;
wire [12:0] data_mem_addr;
assign data_mem_addr   = i_lsu_addr[12:0];

//--------------------DMEM--------------------
reg [7:0] dmem [8191:0]; // 8 KB

//--------------------INPUT-------------------- 
// SWITCH
logic [7:0] sw_reg [3:0];
assign sw_reg[0] = i_io_sw[7:0];
assign sw_reg[1] = i_io_sw[15:8];
assign sw_reg[2] = i_io_sw[23:16];
assign sw_reg[3] = i_io_sw[31:24];

// BUTTON
logic [7:0] btn_reg;
assign btn_reg = i_io_sw[7:0];

//------------------- OUTPUT------------------- 
// HEX
logic [7:0] hex_reg [7:0];
assign o_io_hex0 = hex_reg[0][6:0];
assign o_io_hex1 = hex_reg[1][6:0];
assign o_io_hex2 = hex_reg[2][6:0];
assign o_io_hex3 = hex_reg[3][6:0];
assign o_io_hex4 = hex_reg[4][6:0];
assign o_io_hex5 = hex_reg[5][6:0];
assign o_io_hex6 = hex_reg[6][6:0];
assign o_io_hex7 = hex_reg[7][6:0];
// LED
logic [7:0] led_r_reg [3:0];
logic [7:0] led_g_reg;
assign o_io_ledr[7:0] 	= led_r_reg[0];
assign o_io_ledr[15:8] 	= led_r_reg[1];
assign o_io_ledr[23:16] = led_r_reg[2];
assign o_io_ledr[31:24] = led_r_reg[3]; 
assign o_io_ledg		= {24'b0,led_g_reg};  
// LCD 
logic [7:0] lcd_reg [3:0];
assign o_io_lcd[7:0] 	= lcd_reg[0];
assign o_io_lcd[15:8] 	= lcd_reg[1];
assign o_io_lcd[23:16] 	= lcd_reg[2];
assign o_io_lcd[31:24] 	= lcd_reg[3];     

always @(*) begin
		case ({i_lsu_addr[14],i_lsu_addr[11]}) // check bit 14 and bit 11
		2'b00: begin // DMEM
			case (load_sel)
			3'b001: o_ld_data = {{24{dmem[data_mem_addr][7]}}, dmem[data_mem_addr]}; 											// LB
			3'b010: o_ld_data = {{16{dmem[data_mem_addr + 1][7]}}, dmem[data_mem_addr + 1], dmem[data_mem_addr]};  				// LH				
			3'b011: o_ld_data = {24'b0, dmem[data_mem_addr]};  															// LBU
			3'b100: o_ld_data = {16'b0, dmem[data_mem_addr + 1], dmem[data_mem_addr]};  										// LHU
			3'b101: o_ld_data = {dmem[data_mem_addr + 3], dmem[data_mem_addr + 2], dmem[data_mem_addr + 1], dmem[data_mem_addr]};	// LW
			default: begin
			end
			endcase
		end
		2'b01: begin // DMEM
			case (load_sel)
			3'b001: o_ld_data = {{24{dmem[data_mem_addr][7]}}, dmem[data_mem_addr]}; 											// LB
			3'b010: o_ld_data = {{16{dmem[data_mem_addr + 1][7]}}, dmem[data_mem_addr + 1], dmem[data_mem_addr]};  				// LH				
			3'b011: o_ld_data = {24'b0, dmem[data_mem_addr]};  															// LBU
			3'b100: o_ld_data = {16'b0, dmem[data_mem_addr + 1], dmem[data_mem_addr]};  										// LHU
			3'b101: o_ld_data = {dmem[data_mem_addr + 3], dmem[data_mem_addr + 2], dmem[data_mem_addr + 1], dmem[data_mem_addr]};	// LW
			default: begin
			end
			endcase
		end
		2'b10: begin // OUTPUT MUX
			case ({i_lsu_addr[5],i_lsu_addr[4]})
			2'b00: begin
				case (load_sel)
				3'b001: o_ld_data = {{24{led_r_reg[0][7]}}, led_r_reg[0]}; 												// LB
				3'b010: o_ld_data = {{16{led_r_reg[1][7]}}, led_r_reg[1], led_r_reg[0]};  								//	LH				
				3'b011: o_ld_data = {24'b0, led_r_reg[0]};  															// LBU
				3'b100: o_ld_data = {16'b0, led_r_reg[1], led_r_reg[0]};  												// LHU
				3'b101: o_ld_data = {led_r_reg[3], led_r_reg[2], led_r_reg[1], led_r_reg[0]};	 								// LW
				default: begin
				end
				endcase
			end
			2'b01: begin		
				o_ld_data = {24'b0, led_g_reg};
			end
			default: begin
			end
			endcase
		end

		2'b11: begin // INPUT 
			case (i_lsu_addr[4]) 
			1'b0: begin
				case (load_sel)
					3'b001: o_ld_data = {{24{sw_reg[0][7]}}, sw_reg[0]}; 												// LB
					3'b010: o_ld_data = {{16{sw_reg[1][7]}}, sw_reg[1], sw_reg[0]};  									//	LH				
					3'b011: o_ld_data = {24'b0, sw_reg[0]};  															// LBU
					3'b100: o_ld_data = {16'b0, sw_reg[1], sw_reg[0]};  												// LHU
					3'b101: o_ld_data = {sw_reg[3], sw_reg[2], sw_reg[1], sw_reg[0]};	 								// LW
				default: begin
				end
				endcase
			end
			1'b1: o_ld_data[7:0] = btn_reg;	
			default: begin
			end
			endcase
		end
		default: begin
		end
		endcase
end 

always @(posedge i_clk or negedge i_rst_n) begin
	if (!i_rst_n) begin
		for (integer i = 0; i < 8192; i = i+1) dmem[i] = 8'h00;
	end else begin
		if (i_lsu_wren & (i_lsu_addr[15:13] == 3'b001)) begin
			case (store_sel)
			2'b01:  											// SB: Store Byte
                dmem[data_mem_addr] 		<= i_st_data[7:0];
            2'b10: begin 										// SH: Store Halfword
                dmem[data_mem_addr] 		<= i_st_data[7:0];
                dmem[data_mem_addr+1]	<= i_st_data[15:8];
            end
			2'b11: begin 										// SW: Store Word   
			    dmem[data_mem_addr] 		<= i_st_data[7:0];
                dmem[data_mem_addr+1] 	<= i_st_data[15:8];
                dmem[data_mem_addr+2] 	<= i_st_data[23:16];
                dmem[data_mem_addr+3] 	<= i_st_data[31:24];
			end
            default: begin                 
            end
			endcase
		end
	end 
end


always @(posedge i_clk or negedge i_rst_n) begin
	if (!i_rst_n) begin
        led_r_reg[0] <= 8'b0;
        led_r_reg[1] <= 8'b0;
        led_r_reg[2] <= 8'b0;
        led_r_reg[3] <= 8'b0;
        led_g_reg <= 8'b0;
		lcd_reg[0] <= 8'b0;
        lcd_reg[1] <= 8'b0;
        lcd_reg[2] <= 8'b0;
        lcd_reg[3] <= 8'b0;
		hex_reg[0] <= 8'b0;
		hex_reg[1] <= 8'b0;
		hex_reg[2] <= 8'b0;
		hex_reg[3] <= 8'b0;
		hex_reg[4] <= 8'b0;
		hex_reg[5] <= 8'b0;
		hex_reg[6] <= 8'b0;
		hex_reg[7] <= 8'b0;
	end else begin
		if (i_lsu_addr[15:11] == 5'b01110) begin // OUTPUT MUX
			case ({i_lsu_addr[5],i_lsu_addr[4]}) // bit 5 and 4
			2'b00: begin
				case (store_sel)
					2'b01:  									// SB: Store Byte
						led_r_reg[{i_lsu_addr[1],i_lsu_addr[0]}] 	<= i_st_data[7:0];
					2'b10: begin 								// SH: Store Halfword
						led_r_reg[{i_lsu_addr[1],i_lsu_addr[0]}] 	<= i_st_data[7:0];
						led_r_reg[{i_lsu_addr[1],i_lsu_addr[0]}+1]	<= i_st_data[15:8];
					end
					default: begin 								// SW: Store Word                   
						led_r_reg[{i_lsu_addr[1],i_lsu_addr[0]}] 	<= i_st_data[7:0];
						led_r_reg[{i_lsu_addr[1],i_lsu_addr[0]}+1] 	<= i_st_data[15:8];
						led_r_reg[{i_lsu_addr[1],i_lsu_addr[0]}+2] 	<= i_st_data[23:16];
						led_r_reg[{i_lsu_addr[1],i_lsu_addr[0]}+3] 	<= i_st_data[31:24];
					end
				endcase
			end
			2'b01: begin
				led_g_reg 	<= i_st_data[7:0];
			end
			2'b10: begin
					case (store_sel)
						2'b01:  								// SB: Store Byte
							hex_reg[{i_lsu_addr[2],i_lsu_addr[1],i_lsu_addr[0]}] 	<= i_st_data[7:0];
						2'b10: begin 							// SH: Store Halfword
							hex_reg[{i_lsu_addr[2],i_lsu_addr[1],i_lsu_addr[0]}] 	<= i_st_data[7:0];
							hex_reg[{i_lsu_addr[2],i_lsu_addr[1],i_lsu_addr[0]}+1]	<= i_st_data[15:8];
						end
						default: begin 							// SW: Store Word                   
							hex_reg[{i_lsu_addr[2],i_lsu_addr[1],i_lsu_addr[0]}] 	<= i_st_data[7:0];
							hex_reg[{i_lsu_addr[2],i_lsu_addr[1],i_lsu_addr[0]}+1] 	<= i_st_data[15:8];
							hex_reg[{i_lsu_addr[2],i_lsu_addr[1],i_lsu_addr[0]}+2] 	<= i_st_data[23:16];
							hex_reg[{i_lsu_addr[2],i_lsu_addr[1],i_lsu_addr[0]}+3] 	<= i_st_data[31:24];
						end
					endcase
			end
			2'b11: begin
				case (store_sel)
					2'b01:  									// SB: Store Byte
						lcd_reg[{i_lsu_addr[1],i_lsu_addr[0]}] 	<= i_st_data[7:0];
					2'b10: begin 								// SH: Store Halfword
						lcd_reg[{i_lsu_addr[1],i_lsu_addr[0]}] 	<= i_st_data[7:0];
						lcd_reg[{i_lsu_addr[1],i_lsu_addr[0]}+1]	<= i_st_data[15:8];
					end
					default: begin 								// SW: Store Word                   
						lcd_reg[{i_lsu_addr[1],i_lsu_addr[0]}] 	<= i_st_data[7:0];
						lcd_reg[{i_lsu_addr[1],i_lsu_addr[0]}+1] 	<= i_st_data[15:8];
						lcd_reg[{i_lsu_addr[1],i_lsu_addr[0]}+2] 	<= i_st_data[23:16];
						lcd_reg[{i_lsu_addr[1],i_lsu_addr[0]}+3] 	<= i_st_data[31:24];
					end
				endcase
			end
			endcase
		end
		end
	end

endmodule

