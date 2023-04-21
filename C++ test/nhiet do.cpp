#include<stdio.h>
#include<math.h>
int main(){
    float w,t,v;
    scanf("%f%f",&t,&v);
  
   w = pow(v,0.16) * (-35.75 + t * 0.4275) + t * 0.6215 + 35.74 ;
    printf("%0.2f",w);
    return 0;
}
