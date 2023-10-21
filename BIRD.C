
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
   arc(300,200,0,180,70);  //body    top
   arc(325,300,180,330,70);   //body   bottom
   line(300,365,300,395);//left leg
   line(300,395,295,405); //left toe left
   line(300,395,300,405); //left toe middle
   line(300,395,305,405);//left toe right
   line(350,365,350,395); //right leg
   line(350,395,345,405); //right toe left
   line(350,395,350,405);//right toe middle
   line(350,395,355,405);//right toe right
   line(230,200,255,300);   //body
   arc(370,240,90,270,40);  //wing
   line(370,280,450,245);  //wing bottom
   line(370,200,450,245);  //wing top
   arc(410,270,180,270,20);  //tail body top
   line(410,290,430,300);   //""
   line(380,340,430,300);  //tail body bottom
   line(230,200,180,215); //peak bottom
   line(180,215,205,190); //peak bottom inner
   line(205,190,175,170); //peak top inner
   line(175,170,234,180); //peak top
   arc(275,175,180,0,20); //eye
   line(430,300,450,280);//tail top
   line(430,300,450,320); //tail bottom
   arc(465,285,350,160,15);   //tail
   arc(470,300,270,90,15);      //""
  arc(465,320,180,40,15);      //""
  line(250,405,500,405); //bark main
  line (250,440,500,440); //bark main
  line(500,405,500,440);  //bark main
  line(250,405,210,370);  //bark top top
   line(245,425,200,390); //bark top
   line(250,440,210,475);//bark bottom bottom
   line(210,370,200,390);//bark top joint
   line(245,425,200,455); //bark bottom
   line(210,475,200,455); //bark bottom joint
   setfillstyle(SOLID_FILL,RED);
   floodfill(302,202,WHITE);
   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(372,242,WHITE);
   floodfill(472,302,WHITE);
  floodfill(228,198,WHITE);
  setfillstyle(SOLID_FILL,BROWN);
  floodfill(240,430,WHITE);

   /* clean up */
   getch();
   closegraph();
   return 0;
}

