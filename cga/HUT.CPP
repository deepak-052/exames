#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
setcolor(GREEN);
outtextxy(220,50,"MY SWEET HOME");
setcolor(WHITE);
rectangle(150,180,250,300);
rectangle(250,180,420,300);
rectangle(280,210,310,230);
rectangle(350,210,380,230);
rectangle(180,250,220,300);
line(200,100,150,180);
line(200,100,250,180);
line(200,100,370,100);
line(370,100,420,180);
setfillstyle(SOLID_FILL,BLUE);
floodfill(152,182,WHITE);
floodfill(252,182,WHITE);
setfillstyle(SLASH_FILL,RED);
floodfill(182,252,WHITE);
setfillstyle(HATCH_FILL,MAGENTA);
floodfill(200,105,WHITE);
floodfill(210,105,WHITE);
getch();
closegraph();
}



