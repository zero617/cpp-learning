#include<iostream>
using namespace std;

class Sample
{
    int x,y;
public:
    Sample( ){ x=y=0; }
    Sample(int a,int b){x=a,y=b;}
    ~Sample( )
    {
        if(x==y)
            cout<<"x=y"<<endl;
        else
            cout<<"x!=y"<<endl;
    }
    void disp( )
    {
        cout<<"x="<<x<<",y="<<y<<endl;
    }
};

int main( )
{
    Sample(2,3);    //这里定义了对象，但是没有给出对象名，相当于省略了对象名，但是对象的参数给出了
}