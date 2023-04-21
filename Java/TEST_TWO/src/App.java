import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner input = new Scanner(System.in);
        double age = input.nextDouble();

        System.out.println("Hello, World! " + age);
        input.close();

    }
}
