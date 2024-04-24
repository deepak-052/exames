#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int x,y,gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
setbkcolor(14);
rectangle(50,50,100,100);
boundary(59,59,6,15);
getch();
closegraph();
}
boundary(int x,int y,int fillcolor, int backcolor)
{
if(getpixel(x,y)!=backcolor&&getpixel(x,y)!=fillcolor)
{
putpixel(x,y,fillcolor);
boundary(x+1,y,fillcolor,backcolor);
boundary(x,y+1,fillcolor,backcolor);
boundary(x+1,y+1,fillcolor,backcolor);
boundary(x-1,y-1,fillcolor,backcolor);
boundary(x-1,y,fillcolor,backcolor);
boundary(x,y-1,fillcolor,backcolor);
boundary(x+1,y-1,fillcolor,backcolor);
boundary(x-1,y+1,fillcolor,backcolor);
}
return 0;
}