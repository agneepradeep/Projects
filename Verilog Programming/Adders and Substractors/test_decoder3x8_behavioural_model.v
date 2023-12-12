module test_decoder3x8_behavioural_model;
  reg enable, a,b,c;
  wire [7:0] q;
  
  decoder3x8_behavioural_model d1(enable,a,b,c,q);
  initial
  begin
    enable = 0;
    #10 enable = 1;a = 0;b = 0;c = 0;
    #10 c = 1;
    #10 b = 1;c = 0;
    #10 c = 1;
    #10 a = 1;b = 0;c = 0;
    #10 c = 1;
    #10 b = 1;c = 0;
    #10 c = 1;
    #100 $stop;
  end
endmodule
