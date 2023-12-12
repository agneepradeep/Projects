module test_full_substractor;
  reg [2:0]a;
  wire difference,borrow;
  
  full_substractor fs(a[2],a[1],a[0],difference,borrow);
  
  always
  #10 a = a+1;
  
  initial begin
    a = 3'b000;
    #80 $stop;
  end
endmodule
