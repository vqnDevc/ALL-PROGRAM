#include<stdio.h>
#include <stdlib.h>
int main(){
    int n;
	scanf("%d",&n);
    int h=2*n+1;
  
    for(int i=1;i<=h;i++){
    	for(int j=1;j<=h;j++){
    		int k = abs(n+1-j);
    	    if(k<=(i-1) && k<=(h-i)){          
		       if(i!= n+1 && k>0  && k<(i-1) && k<(h-i) )
			       printf("  ");	 	   
			   else
		           printf("* ");
		 }else  
		           printf(". ");
		}
		printf("\n");
	}
    
	 return 0;
}

