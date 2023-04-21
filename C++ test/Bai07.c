#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    scanf("%d",&n);
    if(n>1){
    	int mark=0;
     	for(i=2;i<=sqrt(n);i++)
     	   if(n%i==0)
     	     mark=1;
		if(mark==0)
		  printf("%d is a prime number",n);
		else
		  printf("%d is not a prime number",n);  	      
	}else
	 printf("%d is not a prime number",n);
	 return 0;
}
 
