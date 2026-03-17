#include<iostream>
#include<conio.h>
using namespace std;

class constr
{
    public:
    int x,y;
    static int z;
    void f1()
    {
        cout<<"f1 is executed"<<endl;
    }
    constr()
    {
        x=11;
        y=12;
        z=13;
        cout<<"this is constructor"<<endl;
    }
    void f2()
    {
       cout<<x<<endl<<y<<endl<<z<<endl;

    }

};
int constr::z;
int main()
{
    constr c1;
    c1.f1();
    c1.f2();
    getch();
}
