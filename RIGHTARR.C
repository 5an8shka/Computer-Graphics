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
   line(100,100,400,100);
    line(400,100,400,200);
     line(400,200,100,200);
      line(100,100,100,0);
	line(100,200,100,300);
	 line(100,0,0,150);
	  line(100,300,0,150);



   /* clean up */
   getch();
   closegraph();
   return 0;
}
