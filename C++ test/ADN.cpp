#include<stdio.h>
#include<string.h>
char* boSung(char s[]){
    char a[1000];
    strcpy(a,s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='T') 
		   a[i]='A';
        else if(s[i]=='A')
		   a[i]='T';
        else if(s[i]=='G')
		   a[i]='X';
        else (s[i]=='X') 
		   a[i]='G' ;
    }
    return a;    
}
int main(){
    char adn[1000];
    scanf("%s",adn);
    char b[1000]=boSung(adn);
    printf("%s",b);
    return 0;
}
