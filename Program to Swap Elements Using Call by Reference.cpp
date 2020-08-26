#include <iostream>
using namespace std;

void swap(int *num1,int *num2,int *num3)
{
    int temp;

    temp=*num2;
    *num2=*num1;
    *num1=*num3;
    *num3=temp;
}


int main()
{
    int a,b,c;

    cin>>a>>b>>c;

    swap(&a,&b,&c);

    cout<<a<<endl<<b<<endl<<c<<endl;
}