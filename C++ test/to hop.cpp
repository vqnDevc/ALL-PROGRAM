#include<stdio.h>
unsigned int giaithua(int n){
    if(n==0||n==1)
       return 1;
    return n*giaithua(n-1);
}
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%d",giaithua(n)/(giaithua(k)*giaithua(n-k)));
}
