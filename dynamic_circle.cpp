#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
    
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    for (int i = 0; i <= 90; i++)
    {
        setcolor(i / 10);  
        circle(319+2*i, 219 +5* i, 20 + i);
        delay(50);
    }

    getch();
    closegraph();

    return 0;
}    