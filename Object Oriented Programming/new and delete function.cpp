#include<iostream>
using namespace std;

int main()
{
    int *p;

    p=new int; // allocate room for an integer

    if(!p)
    {
        cout<<"error";
        return 1;
    }

    *p=100;

    cout<<*p;

    delete p; //release memory 

}