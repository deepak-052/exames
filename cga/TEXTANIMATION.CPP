#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,col=480,row=640,f=4,dir=2,s=8,c=15;
initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
while(!kbhit())
{
settextstyle(random(f),random(dir),random(s));
setcolor(random(c));
outtextxy(random(col),random(row),"WELCOME TO COMPUTER GRAPHICS");
delay(200);
}
getch();
closegraph();
}
