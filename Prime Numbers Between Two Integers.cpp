#include<iostream>
using namespace std;

int primenumber(int n)
{
    int j, flag = 1;
    for (j = 2; j <= n / 2; ++j) {
        if (n % j == 0) {
            flag = 0;
            break;
        }
    }
    return flag;

}

int main()
{
    int num1,num2,i;

    cout<<"enter number 1: ";
    cin>>num1;

    cout<<"enter number 2: ";
    cin>>num2;

    int flag;

    for(i=num1+1;i<num2;i++)
    {
        flag = primenumber(i);

        if (flag == 1)
           cout<<" "<<i;
    }
    



}