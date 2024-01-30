#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
    /*
        syntax:
             line(x1,y1,x2,y2);
                where x1,y1 are coordiantes of first point
                and x2,y2 are coordinates of second point
    */
    // line(100, 100, 200, 200);
    int x1, x2, x3, y1, y2, y3;
    cout << "enter the coordinates of first point" << endl;
    cin >> x1;
    cout << "enter the coordinate of second point" << endl;
    cin >> y1;
    cout << "enter the coordinate of second point" << endl;
    cin >> x2;
    cout << "enter the coordinate of second point" << endl;
    cin >> y2;
    cout << "enter the coordinate of second point" << endl;
    // cin >> x3;
    // cout << "enter the coordinate of second point" << endl;
    // cin >> y3;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    line(x1, y1, x1, y2);
    line(x1, y2, x2, y2);
    line(x1, y1, x2, y2);
    getch();
    closegraph();
    return 0;
}