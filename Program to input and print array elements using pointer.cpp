#include <iostream>

using namespace std;

#define MAX_SIZE 100 

int main()
{
    int arr[MAX_SIZE];
    int N, i;

    int *ptr=arr;

    cout<<"Enter size of array: ";
    cin>>N;

    cout<<"Enter elements in array:\n";
    for (i = 0; i < N; i++)
    {
       
       cout<<*(arr+i);

    
       ptr++;
    }

   
    ptr = arr;

    printf("Array elements: ");
    for (i = 0; i < N; i++)
    {
       
        printf("%d, ", *ptr);

       
        ptr++;
    }

    return 0;
}