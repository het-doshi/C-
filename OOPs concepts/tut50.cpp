// ! virtual function
/* In derived pointer if we create the pointer of base class which points the object of derived class. 
but we cannot access the class members of derived class if we run the display function it will execeute 
the display function of base class. but by making virtual function we create the pointer of base class 
which points the object of derived class we are able to access the function of derived class with the 
pointer of base class */

#include<iostream>
using namespace std;

class base{
    public:
    int base = 10;
    virtual void display(){
        cout<<"displaying the base class: "<<base<<endl;
    }
};

class derived : public base{
    public:
    int derived = 20;
    void display(){
        cout<<"displaying the derived class: "<<base<<endl;
        cout<<"displaying the derived class: "<<derived<<endl;
    }
};

int main(){
    
    base *base_class_pointer;
    base b1;

    derived d1;
    
    base_class_pointer = &d1; //  base class pointer Pointing to derived class object
    base_class_pointer->display(); // this will run the display function of derived class

}
