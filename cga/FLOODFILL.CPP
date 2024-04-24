#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void floodfill(int x,int y,int f,int o)
{
int c;
c=getpixel(x,y);
if(c==o)
{
setcolor(f);
putpixel(x,y,f);
delay(20);
floodfill(x+1,y,f,o);
floodfill(x,y+1,f,o);
floodfill(x+1,y+1,f,o);
floodfill(x-1,y-1,f,o);
floodfill(x-1,y,f,o);
floodfill(x,y-1,f,o);
floodfill(x-1,y+1,f,o);
floodfill(x+1,y-1,f,o);
}
}
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
rectangle(50,50,100,100);
floodfill(51,51,4,0);
getch();
}