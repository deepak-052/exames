#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2,x3,y3,x4,y4,tx,ty;
initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
cout<<"\t\t\t***Translation of a line***\n\n";
cout<<"\tEnter the coordinates of the line:";
cin>>x1>>y1>>x2>>y2;
line(x1,y1,x2,y2);
cout<<"\tEnter the translation distance:\n";
cout<<"tx,ty=";
cin>>tx>>ty;
x3=x1+tx;
y3=y1+ty;
x4=x2+tx;
y4=x2+ty;
setcolor(YELLOW);
line(x3,y3,x4,y4);
getch();
closegraph();
}