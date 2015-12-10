`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:50:14 11/09/2015
// Design Name:   Traffic
// Module Name:   C:/Users/Alicia/Documents/CSE140L/Lab3/traffic_test.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Traffic
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module traffic_test;

	// Inputs
	reg CLK;
	reg SENSOR;

	// Outputs
	wire TL1R;
	wire TL1Y;
	wire TL1G;
	wire TL2R;
	wire TL2Y;
	wire TL2G;

	// Instantiate the Unit Under Test (UUT)
	Traffic uut (
		.CLK(CLK), 
		.SENSOR(SENSOR), 
		.TL1R(TL1R), 
		.TL1Y(TL1Y), 
		.TL1G(TL1G), 
		.TL2R(TL2R), 
		.TL2Y(TL2Y), 
		.TL2G(TL2G)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		SENSOR = 1;
		// Wait 100 ns for global reset to finish
		#623;
		SENSOR = 0;
		#1000;
		SENSOR = 1;


        
		// Add stimulus here

	end
      
		always begin
		#7;
		CLK = ~CLK;
		end
      
endmodule

