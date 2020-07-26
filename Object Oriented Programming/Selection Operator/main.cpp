#include <iostream>
#include "firstclass.h"

using namespace std;

int main()
{
    firstclass ob;
    firstclass *p;

    p=&ob;

    p->display();
    return 0;
}
