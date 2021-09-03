#include<iostream >
using namespace std;

void fun(int &a,int &b)
{    int p;
    p=a; a=b; b=p;
}

void exchange(int &a,int &b,int &c)
{
    if(a<b)fun(a,b);
    if(a<c)fun(a,c);
    if(b<c)fun(b,c);
}

int main( )
{
    int a,b,c;
    a=12;
    b=639;
    c=78;
    exchange(a,b,c);
    cout<<"a="<<a<<",b="<<b<<",c="<<c<<endl;
    return 0;
}