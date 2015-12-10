`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:55:35 11/07/2015 
// Design Name: 
// Module Name:    d_latch 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module d_latch( d, q, qn, clk
    );
	input clk, d;
	output q, qn;
	
	nand(d_wire, d, clk);
	nand(clk_wire, clk, d_wire);

	nand(q, d_wire, qn);
	nand(qn, q, clk_wire);

endmodule
