#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"enter the number ";
    cin>>num;

    int i;
    int sum=0;

    for(i=1;i<=num;i++)
    {
       sum+=i; 
    }

    cout<<"Sum is: "<<sum;
}