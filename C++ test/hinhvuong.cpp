#include<stdio.h>


int main(){
	int n;
	do{
	printf("    Nhap so nguyen n : ");
	int count = 0;
	scanf("%d",&n );
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
		   printf("%5d",count++);
       }
       printf("\n\n");
    }
	getchar();
	}while( n != 0);
	return 0;
	
}
