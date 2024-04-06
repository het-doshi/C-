// a function use the vlaue of two diffrent class as a argument for swap the data

#include <iostream>
using namespace std;

class b;

class a
{
    friend void swap(a &, b &);

    int data;

public:
    void setvalue(int x)
    {
        data = x;
    }

    void displayvalue()
    {
        cout << data;
    }
};

class b
{
    friend void swap(a &, b &);

    int data;

public:
    void setvalue(int a)
    {
        data = a;
    }

    void displayvalue()
    {
        cout << data;
    }
};

void swap(a &c, b &d)
{
    int temp = c.data;
    c.data = d.data;
    d.data = temp;
}

int main()
{

    a c1;
    c1.setvalue(10);

    b c2;
    c2.setvalue(20);

    cout << "values before swap c1: ";
    c1.displayvalue();
    cout << endl;
    cout << "values before swap c1: ";
    c2.displayvalue();
    cout << endl;

    swap(c1, c2);

    cout << "values after swap c1: ";
    c1.displayvalue();
    cout << endl;
    cout << "values after swap c2: ";
    c2.displayvalue();
    cout << endl;
}
