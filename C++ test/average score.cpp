#include<stdio.h>
int main(){
	int a[100];
	float AverageScore,sum;
	for(int i = 0;i < 6;i++){
		scanf("%d",&a[i]);
	}
	sum = (a[0]+a[1]+a[2]) + (a[3]+a[4])*2 + a[5] * 3;
	AverageScore = sum/10;
	printf("%0.2f",AverageScore);
	return 0;
}

