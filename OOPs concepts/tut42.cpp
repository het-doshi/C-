// ! Calling the base class Constructor in derived class

/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
}; */

#include <iostream>
using namespace std;

class base1
{
    int data1;

 public:
    base1(int i)
    {
        data1 = i;
        cout<<"the base1 constructor is called"<<endl;
    }

    void printdatabase1()
    {
        cout << "the value of data1 is: " << data1 << endl;
    }
};

class base2
{
    int data2;

 public:
    base2(int i)
    {
        data2 = i;
        cout<<"the base2 constructor is called"<<endl;
    }

    void printdatabase2()
    {
        cout << "the value of data2 is: " << data2 << endl;
    }
};

class derived : public base1, public base2
{

    int derived1;
    int derived2; 

 public:

 // Below there is special syntax for calling base class constructor in derived class in c++  

    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;

        cout<<"the derived constructor is called"<<endl;
    }

    void printDerivedData()
    {
        cout << "the value of derived1 is: " << derived1 << endl;
        cout << "the value of derived2 is: " << derived2 << endl;
    }
};

int main(){
    derived d1(1, 2, 3, 4);
    d1.printdatabase1();
    d1.printdatabase2();
    d1.printDerivedData();
}