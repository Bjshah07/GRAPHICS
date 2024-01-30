#include <iostream>
#include <graphics.h>
#include <math.h>
#include <conio.h>
#include <thread>
using namespace std;
#define pi 3.14
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    float x = 1, y = 0.0, j = 0.5, count = 0.1;
    float r = 15.0; 
    setcolor(1);
    line(0, 215, 650, 215);
    Sleep(1);
    for (int i = 0; i <= 7; i++)
    {
        for (float k = 90; k < 270; k += 10)
        {
            y = cos((k * pi) / 180) / j; 
            if (y > 0)

                y = y;

            x += 5;
            setcolor(14);
            setfillstyle(1, 14);
            circle(x, y * 100 + 200, r);
            floodfill(x, y * 100 + 200, 14);
            delay(100);
            setcolor(0);
            setfillstyle(1, 0);
            circle(x, y * 100 + 200, r);
            floodfill(x, y * 100 + 200, 0);
        }
        j += count;
        count += 0.1;
    }
    closegraph();
    getch();
    return 0;
}