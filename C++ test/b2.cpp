#include <stdio.h>
#include <math.h>
void nhapDuLieu(double *eps){
	do{
		printf("Nhap vao eps (0<eps<1) : ");
		scanf("%lf",eps);
	}while(*eps>=1 ||*eps<=0);
}

double f( double x ) {
 return pow(x,2)*sin(x);
}

double inter( double a, double b, unsigned n ) {
 unsigned i;
 double h = ( b - a )/n;
 double t = 0.5 * ( f( a ) + f( a + n * h ) );
 for ( i = 1; i < n; i++ )
 t += f( a + i * h ); 
 return t * h;
}

double ketQua(double a,double b, unsigned n,double eps){
	 double t, t1;
     t1 = inter( a, b, n );
     do {
        t = t1;
        n *= 2;
        t1 = inter( a, b, n );
     }while ( fabs( t1 - t ) / 3 > eps );
  return t1;
}

int main() {
 unsigned n = 10;
 double a,b,eps; 
 char x;
 while(1){
 	 printf("\nNhap 0 de thoat chuong trinh(nhung ky tu khac van chay binh thuong)\n");
 	 scanf("%c",&x);
 	 if(x=='0')
 	    return 0;
 	 printf("\nNhap a = ");
     scanf("%lf",&a);
     printf("Nhap b = ");
     scanf("%lf",&b);
     nhapDuLieu(&eps);
     printf("Ket qua : %.2lf\n",ketQua(a,b,n,eps));
     getchar();
 }
 return 0;
}
