#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    /*
        syntax:
            rectangle(left,top,right,bottom);
            left --> coordinates of x1
            top --> coordinates of y1
            right --> coordinates of x2
            bottom --> coordiantes of y2
    */
    rectangle(100, 200, 400, 400);
    getch();
    closegraph();
    return 0;
}