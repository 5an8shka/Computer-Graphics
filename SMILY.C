
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
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }


   /* draw the circle */
   circle(200,200,100); //face
   circle(160,150,25);  //eye left
   circle(240,150,25);  //eye right
   circle(160,160,10);     //eye innercircle
   circle(240,160,10);    //eye innercircle
    setfillstyle(SOLID_FILL,RED);
   floodfill(162,162,WHITE);
   floodfill(242,162,WHITE);


   /* clean up */
   getch();
   closegraph();
   return 0;
}

