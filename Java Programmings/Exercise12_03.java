package exceptionHandling;
import java.util.*;
public class Exercise12_03 {
    public static void main(String[] args){
        Scanner read = new Scanner(System.in);
        Random rand = new Random();

        int[] Array = new int[100];
        for(int i = 0;i<Array.length;i++){
            Array[i] = rand.nextInt(0,99);
        }
        boolean checkInput = true;
        do{
            try{
                System.out.print("Type Array Index :");
                int Index = read.nextInt();
                System.out.println("Corresponding Element is :"+Array[Index]);
            } catch (ArrayIndexOutOfBoundsException obj){
                System.out.println("Index is Out of the range of Array");
                checkInput = false;
            }
        }while(checkInput);
    }
}
