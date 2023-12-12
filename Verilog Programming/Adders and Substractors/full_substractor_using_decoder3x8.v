module full_substractor_using_decoder3x8(a,b,c,difference,borrow);
  input a,b,c;
  output wire difference, borrow;
  
  wire [7:0] q;
  reg enable = 1'b1;
  
  decoder3x8_behavioural_model d1(enable,a,b,c,q);
  
  assign difference = q[1] | q[2] | q[4] | q[7];
  assign borrow = q[1] | q[2] | q[3] | q[7];
endmodule
