#include<iostream>
using namespace std;

int main()
{
    int num;
    int fact=1;

    int i;

    cout<<"Enter a number: ";
    cin>>num;

    if(num<0)
    {
        cout<<"Error!";
    }
    else
    {
        for(i=1;i<=num;i++)
        {
            fact*=i;
        }
        
        cout<<"Fact is "<<fact;
    }
    
    
}