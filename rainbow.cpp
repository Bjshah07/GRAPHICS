#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    //getting the maximum value of the screen's coordinates
    char str[100];
    sprintf(str, "x=%d & y=%d", getmaxx(), getmaxy());
    outtext(str);
    setbkcolor(2);
    int midx = getmaxx() / 2;
    int midy = getmaxy() / 2;
    for (int i = 0; i < 30; i++)
    {

        setcolor(i / 10);
        ellipse(320, 250, 0, 180, 100 + i, 100 + i);
        delay(20);
    }
    setbkcolor(2);
    getch();
    closegraph();
    return 0;
}