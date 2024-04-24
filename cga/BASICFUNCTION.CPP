#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd= DETECT,gm,points[]={320,150,420,300,250,300,320,150};
initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
line(50,50,90,50);
arc(100,100,210,330,50);
circle(70,250,50);
drawpoly(4,points);
setcolor(RED);
circle(50,420,40);
floodfill(50,420,RED);
setcolor(WHITE);
outtext("press any key to clear the screen..");
getch();
cleardevice();
outtext("press any key to exit..");
getch();
closegraph();
}
