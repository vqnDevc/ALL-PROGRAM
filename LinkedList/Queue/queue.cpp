#include <bits/stdc++.h>
#include <conio.h>
#include <queue>
using namespace std;

//push pop front
int main(){

    queue<int> myqueue;
    for(int i = 1; i <= 4; i++) myqueue.push(i * i);
	
	myqueue.pop();
	cout<<myqueue.front();
	
    cout << '\n';
    getch();
    
    return 0;
}
