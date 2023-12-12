module test_full_adder_using_decoder3x8;
  reg a,b,c;
  wire sum,carry;
  
  full_adder_using_decoder3x8 f1(a,b,c,sum,carry);
  initial
  begin
    a = 0;b = 0;c = 0;
    #10 c = 1;
    #10 b = 1;c = 0;
    #10 c = 1;
    #10 a = 1;b = 0;c = 0;
    #10 c = 1;
    #10 b = 1;c = 0;
    #10 c = 1;
    #100 $stop;
  end
endmodule 