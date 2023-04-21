#include<stdio.h>
int main(){
    int x=3,y=3,a[1000];
    int check=0;
    for(int i=0;i<9;i++)
      scanf("%d",&a[i]);
    for(int i=0;i<9;i++){ 
       switch(a[i]){
          case 1:
                break;
          case 2:
                y = y + 1;
                break;  
          case 3:
                x = x - 2;
                break;
          case 4:
                x = x + 1;
                y = y - 2;
                break;
          default:
                check++;
                break;
       }      
}
     if(x==0)
       printf("You slayed the Dragon.");
     else if(x<0 || y<0 || check != 0)
       printf("invalid attack");
     else  
       printf("You die."); 
  return 0;
}
