#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v;
    int i; 

    cout<<"Size= "<<v.size()<<endl;
    
    for(i=0;i<10;i++)
    {
        v.push_back(i);
    }

    cout<<"Size now= "<<v.size()<<endl;

    cout<<"Current contents :\n";
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;

    for(i=0;i<10;i++)
    {
        v.push_back(i+10);
    }

    cout<<"Size now= "<<v.size()<<endl;

    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
        cout<<endl;
    }


    for(i=0;i<v.size();i++)
    {
        v[i]=v[i]+v[i];
    }

    cout<<"Current Contents:\n";
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
        cout<<endl;
    }

}