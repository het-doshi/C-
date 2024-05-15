// ! C++ Exercise

/* You have to create 2 classes:

SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operation of your chioice and displays the results using another function.
Create another class HybridCalculator and inherit it using these 2 classes
Also, answer the questions given below.

q1. What type of Inheritance are you using?
a1. Multiple Inheritnace
q2. Which mode of Inheritance are you using?
a2. public mode
q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
a3. on line no 88
q4. How is code reusability implemented? 
a4. using the concept multiple inheriitance we acees the functionallty of both class in one class.
*/


#include <iostream>
#include <math.h>
using namespace std;

class SimpleCalculator
{

protected:
    int n1;
    int n2;

public:
    void SetValue_SimpleCalculation()
    {
        cout<<"enter the value of n1"<<endl;
        cin>>n1;
        cout<<"enter the value of n2"<<endl;
        cin>>n2;
    }

    void Display_SimpleResult()
    {
        cout << "the results of simple calculations are: " << endl;
        cout << "the sum of n1 and n2 is: " << n1 + n2 << endl;
        cout << "the subtraction of n1 and n2 is: " << n1 - n2 << endl;
        cout << "the multiplication of n1 and n2 is: " << n1 * n2 << endl;
        cout << "the divison of n1 and n2 is: " << n1 / n2 << endl;
        cout << endl;
    }
};

class ScintificCalculator
{

protected:
    int n1;
    int n2;

public:
    void SetValue_SintificCalculation()
    {
        cout<<"enter the value of n1"<<endl;
        cin>>n1;
    }

    void Display_SintificResult()
    {
        cout << "the results of scintific calculations are: " << endl;
        cout << "the log of n1 is: " << log(n1) <<endl;
        cout << "the cos of n1 is: " << cos(n1) <<endl;
        cout << "the sin of n1 is: " << sin(n1) <<endl;
        cout << "the tan of n1 is: " << tan(n1) <<endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScintificCalculator
{

public:
    void DisplaysimpleResults()
    {
        Display_SimpleResult();
    }

    void DisplayscintificResults()
    {
        Display_SintificResult();
    }
};

int main()
{
    HybridCalculator c1;
    c1.SetValue_SimpleCalculation();
    c1.Display_SimpleResult();
    c1.SetValue_SintificCalculation();
    c1.Display_SintificResult();
}