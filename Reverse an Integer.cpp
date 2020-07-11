#include<iostream>
using namespace std;

int main()
{
    int n, rev = 0, remainder;
    cout<<"Enter an integer: ";
    cin>>n;
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
   cout<<"Reversed number = %d"<<rev;
    return 0;
}