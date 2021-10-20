#include <iostream>
using namespace std;

class Hight
{
    int high;

public:
    Hight(int h) { high = h; }
    int geth() { return high; }
};

class Rectangle
{
    int len, wid;

public:
    Rectangle(int l, int w)
    {
        len = l;
        wid = w;
    }
    int getl() { return len; }
    int getw() { return wid; }
};

class Cuboid : public Hight, public Rectangle
{
public:
    Cuboid(int l, int w, int h) : Hight(h), Rectangle(l, w) {}
    void tiji();
    void biaomianji();
};

void Cuboid::tiji()
{
    int t;
    t = getl() * getw() * geth();
    cout << "tiji:" << t << endl;
}

void Cuboid::biaomianji()
{
    int b;
    b = (getl() * getw() + getl() * geth() + getw() * geth()) * 2;
    cout << "biaiomji:" << b << endl;
}

int main()

{

    Cuboid c(2, 5, 3); // 2、5、3分别表示长方体的长、宽和高

    c.tiji(); //此行输出长方体体体积

    c.biaomianji(); //此行输出长方体表面积

    return 0;
}
