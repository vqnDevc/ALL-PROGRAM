import java.util.Scanner;

class game {

    String userPick;
    String computerPick;
    String result;

    String getComputerPick() {
        
        String computerPick;
            int ramdomNumber = (int) (Math.random()*3 + 1);

            if(ramdomNumber == 1){
                computerPick = "rock";
                }else if(ramdomNumber == 2){
                    computerPick = "paper";
                    }else{
                        computerPick = "scissors";
                        }
                        return computerPick;                   
    }

    String getUserPick() {
        Scanner input = new Scanner(System.in);
            String userPick;

            while(true){
                System.out.println("Enter rock, paper, scissors:");
                    userPick = input.nextLine();
                        if(userPick.equals("rock") ||
                                userPick.equals("paper") ||
                                    userPick.equals("scissors")){
                                        break;
                                        }
            }
            return userPick;    
    }

    String getResult(String userPick, String computerPick) {
        if(userPick.equals(computerPick)){
            return "draw";
                }else if(userPick.equals("paper") && computerPick.equals("rock") ||
                            userPick.equals("rock") && computerPick.equals("scissors") ||
                                userPick.equals("scissors") && computerPick.equals("paper")){
                                    return "win";
                                        }else{
                                            return "lose"; 
                                        }
    }
}

class test {
    public static void main(String[] args) {
        while(true){
            game g1 = new game();

            String userPick = g1.getUserPick();
            String computerPick = g1.getComputerPick();
            String result = g1.getResult(userPick, computerPick);

            System.out.println("User Pick: " + userPick);
            System.out.println("Computer Pick: " + computerPick);
            System.out.println("You " + result);

            Scanner input = new Scanner(System.in);

            System.out.println("Do you want to play again? (y/n): ");

            if(input.hasNextLine()){
                String playAgain = input.nextLine();
                if(!(playAgain.equals("y"))){
                    break;
                }
            }
        }
    }
}
