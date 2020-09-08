#include<iostream>
using namespace std;

class pointer
{
   int m;

   public:
   void set_data(int m)
   {
       this->m=m;
   }

   void print_function()
   {
       cout<<m;
   }
};

int main()
{
    pointer m;

    m.set_data(5);
    m.print_function();
}