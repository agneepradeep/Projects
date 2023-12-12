module test_half_adder;
  reg [1:0]a;
  wire sum,carry;
  
  half_adder ha(a[0],a[1],sum,carry);
  
  always
  #10 a = a+1;
  
  initial
  begin
    a = 2'b00;
    #40 $stop;
  end
endmodule
