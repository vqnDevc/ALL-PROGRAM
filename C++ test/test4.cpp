#include<stdio.h>
#include<math.h>

int main(){
int n;
int m = 2;
int count =0;
printf("Nhap vao so nguyen n > 0 : ");
scanf("%d",&n);
printf(" Cac so nguyen to la :");
   while(1){
   	int mark = 1;
   	for(int i = 2;i <= sqrt(m);i++){
   		if ( m % i == 0){
   			mark = 0;
   			break;
		   }
	   }
	   if( mark == 1){
	   	count++;
	   	printf("%d,",m);
	   }
	   if( count >= n){
	   	break;
	   }
	   m++;
   }
	return 0;
	
}
