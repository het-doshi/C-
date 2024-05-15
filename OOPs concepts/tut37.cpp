// ! Multilevel inheritance

#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:

    void set_Rollno(int a)
    {
        roll_no = a;
    }

    void get_Rollno()
    {
        cout << "the roll no of student is: " << roll_no<< endl;
    }
};

class exam : public student
{
protected:
    float maths;
    float phyiscs;

public:
    int set_marks(float p, float m)
    {
        phyiscs = p;
        maths = m;
    }

    void get_marks()
    {
        cout << "the marks of maths is: " << phyiscs << endl;
        cout << "the marks of phyiscs is: " << maths << endl;
    }
};

class result : public exam
{
public:
    void display_result()
    {
        get_Rollno();
        get_marks();
        cout << "your result is: " << (maths + phyiscs) / 2 << "%" << endl;
    };
};

int main()
{
    result het;
    het.set_Rollno(40);
    het.set_marks(94, 94);
    het.display_result();
}

/* notes:
if we are inhherting B from A and C from b [A--->B--->C]
1. A is base class for B and B is base class for C.
2. A--->B--->C is called inheritance path. */