#include<iostream.h>
#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,rc,rb,xc,yc,i;
float x,y;
initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
cout<<"Enter the radius of the outer circle:";
cin>>rc;
cout<<"\nEnter the radius of the inner circle:";
cin>>rb;
cout<<"Enter the center of both circles:";
cin>>xc>>yc;
outtextxy(250,110,"Concentric Circles");
for(i=1;i<=360;i++)
{
x=xc+(rb*(cos(i)));
y=xc+(rb*(sin(i)));
putpixel(x,y,4);
}
for(i=1;i<=360;i++)
{
x=xc+(rc*(cos(i)));
y=xc+(rc*(sin(i)));
putpixel(x,y,4);
}
getch();
closegraph();
}