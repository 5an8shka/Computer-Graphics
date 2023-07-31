
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

   circle(250,250,120);
    circle(250,180,40);
    circle(250,205,15);
    circle(185,225,40);
    circle(210,230,15);
    circle(205,305,40);
    circle(225,290,15);
    circle(285,310,40);
    circle(275,287,15);
    circle(315,230,40);
    circle(292,235,15);
circle(250,250,30);
circle(250,250,10);
circle(250,100,30);
circle(250,60,10);
circle(144,144,30);
circle(115,115,10);
circle(356,356,30);
circle(385,385,10);
circle(250,400,30);
circle(250,440,10);
circle(100,250,30);
circle(60,250,10);
circle(400,250,30);
circle(360,145,30);
circle(388,115,10);
circle(140,355,30);
circle(112,385,10);
circle(440,250,10);

   /* clean up */
      getch();
   closegraph();
   return 0;
}

