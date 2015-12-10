`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:15:06 11/07/2015
// Design Name:   bit_register
// Module Name:   C:/Users/Alicia/Documents/CSE140L/Lab3/BIT_REG_TEST.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: bit_register
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BIT_REG_TEST;

	// Inputs
	reg [7:0] P;
	reg CLK;
	reg RESET;

	// Outputs
	wire [7:0] Q;

	// Instantiate the Unit Under Test (UUT)
	bit_register uut (
		.P(P), 
		.Q(Q), 
		.CLK(CLK),
		.RESET(RESET)
	);

	initial begin
		// Initialize Inputs
		P = 0;
		CLK = 0;
		RESET = 0;

		// Wait 100 ns for global reset to finish
		#100;
      P = 1;
		#100;
		P = 2;
		#100;
		P = 3;
		#100;
		P = 4;
		#100;
		P = 5;
		#100;
		P = 6;
		#100;
		P = 7;
		#100;
		
		RESET = 1;
		#100;
      P = 1;
		#100;
		P = 2;
		#100;
		P = 3;
		#100;
		P = 4;
		#100;
		P = 5;
		#100;
		P = 6;
		#100;
		P = 7;
		#100;
		
	end
	
	always begin
		#17 CLK= ~CLK;
	end
      
endmodule

