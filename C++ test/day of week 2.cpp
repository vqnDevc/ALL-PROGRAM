#include<stdio.h>
int main(){
    int a,x,day,month,year;
    scanf("%d%d%d",&day,&month,&year);
    
    year=year-(14-month)/12;
    x=year + year/4 - year/100 + year/400;
    month = month + 12 * ((14-month)/12)-2;
    day = (day + x + 31 * month/12) % 7;
    a = day;
    switch(a){
     case 0 : printf("Sunday");
     break;
     case 1 : printf("Monday");
     break;
     case 2 : printf("Tuesday");
     break;
     case 3 : printf("Wednesday");
     break;
     case 4 : printf("Thursday");
     break;
     case 5 : printf("Friday");
     break;
     case 6 : printf("Saturday");
     break;
    }
    return 0;
}
