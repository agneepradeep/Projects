package exceptionHandling;
public class HexToDecimal {
    private String Hex;
    private int Dec = 0;

    public static void main(String[] args){
        HexToDecimal h = new HexToDecimal("ZX");
    }
    HexToDecimal(String Hex) throws NumberFormatException{
        try {
            this.Hex = Hex;
            Convert();
            System.out.println("The Equivalent Decimal Number is :"+Dec);
        } catch (NumberFormatException obj){
            System.out.println(obj.getMessage());
        }
    }

    void Convert(){
        for(int i = 0;i<Hex.length();i++){
            char hexChar = Hex.charAt(i);
            if(HexChar(hexChar)){
                Dec = Dec *16 + HexDecimalChar(hexChar);
            }else{
                throw new NumberFormatException("Invalid Input : The Given Hexadecimal Number Do not Have Hexadecimal Character");
            }



        }
    }
    static boolean HexChar(char H){
        return (H >= '0' && H <= '9') || (H >= 'A' && H <= 'F');
    }

    static int HexDecimalChar(char H){
        if(H >= '0' && H <= '9'){
            return (int)(H - '0');
        }
        else if (H >= 'A' && H <= 'F'){
            return (int)(10 + H - 'A');
        }
        else{
            return 0;
        }
    }
}
