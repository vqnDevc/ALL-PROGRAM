#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int k=cbrt(n);
      for(int a=1;a<=k;a++){
       for(int b=a;b<=k;b++){
        for(int c=a+1;c<=k;c++){
         for(int d=c;d<=k;d++){
              if(a*a*a+b*b*b==c*c*c+d*d*d && a*a*a+b*b*b <=n)	 						
		   	     printf("%d ",a*a*a+b*b*b);  	 			
		      
			 }
		   }
		 }
       }
    return 0;
}
