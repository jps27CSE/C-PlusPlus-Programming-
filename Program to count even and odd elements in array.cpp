#include <iostream>
using namespace std;

#define MAX_SIZE 1000

int main()
{
    int array[MAX_SIZE],i;

    int even=0;
    int odd=0;

    int size; 

    cout<<"Enter the array element size:";
    cin>>size;

    for(i=0; i<size; i++)
    {
        cin>>array[i];
    }

    for(i=0; i<size; i++)
    {
        if(array[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        
    }

    cout<<"The size of Array is:"<<size<<endl;

    cout<<"Array elements are:";
    
    for(i=0; i<size; i++)
    {
        cout<<array[i]<<endl;

    }

    cout<<"Total Even elements:"<<even<<endl;
    cout<<"Total odd elements:"<<odd<<endl;
}