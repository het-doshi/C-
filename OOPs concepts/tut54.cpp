#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    // writting operation
    ofstream wt("tut54.txt"); // this is the way to connect to file 
    string name;
    cout<<"enter the name:";
    cin>>name;
    wt<<name;
    wt.close();
   
    // reading operation
    ifstream rd("tut54.txt");
    string sname;
    rd>>sname;
    cout<<"my name is: "<<sname;
    rd.close();

}

