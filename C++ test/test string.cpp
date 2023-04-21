#include<stdio.h>
#include<string.h>
int alphabelt(char str[100]){
	    for(int i = 0;i < strlen(str);i++){
	    	if(str[i] >= 'a' && str[i] <= 'z'){
	    		str[i] -= 32;
			}
		}
		printf("%s\n",str);
}
int main(){
	char s1[100],s2[100],s3[100];
	printf("Nhap vao chuoi tu : ");
	gets(s1);
	gets(s2);
	gets(s3);
	alphabelt(s1);
    alphabelt(s2);
	alphabelt(s3);
	return 0;
}
		 
	 
