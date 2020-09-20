#include<iostream>
#include<string.h>
using namespace std;

int main()
{
  FILE *file;

  file=fopen("Test.txt","w");

  char ch[20]="hello i am jack";
  int length=strlen(ch);

  if(file==NULL)
  {
    cout<<"Allocation error!";
  }
  else
  {
    for(int i=0;i<length;i++)
    {
      fputc(ch[i],file);
    }
  }

  fclose(file);
  


}