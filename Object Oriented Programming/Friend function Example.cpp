#include<iostream>
using namespace std;

class Box
{
    double width;

    public:
    friend void printwidth(Box box);
    void setwidhth(double wd);
};


void printwidth(Box box)
{
    cout<<box.width;
}

void Box:: setwidhth(double wd)
{
    width=wd;
}

int main()
{
    Box ob1;

    ob1.setwidhth(15.00);

    printwidth(ob1);
}
