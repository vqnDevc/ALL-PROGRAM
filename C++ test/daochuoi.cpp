
#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    fgets(s,100,stdin);
    for(int i=0;i<strlen(s)/2;i++){
//    		printf("S[%d]===%c",i,s[i]);
            char temp = s[i];
            s[i] = s[strlen(s)-2-i];
            s[strlen(s)-2-i] = temp;
    }
    puts(s);    
}


