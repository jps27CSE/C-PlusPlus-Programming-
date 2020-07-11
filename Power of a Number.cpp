#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int base,exp,result;

    cout<<"Enter Base: ";
    cin>>base;

    cout<<"Enter Power: ";
    cin>>exp;

    result=pow(base,exp);

    cout<<result;
}