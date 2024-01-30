#include <iostream>
#include <graphics.h>
#include <time.h>
#include <conio.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    time_t isTime;
    struct tm *currentTime;
    char ch[100];
    while (!kbhit())
    {
        cleardevice();
        isTime = time(NULL);
        currentTime = localtime(&isTime);
        strftime(ch, 100, "%I : %M : %S", currentTime);
        setcolor(2);
        settextstyle(1, 0, 5);
        outtextxy(100, 100, ch);
        // for  AM/PM
        setcolor(3);
        strftime(ch, 100, "%p", currentTime);
        settextstyle(1, 0, 3);
        outtextxy(430, 110, ch);
        // for day-month-year
        setcolor(4);
        strftime(ch, 100, "%a - %b %d - %Y", currentTime);
        settextstyle(1, 0, 3);
        outtextxy(150, 200, ch);
        delay(1000);
    }
    getch();
    closegraph();
    return 0;
}