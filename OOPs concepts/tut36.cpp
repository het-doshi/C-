// In this tutorial, we will discuss protected access modifiers in C++

// Protected Access Modifiers in C++

/* Protected access modifiers are similar to the private access modifiers but protected access modifiers 
can be accessed in the derived class whereas private access modifiers cannot be accessed in the derived 
class. */

/*A table is shown below which shows the behavior of access modifiers when they are derived 
“public”, “private”, and “protected”.

Access Modifiers 	 |   Public Derivation  |  Private Derivation  |  Protected Derivation
Private members      |   Not Inherited      |  Not Inherited       |  Not Inherited              
Protected members    |   Protected          |  Private             |  Protected                    
Public members       |    Public	        |  Private             |  Protected                   */

#include<iostream>
using namespace std;

class Base{
    protected:
        int a = 10; 
    private:
        int b;

};

class Derived: protected Base{
   public:
   int geta(){
     cout<<a;
   }
};

int main(){
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    // but a can be access by member function of class
    d.geta();
}




