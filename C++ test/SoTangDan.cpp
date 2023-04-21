#include<stdio.h>
#include<string.h>
void sapXep(char s[]){
	int a=strlen(s);
	char b[1000];
	strcpy(b,s);
	for(int i=0;i<a;i++)
	  for(int j=i+1;j<a;j++)
	     if(b[i]>b[j]){
	        char temp=b[i];
	            b[i]=b[j];
	            b[j]=temp;
	     }
	printf("%s\n",b);	       
} 
int main(){
    int n;
    scanf("%d",&n);
    char number[n][1000];
    for(int i=0;i<n;i++)
        scanf("%s",number+i);
    for(int i=0;i<n;i++)
       sapXep(*(number+i));
 }
