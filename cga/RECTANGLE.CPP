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
rectangle(x-120,y-80,x+120,y+80);
getch();
closegraph();
}