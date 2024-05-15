// Pointers in derived class

#include<iostream>
using namespace std;

class base{
    public:
    int base;
    void display(){
        cout<<"displaying the base class: "<<base<<endl;
    }
};

class derived : public base{
    public:
    int derived;
    void display(){
        cout<<"displaying the derived class: "<<base<<endl;
        cout<<"displaying the derived class: "<<derived<<endl;
    }
};

int main(){

    // creeating the pointer of base class object
    base b1;
    // base *base_pointer;
    base *base_pointer = &b1;
    base_pointer->base = 40;
    base_pointer->display();
    // base_pointer->derived = 50; Will throw an error because the pointer of base cannot access the members 
   // of derived class

   // creeating the pointer of derived class object
    derived d1;
    base_pointer = &d1; //  base class pointer Pointing to derived class object
    derived *derived_pointer;
    derived_pointer->base = 10; // this will not throw an error because the pointer of base can access the 
    // members of derived class
    derived_pointer->derived = 80;
    derived_pointer->display(); 
}