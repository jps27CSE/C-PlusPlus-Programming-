#include<iostream>
using namespace std;

class point
{
   private:
   int x,y;

   public:
   point(int x1,int y1)
   {
       x=x1;
       y=y1; 
   }
   int getx()
   {
       return x;
   }
   int gety()
   {
       return y;
   }

} ;



int main()
{

    point p(10,20);

    cout<<"x:"<<p.getx()<<"y:"<<p.gety()<<endl;

}