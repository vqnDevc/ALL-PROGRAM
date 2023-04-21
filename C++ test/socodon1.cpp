#include<stdio.h>
#include<stdlib.h>

int soCoDon(int *p,int size){
    int res=*p;
    for(int i=1;i<size;i++)
        res=res ^ (*(p+i));
    return res;
}
int main(){
    int n;
    scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
        scanf("%d",p+i);
    printf("%d",soCoDon(p,n));
    free(p);
    return 0;
}
// XOR 1+1=0
//     1+0=1
//     0+0=0
/// 1100 + 1100 = 0000

