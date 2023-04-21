#include<iostream>
using namespace std;

int main() {
	int number,m,a[4];
	cout<<"Nhap vao so co 4 cs : ";
	cin>>number;
	char *kyTu[10] = {"khong","mot","hai","ba","bon","nam","sau","bay","tam","chin"};

	m = number;
	for(int i=0; i<4; i++) {
		a[i] = m%10;
		m/=10;
	}
	if(a[3] != 0)
		cout<<kyTu[a[3]]<<" nghin ";
	if(number%1000 != 0) {
		cout<<kyTu[a[2]]<<" tram ";
		if(number%100 != 0) {
			if(a[1]==0)
				cout<<"linh ";
			else if(a[1]==1)
				cout<<" muoi ";
			else
				cout<<kyTu[a[1]]<<" muoi ";
			if(a[0]!=0)
				cout<<kyTu[a[0]];
		}
	}

	return 0;
}