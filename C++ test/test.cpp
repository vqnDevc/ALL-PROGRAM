#include<stdio.h>
int main(){
    int i,j,day;
       scanf("%d",&day);
    double thucHanh[10],thiGiuaKy[2];
    for(i=0;i<10;i++)
       scanf("%lf",&thucHanh[i]);
    for(i=0;i<10;i++)
       for(j=i+1;j<10;j++)
           if(thucHanh[i]<thucHanh[j]){
               double temp = thucHanh[i];
              thucHanh[i] = thucHanh[j];
              thucHanh[j] = temp;
           }
    double TH=0;
        for(i=0;i<5;i++)
            TH+=thucHanh[i];
        TH = TH/5.0;   
    for(i=0;i<2;i++);
       scanf("%lf",&thiGiuaKy[i]);
    double GK=(thiGiuaKy[0]+thiGiuaKy[1])/2.0;
    double CK,ST;
       scanf("%lf%lf",&CK,&ST);
    int soBaiTh=0;
    for(i=0;i<9;i++)
       if(thucHanh[i]!=0)
          soBaiTh++;
    int CC = day + soBaiTh;      
    double TK;
    if(CC<20)   
       TK=0;
    else
       TK= 0.2*TH + 0.2*GK + 0.6*(ST+CK);
    printf("%.1lf",TK);
}
