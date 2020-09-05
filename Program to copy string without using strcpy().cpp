#include<iostream>
using namespace std;

#define SIZE 100

int main()
{
    char text1[SIZE];
    char text2[SIZE];

    gets(text1);

    int i;

    for(i=0;text1[i]!='\0';i++)
    {
        text2[i]=text1[i];
    }

    text2[i]='\0';

    cout<<"Real String:"<<text1<<endl;
    cout<<"Copy String:"<<text2<<endl;
    cout<<"Copy String length:"<<i;


}