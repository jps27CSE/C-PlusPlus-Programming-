#include<iostream>
using namespace std;
#define MAX_SIZE 100


int main()
{
   int number,array[MAX_SIZE]; 

   cout<<"Enter the number of array elements:";
   cin>>number;

   for(int i=0;i<number;i++)
   {
       cin>>array[i];
   }

   int sum=0;

   for(int i=0;i<number;i++)
   {
       sum+=array[i];
   }

   int average=sum/number;

   cout<<"Sum of the array:"<<sum<<endl;

   cout<<"Average of the array:"<<average<<endl;
}