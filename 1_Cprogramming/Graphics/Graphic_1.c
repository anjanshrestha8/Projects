#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
	line(250,50,150,150);
	line(250,50,350,150);
	line(150,150,200,150);
	line(300,150,350,150);
	line(200,150,200,250);
	line(300,150,300,250);
	line(200,250,100,250);
	line(400,250,300,250);
	line(100,350,400,350);
	line(0,300,100,400);
	line(0,300,100,200);
	line(100,400,100,350);
	line(100,250,100,200);
	line(500,300,400,400);
	line(500,300,400,200);
	line(400,400,400,350);
	line(400,250,400,200);
	getch();
	closegraph();
	return 0;
}