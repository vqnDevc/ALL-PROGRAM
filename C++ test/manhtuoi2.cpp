#include<iostream>
using namespace std;

int main() {
	int n;
	cout<<"Nhap n";
	cin>>n;
	long long f[100];
	f[0]=1;
	f[1]=1;
	for(int i=2; i<=n; i++)
		f[i] = f[i-1] + f[i-2];

	for(int i=0; i<=n; i++)
		cout<<"f"<<i<<" = "<<f[i]<<endl;

	return 0;
}