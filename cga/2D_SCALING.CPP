#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2,x3,y3,x4,y4;
float sx,sy;
initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
cout<<"\t\t\t***Scaling of a line***\n\n";
cout<<"\tEnter the coordinates of the line:";
cin>>x1>>y1>>x2>>y2;
line(x1,y1,x2,y2);
cout<<"\tEnter the scaling factor:\n";
cout<<"sx,sy=";
cin>>sx>>sy;
x3=(int)x1*sx;
y3=(int)y1*sy;
x4=(int)x2*sx;
y4=(int)x1*sy;
setcolor(YELLOW);
line(x3,y3,x4,y4);
getch();
closegraph();
}