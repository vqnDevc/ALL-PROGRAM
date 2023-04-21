#include<stdio.h>
#include<string.h>
int main(){
    char str[100],str2[]="Zues";
    fgets(str,100,stdin);
    char *pch = strstr (str,str2);
    if(pch != NULL){
        strncpy(pch,"Zeus",4);
        printf("%s",str);
    }else
	    puts(str);
}
