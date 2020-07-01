#include<iostream>
#include<iomanip>//for setprecision
using namespace std;

int main()
{
    float num1,num2;

    cin>>num1>>num2;

    cout<<showpoint;//formatting type
    float sum=num1+num2;

    cout<<setw(10)<<sum<<endl;

    cout<<noshowpoint;//formating type
    float sum1=num1+num2;

    cout<<sum1<<endl;
    
    cout<<showpoint;
    cout<<setprecision(10);
    int a,b;
    cin>>a>>b;
    float sum2=a+b;

    cout<<sum2<<endl;


    
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(10);
    int a,b;
    cin>>a>>b;
    float sum4=a+b;

    cout<<sum4<<endl;






}