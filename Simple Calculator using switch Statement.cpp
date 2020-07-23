#include<iostream>
using namespace std;

int main()
{
    char charecter;

    double num1,num2;
    
    cout<<"Which Operation you want : + - * /:";
    cin>>charecter;

    cout<<"Enter Num 1: ";
    cin>>num1;

    cout<<"Enter Num 2: ";
    cin>>num2;

    

    switch(charecter)
    {
        case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
        break;

        case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
        break;

        case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
        break;

        case '/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
        break;

        default:
        cout<<"Error";
    }
}