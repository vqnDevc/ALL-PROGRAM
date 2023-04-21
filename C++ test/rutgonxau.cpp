#include<stdio.h>
#include<string.h>
void rutgon(char *s){
	  int l = strlen(s);
	  for(int i=0;i<l;i++){
	  	  if(s[i]==s[i+1]){
	  	  	 for(int j=i;j<l;j++){
	  	  	      s[j]=s[j+2];
	  	  	  }
	  	  	    l-=2; 
	  	  	    i--;
			}
	  }
	    if(s[0]=='\0')
	       printf("empty");
	     printf("%s",s);   
}
int main(){
    char s[1000];
    scanf("%[^\n]s",s);
    rutgon(s);
	 return 0;
}

