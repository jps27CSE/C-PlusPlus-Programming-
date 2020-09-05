#include<iostream>
using namespace std;

#define SIZE 100

int main()
{
    char ch1[SIZE],ch2[SIZE];
    char *str1=ch1;
    char *str2=ch2;

    gets(ch1);

    while(*(str2++)=*(str1++));

    cout<<"First string:"<<ch1<<endl;
    cout<<"Copy string:"<<ch2<<endl;
}