#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
float random( float min, float max )
{
    float scale = rand() / (float) RAND_MAX; 
    return min + scale * ( max - min ); 
}
int main(){
	srand((int)time(0));
	float x = random(-3, 3);
	float n = random(0, 1);
	float y = x + n;
	printf("%7f", round(y * 100)/ 100);
	
	return 0;
}
