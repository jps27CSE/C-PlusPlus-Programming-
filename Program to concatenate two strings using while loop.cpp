#include<iostream>
using namespace std;
#define SIZE 100
int main()
{
    int i,j;

    char s1[SIZE],s2[SIZE];

    gets(s1);
    gets(s2);

    i=0;
    while(s1[i]!='\0')
    {
        i++;
    }
    j=0;
    while(s2[j]!='\0')
    {
        s1[i]=s2[j];
        i++;
        j++;
    }

    s1[i]='\0';

    cout<<s1;
}