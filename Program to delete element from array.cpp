#include <iostream>
using namespace std;

#define SIZE 1000

int main()
{
    int array[SIZE],i;

    int size;
    cout<<"Enter the array size:";
    cin>>size;

    for(i=0; i<size; i++)
    {
        cin>>array[i];
    }

    cout<<"Enter the position you want to delete:";
    int position;
    cin>>position;


    if(position<0 || position>size)
    {
        cout<<"Invalid position";
    }

    else
    {
        for(i=position; i<size;i++)
        {
            array[i]=array[i+1];
        }

    }

    for(i=0; i<size-1; i++)
    {
      cout<<array[i]<<" ";
    }


}