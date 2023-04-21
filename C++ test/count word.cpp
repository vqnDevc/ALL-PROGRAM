#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    int count = 0;
       gets(str);
    for(int i=0;i<strlen(str);i++){
    	if(str[i] == ' ')
    	  count++;
	}
	printf("%d words",count+1);
	return 0;
}
