#include<iostream>
using namespace std;

int x;
// Return an int reference
int &f()
{
    return x; // returns a reference to x
}


int main()
{
    
   f()=100; // assign 100 to reference returned by f()

   cout<<x;
}