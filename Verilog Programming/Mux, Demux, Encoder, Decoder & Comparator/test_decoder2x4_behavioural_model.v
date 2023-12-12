module test_decoder2x4_behavioural_model;
  reg enable,a,b;
  wire [3:0] q;
  
  decoder2x4_behavioural_model d1(enable,a,b,q);
  initial 
  begin
    enable = 0;
    #10 enable = 1; a = 0; b = 0;
    #10 b = 1;
    #10 a = 1;b = 0;
    #10 b = 1;
    #50 $stop; 
  end
endmodule
