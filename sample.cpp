#include <graphics.h>
int main(int argd, char const *argv[])
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    char str[]="hello world";
    outtextxy(55,90,str);
    outtext(str);
    circle(100,100,100);
    getch();
    closegraph();
    return 0;
} 
