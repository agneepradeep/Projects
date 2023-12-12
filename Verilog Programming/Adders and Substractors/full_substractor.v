module full_substractor(a,b,c,difference,borrow);
  input a,b,c;
  output wire difference,borrow;
  wire w1,w2,w3;
  xor x1(difference,a,b,c);
  xnor x2(w1,a,b);
  and a1(w2,~a,b);
  and a2(w3,c,w1);
  or o1(borrow,w3,w2);
endmodule
