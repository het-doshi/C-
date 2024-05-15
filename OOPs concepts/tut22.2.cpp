// passing the objects in function as argument

#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void comlpex_no_of_object(complex o1)
    {
        a = o1.a;
        b = o1.b;
        cout << " complex no is " << a << " + " << b << "i" << endl;
    }

    void final(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printsum()
    {
        cout << "sum of two complex no is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;

    c1.setdata(1, 2);
    c1.comlpex_no_of_object(c1);

    c2.setdata(3, 4);
    c2.comlpex_no_of_object(c2);

    c3.final(c1, c2);
    c3.printsum();
}