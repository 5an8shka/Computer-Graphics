
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
   circle(300,140,60);
   line(300,80,300,200);
   line(240,140,360,140);
   arc(300,140,210,330,80);
   line(230,180,230,370);
   line(370,180,370,370);
   line(230,370,370,370);
   arc(300,390,90,270,20);
   arc(300,420,270,90,10);
   arc(300,450,90,270,20);
   line(300,470,400,470);
   setfillstyle(SOLID_FILL,LIGHTCYAN);
   floodfill(302,142,WHITE);
   floodfill(298,142,WHITE);
   floodfill(302,138,WHITE);
   floodfill(298,138,WHITE);
   setfillstyle(SOLID_FILL,MAGENTA);
   floodfill(302,222,WHITE);


   /* clean up */
   getch();
   closegraph();
   return 0;
}

