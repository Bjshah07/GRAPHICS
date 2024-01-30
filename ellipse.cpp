#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    /*
        syntax:
            ellipse(x,y,stangle,endangle,st-x,st-y);
    */
    ellipse(200, 150, 0, 360, 150, 100);
    fillellipse(200, 150, 100, 50);
    getch();
    closegraph();
    return 0;
}