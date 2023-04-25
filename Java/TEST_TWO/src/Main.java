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

class Main {
    public static void main(String[] args) {
        
        // take the score input
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
        input.close();
    }
}
