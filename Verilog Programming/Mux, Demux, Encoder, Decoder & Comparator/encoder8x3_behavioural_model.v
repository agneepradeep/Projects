module encoder8x3_behavioural_model(enable,i,q);
  input [7:0] i;
  input enable;
  output reg [2:0] q;
  
  always @(enable,i)
  begin
    if(enable == 1'b0) q = 3'bxxx;
    else
      begin
        if(i == 8'b00000001) q = 3'b000;
        else if(i == 8'b00000010) q = 3'b001;
        else if(i == 8'b00000100) q = 3'b010;
        else if(i == 8'b00001000) q = 3'b011;
        else if(i == 8'b00010000) q = 3'b100;
        else if(i == 8'b00100000) q = 3'b101;
        else if(i == 8'b01000000) q = 3'b110;
        else if(i == 8'b10000000) q = 3'b111;
      end
  end
endmodule
