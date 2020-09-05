#include<iostream>
using namespace std;
#define SIZE 100

int main()
{
    char ch[SIZE];
    int i;
    int count=0;

    cout<<"Enter a text:";
    gets(ch);

    for(i=0;i<ch[i]!='\0';i++)
    {
        count++;
    }

    cout<<"Length of String is "<<count;
}