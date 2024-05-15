// open the file using open() function

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    // Writing operation
    ofstream out;
    out.open("tut54.txt");
    out << "hello this is me";
    out.close();

    // Reading operation
    ifstream in;
    in.open("tut55.txt");
    string st;

    // in>>st;  this is use to read word from file
    // cout<<st;

    // let's read the whole file tut55.txt using eof() and while loop

    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }

    in.close();
}