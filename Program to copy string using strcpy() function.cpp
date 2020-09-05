#include<iostream>
#include<cstring>
using namespace std;

#define SIZE 100

int main()
{
   char ch1[SIZE];
   char ch2[SIZE];

   gets(ch1);

   strcpy(ch2,ch1);

   cout<<"first string:"<<ch1<<endl;
   cout<<"copy string:"<<ch2<<endl;
}