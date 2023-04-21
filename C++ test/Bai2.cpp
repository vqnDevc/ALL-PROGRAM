#include<stdio.h>
double func(int n){
	double sum=0;
	int dau=1;
	for(int i=1;i<2*n;i++){
		if(i%2==1){
			sum = sum + dau*1.0/i;
			dau *= -1;
		}
	}
	   return sum;
}
int main(){
     int n;
     scanf("%d",&n);
     printf("%lf",func(n));
	 return 0;
}

