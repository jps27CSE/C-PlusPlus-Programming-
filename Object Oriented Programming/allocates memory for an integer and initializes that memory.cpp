#include<iostream>
using namespace std;

int main()
{
    int *p;

    p=new int(9);

    if(!p)
    {
        cout<<"error";
        return 1;
    }

    cout<<*p;

    delete p;
}