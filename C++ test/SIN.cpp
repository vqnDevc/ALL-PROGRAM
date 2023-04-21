#include<stdio.h>
#include<math.h>
int main(){
    double x;
      scanf("%lf",&x);
    double sum=0, oldSum=-1;
    int i=1;
    double tu=x, mau=1;
    double dau = 1.0;
 while (fabs(sum-oldSum)>0.001){
	oldSum = sum;
	sum += dau*tu/mau;
	i += 2;
	mau *= (i-1)*i;	
	tu *= (x*x);
	dau *= -1.0;
 }
 printf("%.4lf",sum);
	 return 0;
}

