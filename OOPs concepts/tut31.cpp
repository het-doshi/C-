// Copy constructor !

#include<iostream>
using namespace std;

class number{
    int a;

    public:

    number(){
        a = 0;
    }
    
    number(int x){
        a = x;
    }

    number(number &obj){
        cout<<"the copy constructor is called !!"<<endl;
        a = obj.a;
    }

    void display(){
        cout<<"the value of a is: "<<a<<endl;
    }
};

int main(){

 number c1(34),c3;
    
    c1.display();
    
    // z1 should exactly resemble z  or x or y
    // Copy constructor is invoked
    number c2(c1); 
    c2.display();


    // Copy constructor is not invoked here because object is already intialized
    // When no copy constructor is found, compiler supplies its own copy constructor
    c3 = c1;
    c3.display();
}

