
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
   circle(130,90,30);   //ear left
   circle(270,90,30);   //ear right
   circle(160,150,25);  //eye left
   circle(240,150,25);  //eye right
   circle(200,260,25);    //mouth
   line(200,180,180,220);   //nose
   line(200,180,220,220);   //nose
   line(180,220,220,220);    //nose
   circle(170,140,10);     //eye innercircle
   circle(250,140,10);    //eye innercircle
   line(180,200,120,160);   //left moustache
   line(180,200,110,200);   //""
   line(180,200,130,250);   //""
   line(220,200,280,160);  //right moustache
   line(220,200,290,200);
   line(220,200,270,250);


   /* clean up */
   getch();
   closegraph();
   return 0;
}

