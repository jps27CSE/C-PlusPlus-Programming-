#include<iostream>
using namespace std;

int main()
{
    int i,t1=0,t2=1,next,n;

    cout<<"Enter terms";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<" "<< t1;

        next=t1+t2;
        t1=t2;
        t2=next;

    }
}