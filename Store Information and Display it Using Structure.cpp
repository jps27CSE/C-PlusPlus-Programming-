#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int roll;
    float mark;
}s;

int main()
{
    cout<<"Ente name:";
    fgets(s.name,sizeof(s.name),stdin);

    cout<<"Enter roll:";
    cin>>s.roll;

    cout<<"Enter marks:";
    cin>>s.mark;

    cout<<"Displaying:"<<endl;

    cout<<s.name<<endl;
    cout<<s.roll<<endl;
    cout<<s.mark<<endl;


}