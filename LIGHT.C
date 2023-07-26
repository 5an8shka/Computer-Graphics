
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



   /* draw arc */
   arc(190,100,180,0,40);
   rectangle(100,100,130,300);
   line(150,100,230,100);
   line(190,145,190,170);
   line(210,140,230,160);
   line(230,125,260,140);
   line(170,140,150,160);

   /* clean up */
   getch();
   closegraph();
   return 0;
}

