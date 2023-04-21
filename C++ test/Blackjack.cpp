#include<stdio.h>
#include<string.h>

int main(){
    char x[10],y[10];
    int a;
    scanf("%s%s",x,y);
    if(x[0] == 'A' && y[0] == 'A' ){
        a = 2;
    }else{
        if( strcmp(x,"10")==0){
                   a += 10;
          }else if(x[0] <= '9'){
                   a = a + x[0] - 48;
          }else if(x[0] =='J' || x[0] == 'Q' || x[0] == 'K'){
                   a += 10;
          }else if(x[0] == 'A'){
                   a += 11;}
    
      if(strcmp(y,"10")==0){
                   a += 10;
          }else if(y[0] <= '9'){
                   a = a + y[0] - 48;
          }else if(y[0] =='J' || y[0] == 'Q' || y[0] == 'K'){
                   a += 10;
          }else if(y[0] == 'A'){
                   a += 11;}
    }
     printf("%d",a);   
   }

