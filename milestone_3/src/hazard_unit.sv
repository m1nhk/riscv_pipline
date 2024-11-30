/* verilator lint_off UNUSED */
module hazard_unit (
    input logic [4:0] rs1E, rs2E,
    input logic [4:0] rdM, rdWB,
    input logic rd_wrenM, rd_wrenWB,
    input logic [1:0] wb_selD,
	input logic [1:0] wb_selE,
    input logic [6:0] opcodeM, opcodeE,
    input logic mem_wrenE,
    input logic br_sel,

    output logic [1:0] forw_a_sel, forw_b_sel,
    output logic stallF, stallD, flushD, flushM, stallE, flushE
);

always_comb begin
    // RAW hazard
    if (rd_wrenM && (rdM != 5'b0) && (rdM == rs1E)) forw_a_sel = 2'b10;
    else if (rd_wrenWB && (rdWB != 5'b0) && (rdWB == rs1E)) forw_a_sel = 2'b01;
    else forw_a_sel = 2'b00; 

    if (rd_wrenM && (rdM != 5'b0) && (rdM == rs2E)) forw_b_sel = 2'b10;
    else if (rd_wrenWB && (rdWB != 5'b0) && (rdWB == rs2E)) forw_b_sel = 2'b01;
    else forw_b_sel = 2'b00;
end

always_comb begin
    flushM = 1'b0;
    flushD = 1'b0;
    stallE = 1'b0;
    stallF = 1'b0;
    stallD = 1'b0;
    flushE = 1'b0;  

    if (rd_wrenM && (rdM != 0) && (opcodeM == 7'b0000011) && ((rdM == rs1E) || (rdM == rs2E))) begin // Load hazard
        flushM = 1'b1;
        stallE = 1'b1;
        stallF = 1'b1;
        stallD = 1'b1;
    end 

    if (br_sel && (rdM != 0) && ((opcodeE == 7'b1100011) && ((rdWB == rs1E) || (rdWB == rs2E)))) begin // Branch instruction
        flushD = 1'b1;
        stallF = 1'b1;
        flushE = 1'b1;
    end

    if (rd_wrenM && (rdM != 0) && opcodeE == 7'b1101111) begin // JAL hazard
        flushD = 1'b1;
        stallF = 1'b1;
        flushE = 1'b1;
    end

    if (rd_wrenM && (rdM != 0) && opcodeE == 7'b1100111 && ((rdWB == rs1E) || (rdWB == rs2E))) begin // JALR hazard
        flushD = 1'b1;
        stallF = 1'b1;
        flushE = 1'b1;
    end
end

endmodule
