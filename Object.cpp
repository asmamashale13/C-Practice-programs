#include<iostream>
#include<conio.h>
using namespace std;
class Demo
{
public:
void fun1()
{
    cout<<"fun1 is executed "<<endl;

}
static void fun2() // static member function is called by class name with scpe resolution operator
{
    cout<<"fun 2 is executed " <<endl;
}
};
int main()
{
   Demo::fun2();
    Demo d1;
    d1.fun1();
    getch();
}
