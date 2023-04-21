#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int randxy(int min, int max){
	return min+rand()%(max - min+1);
}
void gameController(char &controller){
	cout<<"ban muon choi tiep khong (c or k)?"<<endl;;
	cin>>controller;;
}

void notification(int &number, const int root, int& count){
	if(number==root){
		if(count == 1)
			cout<<"tuyet voi, ban doan ngay ra so do"<<endl;
		else
			cout<<"Doan "<<count<<" lan moi ra =))"<<endl;	
	}else{
		int check = number - root;
		if(abs(check>200)){
			if(check<0) cout<<"Qua nho ... hay doan so do?"<< endl;
			else 		cout<<"Qua lon ... hay doan so do?"<<endl;
		}else if(abs(check>50)){
				if(check<0)	cout<<"Hoi nho ... hay doan so do?"<<endl;
				else		cout<<"Hoi lon ... hay doan so do?"<<endl;
		}else{
			cout<<"Gan hon roi day ... hay doan so do?"<<endl;
		}	
	}
}

int checkedNumber(int &number,int &root){
	if(number == root) return 1;
	return 0;	
}

void gameLoop(){
	char controller = 'c';
	while(controller == 'c'){
		int number;
		int root = randxy(1,1000);
		int count = 0;
		cout<<root;	
		cout<<"toi vua nghi ra mot so trong khoang tu 1 den 1000"<<endl;
		while(!checkedNumber(number,root)){
			cin>>number;
			count++;
			notification(number,root,count);	
		}
		gameController(controller);
	}
}


int main(){
    srand(time(0));
    gameLoop();
    return 0;
}
