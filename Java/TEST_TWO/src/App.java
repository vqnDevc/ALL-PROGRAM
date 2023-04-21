import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner input = new Scanner(System.in);
        int age = input.nextInt();

        System.out.println("Hello, World! " + age);
        input.close();

    }
}
