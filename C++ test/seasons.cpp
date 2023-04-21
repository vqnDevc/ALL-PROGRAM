#include <stdio.h>
int a,b;
int main() {
    scanf("%d%d",&a,&b);
    int day=a+30*b; // convert to day
    if(day>=382||day<110)  // convert 22/12 -> 382    20/3->  110
        printf("Winter");
    if(day>=110&&day<202)  // convert 22/6 -> 202
        printf("Spring");
    if(day>=202&&day<293)  // convert 23/9 -> 293
        printf("Summer");
    if(day>=293&&day<382)  // 22/12 ->382
        printf("Autumn");
    return 0;
}

