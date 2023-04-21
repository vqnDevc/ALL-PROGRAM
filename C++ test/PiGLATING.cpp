#include<stdio.h>
#include<string.h>
char* pigLatin(char word[]){
	int n=strlen(word);
	char c=word[0];
    char s[5]={'a','o','e','u','i'};
    for(int i=0;i<5;i++){
    	if(c==s[i]){
    	  word[n]='w';
    	  word[n+1]='a';
    	  word[n+2]='y';
    	  return word;
		}
	}
    for(int i=0;i<n;i++)
	    word[i]=word[i+1];
	 word[n-1] = c ;
 	 word[n]   ='a';
	 word[n+1] ='y';	
	return word;
}
int main(){
	int MAX = 20;
char word[MAX];
scanf("%s", word);
printf("%s", pigLatin(word));
}
