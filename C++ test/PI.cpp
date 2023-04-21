#include<stdio.h>
int main(){
    double c;
    printf("Nhap vao do chinh xac cua c : ");
    scanf("%lf",&c);
    int k=0;
    int i=-1;
    double res=0;
    double tg=1/(2*k+1);
    while(tg>=c){
         tg = 1.0/(2*k+1);
		 res += -1*i*tg;
		 i *= -1;
		 k++;     
	 	
	}
	double PI=4*res;
	printf("PI = %0.8lf",PI);
	 return 0;
}

