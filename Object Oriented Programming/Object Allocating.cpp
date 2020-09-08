#include<iostream>
using namespace std;

class samp
{
    int a,b;

    public:
    void set_data(int i,int j)
    {
        a=i;
        b=j;

    }

    int getproducts()
    {
        return a*b;
    }
};

int main()
{
    samp *p;

    p=new samp;

    if(!p)
    {
        cout<<"error";
        return 1;
    }

    p->set_data(4,5);

    cout<<p->getproducts();
}