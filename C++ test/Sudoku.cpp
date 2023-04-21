#include<stdio.h>
int main(){
    int a[10][10];
    for(int i=1;i<=9;i++)
       for(int j=1;j<=9;j++)
           scanf("%d",&a[i][j]);
    int n,x,y;
    scanf("%d%d%d",&n,&x,&y);
    if(n<1||n>9)
		printf("Invalid number.");
    else if(x<1||x>9 || y<1||y>9)
	    printf("Invalid place.");
	else if(a[x][y]==0){
	  for(int i=1;i<=9;i++)
	     if(a[i][y]==n||a[x][i]==n){
	         printf("Invalid place.");
	         return 0;
	     }
	  printf("Valid place.");     
	}
}
