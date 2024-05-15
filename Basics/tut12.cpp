#include<iostream>
using namespace std;

// functions
// It is not necessary that function will always return the values 

// function prototyping 
// function prototyping ensures the compiler that this function will come with some arguments
// syntax: type function-name(arguments);
int multiply (int x,int y); // eg of function prototyping
// not acepctable int multiply (int x,y); , (x,y)

void hello (void); // eg of function prototyping

// sum function
int sum (int a, int b)  
{
    int c = a+b;
    return c;
}

//Formal perameters
// In  these int a and int b are formal perameters which wiil take the values from actcual perameters
//Actual perameters
// actual perameters are used to pass the value to functions

int main()
{

// sum using simple function
int n1,n2; 
cout<<"enter first no"<<endl;
cin>>n1;
cout<<"enter second no"<<endl;
cin>>n2;
cout<<"the sum of number is "<<sum(n1,n2); // actual perameters 
cout<<endl;

// multiplication using function prototyping
int n3,n4;
cout<<"enter first no"<<endl;
cin>>n3;
cout<<"enter second no"<<endl;
cin>>n4;
cout<<"the multiplication of number is "<<sum(n3,n4)<<endl;
cout<<endl;

hello(); // callling the function without return any value

}

int multiply(int x , int y)
{
  int z = x*y;
    return z;
}

//Eg of the function without return any value
void hello () {
    cout<<"hello this is a function tutorial!";
}