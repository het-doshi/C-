// ! Single Inheritance
// In this tutuorial the derived  class is derived privately


#include <iostream>
using namespace std;

class base
{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base ::setdata(void)
{
    data1 = 2;
    data2 = 4;
}

int base ::getdata1(void)
{
    return data1;
}

int base ::getdata2(void)
{
    return data2;
}

class derived : private base
{
    int data3;

public:
    void process();
    void display();
};

void derived ::process()
{   
    setdata();
    data3 = data2 * getdata1();
}

void derived ::display()
{ // Class is being derived privately
    cout << "the value of data1 is: " << getdata1();
    cout << endl;
    cout << "the value of data2 is: " << data2 << endl;
    cout << "the value of data3 is: " << data3 << endl;
}

int main()
{
    derived der;

    // der.setdata() this is not accessable directly because by deriving derived class as publically
    // the all public members of base class becomes the private members of derived class. the private members
    // of any class cannot be accesed directly. but it can access through function of the calss.

    der.process();
    der.display();
};