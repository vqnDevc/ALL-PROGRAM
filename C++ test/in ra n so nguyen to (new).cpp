#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool prime(int n){
	if(n<2)
	   return false;
	for(int i=2;i<=sqrt(n);i++)
	    if(n%i==0)
		   return false;
	return true;	      
}
int main(){
    int n;
    scanf("%d",&n);
    int i=2,dem=0;
    printf("Day so nguyen to la :\n");
    while(1){
    	if(prime(i)){
    	   dem++;
		   printf("%d",i);
		   if(dem<n) printf(",");
		}
		if(dem==n)
		   break;
    	i++;   
	}
}

