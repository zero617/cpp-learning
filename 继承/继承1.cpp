#include <iostream>
#include <math.h>

using namespace std;

class Point
{
    int a, b, c, d;

public:
    Point(int w, int x, int y, int z)
    {
        a = w;
        b = x;
        c = y;
        d = z;
    }
    int getx() { return (c - a); };
    int gety() { return (d - b); };
};

class Line : public Point
{

public:
    Line(int a, int b, int c, int d) : Point(a, b, c, d){};
    void distance();
    void ZDdata();
};

void Line::distance()
{
    int len;
    len = sqrt(getx() * getx() + gety() * gety());
    cout << "distance=" << len << endl;
}

void Line::ZDdata()
{
    int x, y;
    x = getx() / 2;
    y = gety() / 2;
    cout << "midpoint:"
         << "(" << x << "," << y << ")" << endl;
}

int main()

{

    Line s(0, 0, 0, 4); //两个点坐标分别是（0,0）（0,4）

    s.distance(); //此行输出线段s的长度。

    s.ZDdata(); //此行输出线段s的中点坐标。

    return 0;
}