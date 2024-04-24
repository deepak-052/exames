#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,x,y,r=80;
initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
x=getmaxx()/2;
y=getmaxy()/2;
outtextxy(x-25,100,"Circle");
circle(x,y,r);
getch();
closegraph();
}