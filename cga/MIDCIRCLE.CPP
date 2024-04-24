#include<iostream.h>
 #include<stdio.h>
 #include<conio.h>
 #include<graphics.h>
 #include<math.h>
 #include<dos.h>
 void main()
 {
 int gd=DETECT,gm,x,y,r,xc,yc;
 float d;
 initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
 cleardevice();
 cout<<"\t **Implementation of mid-point circle algorithm\n\n";
 cout<<"enter the values of x and y the midpoints:\t";
 cin>>xc>>yc;
 cout<<"Enter the value of radius:\t";
 cin>>r;
 x=0;
 y=r;
 d=(5/4)-r;
 do
 {
 putpixel(xc+x,yc+y,13);
 putpixel(xc+y,yc+x,13);
 putpixel(xc+y,yc-x,13);
 putpixel(xc+x,yc-y,13);
 putpixel(xc-x,yc-y,13);
 putpixel(xc-y,yc-x,13);
 putpixel(xc-y,yc+x,13);
 putpixel(xc-x,yc+y,13);
 if(d<=0)
 d=d+2*x+3;
 else
 {
 d=d+2*(x-y)+5;
 y=y-1;
 }
 x=x+1;
 delay(50);
 }
 while(x<y);
 getch();
 closegraph();
 }