#include<iostream>
using namespace std;

int main()
{
    int number;

    float *data;

    cout<<"enter number of elements:";
    cin>>number;

    data=(float*)calloc(number,sizeof(float));

    if(data==NULL)
    {
        cout<<"Error!";
        return 0;
    }

    for(int i=0;i<number;i++)
    {
        cin>>*(data+i);
    }

    for(int i=0;i<number;i++)
    {
        if(*data<*(data+i))
        {
            *data=*(data+i);
        }
    }

    cout<<"Largest Number is "<<*data;
    
}