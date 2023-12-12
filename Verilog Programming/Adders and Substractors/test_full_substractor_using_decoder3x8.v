module test_full_substractor_using_decoder3x8;
  reg [2:0] a;
  wire difference,borrow;
  
  full_substractor_using_decoder3x8 f1(a[2],a[1],a[0],difference,borrow);
  initial
  begin
    a = 3'b000;
    #10 a = 3'b001;
    #10 a = 3'b010;
    #10 a = 3'b011;
    #10 a = 3'b100;
    #10 a = 3'b101;
    #10 a = 3'b110;
    #10 a = 3'b111;
    #100 $stop;
  end
endmodule 
