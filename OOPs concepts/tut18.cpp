#include<iostream>
using namespace std;

// classes - by default memebers of class are private
// public access modifier
// private access modifier

/* functions - we can create function in class and we can also create the function like first we declare 
the function inside the class and implement the function outside the class */

class student {

// the variables inside private cannot be accessed directly the function of this class can only accesses it
    private : 
       int marks, age, phone_no;

    public :
        int roll_no, srno;

    void setdata( int a, int b, int c); // the declaration of function setdata 

    void getdata() { // this function will print the data
         cout<<"marks of student is "<<marks<<endl;
         cout<<"age of student is "<<age<<endl;
         cout<<"phone_no of student is "<<phone_no<<endl;
         cout<<"roll_no of student is "<<roll_no<<endl;
         cout<<"srno of student is "<<srno<<endl;
    }

};

// implement the function outside the class
// this will take the data of marks, age, phone_no

void student::setdata(int a, int b, int c) {
     marks = a;           // marks are stored in a
     age = b;            // age is stored in b
     phone_no = c;      // phone no is stored in c
}


int main()
{
    student het;  // creating the object het of class student
    het.roll_no = 40;
    het.srno = 1;
    het.setdata(94,18,1111);
    het.getdata();

    cout<<endl;

    student alex; // creating the second object alex

 // alex.marks = 80;  here this will throw an error because marks is private variable we cannot access it directly 
    alex.roll_no = 10;
    alex.srno = 2;
    alex.setdata(80,22,2222);
    alex.getdata();
    
}

/* why we need to use class instead of structure :

 1. If we want that our data is proctected and cannot be access directly so this will not possible in the
 sructure because we directly access the structure members

 2. we cannot create the function inside the structures therefor we cosidering class as a better option */

