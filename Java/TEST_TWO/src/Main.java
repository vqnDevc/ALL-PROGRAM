// Replace ___ with your code
import java.util.Scanner;

class Student {
    
    int score;
    char grade;
    private String name;
    // assign value to score
    Student(int score) {
        this.score = score;
    }

    public void setName(String name){
        this.name = name;
    }
    
    public String getName(){
        return this.name;
    }

    void assignGrade() {
        
        // assign grade based on the value
        if (this.score >= 90) {
            this.grade = 'A';
        }
        else if (this.score >= 80) {
            this.grade = 'B';
        }
        else {
            this.grade = 'C';
        }
    }
}

// abstract class, interface: all method are abstract :: to use 'interface' notice the key 'implements' like as 'extends' 
abstract class Polygon {                  
    abstract void displayInfo();

    Polygon(){
        System.out.println("i'm polygon");
    }

    int getPerimeter(int[] sides) {
        int perimeter = 0;
        // find sum of all sides
        for (int side : sides) {
            perimeter = perimeter + side;
        }

        return perimeter;
    }
}

// inherit the Quadrilateral class withs displayInfo() method
class Quadrilateral extends Polygon {

    Quadrilateral(){
        super();     // super()  gọi đến hàm khởi tạo lớp cha, và phải đứng đầu tiên trong hàm khởi tạo con
        System.out.println("i'm quadrilateral");
    }

    void displayInfo() {
        
        // super : access to father's method class
        System.out.println("A quadrilateral is a polygon with 4 sides.");
    }
}

class Main {
    public static void main(String[] args) {

        
        // take the score input
        // get sides input
        Scanner input = new Scanner(System.in);
        
        System.out.println("Enter student's name: ");
        String name = input.nextLine();

        System.out.println("Enter " + name + " score: ");
        int score = input.nextInt();
        
        // create object
        Student student = new Student(score);
        student.setName(name);
        // call the assignGrade() method
        student.assignGrade();
        
        // print the grade
        System.out.println("Student: " + student.getName());
        System.out.println("Grade: " + student.grade);

        // create an object of Quadrilateral
        Quadrilateral q1 = new Quadrilateral();
        
        // instanceof : xem đối tượng có phải là 1 thể hiện của 1 class hay ko
        System.out.println(q1 instanceof Polygon);

        // sides of triangle
        int[] quadrilateralSides = new int[4];
                
        for (int i = 0; i < quadrilateralSides.length; ++i) {
                quadrilateralSides[i] = input.nextInt();
            }
        
        // call getPerimeter using q1
        int perimeter = q1.getPerimeter(quadrilateralSides);
        System.out.println(perimeter);
        
        // call displayInfo() method
        q1.displayInfo();
        input.close();
    }
}



