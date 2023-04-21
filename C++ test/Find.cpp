#include<stdio.h>
#include<string.h>
int findN(char s[],int n){
	int a=strlen(s);
	int b[a];
	for(int i=0;i<a;i++){
	    b[i]=s[i]-48;
	    if(b[i]==n)
		   return i+1;       
	}
	return -1;    
} 
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    char number[n][10000];
    for(int i=0;i<n;i++){
        scanf("%s",number+i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
    	printf("%d\n",findN(*(number+i),arr[i]));
	}
 }
