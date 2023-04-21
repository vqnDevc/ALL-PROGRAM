#include<stdio.h>
#include<string.h>
int sumNumber(char s){
    int sum=0;
    for(int i=0;i<strlen(*s);i++)
        sum += (s[i]-48);
    return sum;    
}
int main(){
    int n;
    scanf("%d",&n);
    char *s[n];
    for(int i=0;i<n;i++)
       scanf("%s",s+i);
    for(int i=0;i<n;i++)
       printf("%d\n",sumNumber(*(s+i)));
}
