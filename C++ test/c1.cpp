#include<stdio.h>
#include<math.h>
int CheckPrime(unsigned int n){
    if(n<2)
       return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
           return 0;
    return 1;       
}
void phantich(unsigned int n){
	int m=n;
	if(n==1)
	   printf("2^0");
     for(int i=2;i<=m;i++){
         int count=0;
         if(CheckPrime(i)&& n%i==0){
            while(n%i==0){
                 count++;
                  n/=i;
            }
               printf("%d^%d",i,count);
            if(n!=1)
               printf("*");
         }
     }
}
int main(){
	int n;
	scanf("%d",&n);
    phantich(n);
	 return 0;
}

