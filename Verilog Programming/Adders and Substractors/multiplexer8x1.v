module multiplexer8x1(s,y,i);
  input [2:0] s;
  output reg y;
  input [7:0] i;
  always @(s)
  begin
    if (s == 3'b00) y = i[0];
    else if(s == 3'b001) y = i[1];
    else if(s == 3'b010) y = i[2];
    else if(s == 3'b011) y = i[3];
    else if(s == 3'b100) y = i[4];
    else if(s == 3'b101) y = i[5];
    else if(s == 3'b110) y = i[6];
    else if(s == 3'b111) y = i[7];
  end
endmodule