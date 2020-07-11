#include<iostream>
using namespace std;
int main() {
      double first, second, temp;
      cout<<"Enter first number: ";
      cin>>first;
      cout<<"Enter second number: ";
      cin>>second;

      
      temp = first;

    
      first = second;


      second = temp;

      cout<<"\nAfter swapping, firstNumber = %.2lf\n"<<first;
      cout<<"After swapping, secondNumber = %.2lf"<<second;
      return 0;
}