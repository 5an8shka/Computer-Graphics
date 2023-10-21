
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
   circle(200,150,40);//eye outer  left
   circle(280,150,40); //eye outer right
   circle(200,150,20); //eye inner left
   circle(280,150,20); //eye inner right
   circle(205,141,10); //eye innermost right
   circle(285,141,10);  //eye innermost left
   line(223,180,240,215);  //nose
   line(257,180,240,215);  //nose
   arc(200,150,38,250,50); //eye outermost left
   arc(280,150,290,143,50);  //eye outermost right
   line (180,195,160,295);   //wing left rightside
   arc(190,244,110,240,60); //wing left leftside
   line(296,198,300,302);  //wing right leftside
   arc(290,244,280,70,60);  //wing right rightside
   arc(235,250,190,340,70); //tummy
   arc(240,166,68,112,70); //head
   ellipse(220,320,180,0,4,8); //toes left  right
   ellipse(212,318,180,0,4,8);//toes left middle
   ellipse(204,316,140,0,4,8);//toes left left
     ellipse(280,312,200,80,4,8); //toes right  right
   ellipse(272,314,200,40,4,8);//toes right middle
   ellipse(264,316,180,10,4,8);//toes right left
   arc(235,250,180,0,10);//tummy arc
    arc(205,250,180,0,10);//tummy arc
     arc(265,250,180,0,10);//tummy arc
     arc(235,270,180,0,10);//tummy arc
    arc(205,270,180,0,10);//tummy arc
     arc(265,270,180,0,10);//tummy arc
       arc(220,290,180,0,10);//tummy arc
     arc(250,290,180,0,10);//tummy arc
     line(180,105,150,90);//ear left
     line(150,90,155,125);//ear left
     line(290,100,315,85);//ear right
     line(315,85,315,115);//ear right
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(207,143,WHITE);                         //eyes
    floodfill(287,143,WHITE);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    floodfill(252,202,WHITE);                   //body
    setfillstyle(SOLID_FILL,BROWN);
     floodfill(242,168,WHITE);              //beak
     setfillstyle(SOLID_FILL,CYAN);
     floodfill(312,238,WHITE);  //right wing
     floodfill(132,246,WHITE); //left wing
     floodfill(242,98,WHITE);  //head
    floodfill(152,92,WHITE); //left ear
    floodfill(314,100,WHITE);
     setfillstyle(SOLID_FILL,BROWN);
    floodfill(282,314,WHITE); //toe right right
    floodfill(266,318,WHITE); //toe right
    floodfill(222,322,WHITE);    //toe left right
     floodfill(214,320,WHITE);  //toe left middle
      floodfill(206,318,WHITE); //toe left left






   /* clean up */
   getch();
   closegraph();
   return 0;
}

