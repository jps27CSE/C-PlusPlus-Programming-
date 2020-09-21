#include <iostream>
using namespace std;

int main()
{
    FILE *pointer;

    char ch[25];

    pointer=fopen("myFile.txt","w");

    if(!pointer)
    {
        cout<<"Allocation error";
    }
    else
    {
        cout<<"Enter a string:";
        gets(ch);
        fputs(ch,pointer);
        cout<<"Write successfull";

        fclose(pointer);
    }
    
}