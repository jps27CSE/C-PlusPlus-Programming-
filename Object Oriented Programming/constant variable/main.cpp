#include <iostream>

using namespace std;

int main()
{
    int x=10;
    x=20;
    cout<<x<<endl;

    const int y=10; // we can not change x value while using constant 

    //x=20; // it will give error

    cout<<y;
    return 0;
}
