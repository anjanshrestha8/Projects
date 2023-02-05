#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
	line(200,50,100,100);
	line(200,50,300,100);
	line(100,100,50,200);
	line(300,100,350,200);
	line(50,200,125,300);
	line(350,200,275,300);
	line(125,300,275,300);
	getch();
	closegraph();
	return 0;
}