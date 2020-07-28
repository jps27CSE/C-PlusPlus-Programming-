#include<iostream>
using namespace std;
int main()
{
     int a[10][10], transpose[10][10], r, c, i, j;
    cin>>r>>c;
   
    printf("\nEnter matrix elements:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
             cin>>a[i][j];
        }

    
    printf("\nEntered matrix: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
           cout<<a[i][j]<<" ";
            if (j == c - 1)
                cout<<"\n";
        }

   
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            transpose[j][i] = a[i][j];
        }

    
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; ++i)
        for (j = 0; j < r; ++j) {
           cout<<transpose[i][j]<<" ";
            if (j == r - 1)
               cout<<"\n";
        }

}