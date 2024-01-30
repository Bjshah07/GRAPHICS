#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    initwindow(1000, 800, "3d graph");

    settextstyle(1, 0, 5);
    setcolor(1);
    outtextxy(300, 30, (char *)"3D-BAR_GRAPH");

    // for outer line of graph
    // for x-axis
    settextstyle(1, 1, 4);
    setcolor(2);
    outtextxy(5, 400, (char *)"X-axis");
    line(75, 50, 75, 560);
    // for y-axis
    settextstyle(1, 0, 5);
    outtextxy(720, 535, (char *)"Y-axis");
    line(50, 535, 900, 535);

    // for numbering on x-axis
    settextstyle(1, 0, 1);
    outtextxy(45, 540, (char *)"0");
    outtextxy(45, 480, (char *)"10");
    outtextxy(45, 420, (char *)"20");
    outtextxy(45, 360, (char *)"30");
    outtextxy(45, 300, (char *)"40");
    outtextxy(45, 240, (char *)"50");
    outtextxy(45, 180, (char *)"60");
    outtextxy(45, 120, (char *)"70");
    outtextxy(45, 60, (char *)"80");

    // for numbering on y-axis
    settextstyle(1, 1, 1);
    outtextxy(120, 640, (char *)"MATH");
    outtextxy(180, 640, (char *)"B.E.E.");
    outtextxy(240, 680, (char *)"PHYSIC");
    outtextxy(300, 640, (char *)"D.S.A.");
    outtextxy(360, 640, (char *)"O.O.P.");
    outtextxy(420, 620, (char *)"D.E.");
    outtextxy(480, 620, (char *)"O.S.");
    outtextxy(540, 690, (char *)"ENGLISH");
    outtextxy(600, 640, (char *)"P.P.S.");
    outtextxy(660, 705, (char *)"CHEMISTRY");

    // for bar blocks
    setcolor(15);

    setfillstyle(SOLID_FILL, 6);
    bar3d(120, 400, 150, 535, 8, 8);

    setfillstyle(SOLID_FILL, 7);
    bar3d(180, 500, 210, 535, 8, 8);
    
    setfillstyle(SOLID_FILL, 8);
    bar3d(240, 300, 270, 535, 8, 8);

    setfillstyle(SOLID_FILL, 9);
    bar3d(300, 450, 330, 535, 8, 8);
    
    setfillstyle(SOLID_FILL, 10);
    bar3d(360, 490, 390, 535, 8, 8);

    setfillstyle(SOLID_FILL, 11);
    bar3d(420, 200, 450, 535, 8, 8);

    setfillstyle(SOLID_FILL, 12);
    bar3d(480, 250, 510, 535, 8, 8);

    setfillstyle(SOLID_FILL, 13);
    bar3d(540, 380, 570, 535, 8, 8);

    setfillstyle(SOLID_FILL, 14);
    bar3d(600, 420, 630, 535, 8, 8);

    setfillstyle(SOLID_FILL, 1);
    bar3d(660,490, 690, 535, 8, 8);

    getch();
    closegraph();

    return 0;
}