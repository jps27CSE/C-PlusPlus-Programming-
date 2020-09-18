#include<iostream>
using namespace std;

#define MAX_SIZE 1000

int main()
{
    int array[MAX_SIZE],i;

    int positive=0;
    int negative=0;

    int size;

    cout<<"Enter the element size of the array:";
    cin>>size;

    for(i=0; i<size; i++)
    {
        cin>>array[i];
    }

    for(i=0; i<size; i++)
    {
        if(array[i]<0)
        {
            negative++;
        }

        else
        {
            positive++;
        }
    }

    cout<<"Positive Numbers:"<<positive<<endl;
    cout<<"Negative Numbers:"<<negative<<endl;

}