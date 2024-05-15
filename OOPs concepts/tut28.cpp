// ! Constructor Overloading 
// the concept is same as function overloading

#include <iostream>
using namespace std;

class no
{
public:
    int a, b;

    no(void)
    {
        a = 0;
        b = 0;
    }

    no(int x, int y)
    {
        a = x;
        b = y;
    }

    no(int x)
    {
        a = 10;
        b = 0;
    }

    void printno(void)
    {
        cout << "the value of a is " << a << "  and value of b is " << b << endl;
    }
};

int main()
{

    no c1(10, 20);
    c1.printno();

    no c2(10);
    c2.printno();

    no et;
    et.printno();
}