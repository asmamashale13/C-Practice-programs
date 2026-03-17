#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
   /* string str="hello";
    for(int i=str.length()-1;i>=0;i--)
    {
        cout<<str[i];
    }*/

   int arr[5]={10,16,3,40,8};
  int  max=arr[0];
   for(int i=1;i<5;i++)
   {

      if(arr[i]>max)
          max=arr[i];
   }
      cout<<"Largest element is: "<<max<<endl;

getch();
}
