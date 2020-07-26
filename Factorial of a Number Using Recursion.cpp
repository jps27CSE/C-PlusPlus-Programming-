#include<iostream>
using namespace std;

int recursive(int n)
{
    if(n>=1)
    {
        return n*recursive(n-1);

    }
    else
    {
        return 1;
    }
    
}

int main()
{
    int number;

    cout<<"Enter a number: ";
    cin>>number;

    cout<<recursive(number);
}