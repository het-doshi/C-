// a function use the vlaue of two diffrent class as a argument for addition of data

#include <iostream>
using namespace std;

class y; // forward declaration

class x
{
    int data;
public:
    void setvalue(int value)
    {
        data = value;
    }

    friend void sum(x o1, y o2);
};

class y
{
    int data;

public:
    void setvalue(int value1)
    {
        data = value1;
    }

    friend void sum(x o1, y o2);
};

void sum(x o1, y o2)
{
    cout << "the sum of data is: " << o1.data + o2.data;
}

int main()
{
    x a;
    a.setvalue(20);

    y b;
    b.setvalue(4);

    sum(a, b);
}