import java.util.Scanner;

class Board {
    int count = 0;
    String board[] = {" "," "," "," "," "," "," "," "," "};

    void printBoard(){
        System.out.println(" " + board[0] + " | " + board[1] + " | " + board[2]);
        System.out.println("-----------");
        System.out.println(" " + board[3] + " | " + board[4] + " | " + board[5]);
        System.out.println("-----------");
        System.out.println(" " + board[6] + " | " + board[7] + " | " + board[8]);
    }

    boolean updateBoard(int position, String type){
        if(board[position - 1] == " "){
            board[position - 1] = type;
            count++;
            return true;
        }else{
            System.out.println("Position already selected. Select another position.");
            return false;
        }
    }

    boolean checkDraw(){
        return (count == 9);
    }

    boolean checkWin(String type){
        return  (board[0] == type && board[1] == type && board[2] == type) ||
                (board[3] == type && board[4] == type && board[5] == type) ||
                (board[6] == type && board[7] == type && board[8] == type) ||
                (board[0] == type && board[3] == type && board[6] == type) ||
                (board[1] == type && board[4] == type && board[7] == type) ||
                (board[2] == type && board[5] == type && board[8] == type) ||
                (board[0] == type && board[4] == type && board[8] == type) ||
                (board[2] == type && board[4] == type && board[6] == type);
    }
}

class Player {
    String name;
    String type;

    Player(String type){
        this.type = type;
        Scanner input = new Scanner(System.in);
        if(type == "X"){
            System.out.println("Player selecting X, enter your name: ");
            this.name = input.nextLine();
        }else{
            System.out.println("Player selecting O, enter your name: ");
            this.name = input.nextLine();
        }
    }
}

class Gameplay {
    Board board = new Board();
    Player player1 = new Player("X");
    Player player2 = new Player("O");

    Player cursor = player1;

    void play(){

        String message = " enter the position (1 - 9)";
        while(true){
            System.out.print(cursor.name + message + ": ");
            Scanner input = new Scanner(System.in);
            int position = input.nextInt();
            while(position < 1 || position > 9){
                System.out.println("Invalid position, retype!");
                System.out.print(cursor.name + message + ": ");
                position = input.nextInt();
            }

            if(board.updateBoard(position, cursor.type)){
                board.printBoard();

                if(board.checkWin(cursor.type)){
                    System.out.println(cursor.name + " wins!");
                    break;
                }else if (board.checkDraw()){
                    System.out.println("Game is a Draw!");
                    break;
                }else{
                    if(cursor == player1){
                        cursor = player2;
                    }else{
                        cursor = player1;
                    }
                } 
            }
        }
    }
}

public class caro {
    public static void main(String[] args) {
        Gameplay newgame = new Gameplay();
        newgame.play();
    }
}
