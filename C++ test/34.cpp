#include<stdio.h>
int check(int n){
    while(n>0){
          int d = n%10;
          if(n%10==0 || n%d!=0)
             return 0;
        n/=10;
    }
    return 1;
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",check(a));
}
