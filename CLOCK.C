
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int radius = 100;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());

   /* draw the circle */
   circle(300,200,150);
   line(300,200,300,80);
   line(300,80,290,100);
   line(300,80,310,100);
   line(300,200,400,200);
   line(400,200,380,190);
   line(400,200,380,210);
   line(300,200,240,280);
   line(240,280,240,260);
   line(240,280,260,280);
   outtextxy(295,60,"12");
   outtextxy(420,200,"3");
   outtextxy(295,330,"6");
   outtextxy(170,200,"9");

   /* clean up */
   getch();
   closegraph();
   return 0;
}

