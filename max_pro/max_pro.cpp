#include<iostream>
#include<vector>
using namespace std;

class find_max
{
        int len,ma,mi;   
        vector<int> array;
    public:
        find_max()
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

void find_max::input()
{
    int number;
    while (1) {
    cin >> number;
    array.push_back(number);
    if (cin.get() == '\n')
    break;
    }
}

void find_max::size()
{
    len = array.size();
}

void find_max::max()
{
    ma=array[0];
    for(int x=1;x<array.size();x++) 
    {
        int a=array[x];
        if(ma<a)
            ma=a;
    }
}

void find_max::min()
{
    mi=array[0];
    for(int x=1;x<array.size();x++) 
    {
        int a=array[x];
        if(mi>a)
            mi=a;
    }
}

void find_max::display()
{
    cout << "您输入了" << len << "个数" << "。" << endl;
    cout << "最大值是" << ma << "，最小值是" << mi << "。" << endl;
}

int main()
{
    find_max t;
    t.input();    
    t.size();
    t.max();
    t.min();    
    t.display();
    system("pause");
    return 0;
}