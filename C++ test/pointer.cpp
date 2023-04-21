#include<iostream>
using namespace std;

int main(){
	char ch = 'a';
	char* p = &ch ;
	char* p1 = (char*)&ch;
	cout << sizeof(p1)<< endl << sizeof(p);
}


