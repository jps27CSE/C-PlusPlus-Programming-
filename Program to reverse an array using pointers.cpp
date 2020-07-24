#include<iostream>
using namespace std;
#define MAX_SIZE 100

void swap(int *num1,int *num2)
{
    int temp;
    
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}

void reverseArray (int array[], int size)
{
   int *pointer1=array;

   int *pointer2=array+size-1;

   while(pointer1<pointer2)
   {
       swap(pointer1,pointer2);
       
       pointer1++;
       
       pointer2--;
   }
}

void printArray (int *array,int size)
{
   int i;

   for(i=0;i<size;i++)
   {
       cout<<*array;

       array++;
   }

}

int main()
{
    int array[MAX_SIZE];

    int i,number;

    cout<<"Enter the number of elements in the array";
    cin>>number;

    int *arrayPointer=array;

    for(i=0;i<number;i++)
    {
        cin>>*(array+i);
    }

    reverseArray(array,number);
    printArray(array,number);


    
}