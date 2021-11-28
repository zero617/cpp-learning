#include <iostream>
#include <math.h>
using namespace std;

class Cylinder
{
    float radius, hight;

public:
    Cylinder(float r = 1, float h = 10)
    {
        radius = r;
        hight = h;
    };
    float volume()
    {
        return (2 * M_PI * radius * radius * hight);
    };
    void display()
    {
        cout << "radius: " << radius << "\t"
             << "hight: " << hight << "\t"
             << "volume: " << volume() << endl;
    };
};

int main()
{
    Cylinder t;
    //t.volume();
    t.display();
    return 0;
}