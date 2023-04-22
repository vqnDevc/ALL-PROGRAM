import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner input = new Scanner(System.in);

        int[] numbers = new int[4];

        for(int i = 0; i < numbers.length; i++){
            numbers[i] = input.nextInt();
        }
        // numbers[0] = 1;
        // numbers[1] = 2;
        // numbers[2] = 3;
        // numbers[3] = 4;

        for(int i = 0; i < numbers.length; i++){
            System.out.println(numbers[i]);
        }
        input.close();
    }
}
