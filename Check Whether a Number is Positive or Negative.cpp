#include<iostream>
using namespace std;

int main()
{
    double number;

    cout<<"Enter a number";
    cin>>number;

    if(number<0)
    {
        cout<<"Number is negative";
    }
    else if(number>0)
    {
        cout<<"Number is positive";
    }
    else
    {
        cout<<"you entered zero";
    }
    
    
}