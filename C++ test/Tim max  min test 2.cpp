#include<stdio.h>
#include<math.h>
void nhap(int *a, int *n){
	while(*n<=0){
	    printf("Nhap n > 0: ");
	    scanf("%d", n);
   }
	for(int i=0;i<*n;i++){
	    printf("arr[%d] = ",i);
	    scanf("%d",&a[i]);
    }
}
void minMax(int *a,int n,int *min,int *max){
	for(int i=1;i<n;i++){
		if(*min > a[i])
		   *min = a[i];
		if(*max < a[i])
		   *max = a[i];    
	}
}
void hienthi(int min,int max){
	if(min==max)
	   printf("KHONG CO MIN MAX");
	else
	   printf("\nMAX = %d\nMIN = %d",max,min);   
}
int main(){
    int n=0;
    int arr[100];
    nhap(arr,&n);
    int min=arr[0], max=arr[0];
    minMax(arr,n,&min,&max);
    hienthi(min,max);
	 return 0;
}

