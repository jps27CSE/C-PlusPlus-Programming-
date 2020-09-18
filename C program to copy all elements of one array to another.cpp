#include<iostream>
using namespace std;

#define MAX_SIZE 1000

int main()
{

    int array1[MAX_SIZE],array2[MAX_SIZE];

    int i;

    int size;

    cout<<"Enter the size of the array";
    cin>>size;

    for(i=0;i<size;i++)
    {
        cin>>array1[i];
    }

    for(i=0;i<size;i++)
    {
        array2[i]=array1[i];
    }
    
    cout<<"Array1"<<endl;
    
    for(i=0;i<size;i++)
    {
        cout<<array1[i]<<endl;
    }

    cout<<"Array2:"<<endl;

    for(i=0;i<size;i++)
    {
        cout<<array2[i]<<endl;
    }

}