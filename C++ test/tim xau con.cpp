#include<stdio.h>
#include<string.h>
char *chuan(char *s){
      int len=0;
      for(int i=0;s[i]!='\0';i++)
          len++;
      s[len-1]= '\0';
    return s;  
}
int main(){
    char s1[100],s2[100];
    fgets(s1,sizeof(s1),stdin);
    fgets(s2,sizeof(s2),stdin);
    char *p=strstr(chuan(s2),chuan(s1));
    if(p!=NULL)
      printf("YES");
    else
      printf("NO");
}
