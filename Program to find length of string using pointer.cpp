#include<iostream>
using namespace std;
#define SIZE 100

int main()
{
    char ch[SIZE];
    char *str=ch;
    int count=0;

    cout<<"Enter text:";
    gets(ch);

    for(int i=0;*(str++)!='\0';i++)
    {
        count++;
    }

    cout<<"String length is:"<<count;


}