#include<stdio.h>
int main(){
    int x,day,month,year;
    scanf("%d%d%d",&day,&month,&year);
    year=year-(14-month)/12;

    x=year+year/4-year/100+year/400;

   month = month + 12*( (14-month) / 12 ) - 2;

   day = ((day+ x + 31* month / 12 ) % 7 );
   
   printf("%d",day);
   
   return 0; 
    
}
