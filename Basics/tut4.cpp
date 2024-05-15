// in this tutorial we are going to see the header files and the types of operators
// there are two types of header files
// 1 system header file comes with compiler we can use these files by including #INCLUDE<FILE NAME>
// 2 user defined header is written by the programmer and we can use this header file by #INCLUDE"FILe ENAME.h" 
// for using user defined header file  must need to be present in our current directory
/* we can create this file with file.h 
 so let's begin */

#include<iostream>
#include"het.h" // "this wiil create an error if the file is not present in current directory"

using namespace std;

int main () {

    int a = 10,b = 5;
    
    cout<<"the following are the arithmethic operators\n";
    cout<<" addition operator a+b the value of a is "<<a+b<<endl;
    cout<<" subtration operator a-b the value of a is "<<a-b<<endl;
    cout<<" multiplication operator a*b the value of a is "<<a*b<<endl;
    cout<<" division operator a/b the value of a is "<<a/b<<endl;
    cout<<" modulo operator a%b the value of a is "<<a%b<<endl;
    cout<<" post decrement operator a-- the value of a is "<<a--<<endl;
    cout<<" pre decrement operator --a the value of a is "<<--a<<endl;
    cout<<" pre increment operator ++b the value of b is "<<++b<<endl;
    cout<<" post increment operator b++ the value of b is "<<b++<<endl;

    cout<<endl; // use for sepration

    cout<<"the following are the comparision operators\n";
    cout<<"0 = false, 1 = true\n";
    cout<<" less than operator a<b the value of a is "<<(a<b)<<endl;
    cout<<" greater than operator a>b the value of a is "<<(a>b)<<endl;
    cout<<" less than equal to operator a<=b the value of a is "<<(a<=b)<<endl;
    cout<<" greater than equal to operator a>=b the value of a is "<<(a>=b)<<endl;
    cout<<" equal to operator a%b the value of a==b is "<<(a==b)<<endl;
    cout<<" not eqal to operator a!=b the value of a is "<<(a!=b)<<endl;

    cout<<endl; // use for sepration

    cout<<"the following are the logical operators\n";
    cout<<"0 = false, 1 = true\n";
    cout<<"and operator ((a<b) && (a<b)) the value is "<<((a<b) && (a<b)) <<endl;
    cout<<"or operator ((a<b) && (a<b)) the value is "<<((a<b) || (a<b))<<endl;
    cout<<"not equal to operator (!(a<=b)) the value is "<<(!(a<=b))<<endl;
    
    cout<<endl; // use for sepration


   // let's write the program for some basic calculations
    int x, y;
    cout<<"enter first no\n";
    cin>>x;
    cout<<"enter second no\n";
    cin>>y;
    cout<<" addition of x and y is "<<x+y<<endl;
    cout<<" less than operator "<<(a<b)<<endl;
    cout<<"and operator ((a<b) && (a<b)) "<<((a<b) && (a<b))<<endl;   
    return 0;
}


