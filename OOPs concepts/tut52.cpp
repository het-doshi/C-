/* 

!Abstract Base Class in C++ :
Abstract base class is a class that has at least one pure virtual function in its body. 
The classes which are inheriting the base class must need to override the virtual function of the abstract 
class otherwise compiler will throw an error.

! Pure Virtual Functions in C++ :
Pure virtual function is a function that doesn’t perform any operation and the function is declared by 
assigning the value 0 to it. Pure virtual functions are declared in abstract classes. 

*/

#include<iostream>
using namespace std;

class base {
    protected:
    string name;

    public:

    void SetName(){
        cout<<"What is your name"<<endl;
        cin>>name;
    }

  virtual void greet() = 0; // do nothing function ---> pure virtual function
};

class morning : public base {
    public:
    void greet() {
          cout<<"Good Morning "<<name<<endl;
          cout<<endl;
    }
};

/* if you connot create greet function in all derived classes which are derived from abstract class compiler 
will throw an error because it is nessecary to built greet function in every class because greet is pure 
virtual function */

class afternoon : public base {
    public:
    void greet() {
          cout<<"Good Afternoon "<<name<<endl; 
          cout<<endl;
    }
};

int main(){

    morning h1;
    afternoon h2;

    h1.SetName();
    h1.greet();

    h2.SetName();
    h2.greet();
}