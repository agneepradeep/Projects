module test_full_adder;
  reg [2:0]a;
  wire sum,carry;
  
  full_adder fa(a[2],a[1],a[0],sum,carry);
  always
  #10 a = a+1;
  
  initial begin
    a = 3'b000;
    #80 $stop;
  end
endmodule
