#include<stdio.h>
#include<math.h>

int main(){
int n,a;
printf("Nhap vao so Fibonaci thu  : ");
scanf("%d",&n);
int a1 = 0;
int a2 = 1;
int i = 2;
                if (n == 0){
	                 a = a1;
       }
                if (n == 1){
	                 a = a2;
       }
               while( i <= n){
           	    a = a1 + a2;
		        a1 = a2;
			    a2 = a; 
			      i++;	 
			   }
			    printf("F%d = %d",n,a);
		return 0;	   
		}
		


            





              
    










