#include <iostream>
using namespace std;

class circle {
private:
    double radius, area;
public:
    void setRadius() { cin >> radius; }
    void setArea() { area = 3.14 * radius * radius; }
    void output() { cout << "�뾶��" << radius << "�������" << area << endl; }
};

int main()
{
    circle s1;
    s1.setRadius();
    s1.setArea();
    s1.output();
    system("pause");
    return 0;
}