#include<iostream>
using namespace std;
#define MAX_SIZE 100

int main()
{
    int array[MAX_SIZE];

    int i,number;

    cout<<"Enter the number of elements in the array:";
    cin>>number;

    for(i=0;i<number;i++)
    {
        cin>>array[i];
    }

    for(i=1;i<number;i++)
    {
        if(array[0]<array[i])
        {
            array[0]=array[i];
        }
    }

    cout<<"largest number is "<<array[0];
}