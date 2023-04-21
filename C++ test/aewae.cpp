#include<stdio.h>
#include<string.h>
int main(){
     int n;
        scanf("%d",&n);
    char *name[n];    
    char *p = name[n];
    for(;p<&name[4];p++)
        scanf("%s",&name[p]);
    for(int i=0;i<n;i++)
       if(strcmp(name[i],"Nemo") == 0)
         printf("%s and %s",name[i-1],name[i+1]);
    
}
