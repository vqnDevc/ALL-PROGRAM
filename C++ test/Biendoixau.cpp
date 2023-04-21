#include<stdio.h>
#include<string.h>
void Upper(char *a){
    for(int i=0;i<strlen(a);i++)
         if(a[i]<='z'&&a[i]>='a')
            a[i]-=32;
}
void check(char *a, char *b){
    char *p = strstr(a,b);
    if(p!=NULL)
          printf("YES\n");
    else  printf("NO\n"); 
}
int main(){
    int n;
    scanf("%d",&n);
    char a[n][1000];
    char b[n][1000];
    for(int i=0;i<n;i++)
       scanf("%s %s",&a[i],&b[i]);
    for(int i=0;i<n;i++){
        Upper(a[i]);
    }
    for(int i=0;i<n;i++)
        check(a[i],b[i]);
    return 0;    
       
}
