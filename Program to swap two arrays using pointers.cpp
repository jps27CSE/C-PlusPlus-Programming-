#include<iostream>
using namespace std;
#define MAX_SIZE 100
void printArray(int *(array),int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        cout<<*array<<" ";
       
        array++;
    }
    cout<<endl;
    
}


int main()
{

   int firstArray[MAX_SIZE],secondArray[MAX_SIZE];

   int temp=0,i;

   int *first=firstArray;
   int *second=secondArray;

   int number;

   cout<<"Enter array elements number: ";
   cin>>number;

   for(i=0;i<number;i++)
   {
       cin>>*(firstArray+i);
   }

   printArray(firstArray,number);

   for(i=0;i<number;i++)
   {
       temp=*(firstArray+i);
       *(firstArray+i)=*(secondArray+i);
       *(secondArray+i)=temp;
   }

   printArray(secondArray,number);




}