#include<stdio.h>

#define LENGTH 10

void nhap(int arr[]){
	int i;
	for(i=0;i<LENGTH;i++)
	   scanf("%d",&arr[i]);
}
void hienthi(int  arr[]){
	int i;
	for(i=0;i<LENGTH;i++)
	   printf("%d ",arr[i]);
	   printf("\n");
	arr[0] *= 100;     
}
int main(){
	int arr[LENGTH];
	nhap(arr);
	hienthi(arr);
	hienthi(arr);
	return 0;
}
