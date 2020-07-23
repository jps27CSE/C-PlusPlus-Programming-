#include<iostream>
using namespace std;
#define MAX_SIZE 100

void printArray(int *array,int size)
{
   int i;

   for(i=0;i<size;i++)
   {
       cout<<" "<<*(array+i);
   }
}


int main()
{

    int sourceArray[MAX_SIZE],destArray[MAX_SIZE];

    int *source;
    int *dest;
    int *endarray;

    source=sourceArray;
    dest=destArray;

    int num;

    cout<<"Enter array elements: ";
    cin>>num;

    int i;

    for(i=0;i<num;i++)
    {
        cin>>*(sourceArray+i);
    }

    endarray=&sourceArray[num-1];

    cout<<"Before Copying";
    printArray(sourceArray,num);

    cout<<"\nBefore Copying Destination";
    printArray(destArray,num);

    while(source<=endarray)
    {
        *(dest++) = *(source++);
    }

    cout<<"\nAfter Copying Destination";
    printArray(destArray,num);

    

}