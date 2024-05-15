// file I/O in C++: Reading and Writing Files

// These are some useful classes for working with files in C++ :
// fstream BaseClass
// ifstream --> derived from fstream BaseClass
// ofstream --> derived from fstream BaseClass

// In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
// 1. Using the constructor
// 2. Using the member function open() of the class

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // // writing operation:
    // //  Opening files using constructor and writing it

    string s1 = "hello world";
    ofstream out("tut53sample.txt"); // this will open the file
    out << s1; 
    out.close();

    // reading operation:
   // Opening files using constructor and reading it

    string s2;
    ifstream in("tut53sample.txt"); // this will open the file
    in>>s2;
    cout<<s2;
    getline(in,s2); // this function will read line of file
    cout<<s2;
    in.close();
}