import java.util.*;
public class TicTacToeAdvanced {
    public static void main(String[] args){
        Random r = new Random();
        int[] player_1 = new int[2]; //Player - 1 uses red
        int[] player_2 = new int[2]; //Player - 2 uses yellow
        String[][] board = new String[6][7];
        String Result;

        for(int i = 0;i < 6;i++){
            for(int j = 0;j<7;j++){
                board[i][j] = "-";
            }
        }

        while(true){
            BoardPrint(board);
            System.out.println("Player - 1 Turn :");
            while(true) {
                player_1[0] = r.nextInt(0, 6);
                player_1[1] = r.nextInt(0, 7);
                if (board[player_1[0]][player_1[1]].equals("-")) {
                    board[player_1[0]][player_1[1]] = "R";
                    break;
                }
            }
            System.out.println("Player 1 Choice :("+player_1[0]+","+player_1[1]+")");
            Result = CheckWinner(board,"R");
            if(Result.equals("Player 1 Won")){
                break;
            } else if (Result.equals("Draw")) {
                break;
            }
            BoardPrint(board);
            System.out.println("Player - 2 Turn");
            while(true) {
                player_2[0] = r.nextInt(0,6);
                player_2[1] = r.nextInt(0,7);
                if (board[player_2[0]][player_2[1]].equals("-")) {
                    board[player_2[0]][player_2[1]] = "Y";
                    break;
                }
            }
            System.out.println("Player 2 Choice :("+player_2[0]+","+player_2[1]+")");
            Result = CheckWinner(board,"Y");
            if(Result.equals("Player 2 Won")){
                break;
            } else if (Result.equals("Draw")) {
                break;
            }
        }
    }
    static void BoardPrint(String[][] S){
        for(int i = 0;i < 6;i++){
            System.out.print("|");
            for(int j = 0;j<7;j++){
                System.out.print(S[i][j]+"|");
            }
            System.out.println();
        }
    }
    static String CheckWinner(String[][] S,String C){
        String R;
        R = "";
        for(int i = 0;i<6;i++){
            for(int j = 0;j<7;j++){
                if(S[i][j].equals(C)){
                    for(int k = 1;k<9;k++){
                        R = "";
                        switch(i){
                            case 1: //Horizontal Checking Right
                                if((i+1<6) && (i+2<6) && (i+3<6)){
                                    R = S[i][j] + S[i+1][j] + S[i+2][j] + S[i+3][j];
                                    break;
                                }
                            case 2: //Horizontal Checking Left
                                if((i - 1 >=0) && (i - 2 >=0) && (i - 3 >=0)){
                                    R = S[i][j] + S[i-1][j] + S[i-2][j] + S[i-3][j];
                                    break;
                                }
                            case 3: //Vertical Checking Up
                                if((j - 1 >=0) && (j - 2 >=0) && (j - 3 >=0)){
                                    R = S[i][j] + S[i][j-1] + S[i][j-2] + S[i][j-2];
                                    break;
                                }
                            case 4: //Vertical Checking Down
                                if((j + 1 < 7) && (j + 2 < 7) && (j + 3 <7)){
                                    R = S[i][j] + S[i][j+1] + S[i][j+2] + S[i][j+3];
                                    break;
                                }
                            case 5: //Diagonal Checking Up-Left
                                if(((i-1>=0) && (j-1>=0)) && ((i-2>=0) && (j-2>=0)) && ((i-3>=0) && (j-3>=0))){
                                    R = S[i][j] + S[i-1][j-1] + S[i-2][j-2] + S[i-3][j-3];
                                    break;
                                }
                            case 6: //Diagonal Checking Up-Right
                                if(((i+1<6) && (j-1>=0)) && ((i+2<6) && (j-2>=0)) && ((i+3<6) && (j-3>=0))){
                                    R = S[i][j] + S[i+1][j-1] + S[i+2][j-2] + S[i+3][j-3];
                                    break;
                                }
                            case 7: //Diagonal Checking Down-Left
                                if(((i-1>=0) && (j+1<7)) && ((i-2>=0) && (j+2<7)) && ((i-3>=0) && (j+3<7))){
                                    R = S[i][j] + S[i-1][j+1] + S[i-2][j+2] + S[i-3][j+3];
                                    break;
                                }
                            case 8: //Diagonal Checking Down-Right
                                if(((i+1<6) && (j+1<7)) && ((i+2<6) && (j+2<7)) && ((i+3<6) && (j+3<7))){
                                    R = S[i][j] + S[i+1][j+1] + S[i+2][j+2] + S[i+3][j+3];
                                    break;
                                }
                        }
                        if(R.equals(C+C+C+C)){
                            if(C.equals("R")){
                                return "Player 1 won";
                            } else {
                                return "Player 2 won";
                            }
                        }
                        else{
                            int CheckEntry = 0;
                            for(int a = 0;a<3;a++){
                                for(int b = 0;b<3;b++){
                                    if(!S[a][b].equals("-")){
                                        CheckEntry += 1;
                                    }
                                    else{
                                        break;
                                    }
                                }
                            }
                            if(CheckEntry == 42) {
                                R = "Draw";
                                break;
                            }
                        }
                    }
                }
            }
        }
        R = "";
        return R;
    }
}
