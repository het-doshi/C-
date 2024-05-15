// Constructor with default argument

#include <iostream>
using namespace std;

class simple
{

    int data1, data2;

public:
    simple(int x, int y = 50)
    {
        data1 = x;
        data2 = y;
    };

    void printdata(void)
    {
        cout << "the value of data 1 is: " << data1 << " and value of data2 is: " << data2 << endl;
    }
};

int main()
{
    simple d1(10, 20);
    d1.printdata();

    simple d2(10);
    d2.printdata();
}
