#include<stdio.h>
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int max=(m>n)?m:n;
    for(int i=max;i<=m*n;i++){
	   if(i%m==0 && i%n==0){
	      printf("%d",i);
	      break;
	  }
	}
	 return 0;
}

