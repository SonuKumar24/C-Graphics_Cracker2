#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
 int gd=DETECT,gm;
 int x,i=0,z=0,y;
 float a=0;
 initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
 setcolor(BROWN);
 rectangle(343,300,349,320);
 setfillstyle(5,BROWN);
 floodfill(344,301,BROWN);
 setcolor(BLUE);
 for(i=0;i<3;i++)
 {
  for(y=0;y<140;y++)
  {

				    x=0;
  ellipse(346+x,300,40,40+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346+x,300,40,40+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346+x,300,40,40+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346+x,300,40,40+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346+x,300,40,40+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346+x,300,40,40+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346+x,300,40,40+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346+x,300,40,40+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346+x,300,40,40+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346+x,300,40,40+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346+x,300,40,40+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346+x,300,40,40+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346+x,300,40,40+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346+x,300,40,40+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346+x,300,40,40+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346+x,300,40,40+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346+x,300,40,40+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346+x,300,40,40+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346+x,300,40,40+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346+x,300,40,40+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346+x,300,40,40+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346+x,300,40,40+y,0+x,100);x+=2; setcolor(z++);


				   x=0;
  ellipse(346-x,300,0,0+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346-x,300,0,0+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346-x,300,0,0+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346-x,300,0,0+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346-x,300,0,0+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346-x,300,0,0+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346-x,300,0,0+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346-x,300,0,0+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346-x,300,0,0+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346-x,300,0,0+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346-x,300,0,0+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346-x,300,0,0+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346-x,300,0,0+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346-x,300,0,0+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346-x,300,0,0+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346-x,300,0,0+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346-x,300,0,0+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346-x,300,0,0+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346-x,300,0,0+y,0+x,100);x+=2; setcolor(z++);
  ellipse(346-x,300,0,0+y,0+x,100);x+=2; setcolor(z++);
  }
  delay(1);
 }
 getch();

 }

