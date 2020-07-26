#include "firstclass.h"
#include<iostream>
using namespace std;

firstclass :: firstclass()
{
   cout<<"constructor is called"<<endl;
}

firstclass::~firstclass()
{
    cout<<"Destructor is called"<<endl;
}

void firstclass :: display()
{
    cout<<"Displaying the function"<<endl;
}