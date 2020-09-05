#include<iostream>
#include<cstring>
using namespace std;

#define SIZE 100

int main()
{
    char ch[SIZE];
    
    gets(ch);

    int result=strlen(ch);

    cout<<"String length is:"<<result;


}