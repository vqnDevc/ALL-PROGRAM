#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,m,n;
    scanf("%d%d",&m,&n);
    if(abs(m)<=abs(n)){
    for(int i=1;i<=abs(m);i++){
        if(m%i==0 && n%i==0)
           a=i;
         }  
      }else{
        for(int i=1;i<=abs(n);i++){
         if(m%i==0 && n%i==0)
            a=i;
      }
    }
    printf("%d",a);
    return 0;
}
