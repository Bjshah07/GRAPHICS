#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    /*
        syntax:
            circle(x,y,radius);
    */
    circle(100, 100, 50);
    getch();
    closegraph();
    return 0;
}