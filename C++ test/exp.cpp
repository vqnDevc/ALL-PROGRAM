#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double facto(int x){
    double facto = 1;
    for(int i = 1; i <= x; i++){
        facto *= i;
    }
    return facto;
}

double emux(int x){
    double sum = 1,oldsum=0;
    int i = 1;
    while(sum-oldsum>0.001){
    	oldsum=sum;
        sum += pow(x, i) / facto(i);
        i++;
    }
    return sum;
}
int main (){
    int x;
    scanf("%d", &x);
    printf("%.4lf", emux(x));
    return 0;
}
