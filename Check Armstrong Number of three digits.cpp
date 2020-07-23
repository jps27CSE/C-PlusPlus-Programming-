#include<iostream>
using namespace std;
int main()
{
    int num,originalnumber,reminder=0,result;

    cout<<"Enter a number";
    cin>>num;

    originalnumber=num;

    while(originalnumber!=0)
    {
        reminder=originalnumber%10;

        result+=reminder*reminder*reminder;
        
        originalnumber/=10;
        
    }

    if(result==num)
    {
        cout<<"Armstrong Number";

    }

    else
    {
        cout<<"Not Armstrong Number";
    }
    
}