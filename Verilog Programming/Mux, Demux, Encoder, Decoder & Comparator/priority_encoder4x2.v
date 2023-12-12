module priority_encoder4x2(enable,i,q);
  input [3:0] i;
  input enable;
  output reg [1:0] q;
  
  always @(enable,i)
  begin
    if(enable == 1'b0)
      q = 2'bxx;
    else
      begin
        if(i[0] == 1) q = 2'b00;
        else if(i[1] == 1) q = 2'b01;
        else if(i[2] == 1) q = 2'b10;
        else if(i[3] == 1) q = 2'b11; 
      end
  end
endmodule
