// In this tutorial, we will discuss virtual base class in C++

/* Virtual Base Class in C++ :
The virtual base class is a concept used in multiple inheritances to prevent ambiguity between multiple
instances. For example: suppose we created a class “A” and two classes “B” and “C”, are being derived from
class “A”. But once we create a class “D” which is being derived from class “B” and “C” as shown in figure */

/* inheritance path of below code :

                                                  student class
                                                         |
                                                         |
                                                         V
                                           |----------------------------|
                                           |                            |
                                           |                            |
                                           V                            V
                                         Written                     practical
                                         Test                           Test

// so in this case roll_no  of student will create an if we do not use virtual class */

#include<iostream>
using namespace std;

class student{
    protected:
   int roll_no;
    
    public:
    int setRoll_no(int a){
        roll_no = a;
    }

    void PrintRoll_no(){
        cout<<"Your Roll no is: "<<roll_no<<endl;
    }
};

class WrittenTest : virtual public student {
    protected:
    int maths;
    int physics;
    
    public:
    int Set_WrittenTest_marks(int m1, int p1){
        maths = m1;
        physics = p1;
    }

    void Print_WrittenTest_marks(){
        cout<<"Your marks in maths is: "<<maths<<endl;
        cout<<"Your marks in physics is: "<<physics<<endl;
    }
};

class pracricalTest : virtual public student{
    
    public:
    int totalscore;

    int Set_pracricalTest_marks(int score){
       totalscore = score;
    }

    void print_pracricalTest_marks(){
        cout<<"Your pracrical test marks is: "<<totalscore<<endl;
    }
};

class result : public WrittenTest, public pracricalTest{
     public:
     void display_result(){
     PrintRoll_no();
     Print_WrittenTest_marks();
     print_pracricalTest_marks();
     cout<<"your total marks are "<<maths+ physics + totalscore<<" out of 300"<<endl;
     cout<<"your percentage is :"<<(maths+ physics + totalscore)/3<<"%"<<endl;
    }
};

int main(){

    result het;
    het.setRoll_no(40);
    het.Set_WrittenTest_marks(94,94);
    het.Set_pracricalTest_marks(95);
    het.display_result();

}