#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    FILE *tmp;

    tmp=tmpfile();
    char data[]="hello jack";
    int length=strlen(data);
    int counter=-1;

    if(tmp!=NULL)
    {
        puts("temp file created\n");

        while(++counter<length)
        {
            fputc(data[counter],tmp);
        }
        
        rewind(tmp);
        while(!feof(tmp))
        {

            putchar(fgetc(tmp));

        }
    }
    else
    {
        puts("temp file not created");
    }
    
}