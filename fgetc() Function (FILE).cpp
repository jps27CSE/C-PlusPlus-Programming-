#include<iostream>
using namespace std;

int main() 
{
    FILE *pointer;
    pointer=fopen("test.txt","r");
    char ch;

    if(pointer==NULL)
    {
        cout<<"Error";

    }
    else
    {
        while(!feof(pointer))
        {
            ch=fgetc(pointer);
            cout<<ch;

        }
    }

    fclose(pointer);
    
}