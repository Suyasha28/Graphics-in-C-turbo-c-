//MOVING PERSON IN C USING GRPAHICS...........................................

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
int main()
{
 int gd=0,gm,j,x,y,i;     //graphic mode , graphic driver
 initgraph(&gd,&gm,"");

 setcolor(15);
 for(j=-200;j<=500;j++){
 //face
 circle(300+j,200,60);
 //cap
 line(260+j,150,300+j,50);
 line(340+j,150,300+j,50);
 //eyes
 circle(280+j,190,5);
 circle(321+j,190,5);
 //mouth
 rectangle(275+j,215,326+j,220);
// big circle
 circle(300+j,349,90);
 circle(300+j,379,10);
 //arms
 line(207+j,349,154+j,400);
 line(394+j,349,445+j,400);
//fill color in circle
 setfillstyle(8,15);
 floodfill(300+j,349,15);
 //bottom line
 line(0,439,700,439);
 //rain
 x=getmaxx();
 y=getmaxy();
 for(i=0;i<=150;i++)
 {
   outtextxy(random(x),random(y),"|");
 }
 delay(1);
 cleardevice();
       }

 getch();
 closegraph();
 return 0;
 }
