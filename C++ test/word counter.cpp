#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    int count = 0;
      fgets(str,1000,stdin);
    for(int i=0;i<strlen(str)-2;i++){
    	if(str[i] == ' ' && str[i+1] != ' ')
    	  count++;
    	  
	}
 	  printf("%d",count+1);
	return 0;
}
