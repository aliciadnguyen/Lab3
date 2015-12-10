`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:28:40 11/07/2015
// Design Name:   d_flip_flop
// Module Name:   C:/Users/Alicia/Documents/CSE140L/Lab3/dff_test.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: d_flip_flop
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module dff_test;

	// Inputs
	reg d;
	reg clk;

	// Outputs
	wire q;

	wire q_l;

	// Instantiate the Unit Under Test (UUT)
	D_FLIP_FLOP2 uut (
		.d1(d), 
		.q1(q), 
		.clk1(clk), 
		.q_l(q_l)
	);

	initial begin
		// Initialize Inputs
		d = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		d = 1;
		#100;

	end
	
	always begin
		#17 clk= ~clk;
	end
      
endmodule

