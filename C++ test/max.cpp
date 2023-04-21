#include<stdio.h>
int max(int a,int b){
	if(a>b)
	  return a;
 
	  return b;  
}
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int y=max(max(a,b),max(c,d));
    printf("%d",y);
	 return 0;
}

