module ID_IE (
    input logic i_clk,
    input logic i_rst_n,
    input logic rd_wrenD,
    input logic [1:0] wb_selD,
    input logic mem_wrenD,
    input logic [3:0] alu_opD, 
    input logic op_a_selD, op_b_selD,
    input logic br_unsignedD,
    input logic [2:0] load_selD,
    input logic [1:0] store_selD,
    input logic [31:0] pcD, pc_nxtD,
    input logic [31:0] o_rs1_dataD, o_rs2_dataD,
    input logic [31:0] immD,
    input logic [4:0] rdD, rs1D, rs2D,
    input logic [6:0] opcodeD,
    input logic stallE, flushE,
    input logic insn_vld,

    output logic rd_wrenE,
    output logic [1:0] wb_selE,
    output logic mem_wrenE,
    output logic [3:0] alu_opE, 
    output logic op_a_selE, op_b_selE,
    output logic br_unsignedE,
    output logic [2:0] load_selE,
    output logic [1:0] store_selE,
    output logic [31:0] pcE, pc_nxtE,
    output logic [31:0] o_rs1_dataE, o_rs2_dataE,
    output logic [31:0] immE,
    output logic [4:0] rdE, rs1E, rs2E,
    output logic [6:0] opcodeE,
    output logic insn_vldE
);

always_ff @(posedge i_clk or negedge i_rst_n) begin 
    if (!i_rst_n | flushE) begin
        rd_wrenE <= 0;
        wb_selE <= 0;
        mem_wrenE <= 0;
        alu_opE <= 0;
        op_a_selE <= 0;
        op_b_selE <= 0;
        br_unsignedE <= 0;
        load_selE <= 0;
        store_selE <= 0;
        pcE <= 0;
        pc_nxtE <= 0;
        o_rs1_dataE <= 0;
        o_rs2_dataE <= 0;
        immE <= 0;
        rdE <= 0;
        rs1E <= 0;
        rs2E <= 0;
        opcodeE <= 0;
        insn_vldE <= 0;
    end else if (stallE) begin
        rd_wrenE <= rd_wrenE;
        wb_selE <= wb_selE;
        mem_wrenE <= mem_wrenE;
        alu_opE <= alu_opE;
        op_a_selE <= op_a_selE;
        op_b_selE <= op_b_selE;
        br_unsignedE <= br_unsignedE;
        load_selE <= load_selE;
        store_selE <= store_selE;
        pcE <= pcE;
        pc_nxtE <= pc_nxtE;
        o_rs1_dataE <= o_rs1_dataE;
        o_rs2_dataE <= o_rs2_dataE;
        immE <= immE;
        rdE <= rdE;
        rs1E <= rs1E;
        rs2E <= rs2E;
        opcodeE <= opcodeE;
        insn_vldE <= insn_vldE;
    end else begin
        rd_wrenE <= rd_wrenD;
        wb_selE <= wb_selD;
        mem_wrenE <= mem_wrenD;
        alu_opE <= alu_opD;
        op_a_selE <= op_a_selD;
        op_b_selE <= op_b_selD;
        br_unsignedE <= br_unsignedD;
        load_selE <= load_selD;
        store_selE <= store_selD;
        pcE <= pcD;
        pc_nxtE <= pc_nxtD;
        o_rs1_dataE <= o_rs1_dataD;
        o_rs2_dataE <= o_rs2_dataD;
        immE <= immD;
        rdE <= rdD;
        rs1E <= rs1D;
        rs2E <= rs2D;
        opcodeE <= opcodeD;
        insn_vldE <= insn_vld;
    end
end

endmodule
