#include <iostream>
using namespace std;

class M
{
    int a, b, c, d, e, f;

public:
    M(int x1 = 0, int x2 = 0, int x3 = 0, int x4 = 0, int x5 = 0, int x6 = 0)
    {
        a = x1;
        b = x2;
        c = x3;
        d = x4;
        e = x5;
        f = x6;
    }
    friend istream &operator>>(istream &, M &);
    friend ostream &operator<<(ostream &, M &);
    M operator+(M &y2);
};

istream &operator>>(istream &ipt, M &y)
{
    cout << "请输入矩阵:";
    ipt >> y.a >> y.b >> y.c >> y.d >> y.e >> y.f;
    return ipt;
}

ostream &operator<<(ostream &opt, M &y)
{
    opt << "输出结果为：" << endl;
    opt << y.a << '\t' << y.b << '\t' << y.c << endl;
    opt << y.d << '\t' << y.e << '\t' << y.f << endl;
    return opt;
}

M M::operator+(M &y2)
{
    M y;
    y.a = a + y2.a;
    y.b = b + y2.b;
    y.c = c + y2.c;
    y.d = d + y2.d;
    y.e = e + y2.e;
    y.f = f + y2.f;
    return y;
}

int main()

{

    M a, b, c;

    cin >> a;

    cin >> b;

    c = a + b;

    cout << c << endl;

    return 0;
}