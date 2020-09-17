#include <iostream>
#include <limits.h>
using namespace std;

#define MAX_SIZE 1000

int main()
{
    int array[MAX_SIZE], i, size;

    int max1, max2;

    max1 = max2 = INT_MIN;

    cout << "Enter the array elements:";
    cin >> size;

    for (i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    for (i = 0; i < size; i++)
    {
        if (array[i] > max1)
        {
            max2 = max1;
            max1 = array[i];
        }

        else if (array[i] > max2 && array[i]<max1)
            {
                max2 = array[i];
            }
    }

    cout << "First Largest Number is:" << max1 << endl;
    cout << "Second Largest Number is:" << max2 << endl;
}
