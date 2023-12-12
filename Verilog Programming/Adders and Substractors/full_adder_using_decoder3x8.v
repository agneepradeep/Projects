module full_adder_using_decoder3x8(a,b,c,sum,carry);
  input a,b,c;
  output wire sum,carry;
  wire [7:0] q;
  reg enable = 1'b1;
  
  decoder3x8_behavioural_model d1(enable,a,b,c,q);
  
  assign sum = q[1] | q[2] | q[4] | q[7];
  assign carry = q[3] | q[5] | q[6] | q[7];
endmodule
  