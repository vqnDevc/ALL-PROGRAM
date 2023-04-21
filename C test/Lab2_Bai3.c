#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
   int a, b, i;
   srand((int)time(NULL));
   for( i=0;i<5;i++){
   	 printf("%d\n", rand()); 
   }
   return 0;
}
//khong co ham srand(seed) thi ket qua moi lan se bi lap lai
