#include<iostream>
using namespace std;

class Student
{
    public:
          int id;
          double gpa;

          void display()
          {
              cout<<id<<" "<<gpa;
          }
          
          void setValue(int x,double y)
          {
              id=x;
              gpa=y;
          }
};

int main()
{
    Student Jack;
     Jack.setValue(10,3.8);

    
     
     Jack.display();



}