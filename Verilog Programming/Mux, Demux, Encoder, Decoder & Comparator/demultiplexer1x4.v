module demultiplexer1x4(i,s,y);
  input i;
  input [1:0] s;
  output reg [3:0] y;
  
  always @(s)
  begin
    if(s == 2'b00)
    begin 
      y[0] = i;y[3:1] = 3'b000;
    end
    else if(s == 2'b01)
    begin 
      y[1] = i; y[3:2] = 2'b00; y[0] = 1'b0;
    end
    else if(s == 2'b10) 
    begin 
      y[2] = i; y[3] = 1'b0;y[1:0] = 2'b00;
    end
    else if(s == 2'b11)
    begin 
      y[3] = i;y[2:0] = 3'b000;
    end
  end
endmodule