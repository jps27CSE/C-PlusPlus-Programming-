#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter a number";
    cin>>num;


    int i;

    for(i=1;i<=10;i++)
    {
        cout<<num<<"X"<<i<<"="<<num*i<<endl;
    }
}