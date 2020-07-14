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
          
          Student(int x,double y)
          {
            id=x;
            gpa=y;
          }
          Student()
          {
              cout<<"Default Constructor\n";
          }
};

int main()
{
    Student OB;


    Student Jack (10,3.8);

     Jack.display();



}