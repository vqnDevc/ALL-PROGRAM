#include<stdio.h>
void xapSep(int a[],int n){
	for(int i=0;i<n;i++)
     for(int j=i+1;j<n;j++)
	     if(a[i]%2==1&&a[j]%2==0){
	     	 int temp = a[i];
                 a[i] = a[j];
                 a[j] = temp;
		 }
    for(int i=0;i<n;i++)
     for(int j=i+1;j<n;j++){
         if(a[i]%2==0&&a[j]%2==0&&a[i]>a[j]){
             int temp = a[i];
                 a[i] = a[j];
                 a[j] = temp;
         }
         if(a[i]%2==1&&a[j]%2==1&&a[i]<a[j]){
             int temp = a[i];
                 a[i] = a[j];
                 a[j] = temp;
         }
     } 
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
    xapSep(a,n); 
    for(int i=0;i<n;i++)
	 printf("%d ",a[i]);  
}
