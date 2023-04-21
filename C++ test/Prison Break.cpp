#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int dem(char *s, char *s1) {
	int count = 0;
	for(int i=0;s[i]!='\0';i++)
		if(strstr(&s[i],s1)==&s[i])
		   count++;
	return count;
}
void replace(char *s) {
	int xuatHien = dem(s,"Kaniel Outis");
	int len = strlen(s);
	
	char* res = (char *) malloc(len +xuatHien*4);
	int i = 0, j = 0;
	for(i = 0; s[i] != '\0'; ) {
		if(strstr(&s[i],"Kaniel Outis") == &s[i]) {
			strcpy(&res[j],"Michael Scofield");
			i += 12;
			j += 16;
		} else {
			res[j++] = s[i++];
		}
	}
	res[j] = '\0';
	puts(res);
}
int main(){
	char s[1000];
	fgets(s,1000, stdin);
	replace(s);
	return 0;
}
