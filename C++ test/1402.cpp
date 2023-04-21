#include<stdio.h>
#include<conio.h>
int main(){
	textmode(C80);
	textbackground(CYAN);
	window(1,1,80,25);
	clrscr();
	
	textbackground(RED);
	window(20,8,60,18);
	clrscr();
	
	textcolor(YELLOW);
	cprintf("\n%10c Chuc mung cuoc song",' ');
	textcolor(WHITE);
	gotoxy(1,4);
	cprintf("\n%10c Happy new year",' ');
	return 0;
}
