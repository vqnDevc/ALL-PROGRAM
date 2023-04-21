#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;

int main(){
	vector<int> myvector;
	int myint;
	do{
		cin >> myint;
		myvector.push_back(myint);
	}while(myint);
	cout << int(myvector.size());
	getch();
    return 0;
}
