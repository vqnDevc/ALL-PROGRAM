#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
	int a[11]={0,1,2,3,4,5,6,7,8,9,10};
    int b=0,t=0;

    
    for(int i = 0;i <= 10;i++){
    	t = rand()%(11-i);
    	b = a[t];
    	a[t] = a[11-i-1];
    	printf("%d ",b);
	}
   
    return 0;
}
