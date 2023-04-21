#include<stdio.h>
int main(){
	int n;
	printf(" Nhap vao so nguyen can dung : ");
	scanf("%d", &n);
	int count = 0;
	  
	printf("Cac uoc nguyen cua %d la : ",n);
	for (int i = 1; i <= n;i++){
		if ( n % i == 0){
			count += 1;
			printf("%d ",i);
		}
	}
	printf("\nSo uoc nguyen cua %d la : %d",n,count);
	return 0;
}
