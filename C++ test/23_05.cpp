#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "mylib.h"
#include <windows.h>
int main(){
	ShowCur(0);
	int a = 3;
	int i = rand()%15;
	while(1){
		SetColor(i);
		for(int i = 0; i< 20;i++){
			gotoXY(3+i,3+i);
			printf("%c",a);
			gotoXY(6+i,6+i);
			printf("%c",a);
			Sleep(50);
		}
		i++;
		SetColor(i);
		for(int i = 0; i< 20;i++){
			gotoXY(22-i,22-i);
			printf("%c",a);
			gotoXY(25+i,25+i);
			printf("%c",a);
			Sleep(50);
		}
		i++;
	}

}
