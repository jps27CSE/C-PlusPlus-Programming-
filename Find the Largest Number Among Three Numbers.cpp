#include<iostream>
using namespace std;

int main()
{
    int number;

    cout<<"Enter a year";
    cin>>number;

    if(number%400==0)
    {
        cout<<"Leap year";
    }
    else if(number%100==0)
    {
        cout<<"Not Leap year";
    }
    else if(number%4==0)
    {
        cout<<"Leap year";
    }
    else
    {
        cout<<"Not leap year";
    }
    
    
    
}