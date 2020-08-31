#include<iostream>
using namespace std;

class construct 
{
   public:
   int a ;
   int b;

   construct()
   {
       a=20;
       b=30;
   }
};

int main()
{
    construct c;

    cout<<"a:"<<c.a<<endl;
    cout<<"b:"<<c.b<<endl;


}