#include<stdio.h>
#include<windows.h>
int main(){
	char s[1000];
//	system("color F2");
	FILE* f = fopen("a.txt", "r");
	while (!feof(f))
 	{
	fgets(s, sizeof(s), f);
	printf("%s", s);
	Sleep(20);
	}
	 return 0;
}

