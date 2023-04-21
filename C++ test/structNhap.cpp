#include <iostream>
#include <string>

using namespace std;

struct Person {
    string name;
    int age;
    string gender;
    
    Person() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); // Clear the newline character from the input buffer
        cout << "Enter gender: ";
        getline(cin, gender);
    }
    
    void printconsole(){
    	cout << name << endl << age << endl << gender;
	}
};

int main() {
    Person p;
    p.printconsole();
//    cout << "Name: " << p.name << endl;
//    cout << "Age: " << p.age << endl;
//    cout << "Gender: " << p.gender << endl;
    return 0;
}