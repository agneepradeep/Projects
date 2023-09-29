package exceptionHandling;
import java.lang.Math;
public class BinToDecimal {
    final private String Binary;
    private int Number = 0;
    public static void main(String[] args){
        new BinToDecimal("11110011");
    }
    BinToDecimal(String Binary) throws NumberFormatException{
        this.Binary = Binary;
        try{
            Convert();
            System.out.println("The Equivalent Decimal Number is :"+Number);
        } catch(NumberFormatException obj){
            System.out.println(obj.getMessage());
        }
    }
    void Convert(){
        for(int i = 0;i<Binary.length();i++){
            char bin = Binary.charAt(i);
            if(checkBin(bin)){
                Number += Math.pow(2,i)* (bin-'0');
            }else{
                throw new NumberFormatException("Invalid Input: The Given Binary Number is Invalid");
            }
        }
    }
    boolean checkBin(char B){
        return B == '0' || B == '1';
    }
}
