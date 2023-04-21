#include<stdio.h>
int main(){
	int n;
	int i = 2;
	printf("Nhap vao so nguyen n : ");
	scanf("%d",&n);
	
	if( n < 0){
		printf("Nhap n > 0 \n");
	}else{
		printf("%d = ",n);
	     while(n > 1){
	     	if(n % i == 0){
	     		printf("%d",i);
	     		if ( n != i){
	     			printf("x");
				 }
				 n /= i;
			 }else{
			 	i++;
			 }
		 }
	}

	return 0;
}

	
	
	          
	
	
	
	
	

