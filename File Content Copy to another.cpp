#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream f_out ("test",ios::out);
    ofstream f_output("output",ios::out);
    char str[20],line[50],ch;

    int x,y,i; 

    if(!f_out.is_open() || !f_output.is_open())
    cout<<"error"<<endl;

    for(i=0;i<5;i++)
    {
        cout<<"Enter name: ";
        cin.getline(str,20);
        cin>>x>>y;
        getchar();
        f_out<<str<<" "<<x<<" "<<y<<endl;
    }

    f_out.close();

    ifstream f_in("test",ios::in);
    if(!f_in.is_open())
    cout<<"error"<<endl;

    while(f_in.get(ch))
    {
        cout<<ch;
        f_output<<ch;
    }

    f_in.close();
    f_output.close();
}