
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
    /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
  

   /* initialize graphics and local
   variables */
   initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();

      exit(1);    /* terminate with an error code */
   }

  

   rectangle(100,100,200,150);
   rectangle(110,110,190,140);
   outtextxy(125,120,"ERASER");
  /* outtextxy(150,140,"R");
   outtextxy(160,140,"A");
   outtextxy(170,140,"S");
   outtextxy(180,140,"E"); */


   /* clean up */
   getch();
   closegraph();
   return 0;
}

