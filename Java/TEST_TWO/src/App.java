import java.util.Scanner;

public class App {
    void printNames(String[] names){
        for(String name : names){
            System.out.println(name);
        }
    }

    public static void main(String[] args) throws Exception {
        Scanner input = new Scanner(System.in);

        String[] names = new String[4];

        for(int i = 0; i < names.length; i++){
            names[i] = input.nextLine();
        }
         
        App obj = new App();
        obj.printNames(names);

        // charAt() truy cap ky tu trong chuoi String tai vi tri index
        // concat() noi 2 chuoi voi nhau
        // equals() so sanh 2 chuoi
        // string.replace(char oldValue, char newValue) : thay doi xau con ben trong cua 1 xau
        // VD: s1 = Full House; s1.replace("Full", "Null"); s1 = Null House;
        // string.toLowerCase() chuyen string ve chu thuong
        // string.toUpperCase() chuyen string ve chu Hoa

        // numbers[0] = 1;
        // numbers[1] = 2;
        // numbers[2] = 3;
        // numbers[3] = 4;

        input.close();
    }
}
