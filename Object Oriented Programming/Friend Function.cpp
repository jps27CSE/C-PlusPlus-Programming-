#include<iostream>
using namespace std;

class output
{
   int meters;

   public:

   output()
   {
       meters=0; 
   }
   void display()
   {
       cout<<meters<<endl;
   }

   friend void addvalue(output &pass);
};

void addvalue(output &pass)
{
    pass.meters=pass.meters+5;


}

int main()
{
    output o1;
    
    o1.display();

    addvalue(o1);

    o1.display();
}




