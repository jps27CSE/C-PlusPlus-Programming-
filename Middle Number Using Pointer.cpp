#include<iostream>
using namespace std;
#define MAX_SIZE 100
int *findmid(int array[], int size)
{

    return &array[size/2];

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

    int *mid=findmid(array,len);

    cout<<*mid;

}