#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    int x = getmaxx() / 2;
    int y = getmaxy() / 2;
    setcolor(RED);
    // face
    circle(x, y, 200);
    // nose
    circle(x, y, 10);
    // left eye
    circle(x-75, y-75, 40);
    // right eye
    circle(x+75, y-75, 40);
    // for simle
   //line(x-75,y+50,x+75,y+50) ;
   ellipse(x,y+50,215,335,75,75);
   setfillstyle(SOLID_FILL,BLUE);
   floodfill(x+75,y-75,RED);
   floodfill(x-75,y-75,RED);
   getch();
    closegraph();

    return 0;
}