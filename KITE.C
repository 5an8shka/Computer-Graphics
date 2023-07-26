
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   

   /* initialize graphics and local variables */
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
   line(100,100,200,10);
   line(200,10,300,100);
   line(100,100,200,190);
   line(300,100,200,190);
   line(100,100,200,290);
   line(300,100,200,290);
   line(200,290,170,330);
   line(200,290,230,330);
   line(170,330,230,330);

   /* clean up */
   getch();
   closegraph();
   return 0;
}

