#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str [1000],ch;

    int count=0;
    
    cout<<"Enter the string:";
    fgets(str,sizeof(str),stdin);

    cout<<"Enter the letter you want to search:";
    cin>>ch;

    for(int i=0;i<strlen(str);i++)
    {
        if(ch==str[i])
        {
            count++;
        }
    }

    cout<<"Frequency of "<<ch<<"="<<count;

}