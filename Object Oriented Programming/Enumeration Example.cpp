#include <iostream>
using namespace std;

enum Teams
{
    Barca=0,
    Real=3,
    PSG=5

}Club;

int main()
{
    Club=Real;
   
    cout<<Club<<endl;
    cout<<sizeof(Club);
}