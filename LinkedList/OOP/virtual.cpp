#include <bits/stdc++.h>

using namespace std;
class Person{
private:
	string name;
	int age;
public:
		Person(){}
		Person(string name, int age) : name(name), age(age) {}
		string getName(){
			return name;
		}
		int getAge(){
			return age;
		}
		virtual int getMssv(){
			return 0;
		}
		virtual void display() = 0;
};

class Student : public Person{
private:
	int mssv;
public:
	Student(){}
	Student(string name, int age, int mssv) : Person(name,age), mssv(mssv) {}
	int getMssv(){
		return mssv;
	}
	void display(){
		cout << "Name: " << getName() << endl;
		cout << "Age: "  << getAge() << endl;
		cout << "MSSV: " << mssv << endl;
	}
};
int main(){

	Student b("kien",20,21020148);
	Person *a = &b;
	a->display();
	cout << a->getMssv();
    return 0;
}
