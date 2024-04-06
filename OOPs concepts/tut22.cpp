#include <iostream>
using namespace std;

//  Array of Objects
// store the objects in the array

class student
{
    int id;
    int fees;

public:
    void setid(void)
    {
        cout << "enter student id" << endl;
        cin >> id;
        fees = 15000;
    }

    void getid(void)
    {
        cout << "the id of student is " << id << endl;
        cout << "the fess of student is " << fees << endl;
    }
};

int main()
{

    // normal way of using the object like we normaly do like this
    // student het;
    // het.setid();
    // het.getid();

    //  but what to do when there are no of students
    // suposse that one school has 100 no of student so in that case we can create the schoool name array and
    // store data of all student as elememts of array
    // let's do it for 10 students

    int i;

    student mtj[10]; 

    for (i = 0; i < 10; i++)
    {
        mtj[i].setid();
        mtj[i].getid();
        cout<<endl;
    }
}