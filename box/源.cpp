#include <iostream>
using namespace std;

class box
{
    float length,width,height;
public:
    box()
    {
        cout<<"请输入长方体的长宽高：";
        cin>>length;
        cin>>width;
        cin>>height;
    }
    float volume();
    float area();
    void display();
};

float box::volume()
{
    return (width*height*length);
}

float box::area()
{
    return ((width*height+width*length+height*length)*2);
}

void box::display()
{
    cout<<"长方体的配置如下:"<<endl;
    cout<<"length: "<<length<<"width: "<<width<<"height:"<<height<<endl;
    cout<<"Volume: "<<volume()<<"Area: "<<area()<<endl;
}

int main()
{
    box t;
    t.volume();
    t.area();
    t.display();
    return 0;
}