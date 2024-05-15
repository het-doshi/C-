// example of virtual function in detail
// rules of virtual function

#include <iostream>
using namespace std;

class developer
{
protected:
    string name;
    string skill;

public:

 developer(string n , string sk)
    {
        name = n;
        skill = sk;
    }

    virtual void display()
    {
        cout << "base class display"<<endl;
    }
};

class WebDevloper : public developer  {

 float sallary;
 float office_hour;

public: 

 WebDevloper(string n , string sk, float s, float oh) : developer(n,sk){
    sallary = s;
    office_hour = oh;
 }

 void display(){
    cout<<"my name is "<<name<<" I am web developer"<<endl;
    cout<<"skill: "<<skill<<endl;
    cout<<"sallary: "<<sallary<<endl;
    cout<<"office hours: "<<office_hour<<endl;
    cout<<endl;
 }

};


class AndroidDevloper : public developer  {

 float sallary;
 float office_hour;

public:

    AndroidDevloper(string n , string sk, float s, float oh) : developer(n,sk){
    sallary = s;
    office_hour = oh;
 }

    //  void display(){
    //     cout<<"my name is "<<name<<" I am Android developer"<<endl;
    //     cout<<"skill: "<<skill<<endl;
    //     cout<<"sallary: "<<sallary<<endl;
    //     cout<<"office hours: "<<office_hour<<endl;
    //     cout<<endl;
    //  }

};

int main(){

    string name, skill;
    float offhr, sallary;

    // creating object of webdevloper
    name = "het";
    skill = "bootstrap";
    offhr = 4;
    sallary = 40000;
    WebDevloper het(name,skill,sallary,offhr);
    // het.display();

    // creating object of AndroidDevloper
    name = "nihal";
    skill = "android studio";
    offhr = 7;
    sallary = 45000;
    AndroidDevloper nihal(name,skill,sallary,offhr);
    // nihal.display();
    
    // let's display this information by creating pointers of object:
    developer *d[2];
    d[0] = &het;
    d[1] = &nihal;

    d[0]->display(); 
    d[1]->display(); //If this not find display function in derived class it will run the base class display  
}

/* 
Rules for defining virtual function
1. They cannot be static
2. They are accessed by object pointers
3. Virtual functions can be a friend of another class
4. A virtual function in the base class might not be used.
5. If a virtual function is defined in a base class, there is no necessity of redefining it in 
the derived class 
*/