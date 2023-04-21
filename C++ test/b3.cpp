#include<stdio.h>
#include<math.h>
void nhapDuLieu(double *eps){
	do{
		printf("Nhap vao eps (0<eps<1) : ");
		scanf("%lf",eps);
	}while(*eps>=1 ||*eps<=0);
}
int main(){
    double n;
    nhapDuLieu(&n);
	 return 0;
}

