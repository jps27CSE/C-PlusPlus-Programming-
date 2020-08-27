#include<iostream>
using namespace std;

class myclass
{
    int a;

    public:
    myclass(int x);
    int get();
};

myclass:: myclass(int x)
{
    a=x;
}

int myclass::get()
{
    return a;
}

int main()
{
    myclass ob(120);
    myclass *p;

    p=&ob;

    cout<<"Value using Object:"<<ob.get()<<endl;
    cout<<"Value using Pointer:"<<p->get()<<endl;
}