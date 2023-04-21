#include<stdio.h>
#include<stdlib.h>
typedef struct phanSo{
    int tu;
    int mau;
}PS;
int ucln(int a,int b){
    a = abs(a);
    b = abs(b);
    while(a*b != 0){
        if(a>b) a%=b;
        else    b%=a;
    }
    return a + b;
}
PS rutGon(PS a){
   PS c;
   c.tu  = a.tu/ucln(a.tu,a.mau);
   c.mau = a.mau/ucln(a.tu,a.mau);
   return c;
}
void HienThi(PS a){
     a = rutGon(a);
     printf("%d/%d",a.tu,a.mau);
}
int main(){
	PS a;
	scanf("%d%d",&a.tu,&a.mau);
	HienThi(a);
}
