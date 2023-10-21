#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int x1=100,y1=250,x2=450,y2=550;
   int dx=x2-x1;
   int dy=y2-y1;
   int steps,x,y,i;

   /* initialize graphics, local variables */
   initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)
   /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   /* terminate with an error code */
   }
   if(dx>=dy) {
    steps=dx;
    }
    else {
    steps=dy;
    }
    dx=dx/steps;
    dy=dy/steps;
    x=x1;
    y=y1;
    i=1;
    while(i<=steps) {
    putpixel(x,y,BROWN);
    x+=dx;
    y+=dy;
    i++;
    }

   getch();
   closegraph();
   return 0;
}