#include<iostream>
using namespace std;

template<typename myType>void display(myType x)
{
    cout<<"You have passed "<<x<<endl;
}

int main()
{

    display(10);
    display(1.002);
    display("jack");

    return 0;

}