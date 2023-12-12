module test_encoder4x2_behavioural_model;
  reg [3:0] i,enable;
  wire [1:0] q;
  
  encoder4x2_behavioural_model e1(enable,i,q);
  
  initial
  begin
    enable = 0;
    #10 enable = 1;i = 4'b0001;
    #10 i = 4'b0010;
    #10 i = 4'b0100;
    #10 i = 4'b1000;
    #10 $stop;
  end
endmodule