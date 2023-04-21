#include<stdio.h>
#include<math.h>
void rescue(double a[],double b[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                double temp=a[i];
                       a[i]=a[j];
                       a[j]=temp;
            }
        }
    }
    int dem=0;
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
       	  if(a[i]==b[j]*pow(2,-i) && a[i]>=0.05){
       	     printf("%d ",j);
       	     dem++;
       	    for(int k=i+1;k<n;k++)
       	     a[k] /= 2;     
       	   }
	   }
    }
    if(dem==0) printf("No one is alive.");
}
int main(){
    int n,count=0;
    scanf("%d",&n);
    double a[1000],b[1000];
    for(int i=0;i<n;i++)
      scanf("%lf",&a[i]);
    for(int i=0;i<n;i++)
	  b[i]=a[i]; 
    if(n>=0){ 
       for(int i=0;i<n;i++)
	       if(a[i]<0 || a[i]>1)
	          count++;
	   if(count!=0) printf("invalid");
	   else   	rescue(a,b,n);
    }else printf("invalid"); 
     return 0;
}
