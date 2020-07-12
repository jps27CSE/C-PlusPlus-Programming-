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
};

int main()
{
    Student Jack;

    Jack.id=10;
    Jack.gpa=3.7;
     
     Jack.display();



}