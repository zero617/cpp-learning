#include<iostream>
#include<vector>
using namespace std;

class Max
{
        int len,ma,mi;   
        vector<int> array;
    public:
        Max()
        {
            len=0;
            ma=0;
            mi=0;
        }
        void input();
        void size();
        void max();
        void min();
        void display();
};

void Max::input()
{
    int number;
    while (1) {
    cin >> number;
    array.push_back(number);
    if (cin.get() == '\n')
    break;
    }
}

void Max::size()
{
    len = array.size();
}

void Max::max()
{
    ma=array[0];
    for(int x=1;x<array.size();x++) 
    {
        int a=array[x];
        if(ma<a)
            ma=a;
    }
}

void Max::min()
{
    mi=array[0];
    for(int x=1;x<array.size();x++) 
    {
        int a=array[x];
        if(mi>a)
            mi=a;
    }
}

void Max::display()
{
    cout << "您输入了" << len << "个数"  << endl;
    cout << "最大值是" << ma << "最小值是" << mi << "。" << endl;
}

int main()
{
    Max t;
    t.input();    
    t.size();
    t.max();
    t.min();    
    t.display();
    system("pause");
    return 0;
}