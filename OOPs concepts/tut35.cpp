// ! Single Inheritance
// In this tutuorial the derived  class is derived publically
// what if derived class is derived privately for that refer to tut35.2.cpp

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

class derived : public base
{
    int data3;

public:
    void process();
    void display();
};

void derived ::process()
{
    data3 = data2 * getdata1();
}

void derived ::display()
{ // Class is being derived publically
    cout << "the value of data1 is: " << getdata1();
    cout << endl;
    cout << "the value of data2 is: " << data2 << endl;
    cout << "the value of data3 is: " << data3 << endl;
}

int main()
{
    derived der;
    der.setdata();
    der.process();
    der.display();
};