#include<iostream>
#include<conio.h>
using namespace std;

struct student
{
    char name;
    int roll;
    double per;
};
int main()
{
    student s1;
   /* s1.name='A';
    s1.roll=52;
    s1.per=89.09;*/
    cout<<"Enter Name , Roll No , Percentage :";
    cin>>s1.name>>s1.roll>>s1.per;
    cout<<"Entered Data is :"<<s1.name<<endl<<s1.roll<<endl<<s1.per<<endl;
    getch();

}
