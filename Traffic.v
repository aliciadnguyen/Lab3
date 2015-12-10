`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:02:33 11/07/2015 
// Design Name: 
// Module Name:    Traffic 
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
module Traffic( CLK, SENSOR, TL1R, TL1Y, TL1G, TL2R, TL2Y, TL2G );

	input CLK, SENSOR;
	output TL1R, TL1Y, TL1G, TL2R, TL2Y, TL2G;
	reg TL1R = 0, 
		 TL1Y = 0, 
		 TL1G = 0, 
		 TL2R = 0, 
		 TL2Y = 0, 
		 TL2G = 0;
	reg [5:0] G_COUNT = 0;
	reg [5:0] Y1_COUNT = 0;
	reg [5:0] Y2_COUNT = 0;
	reg [5:0] TIMER = 0;
				 
	
	initial begin
		TL2R = 1;
		TL1G = 1;
	end
	
	/*always@(posedge CLK) begin
		TIMER = TIMER + 1;

		if(TL2R == 1 && TIMER >= 40) begin
			
			if(SENSOR == 1) begin
				TL1G <= 0;
				TL1Y <= 1;
			end
			
			if(SENSOR == 1 && TIMER >= 43) begin
			   TL1Y <= 0;
				TL1R <= 1;
				TL2R <= 0;
				TL2G <= 1; 
				TIMER <= 0;
	      end
			
		end
		
		if(SENSOR == 1 && TL1R == 1) begin
	
			G_COUNT = G_COUNT + 1;
			
			if(G_COUNT >= 10) begin
				TL2G <= 0;
				TL2Y <= 1;
				G_COUNT <= 0;
			end
			
			if(Y1_COUNT >= 3) begin
			    TL2Y <= 0;
				 TL2R <= 1;
				 TL1R <= 0;
				 TL1G <= 1;
				 Y1_COUNT <= 0;
			end
			else
				Y1_COUNT = Y1_COUNT + 1;
		end
		
		if(SENSOR == 0 && TL1R == 1) begin //&& TL1G == 0
			TL2G <= 0;
			TL2Y <= 1;
			if(Y2_COUNT >= 3) begin
				TL2Y <= 0;
				TL2R <= 1;
				TL1R <= 0;
				TL1G <= 1;
				Y2_COUNT = 0;
			end 

			else begin
				Y2_COUNT = Y2_COUNT + 1;
	     	end
			
		end
	end //end always */
	always@(posedge CLK) begin
		
		TIMER = TIMER + 1;
		
		if (SENSOR == 1) begin
			if( TL2R && TL1G ) begin
				if (TIMER < 40) begin
					TIMER = TIMER + 1;
				end
				else begin
					TL1G <= 0;
					TL1Y <= 1;
					TIMER = 0;
				end
			end
			
			if (TL1Y) begin
				if(TIMER < 3) 
					TIMER = TIMER + 1;
				else begin
					TL1Y <= 0;
					TL2R <= 0;
					TL1R <= 1;
					TL2G <= 1;
					TIMER = 0;
				end
			end
			
			if(TL2G && TL1R) begin
				if (TIMER < 10)
					TIMER = TIMER + 1;
				else begin
					TL2G <= 0;
					TL2Y <= 1;
					TIMER = 0;
				end
			end
			
			if (TL2Y) begin
				if (TIMER < 3)
					TIMER = TIMER + 1;
				else begin
					TL2Y <= 0;
					TL2R <= 1;
					TL1R <= 0;
					TL1G <= 1;
					TIMER = 0;
				end
			end
		end
		
		if(SENSOR == 0)
			TIMER = 0;
	end
endmodule
