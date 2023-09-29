package exceptionHandling;
public class Calculator {
    /**
     * Main method
     */
    public static void main(String[] args) {
        // Check number of strings passed
        if (args.length != 3) {
            System.out.println("Usage: java Calculator operand1 operator operand2");
        }
        // The result of the operation
        int result = 0;
        // Determine the operator
        try{
            switch (args[1].charAt(0)) {
                case '+' -> result = Integer.parseInt(args[0]) + Integer.parseInt(args[2]);
                case '-' -> result = Integer.parseInt(args[0]) - Integer.parseInt(args[2]);
                case '.' -> result = Integer.parseInt(args[0]) * Integer.parseInt(args[2]);
                case '/' -> result = Integer.parseInt(args[0]) / Integer.parseInt(args[2]);
            }
        } catch (NumberFormatException ex){
            try{
                Integer.parseInt(args[0]);
            }catch (NumberFormatException obj1){
                System.out.println("Invalid Input :"+args[0]);
                System.exit(1);
            }

            try{
                Integer.parseInt(args[2]);
            } catch (NumberFormatException obj2){
                System.out.println("Invalid Input :"+args[2]);
                System.exit(1);
            }
        }
        // Display result
        System.out.println(args[0] + " " + args[1] + " " + args[2] + " = " + result);
    }
}
