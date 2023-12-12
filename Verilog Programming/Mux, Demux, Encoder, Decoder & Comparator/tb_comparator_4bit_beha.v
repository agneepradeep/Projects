module tb_comparator_4bit_beha;
  reg [3:0] A,B;
  wire A_grt_B, A_less_B, A_eq_B;
  
  comparator_4bit_beha_a comp(A,B,A_grt_B,A_less_B,A_eq_B);
  
  initial begin
    A = 12; B= 10; #10;
    B = 15; #10;
    B = 12;
  end
endmodule
