`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:27:41 11/06/2015 
// Design Name: 
// Module Name:    d_flip_flop 
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
module d_flip_flop( d, q, qn, clk );

	input clk, d;
	output q, qn;
	
	//reg q, qn;
	
	//wire q, qn;

	nand(d_wire, d, clk);
	nand(clk_wire, clk, d_wire);

	nand(q, d_wire, qn);
	nand(qn, q, clk_wire);
	
endmodule