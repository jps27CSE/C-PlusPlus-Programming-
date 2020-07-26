#include<iostream>
using namespace std;

int recursive(int num)
{
    if(num!=0)
    {
        return num+recursive(num-1);
    }
    else
    {
        return num;
    }
    

}


int main()
{
    int number;

    cout<<"Enter a number:";
    cin>>number;

    cout<<recursive(number);


}