// concept of string
// Replace the string characters using replace function

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "hello";
    string s2 = "fire";
    string s1m = " ";
    string s2m = " ";
    string a;
    string b;

    s1m = s1;
    s2m = s2;

    a = s1.at(0); // to store the first character of s1 string in a (we can store any charater of string)
    b = s2.at(0); // to store the first character of s2 string in b

    // syntax of replace function: 
    // string.replace(at which postion,how many characters,part need to inserted instead of replace);

    s1m.replace(1, 4, b);
    s2m.replace(0, 1, a);

    //  for eg here:
    // 1 is defined for from which postion it need to replace (in string character are count from 0 index 1 it comes at 2 postion)
    // 4 is defined for how many character of string to be replaced
    // b is for which part need to inserted instead of replace

    cout << "before replace " << s1 << endl;
    cout << "after replace " << s1m << endl;
    cout << endl;
    cout << "before replace " << s2 << endl;
    cout << "after replace " << s2m << endl;
}
