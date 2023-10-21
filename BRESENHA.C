#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
void drawline(int x0,int y0,int x1,int y1) {
 int dx,dy,p,x,y;
   dx=x1-x0;
   dy=y1-y0;
   x=x0;
   y=y0;
   p=2*dy-dx;
   while(x<x1) {
   if(p>=0)
   {
     putpixel(x,y,7);
     y=y+1;
     p=p+2*dy-2*dx;
   }
   else
   {
     putpixel(x,y,7);
     p=p+2*dy;}
     x=x+1;
   }
   }

int main(void)
{
    /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int x0,y0,x1,y1;
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
   printf("Enter co-ordinates of first point:");
   scanf("%d%d",&x0,&y0);
   printf("Enter co-ordinates of second point:");
   scanf("%d%d",&x1,&y1);
   drawline(x0,y0,x1,y1);

   /* clean up */
   getch();
   closegraph();
   return 0;
}

