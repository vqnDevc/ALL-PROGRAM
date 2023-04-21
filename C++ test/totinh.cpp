#include <stdio.h>
#include <math.h>
#include <windows.h>
int a=10;int b=7;
int s=10;int d=8;
int e=10;int f=9;
int g=10;int v=10;
int i=10;int k=11;
int l=10;int m=12;
int p=10;int q=13;
int x=10;int y=14;
int z=10;int t=15;
void gotoXY(int a, int b)
{
    static HANDLE h = NULL;  
    if(!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { a, b };  
    SetConsoleCursorPosition(h,c);
}


int main(){
	//ab
    while(a<50)
    {
		gotoXY(10,7);puts("         Hey girl");
    	gotoXY(a,b);
    	puts("              ***     ***");
		a++;	
    	Sleep(20);
   }
   //sd
     while(s<50)
    {
		gotoXY(10,8);
		puts("       Do you know...");
    	gotoXY(s,d);
    	puts("            ******* *******");
		s++;	
    	Sleep(20);
   }
   //ef
       while(e<50)
    {
		gotoXY(10,9);puts("    Every day,I always");
    	gotoXY(e,f);
    	puts("           *****************");
		e++;	
    	Sleep(20);
   }
   //gv
     while(g<50)
    {
	
		gotoXY(10,10);puts("        miss you,");
    	gotoXY(g,v);
    	puts("           *****************");
		g++;	
    	Sleep(20);
   }
   //ik
       while(i<50)
    {
		gotoXY(10,11);puts("     miss your smile,");
    	gotoXY(i,k);
    	puts("            ***************");
		i++;	
    	Sleep(20);
   }
   //lm
     while(l<50)
    {
	
		gotoXY(10,12);puts("     miss your voice,");
    	gotoXY(l,m);
    	puts("              ***********");
		l++;	
    	Sleep(20);
   }
   //pq
       while(p<50)
    {
		gotoXY(10,13);puts("     miss your eyes,...");
    	gotoXY(p,q);
    	puts("                *******");
		p++;	
    	Sleep(20);
   }
   //xy
     while(x<50)
    {
	
		gotoXY(10,14);puts("And today,I want to tell you that:");
    	gotoXY(x,y); 
    	puts("                  ***              ");
		x++;	
    	Sleep(20);
   }
   //zt
        while(z<50)
    {
	
		gotoXY(10,15);puts("      'I Love You <3'");
    	gotoXY(z,t);
    	puts("                   *");
		z++;	
    	Sleep(20);
   }
     printf("\n");
	char s[1000];
//	system("color F2");
	FILE* f = fopen("anh.txt", "r");
	while (!feof(f))
 	{
	fgets(s, sizeof(s), f);
	printf("%s", s);
	Sleep(20);
	}
}
