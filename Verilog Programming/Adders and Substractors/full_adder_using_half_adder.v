module full_adder_using_half_adder(a,b,c,sum,carry);
  input a,b,c;
  output wire sum,carry;
  wire w1,w2,w3;
  half_adder ha1(a,b,w1,w2);
  half_adder ha2(c,w1,sum,w3);
  or o1(carry,w3,w2);
endmodule
