#include<stdio.h>
#include<math.h>
double var(double a[],double mean,int n){
    double X=0;
    for(int i=1;i<=n;i++){
     double y=a[i]-mean;	
     X += pow(y,2);
   }
    return X/n;
}
int main(){
    int n;
    scanf("%d",&n);
    double a[n];
    double mean;
	double sum=0;
    for(int i=1;i<=n;i++){
     scanf("%lf",&a[i]);
     sum += a[i];
    }
    mean = sum/n;
    printf("%0.2lf",var(a,mean,n));
    
    return 0;
}
