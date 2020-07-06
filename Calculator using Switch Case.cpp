#include<iostream>
using namespace std;

int main()
{
   char oparator;
   int num1,num2;

   cout<<"Enter which Operation you want to do + - * / : ";
   cin>>oparator;

   cout<<"Enter number 1 :";
   cin>>num1;

   cout<<"Enter number 2 :";
   cin>>num2;

   switch (oparator)
   {
      case '+':
      cout<<num1<<"+"<<num2<<"="<<num1+num2;

      case '-':
      cout<<num1<<"-"<<num2<<"="<<num1-num2;

      case '*':
      cout<<num1<<"*"<<num2<<"="<<num1*num2;

      case '/':
      cout<<num1<<"/"<<num2<<"="<<num1/num2;
      
   }


}