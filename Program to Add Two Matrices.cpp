#include<iostream>
using namespace std;
#define MAX_SIZE 100
int main()
{
    int array1[MAX_SIZE][MAX_SIZE],array2[MAX_SIZE][MAX_SIZE];

    int sum[MAX_SIZE][MAX_SIZE];

    int rows,colums;

    int i,j;

    cout<<"Enter the number of rows:";
    cin>>rows;

    cout<<"Enter the number of colums:";
    cin>>colums;

    cout<<"for first array:"<<endl;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<colums;j++)
        {   
            cin>>array1[i][j];
        }

    }

    cout<<"for second array:"<<endl;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<colums;j++)
        {
            cin>>array2[i][j];
        }
    }

    cout<<"sum of the arrays:"<<endl;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<colums;j++)
        {
            sum[i][j]=array1[i][j]+array2[i][j];
        }
    }

    for(i=0;i<rows;i++)
    {
        for(j=0;j<colums;j++)
        {
            cout<<" "<<sum[i][j];
            if(j==colums-1)
            {
                cout<<"\n"<<endl;
            }
        }
    }

}