#include<stdio.h>
double nhap(double* a[1000][1000],int n,int m){
     for(int i=0;i<n;i++)
       for(int j=0;j<m;j++)
        scanf("%lf",&a[i][j]);  
}
double AddMatrix(double* a[1000][1000],double* b[1000][1000],int n,int m){
    double* sum[n][m];
    for(int i=0;i<n;i++)
       for(int j=0;j<m;j++){
           &sum[i][j]= &(*a[i][j]) + &(*b[i][j]);
           printf("%.2lf",*sum[i][j]);
       }
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    double* a[n][m];
	double* b[n][m];
    nhap(*a,n,m);
    nhap(*b,n,m);
    AddMatrix(&a,&b,n,m);
    return 0;
}
