#include <iostream>
#include <math.h>

using namespace std;

class Hight
{
    float high;

public:
    Hight(float h = 1) : high(h) {}
    float geth() { return high; }
};

class Circle
{
    float radius;

public:
    Circle(float r = 1) : radius(r) {}
    float getradius() { return radius; }
};

class Cylinder : public Hight, public Circle
{
public:
    Cylinder(float h, float r) : Hight(h), Circle(r) {}
    void tiji()
    {
        cout << "tiji:" << geth() * M_PI * getradius() * getradius() << endl;
    }
    void biaomianji()
    {
        cout << "biaomianji:" << geth() * 2 * M_PI * getradius() + 2 * M_PI * getradius() * getradius() << endl;
    }
};

int main()
{
    Cylinder s(5, 3);
    s.tiji();
    s.biaomianji();
    return 0;
}