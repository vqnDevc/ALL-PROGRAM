#include<stdio.h>
#include<string.h>
#include<ctype.h>
char *vietHoa(char *c){
	for(int i=0;i<strlen(c);i++)
	    c[i] = toupper(c[i]);
	return c;    
}
int main(){
    char s[]="Hello, how are you ?";
    printf("%s",vietHoa(s));
	 return 0;
}

