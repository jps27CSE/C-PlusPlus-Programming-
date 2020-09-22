#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    FILE *pointer;

    pointer=fopen("test.txt","a");

    char name[25];
    int age;

    cout<<"Enter your name:";
    cin>>name;

    cout<<"Enter your age:";
    cin>>age;

    if(pointer==NULL)
    {
        cout<<"error!";
        
    }
    else
    {
        fprintf(pointer,"%s\t %d \n",name,age);
        cout<<"Data write successfully";

        fclose(pointer);
    }
    

}