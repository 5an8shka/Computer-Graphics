
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
   rectangle(200,200,300,300);
   rectangle(100,100,200,200);
   rectangle(300,300,400,400);
   rectangle(300,200,400,100);
   rectangle(200,300,100,400);
   arc(250,100,0,180,50);
   arc(400,250,270,90,50);
   arc(100,250,90,270,50);
   arc(250,400,180,0,50);

   /* clean up */
   getch();
   closegraph();
   return 0;
}

