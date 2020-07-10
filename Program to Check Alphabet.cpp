#include<iostream>
using namespace std;

int main()
{
     char ch;

     cout<<"Enter a Charecter: ";
     cin>>ch;

     if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
     {
         cout<<"Alphabet";
     }
     else
     {
         cout<<"Not Alphabet";
     }

     
}