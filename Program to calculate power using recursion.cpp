#include<iostream>
using namespace std;

int powerfunction(int base,int pow)
{

    if(pow!=0)
    {
        return (base*powerfunction(base,pow-1));
    }

    else
    {
        return 1;
    }
    

}

int main()
{
    int base , power;
    
    cout<<"enter base:";
    cin>>base;

    cout<<"enter power:";
    cin>>power;

    int result=powerfunction(base,power);

    cout<<result;


}