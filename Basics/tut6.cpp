#include<iostream>
#include<iomanip>
using namespace std;

int  main() {

// *******let's see the constant******
// we can use the constant to save the constant value.
// after declare the value of variable. we cannot change the value of constant variable 
const  float e =  3.14;
cout<<"the value of e is "<<e<<endl;

//**** Maniupilators****
// it is used to control the data display or output of the program
// there are two commonly used manuipilators endl, 
// the second one is setw which is used to justify the right or the width of variable 
// the setw is present in iomanip name header file 

cout<<"hello world"<<endl;
cout<<"good mornig"<<endl;
cout<<endl;

// now let see the setw
int a=1,b=50,c=1000;
cout<<"the value of a with setw "<<setw(4)<<a<<endl;
cout<<"the value of b with setw "<<setw(4)<<b<<endl;
cout<<"the value of c with setw "<<setw(4)<<c<<endl;
cout<<endl;
cout<<"the value of a without setw "<<a<<endl;
cout<<"the value of a without setw "<<b<<endl;
cout<<"the value of c without setw "<<c<<endl;
cout<<endl;

// here we can see the clear diffrence in output 

// operater precedence 
// operater precedence it is used to solve the expression acording to operator precedence
// in case if there are same level of precedence then oprerator associativity is used
int f = 23*2/2;
cout<<"the value of this expression is "<<f;

}