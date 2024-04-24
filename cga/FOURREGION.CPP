#include<iostream.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd,gm;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
line(320,0,320,480);
line(0,240,640,240);
circle(125,100,50);
outtextxy(90,180,"Circle");
rectangle(400,150,550,50);
outtextxy(450,180,"Rectangle");
arc(100,320,200,340,50);
outtextxy(70,390,"Arc");
ellipse(450,350,0,360,100,50);
outtextxy(450,430,"Ellipse");
getch();
closegraph();
}
