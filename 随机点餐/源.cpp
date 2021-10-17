#include <iostream>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include "conio.h"
using namespace std;

class Candian
{
    static char array[10][7];

public:
    void display();
    //void time();
};

char Candian::array[10][7] = {"鸡排饭", "烤肉饭", "煎肉饭", "烫饭", "面"};

void Candian::display()
{

    int number = rand() % 5 + 1;
    cout << array[number - 1] << endl;
    fstream app("results.txt", ios::app);
    if (!app)
    {
        cout << "无法打开results.txt\n";
        exit(1);
    }
    app << array[number - 1] << endl;
    app.close();
}

int main()
{
flag:
    Candian a;
    //    a.time();

    // 基于当前系统的当前日期/时间
    time_t now = time(0);

    tm *ltm = localtime(&now);

    // 输出 tm 结构的各个组成部分
    cout << 1900 + ltm->tm_year << "年";
    cout << 1 + ltm->tm_mon << "月";
    cout << ltm->tm_mday << "日" << endl;
    cout << ltm->tm_hour << ":";
    cout << ltm->tm_min << endl;
    //cout << ltm->tm_sec << endl;
    if (ltm->tm_hour > 9 && ltm->tm_hour < 15)
    {
        cout << "今天中午吃:";
    }
    else if ((ltm->tm_hour >= 15 && ltm->tm_hour <=24) || ltm->tm_hour < 3)
    {
        cout << "今天晚上吃:";
    }
    else
    {
        cout << "今天早上吃:";
    }
    fstream app("results.txt", ios::app);
    if (!app)
    {
        cout << "无法打开results.txt\n";
        exit(1);
    }
    app << 1900 + ltm->tm_year << "年";
    app << 1 + ltm->tm_mon << "月";
    app << ltm->tm_mday << "日" << endl;
    app << ltm->tm_hour << ":";
    app << ltm->tm_min << endl;
    if (ltm->tm_hour > 9 || ltm->tm_hour < 15)
    {
        app << "今天中午吃:";
    }
    else if (ltm->tm_hour >= 15 || ltm->tm_hour < 3)
    {
        app << "今天晚上吃:";
    }
    else
    {
        app << "今天早上吃:";
    }
    app.close();

    unsigned seed; // Random generator seed
    // Use the time function to get a "seed” value for srand
    seed = time(0);
    srand(seed);

    // Now generate and print
    a.display();

    cout << "如果想更换请按\"ENTER\":" << endl;
    cout << "如果想结束了请同时按\"CTRL\"+\"C\"" << endl;
    if (getch() == 13)
        goto flag;
    //system("pause");
    return 0;
}