#include <iostream>
using namespace std;

class fenshu
{
    int fenzi,fenmu;
public:
    fenshu(int x=0,int y=0){fenzi=x;fenmu=y;}
    friend fenshu operator+(fenshu f1,fenshu f2);
    friend ostream & operator <<( ostream& out, fenshu& t);
    friend istream & operator >>( istream& in, fenshu& t);
};

fenshu operator +(fenshu f1,fenshu f2) {
    fenshu f;
    f1.fenzi=f1.fenzi*f2.fenmu;
    f2.fenzi=f2.fenzi*f1.fenmu;
    f.fenzi=f1.fenzi+f2.fenzi;
    f.fenmu=f1.fenmu+f2.fenmu;
    return f;
 }

ostream& operator<<(ostream& out,fenshu &t)
{
    out<<t.fenzi<<"/"<<t.fenmu<<endl;
    return out;
}

istream& operator>>(istream& in,fenshu &t)
{
    in>>t.fenzi>>t.fenmu;
    return in;
}

int main(){
    fenshu f1(1,2),f2(2,3),f3,f4,f5;
    cout<<f1<<f2;
    f3=f1+f2;
    cout<< f3<<endl;
    cin>>f4>>f5;
    f3=f4+f5;
    cout<<f3;
    return 0;
}