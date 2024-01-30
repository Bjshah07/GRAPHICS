#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    /*
        syntax:
            arc(x,y,stangle,endangle,radius);
            stangle --> starting angle
            endangle --> ending angle
    */
    arc(100, 100, 0, 180, 50);
    getch();
    closegraph();
    return 0;
}