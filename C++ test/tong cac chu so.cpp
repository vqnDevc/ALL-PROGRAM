#include<stdio.h>

int main(){
	
long n ;
printf("Nhap cao so nguyen n : ");
scanf("%ld",&n);
long sum = 0;
long m = n;
     printf("Tong cac chu so cua %ld =  ",n);
     while(m > 0){
     	sum += m % 10;
     	printf("%ld",m % 10);
        if( m >=10 ){
            printf(" + ");
		}
     	if(m < 10){
     		printf(" =");
		 }
     	m /= 10;
	 }
	 printf(" %ld ",sum);	
	
	return 0;
}

