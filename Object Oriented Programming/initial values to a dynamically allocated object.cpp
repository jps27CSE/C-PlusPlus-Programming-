#include<iostream>
using namespace std;

class samp
{
    int a,b;

    public:
    samp(int i,int j)
    {
        a=i;
        b=j;
    }

    int printfunction()
    {
        return a*b; 
    }
};

int main()
{
    samp *p;

    p=new samp(5,2);

    if(!p)
    {
        cout<<"error";
        return 1; 
    }

    cout<<p->printfunction();

    delete p;

}