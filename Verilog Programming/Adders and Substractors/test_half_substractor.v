module test_half_substractor;
  reg [1:0] a;
  wire difference,borrow;
  
  half_substractor hs(a[1],a[0],difference,borrow);
  
  always
  #10 a = a + 1;
  
  initial begin
    a = 2'b00;
    #40 $stop;
  end
endmodule
