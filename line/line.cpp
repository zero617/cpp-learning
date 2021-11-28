#include <iostream>
#include <math.h>
using namespace std;

class Line
{
    float x0, y0, x1, y1;

public:
    Line(float a0, float b0, float a1, float b1)
    {
        x0 = a0;
        y0 = b0;
        x1 = a1;
        y1 = b1;
    }
    float distance()
    {
        return sqrt((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0));
    }
    void out()
    {
        cout << "a:" << x0 << "," << y0 << "\t"
             << "b:" << x1 << "," << y1 << endl;
    }
};

int main()

{

    Line a(1, 0, 2, 0);
    float disc;

    disc = a.distance(); //�˺������߶�a�ĳ���

    cout << "�߶γ���Ϊ��" << disc << endl;

    a.out(); //�˺�������߶ζ˵������

    return 0;
}