// ! Constructor
/* A constructor is a special member function with the same name as the class. The constructor doesn’t
 have a return type. Constructors are used to initialize the objects of its class. Constructors are
 automatically invoked whenever an object is created. */

#include <iostream>
using namespace std;

class het
{
    int a, b;

  public:
    het(void); // Declaration of constructor

    void printvlaue(void)
    {
        cout << "the value of a is " << a << " and value of b is " << b << endl;
    }
};

het::het(void) // This is a default constructor as it takes no parameters
{
    a = 10;
    b = 20;
}

int main()
{

    // when object is created it automatically intialized the value to object by default constructor
    het c1, c2, c3;

    c1.printvlaue();
    c2.printvlaue();
    c3.printvlaue();
}


// Important Characteristics of Constructors in C++
// 1. A constructor should be declared in the public section of the class
// 2. They are automatically invoked whenever the object is created
// 3. They cannot return values and do not have return types
// 4. It can have default arguments
// 5. We cannot refer to constructor address