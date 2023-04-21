#include<stdio.h>
int main(){
	char a[9],b[9];
	scanf("%s",a);
	int sum=0;
	int x=10;
    for(int i=0;i<9;i++){
    	b[i]=a[i]-48;
    }
	for(int i=0;i<9;i++){
		sum += b[i]*x;
		x--;
    }
    int y=sum%11;
    if(y==1)printf("%d-%d%d%d-%d%d%d%d%d-X",b[0],b[1],b[2],b[3],b[4],b[5],b[6],b[7],b[8]);
    else    printf("%d-%d%d%d-%d%d%d%d%d-%d",b[0],b[1],b[2],b[3],b[4],b[5],b[6],b[7],b[8],11-y);
     return 0;
}
