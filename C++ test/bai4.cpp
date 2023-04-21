#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main() {
	int a[100],count[100];
	srand(time(NULL));

	printf("san pham tot:\t\t\tsan pham hong:\n");

	for(int i=0; i<10; i++) {
		a[i]=rand()%101;
		printf("%d\n",a[i]);
	}

	for(int j=1; j<=100; j++) {
		count[j]=0;
		for(int m=0; m<10; m++) {
			if(j==a[m])
				count[j]++;
		}
		if(count[j]==0)
			printf("\t\t\t\t%d\n",j);
	}

	return 0;
}