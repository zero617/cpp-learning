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

char Candian::array[10][7] = {"���ŷ�", "���ⷹ", "���ⷹ", "�̷�", "��"};

void Candian::display()
{

    int number = rand() % 5 + 1;
    cout << array[number - 1] << endl;
    fstream app("results.txt", ios::app);
    if (!app)
    {
        cout << "�޷���results.txt\n";
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
    else if ((ltm->tm_hour >= 15 && ltm->tm_hour <=24) || ltm->tm_hour < 3)
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

    unsigned seed; // Random generator seed
    // Use the time function to get a "seed�� value for srand
    seed = time(0);
    srand(seed);

    // Now generate and print
    a.display();

    cout << "���������밴\"ENTER\":" << endl;
    cout << "������������ͬʱ��\"CTRL\"+\"C\"" << endl;
    if (getch() == 13)
        goto flag;
    //system("pause");
    return 0;
}