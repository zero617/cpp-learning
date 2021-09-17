#include<iostream>
using namespace std;

class A
{  
    int x,y;
public:
    A ( )
    {
        x=y=0 ;  cout << "Default constructor called. \n" ;
    }
    A (int i,int j)
    {
        x=i , y=j ; cout <<"constructor called.\n" ;
    }
    ~A ( )
    {
        show( ); cout<<"Destructor called.\n";
    }
    void show ( )
    {
        cout << x << ',' << y << endl ;
    }           
    };

int  main( )
{
    A a1,a2(6,8);
    a1.show( ) ;
    a2.show( ) ;
}