#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
	int a[10]={0,1,2,3,4,5,6,7,8,9};
    int b,t;

    
    for(int i =0;i<10;i++){
    	t = rand()%(10-i);
    	b = a[t];
    	a[t] = a[10-i];
    	 printf("%d ",b);
	}
   
    return 0;
}
