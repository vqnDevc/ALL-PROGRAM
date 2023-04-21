#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    int  b[1000];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
       b[i]=s[i]-48;
    int max = b[0];   
    for(int i=1;i<strlen(s);i++)
        if(max<b[i])
           max=b[i];
    printf("%d",max);       
}
