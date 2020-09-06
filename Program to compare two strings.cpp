#include<iostream>
using namespace std;

int compare(char *s1,char *s2)
{
   int i=0;

   while(s1[i]==s2[i])
   {
       if(s1[i]=='\0'&&s2[i]=='\0')
       break;
       
       i++;
   }
}


int main()
{
  char s1[100],s2[100];

  gets(s1);
  gets(s2);

  int result=compare(s1,s2);

  if(result==0)
  {
      cout<<"String is equal";
  }
  
  else if(result<0)
  {
      cout<<"First string is lexicographically smaller than second.";
  }

  else
  {
      cout<<"First string is lexicographically greater than second.";
  }
  
  
}