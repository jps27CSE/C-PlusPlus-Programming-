#include<iostream>
using namespace std;

class Student
{
    public:
          int id;
          double gpa;
};

int main()
{
    Student Jack;

    Jack.id=10;
    Jack.gpa=3.7;

    cout<<Jack.id<<" "<<Jack.gpa;



}