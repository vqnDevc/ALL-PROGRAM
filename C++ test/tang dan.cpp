#include<stdio.h>
int main(){
	int n ;
	int a[1000];
	const char BELL = '\a';
		printf("%c",BELL);
	printf("nhap so so nguyen can dung :");
	scanf("%d", &n);
		printf("%c",BELL);
	
	for ( int i = 1; i <= n; i ++){
		printf("nhap so thu %d :",i);
		    scanf("%d", &a[i]);
		    	printf("%c",BELL);
	}
	for ( int i = 1 ; i <= n; i++){
		for( int j = i +1 ;j <= n;j++){
			if ( a[i] > a[j]){
			int temp = a[i];
			    a[i] = a[j];
			    a[j] = temp;
			}
		}
	}
	printf("day so theo thu tu tang dan la:  ");
	for(int i = 1;i <= n;i++){
		printf("%d ",a[i]);	
	}
	printf("%c",BELL);
	return 0;
}
