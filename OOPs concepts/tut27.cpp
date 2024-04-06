// ! Perameteriz Constructor

#include <iostream>
using namespace std;

class sum
{
    int a, b, c;

    public:

    sum(int, int); // Declaration of perameteriz constructor

    void printsum(void)
    {
        cout << "the sum of a and b is " << c << endl;
    }
};

sum::sum(int a, int b)  // ----> This is a parameterized constructor as it takes 2 parameters
{
    c = a + b;
}

int main()
{
    // Implicit call 
    sum c1(10, 20);
    c1.printsum();

    sum c2(20, 20);
    c2.printsum();

    sum c3(30, 20);
    c3.printsum();

    // Explicit call
    sum b = sum(5, 7);
    b.printNumber();
}