import java.util.InputMismatchException;
import java.util.Scanner;
public class Exercise12_02 {
    public static void main(String[] args){
        int A, B;
        boolean checkInput = false;
        Scanner read = new Scanner(System.in);
        do{
            try{
                System.out.print("Enter Integer A :");
                A = read.nextInt();
                System.out.print("Enter Integer B :");
                B = read.nextInt();
                checkInput = true;
                System.out.println("The Sum is :"+A+B);
            } catch (InputMismatchException obj){
                System.out.println("Invalid Input :"+"Integer is Required");
                read.nextLine();
            }
        }while(!checkInput);
    }
}
