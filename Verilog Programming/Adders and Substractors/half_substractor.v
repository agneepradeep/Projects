module half_substractor(a,b,difference,borrow);
  input a,b;
  output wire difference,borrow;
  
  xor x1(difference,a,b);
  and a1(borrow,~a,b);
endmodule
