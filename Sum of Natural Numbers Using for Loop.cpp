#include <iostream>
using namespace std;
int main() {
    int n, i, sum = 0;

    cout<<"Enter a positive integer: ";
    cin>>n;

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    cout<<"Sum = %d"<<sum;
    return 0;
}