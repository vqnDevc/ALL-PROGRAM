#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main() {
	srand(time(NULL));
	int d,p,a,max[1000],time=0;
	int x,y,z=0,t=0;
	scanf("%d%d",&d,&p);

	x = d;
	y = p;

	while(d>0) {
		a = 1+rand()%x;
		if(p-a*a >=0) {
			p = p - a*a;
			time++;
			d-=a;
		} else {
			max[z++] = time;
			d = x;
			p = y;
			time = 0;
		}
	}
	int Min = max[0];
	for(int i=0; i<z; i++) {
		if(Min < max[i])
			Min = max[i];
	}

	printf("%d",Min);
	return 0;
}
