#include<stdio.h>

int TongUoc(int n){
	int sum=0;
	  for(int i=1;i<n;i++){
	     if(n%i==0)
	     	sum+= i;	
	  }
	  return sum;
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(TongUoc(a)==b &&TongUoc(b)==a)
       printf("true");
    else
	   printf("false");   
	 return 0;
}

