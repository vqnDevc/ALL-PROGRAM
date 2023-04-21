#include<stdio.h>
#include<string.h>
int main(){
    int n,k;
    char a[100][100];
    scanf("%d%d",&n,&k);
    for(int i=0;i<=n;i++)
      fgets(a[i-1],100,stdin);
    while(n>0){
        int chet = chet + k;
        while(chet>=n){
        	chet -= n;
		}
		for(int i=chet;i<n-1;i++)
		    strcpy(a[i],a[i+1]);
		n--;    
    }
	printf("%s",a[0]);  
}
