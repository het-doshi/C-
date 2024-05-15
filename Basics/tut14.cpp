#include <iostream>
using namespace std;

// inline functions
// by creating inline function the compiler replaces the calling function to function code in compile time
// so it makes the program fast
// do not use the inline function
// 1 when the recurssion is occures
// 2 when the static variables are used in function
// 3 not used in loop, switch it's not recomended

inline int product(int a, int b) // inline function
{
    return a * b;
}

inline int add(int f, int g) // eg of using inline function with static variable
{
    static int c = 0; // this excecutes only once
    c = c + 1;        // next time when this function is run , the vaalue of c will be retained
    cout << "the value of c this time will be " << c << endl;
    return f + g + c;
}


// Eg of default argument
mul(int k, const int l = 10) // here the l is set as default argument 
{
    return k * l;
}

int main()
{
    // eg  of using inline function
    int x, y;
    cout << "enter the first no" << endl;
    cin >> x;
    cout << "enter the second no" << endl;
    cin >> y;
    cout << "the product x and y is " << product(x, y) << endl;
    cout << endl;

    // eg of using inline function with static variable
    cout << "eg of using inline function with static variable" << endl;
    cout << endl;
    int f, g;
    cout << "enter the first no" << endl;
    cin >> f;
    cout << "enter the second no" << endl;
    cin >> g;
    cout << "the sum of f and g is " << add(f, g) << endl;
    cout << "the sum of f and g is " << add(f, g) << endl;
    cout << "the sum of f and g is " << add(f, g) << endl;
    cout << endl;

    // Default arguments
    /* if we dont pass argument at time of calling the function
    default argument in function will be set to that perameter*/
    // always defined the default argument after the compulsary argument
    // it should be always on right side

    //  let say default value of int k is 10 in this mul function

    cout << "eg of default argument" << endl;
    cout << endl;

    // here we only passing one argument k, l is default argument which value is 10
    cout << "multiplication of k and l with default argument is " << mul(10) << endl;

    // here we overwrite the default argument // here we passes the two values
    cout << "multiplication of k and l by overwrite the default argument is " << mul(10, 8) << endl;
}
