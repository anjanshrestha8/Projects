#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
	line(100,100,400,100);
	line(100,100,100,400);
	line(200,200,300,200);
	line(200,200,200,300);
	line(200,300,100,400);
	line(300,200,400,100);
	getch();
	closegraph();
	return 0;
}