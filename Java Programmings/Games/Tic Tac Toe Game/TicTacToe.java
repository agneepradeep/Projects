import java.util.*;
public class TicTacToe {
    public static void main(String[] args){
        Scanner read = new Scanner(System.in);

        int[] player_1 = new int[2];
        int[] player_2 = new int[2];
        String[][] board = new String[3][3];
        String Winner;

        for(int i = 0;i<3;i++){
            for(int j = 0;j<3;j++){
                board[i][j] = " ";
            }
        }

        while (true){
            System.out.println("Player 1 Turns");
            Options(board);
            System.out.print("Type Row and Column :");
            player_1[0] = read.nextInt();
            player_1[1] = read.nextInt();
            board[player_1[0]][player_1[1]] = "X";
            Winner = CheckWinner(board);
            if(Winner.equals("Player 1 Won")){
                System.out.println(Winner);
                break;
            }
            if(Winner.equals("Player 2 Won")){
                System.out.println(Winner);
                break;
            }
            if(Winner.equals("Draw")) {
                System.out.println(Winner);
                break;
            }
            System.out.println();

            System.out.println("Player 2 Turns");
            Options(board);
            System.out.print("Type Row and Column :");
            player_2[0] = read.nextInt();
            player_2[1] = read.nextInt();
            board[player_2[0]][player_2[1]] = "O";
            Winner = CheckWinner(board);
            if(Winner.equals("Player 1 Won")){
                System.out.println(Winner);
                break;
            }
            if(Winner.equals("Player 2 Won")){
                System.out.println(Winner);
                break;
            }
            if(Winner.equals("Draw")) {
                System.out.println(Winner);
                break;
            }
            System.out.println();
        }
    }
    static void Options(String[][] B){
        for(int i = 0;i<3;i++){
            for(int j = 0;j<3;j++){
                if(B[i][j].equals(" ")) {
                    System.out.print("(" + i + "," + j + ")");
                    System.out.print("\t");
                }
            }
            System.out.println();
        }
    }

    static String CheckWinner(String[][] B){
        String Result = "";
        for(int i = 0;i<8;i++){
            Result = null;
            Result = switch (i) {
                case 0 -> B[0][0] + B[0][1] + B[0][2];
                case 1 -> B[1][0] + B[1][1] + B[1][2];
                case 2 -> B[2][0] + B[2][1] + B[2][2];
                case 3 -> B[0][0] + B[1][0] + B[2][0];
                case 4 -> B[0][1] + B[1][1] + B[2][1];
                case 5 -> B[0][2] + B[1][2] + B[2][2];
                case 6 -> B[0][0] + B[1][1] + B[2][2];
                case 7 -> B[0][2] + B[1][1] + B[2][0];
                default -> Result;
            };
            if(Result.equals("XXX")){
                Result = "Player 1 Won";
                break;
            }
            else if(Result.equals("OOO")){
                Result = "Player 2 Won";
                break;
            }
            else{
                int CheckEntry = 0;
                for(int a = 0;a<3;a++){
                    for(int b = 0;b<3;b++){
                        if(!B[a][b].equals(" ")){
                            CheckEntry += 1;
                        }
                        else{
                            break;
                        }
                    }
                }
                if(CheckEntry == 9) {
                    Result = "Draw";
                    break;
                }
            }
        }
        return Result;
    }
}