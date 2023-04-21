#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d/%d/%d",&a,&b,&c);
        switch(b){
          case 1:
          case 3:
          case 5:
          case 7:
          case 8:
          case 10:
          case 12:
           if(a<=31) printf("yes");
           else      printf("no");
           break;
          case 4:
          case 6:
          case 9:
          case 11:
           if(a<=30) printf("yes");
           else      printf("no");
           break;
          case 2:
           if(c%4==0){
              if(a<=29) printf("yes");
              else      printf("no");
           }else{
              if(a<=28) printf("yes");
              else      printf("no");
           }
           break;
          default:   printf("no"); break; 
    }
}
