// How to make a function of one class to friend of another class

// Forward Declaration
// it is used when we want to use undefined class

// Declaring the whole class as friend of another class
// we can use it when we need to set multiple function of same class as a friend

#include <iostream>
using namespace std;

class complex;  // forward declaration

class calculator
{

public:
    int SumRealComplex(complex, complex);
    int SumCompComplex(complex, complex);
};


class complex
{
    int a, b;
    // Declare undividually function as a friend
    friend int calculator ::SumRealComplex(complex o1, complex o2);
    // Declare the whole class as a friend
    friend class calculator;
    
public:
    void setnumber(int x, int y)
    {
        a = x;
        b = y;
    }
};

int calculator::SumRealComplex(complex o1, complex o2)
{
    cout << "the sum of real no is " << o1.a + o2.a << endl;
}

int calculator::SumCompComplex(complex o1, complex o2)
{
    cout << "the sum of complex no is " << o1.b + o2.b << "i" << endl;
}

int main()
{
    complex c1, c2;
    c1.setnumber(1, 2);
    c2.setnumber(3, 4);

    calculator c3;
    c3.SumRealComplex(c1, c2);
    c3.SumCompComplex(c1, c2);
}