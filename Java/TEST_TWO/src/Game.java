import java.util.Scanner;

public class Game {
    String getComputerChoice(){
        String computerChoice;
        int choice = (int)(Math.random()*3 + 1);

        if(choice == 1){
            computerChoice = "rock";
            }else if(choice == 2){
                computerChoice = "paper";
                }else{
                    computerChoice = "scissors";
                }

        return computerChoice;
    }

    String getUserChoice(){

        Scanner input = new Scanner(System.in);

        System.out.println("Enter rock, paper or scissors:");
        String userInput;
        while(true){
            String userChoice = input.nextLine();
            userChoice = userChoice.toLowerCase();

            if(userChoice.equals("rock")  || 
               userChoice.equals("paper") || 
               userChoice.equals("scissors")){
                userInput = userChoice;
                break;
            }
        }
        
        input.close();
        return userInput;
    }

    String getResult(String computerChoice, String userChoice){
        String result;

        if(computerChoice.equals(userChoice)){
            result = "draw";
            }else if(computerChoice.equals("rock") && userChoice.equals("paper")     ||
                     computerChoice.equals("paper") && userChoice.equals("scissors") ||
                     computerChoice.equals("scissors") && userChoice.equals("rock") ){
                            result = "win";
                            }else{
                                result = "lose";
                            } 
        return result;
    }

    public static void main(String[] args){
        Game obj = new Game();

        String userInput = obj.getUserChoice();
        String computerChoice = obj.getComputerChoice();
        String result = obj.getResult(computerChoice, userInput);

        System.out.println("User input: " + userInput );
        System.out.println("Computer choice: " + computerChoice);
        System.out.println(result);
    }
}
