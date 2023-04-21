#include<stdio.h>
typedef struct hcn{
        int dai,rong;
}hcn;
struct hcn nhap(){
    hcn a;
    scanf("%d%d",&a.dai,&a.rong);
    return a;
}
void ketQua(struct hcn a){
    int P = (a.dai + a.rong) * 2;
    int S =  a.dai * a.rong;
    printf("%d %d",P,S);
}
int main(){
    hcn a = nhap();
    ketQua(a);   
}
