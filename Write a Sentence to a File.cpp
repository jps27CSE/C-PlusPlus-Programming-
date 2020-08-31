#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    FILE *ftpr;

    char sentence[10000];

    ftpr=fopen("program.txt","w");

    if (ftpr==NULL)
    {
        cout<<"Error";
        exit(1);
    }

    cout<<"Enter a sentence:";

    fgets(sentence,sizeof(sentence),stdin);

    fprintf(ftpr,sentence);

    fclose(ftpr);
}