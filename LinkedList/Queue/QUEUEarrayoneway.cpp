#include <bits/stdc++.h>

using namespace std;

int arrQue[100000], MAX_SIZE = 100000;
int SIZE = 0;

int size(){
	return SIZE;
}

bool empty(){
	return SIZE == 0;	
}

void push(int x){
	if(SIZE == MAX_SIZE) return;
	arrQue[SIZE] = x; SIZE++;
}

void pop(){
	if(SIZE == 0) return ;
	for(int i = 0; i < SIZE; i++){
		arrQue[i] = arrQue[i+1];
	}
	--SIZE;		
}

int front(){
	return arrQue[0];
}

int main(){
	while(1){
		cout<<"\n--------------\n";
		cout<<"1.push\n";
		cout<<"2.pop\n";
		cout<<"3.front\n";
		cout<<"4.size\n";
		cout<<"5.empty\n";
		cout<<"6.Duyet\n";
		cout<<"-EXIT-\n";
		cout<<"---------------\n";
		int n; cin>>n;
		switch(n){
			case 1:
				int x;cin>>x;push(x); break;
			case 2:
				pop(); break;
			case 3:
				cout<<front()<<endl; break;
			case 4:
 				cout<<size(); break;
			case 5:
				empty()?cout<<"EMPTY":cout<<"NOT EMPTY"; 
				break;
			case 6:
				for(int i = 0; i < SIZE; i++) cout<<arrQue[i]<<" ";
				break;
			default:
				return 0;
		}
	}
    return 0;
}
