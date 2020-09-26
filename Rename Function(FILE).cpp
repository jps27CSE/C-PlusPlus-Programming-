#include<iostream>
using namespace std;

int main()
{
    if(rename("oldname.txt","newName.txt")==0)
    {
        cout<<"Rename Successfully";
    }
    else
    {
        cout<<"Rename Failed";
    }
    
}