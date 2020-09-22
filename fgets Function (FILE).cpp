#include<iostream>
using namespace std;

int main() 
{
    FILE *pointer;
    pointer=fopen("test.txt","r");
    char ch[15];

    if(pointer==NULL)
    {
        cout<<"Error";

    }
    else
    {
        while(!feof(pointer))
        {
            fgets(ch,15,pointer);
            cout<<ch;
        }
    }

    fclose(pointer);
    
}