#include <iostream>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include "conio.h"
using namespace std;

class Candian
{
    static char caidan[100][10];

public:
    void display();
    void getcaidan();
};

char Candian::caidan[][10] = {};

void Candian::getcaidan(){
    int i;
    cout << "\n";
    cout << "�����������밴\"ESC\"" << endl;
    for(i=0; ;i++){
        if(i == 0)
            {cout << "������Ҫ��ӵĲ͵�,��\"ENTER\"ȷ�����룺" << endl;}
        //cin.getline(caidan[i] , 10);
        cin >> caidan[i];
        if(getch() == 27)
            break;
    }
    for(int j=0;j<=i;j++)
        cout << caidan[j] << "\t";
    cout << "\n";
}

void Candian::display()
{

    int number = rand() % 5 + 1;
    cout << caidan[number - 1] << endl;
    fstream app("results.txt", ios::app);
    if (!app)
    {
        cout << "�޷���results.txt\n";
        exit(1);
    }
    app << caidan[number - 1] << endl;
    app.close();
}

void disptime()
{
    // ���ڵ�ǰϵͳ�ĵ�ǰ����/ʱ��
    time_t now = time(0);

    tm *ltm = localtime(&now);

    // ��� tm �ṹ�ĸ�����ɲ���
    cout << 1900 + ltm->tm_year << "��";
    cout << 1 + ltm->tm_mon << "��";
    cout << ltm->tm_mday << "��" << endl;
    cout << ltm->tm_hour << ":";
    cout << ltm->tm_min << endl;
    //cout << ltm->tm_sec << endl;
    if (ltm->tm_hour > 9 && ltm->tm_hour < 15)
    {
        cout << "���������:";
    }
    else if ((ltm->tm_hour >= 15 && ltm->tm_hour <= 24) || ltm->tm_hour < 3)
    {
        cout << "�������ϳ�:";
    }
    else
    {
        cout << "�������ϳ�:";
    }
    fstream app("results.txt", ios::app);
    if (!app)
    {
        cout << "�޷���results.txt\n";
        exit(1);
    }
    app << 1900 + ltm->tm_year << "��";
    app << 1 + ltm->tm_mon << "��";
    app << ltm->tm_mday << "��" << endl;
    app << ltm->tm_hour << ":";
    app << ltm->tm_min << endl;
    if (ltm->tm_hour > 9 || ltm->tm_hour < 15)
    {
        app << "���������:";
    }
    else if (ltm->tm_hour >= 15 || ltm->tm_hour < 3)
    {
        app << "�������ϳ�:";
    }
    else
    {
        app << "�������ϳ�:";
    }
    app.close();
}

int main()
{
    Candian a;

    cout << "��Ӳ˵��밴\"A\":" << endl;
    cout << "��ʼ�������밴\"ENTER\"" << endl;
if( getch() == 97 )
{
    a.getcaidan();
}

flag:
    disptime();

    unsigned seed; // Random generator seed
    // Use the time function to get a "seed�� value for srand
    seed = time(0);
    srand(seed);

    // Now generate and print
    a.display();

    cout << "���������������밴\"ENTER\":" << endl;
    cout << "�����������밴\"ESC\"" << endl;
    if (getch() == 13)
        goto flag;
    //system("pause");
    return 0;
}