#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    initwindow(1050, 800);
    for (int i = 0; i < 650; i += 10)
    {
        cleardevice();
        setcolor(4);
        settextstyle(6, 0, 6);
        outtextxy(10, 150, (char *)"MOVING CYCLE ANIMATION");
        setcolor(2);
        line(50, 600, 950, 600);
        setcolor(3);
        // wheel of cycle
        circle(55 + i, 550, 50);
        circle(255 + i, 550, 50);
        // bearing of the cycle
        circle(55 + i, 550, 4); 
        circle(255 + i, 550, 4);
        // for frame of cycle
        circle(140 + i, 550, 15); // disc
        line(55 + i, 550, 140 + i, 550);
        line(140 + i, 550, 110 + i, 450);
        line(125 + i, 450, 95 + i, 450);
        line(255 + i, 550, 200 + i, 400);
        line(140 + i, 550, 220 + i, 450);
        line(120 + i, 475, 220 + i, 450);
        line(120 + i, 475, 55 + i, 550);
        line(200 + i, 400, 215 + i, 395);

        delay(100);
    }
    getch();
    closegraph();
    return 0;
}
// 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