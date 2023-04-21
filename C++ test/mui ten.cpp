#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n); 
    for(int i=2*n-1;i>0;i--){
       for(int j=2*n-1;j>0;j--){
       	   if(i-1<=j-i&&(j-i)<n || (j+i-2*n)<n&&(j+i-2*n)>=(2*n-1-i))
       	      printf("*");
       	   else
			  printf(" ");   
	   }
	printf("\n");
    }
	 return 0;
}

