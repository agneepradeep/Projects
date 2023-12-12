module test_priority_encoder4x2;
  reg enable;
  reg [3:0] i;
  wire [1:0] q;
  
  priority_encoder4x2 p1(enable,i,q);
  initial
  begin
    enable = 0;
    #10 enable = 1; i = 4'b0100;
    #10 i = 4'b0010;
    #10 i = 4'b1000;
    #10 i = 4'b0001;
    #10 $stop;
  end
endmodule