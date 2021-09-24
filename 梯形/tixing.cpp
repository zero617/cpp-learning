#include <iostream>
using namespace std;

class tixing
{
    float width1,width2,height;
public:
    tixing()
    {
        cout<<"���������ε��ϵס��µ׺͸ߣ�";
        cin>>width1;
        cin>>width2;
        cin>>height;
    }
    float area();
    void display();
};

float tixing::area()
{
    return (((width1+width2)*height)/2);
}

void tixing::display()
{
    cout<<"���������ε���Ϣ:"<<endl;
    cout<<"width1: "<<width1<<"width2: "<<width2<<"height:"<<height<<endl;
    cout<<"Area: "<<area()<<endl;
}

int main()
{
    tixing t;
    t.area();
    t.display();
    return 0;
}