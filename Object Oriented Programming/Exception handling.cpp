#include <iostream>
using namespace std;

int main()
{
    try
    {
        int num1, num2;

        cout << "Enter Number 1:";
        cin >> num1;

        cout << "Enter Number 2:";
        cin >> num2;

        if(num2==0)
        {
            throw -1;
        }

        int result = (double) num1 / num2;

        cout << result << endl;
    }
    catch (...)
    {
        cout<<"Divided Zero is not possible"<<endl;
        cout<<"Please Try Again"<<endl;
    }
}