#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //writting on a file 
    char arr[100];
    cout<<"Enter your name and age:"; 
    cin.getline(arr,100); 

    ofstream myfile("test.txt");
    
    myfile<<arr; 

    myfile.close();
    cout<<"File write operation run successfull"<<endl;

    //reading on a file 
    char arr1[100];
    ifstream obj ("test.txt");
    obj.getline(arr1,100);
    cout<<"Array content:"<<arr1<<endl;
    cout<<"File read operaton complete"<<endl;
    obj.close();

    //append mode on a file

    char arr2[100];
    cin.getline(arr2,100); 
    
    ofstream ob1 ("test.txt", ios::app);
    
    ob1<<arr2;
    ob1.close();
    cout<<"File append operation performed successfull";



    return 0;
}