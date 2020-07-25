#include<iostream>
using namespace std;
#define MAX_SIZE 100
void MinMax(int array[],int length,int *min,int *max)
{
    int i;

    *min=*max=array[0];

    for(i=1;i<length;i++)
    {
        if(array[i]>*max)
        {
            *max=array[i];
        }
        if(array[i]<*min)
        {
            *min=array[i];
        }
    }

}


int main()
{
    int array[MAX_SIZE];

    int len;

    cin>>len;

    for(int i=0;i<len;i++)
    {
        cin>>array[i];
    }

    int min,max;
    
    MinMax(array,len,&min,&max);

    cout<<"Min number "<<min<<" Max number "<<max;

}