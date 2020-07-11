#include <iostream>
using namespace std;
int main()
{
    int n1, n2, i, gcd;

    cout<<"Enter two integers: ";
    cin>>n1>>n2;

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    cout<<gcd;

    return 0;
}