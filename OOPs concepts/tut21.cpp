#include <iostream>
using namespace std; 

// ! Static variable // it is shared by all objects

class employee
{

    int id;
    static int count; // default value of static variable is 0

public:
    void setdata(void)
    {
        cout << "enter employee id" << endl;
        cin >> id;
        count++;
    }

    void getdata(void)
    {
        cout << "the id of this employee is " << id << " and this is employee no " << count << endl;
    }
    
    // ! Static function
    static void getcount(void)
    {
        cout << "the no of count is " << count << endl;
        cout << endl;
    }
};

// Static functtion
// It is used when we need to create the function which can be run without passing any object
// It can run by the name of class
// the static function can only access the static variables

int employee ::count; // count is a static data member of employee class

int main()
{

    employee e1, e2;
    
    e1.setdata();
    e1.getdata();
    employee::getcount();

    e2.setdata();
    e2.getdata();
    employee::getcount();
}