#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Nhap gia tri a, b, c(a, b, c > 0): " ;
	cin >> a >> b >> c;
	int s1 = 1;
	for(int i = 2; i <= a; i++)
	{
			s1 = s1 * i;
	}
		
	int s2 = 1;
	for(int j = 2; j <= b; j++)
	{
			s2 = s2 * j;
	}
		
	int s3 = 1;
	for(int k = 2; k <= c; k++)
	{
			s3 = s3 * k;
	}
	
	int s4 = 1;
	int n;
	n =  a + b + c;
	for(int l = 1; l <= n; l++)
	{
			s4 = s4 * l;
	}
	
	float s;
	s = ((float)s1 +(float)s2 + (float)s3)/(float)s4 ;
	cout <<s ;
	return 0;
}
