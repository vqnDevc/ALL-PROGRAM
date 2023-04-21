#include<stdio.h>
#include<math.h>

int main(){
long n ;
printf("Nhap vao so nguyen n  : ");
scanf("%ld",&n);
long m = n;
int dao = 0;
   while( m > 0){
       dao = dao * 10 + m % 10;
	   m /= 10;   	
   }
   	if( dao == n){
   		printf("\n%d la so thuan nghich ",n);
	  }else{
	  	printf("\n%d khog la so thuan nghich ",n);
	  }
	  return 0;
   }
