// friend function !
/*It is used when a outside function want to acees the private member of particular class but complier
 throws an error. by declaring the outside function as a friend function in that particular class
 the outside function can access the private memebers of that class.*/

// Syntax: friend className functionName (func_Argument1,func_Argument2....);

// let's do that

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setnumber(int x, int y)
    {
        a = x;
        b = y;
    }

    void printcomplex()
    {
        cout << "complex no is " << a << " + " << b << "i" << endl;
    }

    /* Below line means that non member - sumComplex funtion is allowed to do anything with
     my private parts (members)*/
    friend complex sumComplex(complex o1, complex o2);
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
     o3.setnumber((o1.a + o2.a), (o1.b+o2.b));
     o3.printcomplex();
}

int main()
{

    complex c1, c2, sum;

    c1.setnumber(1, 2);
    c1.printcomplex();

    c2.setnumber(3, 4);
    c2.printcomplex();

    sum = sumComplex(c1,c2);
    
}

/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class,
it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.
*/
