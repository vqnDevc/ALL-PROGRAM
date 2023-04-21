#include<stdio.h>
#include<math.h>
int main(){
    int h;
    scanf("%d",&h);
    for(int i=1;i<=h;i++){
    	for(int j=1;j<2*h;j++){
    		if(abs(h-j) <= (i-1))
    		  printf("*");
    		else
    		  printf(" ");
		}
		printf("\n");
	}
	 return 0;
}

