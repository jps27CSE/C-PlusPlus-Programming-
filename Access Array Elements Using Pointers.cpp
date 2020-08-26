#include<iostream>
using namespace std;

int main()
{
    int data[5];

    cout<<"Enter the elements:";
    for(int i=0; i<5; i++)
    {
        cin>>*(data+i); 
    }

    cout<<"You entered:"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<*(data+i)<<endl;
    }

}