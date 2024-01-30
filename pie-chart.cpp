#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    initwindow(1000, 400, "PIE-CHART");
    setcolor(11);
    settextstyle(4, 0, 5);
    outtextxy(100, 40, (char *)"PIE-CHART");
    // for figure
    setcolor(0);
    setfillstyle(SOLID_FILL, 1);
    pieslice(200, 200, 0, 110, 100);

    setfillstyle(SOLID_FILL, 2);
    pieslice(200, 200, 110, 140, 100);

    setfillstyle(SOLID_FILL, 3);
    pieslice(200, 200, 140, 200, 100);

    setfillstyle(SOLID_FILL, 4);
    pieslice(200, 200, 200, 290, 100);

    setfillstyle(SOLID_FILL, 5);
    pieslice(200, 200, 290, 360, 100);

    // for details
    setcolor(15);
    settextstyle(1,0,2);

    setfillstyle(SOLID_FILL,1);
    rectangle(500,150,530,180);
    floodfill(520,160,15);
    outtextxy(550,160,(char *)"MATH");
    
    setfillstyle(SOLID_FILL,2);
    rectangle(500,190,530,220);
    floodfill(520,200,15);
    outtextxy(550,200,(char *)"D.S.A.");

    setfillstyle(SOLID_FILL,3);
    rectangle(500,230,530,260);
    floodfill(520,240,15);
    outtextxy(550,240,(char *)"O.O.P.");

    setfillstyle(SOLID_FILL,4);
    rectangle(500,270,530,300);
    floodfill(520,290,15);
    outtextxy(550,290,(char *)"PHYSIC");

    setfillstyle(SOLID_FILL,5);
    rectangle(500,310,530,340);
    floodfill(520,330,15);
    outtextxy(550,330,(char *)"D.E.");

    getch();
    closegraph();
    return 0;
}