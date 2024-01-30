#include <iostream>
#include <graphics.h>
#include <time.h>
#include <cmath>
#include <conio.h>
#define pi 3.14159265359
using namespace std;
main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    initwindow(800, 800, "------------------ANALOG CLOCK-----------------");
    int page = 0;
    while (true)
    {
        setactivepage(page);
        setvisualpage(1 - page);
        cleardevice();

        // for outer circle of clock
        setcolor(2);
        circle(400, 400, 210);
        circle(400, 400, 211);
        circle(400, 400, 212);
        circle(400, 400, 213);
        circle(400, 400, 214);
        circle(400, 400, 215);
        circle(400, 400, 216);
        circle(400, 400, 217);

        // for central point of clock
        setcolor(3);
        circle(400, 400, 1);
        circle(400, 400, 2);
        circle(400, 400, 3);
        circle(400, 400, 4);
        circle(400, 400, 5);

        // for digits of the clock
        settextstyle(1, 0, 3);
        outtextxy(400 + 185 * sin(pi / 6) - 5, 400 - 185 * cos(pi / 6), (char *)"1");
        outtextxy(400 + 185 * sin(2 * pi / 6) - 5, 400 - 185 * cos(2 * pi / 6), (char *)"2");
        outtextxy(400 + 185 * sin(3 * pi / 6) - 5, 400 - 185 * cos(3 * pi / 6), (char *)"3");
        outtextxy(400 + 185 * sin(4 * pi / 6) - 5, 400 - 185 * cos(4 * pi / 6), (char *)"4");
        outtextxy(400 + 185 * sin(5 * pi / 6) - 5, 400 - 185 * cos(5 * pi / 6), (char *)"5");
        outtextxy(400 + 185 * sin(6 * pi / 6) - 5, 400 - 185 * cos(6 * pi / 6), (char *)"6");
        outtextxy(400 + 185 * sin(7 * pi / 6) - 5, 400 - 185 * cos(7 * pi / 6), (char *)"7");
        outtextxy(400 + 185 * sin(8 * pi / 6) - 5, 400 - 185 * cos(8 * pi / 6), (char *)"8");
        outtextxy(400 + 185 * sin(9 * pi / 6) - 5, 400 - 185 * cos(9 * pi / 6), (char *)"9");
        outtextxy(400 + 185 * sin(10 * pi / 6) - 5, 400 - 185 * cos(10 * pi / 6), (char *)"10");
        outtextxy(400 + 185 * sin(11 * pi / 6) - 5, 400 - 185 * cos(11 * pi / 6), (char *)"11");
        outtextxy(400 + 185 * sin(12 * pi / 6) - 5, 400 - 185 * cos(12 * pi / 6), (char *)"12");

        // for real time
        time_t now = time(NULL);
        tm *ltm = localtime(&now);
        system("cls");
        cout << ltm->tm_hour << " : " << ltm->tm_min;
        settextstyle(1, 0, 3);
        setcolor(4);
        outtextxy(250, 100, (char *)"ANALOG CLOCK");

        // for hour hand
        setcolor(5);
        setlinestyle(0, 0, 4);
        line(400, 400, 400 + 150 * sin(ltm->tm_hour * pi / 6), 400 - 150 * cos(ltm->tm_hour * pi / 6));

        // for minute hand
        setcolor(6);
        setlinestyle(0, 0, 3);
        line(400, 400, 400 + 180 * sin(ltm->tm_min * pi / 30), 400 - 180 * cos(ltm->tm_min * pi / 30));

        // for second hand
        setcolor(7);
        setlinestyle(0, 0, 1);
        line(400, 400, 400 + 180 * sin(ltm->tm_sec * pi / 30), 400 - 180 * cos(ltm->tm_sec * pi / 30));

        if (GetAsyncKeyState(VK_RETURN))
        {
            break;
        }
        delay(10);
        page = 1 - page;
    }

    getch();
    closegraph();
    return 0;
}