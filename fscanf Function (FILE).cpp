#include<iostream>
using namespace std;

int main()
{
    FILE *pointer;
    char ch[10];

    pointer=fopen("test.txt","r");

    if(pointer==NULL)
    {
        cout<<"Error";
    }
    else
    {
        fscanf(pointer,"%s",ch);
        cout<<ch;
    }

    fclose(pointer);
    
}