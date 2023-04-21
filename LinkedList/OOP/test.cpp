#include <bits/stdc++.h>

using namespace std;

class Animal{
public:
	virtual void sound(){
		cout<<"some sound"<<endl;
	}
};

class Cat : public Animal{
public:
	void sound(){
		cout<< "meow meow"<<endl;
	}
};

class Dog: public Animal{
public:
	void sound(){
		cout<< "woof woof"<<endl;
	}
	void play(){
		cout<< "The dog is playing" <<endl;
	}
};

int main(){
//	Cat cat;
//	Animal *animal1 = &cat;   //up-casting
//	animal1->sound();
//	
//	Dog dog;
//	Animal *animal2 = &dog;
//	animal2->sound();

	Animal animal;
	Dog *d 	= (Dog*)&animal;   //down-casting
	d->sound();
//	d->play();
    return 0;
}
