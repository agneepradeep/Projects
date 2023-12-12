module test_sr_latch;
  reg s,r;
  wire q,qbar;
  
  sr_latch s1(s,r,q,qbar);
  initial
  begin
    {s,r} = 2'b00;
    #10 {s,r} = 2'b01;
    #10 {s,r} = 2'b10;
    #10 {s,r} = 2'b11;
    #10 $stop;
  end
endmodule
