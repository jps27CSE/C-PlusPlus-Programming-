#include<iostream>
using namespace std;

int main()
{
    int number1;
    int number2;

    int temp;

    cout<<"enter first number: ";
    cin>>number1;

    cout<<"enter second number: ";
    cin>>number2;

    cout<<"before Swapping"<<endl;
    cout<<number1<<endl;
    cout<<number2<<endl;


    temp=number1;
    number1=number2;
    number2=temp;

    cout<<"after Swapping"<<endl;
    cout<<number1<<endl;
    cout<<number2<<endl;
}