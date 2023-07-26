
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;

   initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

  

   /* draw a diagonal line */
   line(100,100,150,100);
   line(150,100,150,50);
   line(150,50,200,50);
   line(200,50,200,100);
   line(200,100,250,100);
   line(100,100,100,250);
   line(250,100,250,250);
   line(100,250,250,250);
   circle(175,175,40);


   /* clean up */
   getch();
   closegraph();
   return 0;
}

