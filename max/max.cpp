#include<iostream>
using namespace std;

int max(int a,int b,int c=1) 
{ 
    if (a<b)
        a=b;
    if (a<c)
        a=c;
    return a;
}

int main()
{
    int ia,ib,ic;
    cin >> ia >> ib >> ic ;
    if (ia<1||ib<1||ic<1)
        cout << "Error"<< endl;
    else {
        cout << "max_3=" << max(ia,ib,ic) << endl;
        cout << "max_2=" << max(ia,ib) << endl;
    }
    return 0;
}


/*#include<iostream>
using namespace std;

int max(int a,int b,int c) 
{ 
    if (a<b)
        a=b;
    if (a<c)
        a=c;
    return a;
}

int main()
{
    int ia,ib,ic;
    cin >> ia >> ib >> ic ;
    if (ia<1||ib<1||ic<1)
        cout << "Error"<< endl;
    else {
        cout << "max_3=" << max(ia,ib,ic) << endl;
        cout << "max_2=" << max(ia,ib,0) << endl;
    }
    return 0;
}