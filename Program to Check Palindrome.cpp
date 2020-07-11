#include<iostream>
using namespace std;
int main()
{
    int n,reverseN=0,originalN,remainder;

    cout<<"Enter a Number: ";
    cin>>n;
    originalN=n;
    while(n!=0)
    {
        remainder=n%10;
        reverseN=reverseN*10+remainder;

        n/=10;

    }

    if(originalN==reverseN)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
}