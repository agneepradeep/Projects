module demultiplexer8x1(i,s,y);
  input i;
  input [2:0] s;
  output reg [7:0] y;
  
  always @(s)
  begin
    if(s == 3'b000)
      begin
        y[0] = i; y[7:1] = 7'b0000000;
      end
    else if(s == 3'b001)
      begin
        y[1] = i; y[7:2] = 6'b000000; y[0] = 1'b0;
      end
    else if(s == 3'b010)
      begin
        y[2] = i; y[7:3] = 5'b00000; y[1:0] = 2'b00;
      end
    else if(s == 3'b011)
      begin
        y[3] = i; y[7:4] = 4'b0000; y[2:0] = 3'b000;
      end
    else if(s == 3'b100)
      begin
        y[4] = i; y[7:5] = 3'b000; y[3:0] = 4'b0000;
      end
    else if(s == 3'b101)
      begin
        y[5] = i; y[7:6] = 2'b00; y[4:0] = 5'b00000;
      end
    else if(s == 3'b110)
      begin
        y[6] = i; y[7] = 1'b0; y[5:0] = 6'b000000;
      end
    else if(s == 3'b111)
      begin
        y[7] = i; y[6:0] = 7'b0000000;
      end
  end
endmodule
