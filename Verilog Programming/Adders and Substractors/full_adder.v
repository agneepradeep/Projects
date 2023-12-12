module full_adder(a,b,c,sum,carry);
  input a,b,c;
  output wire sum,carry;
  
  assign sum = a^b^c;
  assign carry = (a&b)|(b&c)|(c&a);
endmodule
