#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int xa,xb,ya,yb,dx,dy,steps,k;
float xinc,yinc,x,y;
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
cout<<"\t***Implementation of DDA line Algorithm to draw a straight line***\n\n";
cout<<"Enter the co-ordinatevalues xa and ya for 1st end point:";
cin>>xa>>ya;
cout<<"\nEnter the co-ordinate values xa and ya for 2nd end point:";
cin>>xb>>yb;
dx=xb-xa;
dy=yb-ya;
if(abs(dx)>abs(dy))
{
steps=abs(dx);
}
else
{
steps=abs(dy);
}
xinc=dx/steps;
yinc=dy/steps;
x=xa;
y=ya;
putpixel(x,y,14);
for (k=1;k<=steps;k++)
{
x=x+xinc;
y=y+yinc;
putpixel(x,y,14);
delay(100);
}
getch();
closegraph();
}