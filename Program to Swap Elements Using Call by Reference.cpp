#include<iostream>
using namespace std;

void function(int *a,int *b,int *c)
{
    int temp;

    temp=*b;
    *b=*a;
    *a=*c;
    *c=temp;

}

int main()
{
    int a,b,c;

    cout<<"Enter Number 1:";
    cin>>a;

    cout<<"Enter Number 2:";
    cin>>b;

    cout<<"Enter Number 3:";
    cin>>c;

    function(&a,&b,&c);

    cout<<a<<b<<c;




}