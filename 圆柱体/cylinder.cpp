#include <iostream>
#include <math.h>
using namespace std;

class Cylinder
{
    float radius, highlight;

public:
    Cylinder(float r = 1, float h = 10)
    {
        radius = r;
        highlight = h;
    };
    float volume()
    {
        return (2 * M_PI * radius * radius * highlight);
    };
    void display()
    {
        cout << "radius: " << radius << "\t"
             << "highlight: " << highlight << "\t"
             << "volume: " << volume() << endl;
    };
};

int main()
{
    Cylinder t;
    t.volume();
    t.display();
    return 0;
}