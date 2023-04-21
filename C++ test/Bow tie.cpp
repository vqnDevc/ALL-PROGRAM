#include<stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
  for(int i=1;i<=(2*n+1);i++){
      for(int j=1;j<=(2*n+1);j++){
         if(abs(n+1-j) >= abs(n+1-i))
            printf("* ");
          else
		    printf(". ");  
      }
            printf("\n");
    }
    return 0;
}
