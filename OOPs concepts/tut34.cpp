// ! Visiblity mode in inheritance

#include<iostream>
using namespace std;

// Base Class
class harry {
    string skill = "chess";
    public:
    int id;
    int salary = 203.0;
    

    harry() {}
    harry(int ide) {
         id = ide;
         cout<<skill<<endl;
    }
};


// syntax of derived class :
/* class {{derived-class-name}} : {{visiblity-mode}} {{base-class-name}}
   {
      class member/methods/etc....
   }
*/

// note:
// 1. Default visibility mode is private
// 2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
// 3. Private Visibility Mode: Public members of the base class become private members of the derived class
// 4. Private members are never inherited


//Derived class
class rohan : public harry {

    public:
    string skill = "gaming";
    rohan(int ide){
        id = ide;
    }

    void getid(){
        cout<<id;
    }
};

int main()
{
    harry e1(1);
    cout << e1.id << endl;
    cout << e1.salary << endl;
    
    rohan e2(2);
    e2.getid(); // invalid use if rohan class derived privately from harry
    cout<<endl;
    cout<<e2.salary<<endl; // invalid use if rohan class derived privately from harry
    cout<<e2.skill<<endl;
    
}
