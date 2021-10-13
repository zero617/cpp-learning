#include <iostream>
using namespace std;

class RMB
{
    int yuan, jiao, fen;

public:
    RMB(int a = 0, int b = 0, int c = 0)
    {
        yuan = a;
        jiao = b;
        fen = c;
    }
    friend istream &operator>>(istream &, RMB &);
    friend ostream &operator<<(ostream &, RMB &);
    RMB operator+(RMB &y2);
    RMB operator-(RMB &y2);
}

istream &operator>>(istream &ipt, RMB &y)
{
    cout << "请输入RMB:";
    ipt >> y.yuan >> y.jiao >> y.fen;
    return ipt;
}

ostream &operator<<(ostream &opt, RMB &y)
{
    opt << "输出结果为：" << endl;
    opt << y.yuan << '\t' << y.jiao << '\t' << y.fen << endl;
    return opt;
}

RMB RMB::operator+(RMB &y2)
{
    RMB y;
    y.fen = fen + y.fen;
    if (y.fen >= 10)
    {
        y.jiao += 1;
    }
    y.jiao = jiao + y.jiao;
    if (y.jiao >= 10)
    {
        y.yuan += 1;
    }
    y.yuan = yuan + y2.yuan;
    return y;
}

RMB RMB::operator-(RMB &y2)
{
    RMB y;
    y.fen = fen - y2.fen;
    if (y.fen < 0)
    {
        y.jiao -= 1;
        y.fen += 10;
    }
    y.jiao = jiao - y.jiao;
    if (y.jiao < 0)
    {
        y.yuan -= 1;
        y.jiao += 10;
    }
    y.yuan = yuan - y.yuan;
    return y;
}

int main()

{

    RMB t1(10, 8, 5), t2(4, 7, 6), t3, t4, t5;

    cout << "t1钱数为：" << t1;

    cout << "t2钱数为：" << t2;

    t3 = t1 + t2;

    cout << "t1+t2的钱数为：" << t3;

    t3 = t1 - t2;

    cout << "t1-t2的钱数为：" << t3;

    cin >> t4 >> t5;

    t3 = t5 + t4;

    cout << t3;

    t3 = t5 - t4;

    cout << t3;

    return 0;
}