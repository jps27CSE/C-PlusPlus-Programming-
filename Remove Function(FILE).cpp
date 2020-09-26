#include<iostream>
using namespace std;

int main()
{
    int status;

    status=remove("test.txt");

    cout<<status<<endl;

    if(status==0)
    {
        puts("file deleted successfully");
    }
    else
    {
        puts("error");
    }
    
}