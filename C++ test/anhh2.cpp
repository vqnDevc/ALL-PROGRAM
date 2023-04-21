#include<stdio.h>
float giaithua(int a){
	int tich=1;
	for(int i=2;i<=a;i++)
	   tich*=i;
    return tich;	   
}
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    double s;
    
    s = (giaithua(a)+giaithua(b)+giaithua(c))/giaithua(a+b+c);
    
    printf("%.2lf",s);
	 return 0;
}

