module test_encoder8x3_behavioural_model;
  reg enable;
  reg [7:0] i;
  wire [2:0] q;
  
  encoder8x3_behavioural_model e1(enable,i,q);
  initial
  begin
    enable = 0;
    #10 enable = 1;
    #10 i =  8'b00000001;
    #10 i =  8'b00000010;
    #10 i =  8'b00000100;
    #10 i =  8'b00001000;
    #10 i =  8'b00010000;
    #10 i =  8'b00100000;
    #10 i =  8'b01000000;
    #10 i =  8'b10000000;
    #100 $stop;
  end
endmodule