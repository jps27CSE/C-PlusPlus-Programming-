#include<iostream>
using namespace std;

int GCD(int n1,int n2)
{
    if(n1%n2==0)
    {
        return n2;
    }
    return GCD(n2,n1%n2);
}

int main()
{
    int num1,num2;

    cout<<"Enter number 1:";
    cin>>num1;

    cout<<"Enter number 2:";
    cin>>num2;

    cout<<GCD(num1,num2);
}