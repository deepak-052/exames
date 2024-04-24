#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
x=getmaxx()/2;
y=getmaxy()/2;
outtextxy(x-25,100,"Rectangle");
line(x-150,y-100,x+100,y+80);
getch();
closegraph();
}