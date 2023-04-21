#include<stdio.h>
#include<math.h>
int main(){
    unsigned int n;
    scanf("%u",&n);
    int m=0,e=0;
    while(n>0){
     m += (n%10)*pow(2,e);
     n/=10;
     e++;
	}
	printf("%d",m);
	 return 0;
}

