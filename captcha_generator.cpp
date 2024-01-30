#include <iostream>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    int i = 0, key, num, midx;
    char a[10];
    midx = getmaxx() / 2;
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    setcolor(2);
    outtextxy(midx, 20, (char *)"CAPTCHA");
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(midx, 125, (char *)"Press Any key to change the captcha");
    outtextxy(midx, 150, (char *)"Press Escape key to exit");
    setcolor(4);
    setviewport(100, 200, 600, 400, 1);
    setcolor(5);

    while (1)
    {
        while (i < 6)
        {
            num = rand();
            if (num == 0)
                a[i] = 65 + rand();
            else if (num == 1)
                a[i] = 97 + rand();
            else
                a[i] = 48 + rand();
            i++;
        }
        a[i] = '\0';
        outtextxy(210, 100, a);
        if (key == 27)
            exit(0);
        clearviewport();
        i = 0;
    }
    getch();
    closegraph();
    return 0;
}