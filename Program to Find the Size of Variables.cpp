#include<iostream>
using namespace std;
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

   
    cout<<"Size of int: %ld bytes\n", sizeof(intType);
     cout<<"Size of float: %ld bytes\n", sizeof(floatType);
     cout<<"Size of double: %ld bytes\n", sizeof(doubleType);
     cout<<"Size of char: %ld byte\n", sizeof(charType);
    
    return 0;
}