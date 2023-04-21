#include<stdio.h>
#include<math.h>

double mau(int n,double a[],double x){
    double gama=0;
    for(int i=1;i<=n;i++){
        gama += pow(a[i]-x,2);
    }
    return sqrt(gama/n);
}
double norm(double b[],double a[],double m,double y,int n){
     for(int i=1;i<=n;i++){
         b[i] = (a[i]-m)/y;
         printf("%.2lf ",b[i]);
     }
}
int main(){
    int n;
    double m,x=0;
    double a[1000],b[1000];
       scanf("%d",&n);
  for(int i=1;i<=n;i++)
       scanf("%lf",&a[i]);
  for(int i=1;i<=n;i++)
       x += a[i];
       m=x/n;   
    double y = mau(n,a,m);
    norm(b,a,m,y,n);
     return 0;
}
