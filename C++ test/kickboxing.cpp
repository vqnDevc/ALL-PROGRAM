#include <stdio.h>

int main(){
	double n;
	scanf("%lf",&n);
	int a[19]={0,111,114,117,121,125,129,134,139,146,153,159,166,173,182,188,197,208,209};
	char *s[19]={"Fly Weight","Super Fly Weight","Bantam Weight","Super Bantam Weight","Feather Weight",
	"Super Feather Weight","Light Weight","Super Light Weight","Welter Weight","Super Welter Weight",
	"Middle Weight","Super Middle Weight","Light Heavy Weight","Super Light Heavy Weight","Cruiser Weight",
	"Super Cruiser Weight","Heavy Weight","Super Heavy Weight"};
	for (int i=0;i<19;i++){
		if (n>a[i] && n<=a[i+1]){
			printf("%s",s[i]);
			break;
		}
		else if(i==18){
			if (n>a[i]){
				printf("%s",s[i]);
				break;
			}
		}
	}
	return 0;
}
