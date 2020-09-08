#include<iostream>
using namespace std;

class samp
{
    int a,b;

    public:
    void set_data(int x,int y)
    {
        a=x;
        b=y;

    }

    int print_data()
    {
        return a*b;
    }
};

int main()
{
    samp *p;

    p=new samp[10];

    if(!p)
    {
        cout<<"error";
        return 1;
    }
    
    int i;
    for(i=0;i<10;i++)
    {
        p[i].set_data(i,i);
    }

    for(i=0;i<10;i++)
    {
        cout<<"Product["<<i<<"]:";
        cout<<p[i].print_data()<<endl;

    }

    delete []p;

}