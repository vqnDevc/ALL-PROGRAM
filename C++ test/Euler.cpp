#include<stdio.h>

int main(){
    int n,a1,b1,c1,d1,e1;
    scanf("%d",&n);
    for(int a=1;a<n;a++){
    	a1 = a*a*a*a*a;
    	for(int b=a+1;b<n;b++){
    		b1 = b*b*b*b*b;
    		for(int c=b+1;c<n;c++){
    			c1 = c*c*c*c*c;
    			for(int d=c+1;d<n;d++){
    				d1 = d*d*d*d*d;
    				for(int e=d+1;e<n;e++){
    					e1 = e*e*e*e*e;
    					if(a1+b1+c1+d1==e1)
    					   printf("%d^5 + %d^5 + %d^5 + %d^5 = %d^5",a,b,c,d,e);
					}
				}
			}
		}
	}
	 return 0;
}

