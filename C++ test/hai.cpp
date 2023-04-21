#include <stdio.h>
#include<string.h>
void StrDel(char *s, int n) {
	memmove(s, s + n, strlen(s+n)+1);
}
int main() {
	char s[]= "Thu xoa 12345";
	StrDel(s, 4);
	printf("%s\n", s);
	StrDel(s + 4, 3);
	printf("%s\n", s);
	return 0;
}
