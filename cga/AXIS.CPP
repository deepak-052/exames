#include<iostream.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd,gm;
int x0,y0,xmax,ymax;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
xmax=getmaxx();
ymax=getmaxy();
x0=xmax/2;
y0=ymax/2;
line(x0,0,x0,ymax);
line(0,y0,xmax,y0);
getch();
closegraph();
}

