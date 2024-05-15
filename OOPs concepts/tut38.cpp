// ! Multiple Inheritance

#include<iostream>
using namespace std;

/* syntax of multiple inheritance

class derived : Visiblity-mode BaseClass1-name, Visiblity-mode BaseClass2-name.....{
    body of derived class
};

we can use n of multiple base classes to create one class */

class base1{
    protected:
      int base1;

    public:

    void setbase1(int a){
        base1 = a;
    }
};

class base2{
    protected:
      int base2;

    public:

    void setbase2(int a){
        base2 = a;
    }
};

class base3{
    protected:
      int base3;

    public:

    void setbase3(int a){
        base3 = a;
    }
};

class derived : public base1, public base2, public base3{
    public:

    void show(){
        cout<<"the value of base1 is :"<<base1<<endl;
        cout<<"the value of base2 is :"<<base2<<endl;
        cout<<"the value of base3 is :"<<base3<<endl;
        cout<<"the sum of values of base1,base2 and base3 is: "<<base1+base2+base3<<endl;
    }
};

// The inherited derived base class will look like this
/* 
 class derived {
    Data Members:
    base1 ---> protected
    base2 ---> protected
    base3 ---> protected

    Member Functions:
    setbase1 ---> public
    setbase2 ---> public
    setbase3 ---> public
    show ---> public
 }
*/

int main(){

    derived d1;
    d1.setbase1(10);
    d1.setbase2(10);
    d1.setbase3(10);
    d1.show();
}
