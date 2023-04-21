#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
	char s[1000];
	scanf("%[^\n]s",s);
	FILE* f = fopen("a.txt", "w");
    fprintf(f,s);
    fclose(f);
	return 0;
}

