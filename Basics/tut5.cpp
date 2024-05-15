#include<iostream>
using namespace std;

// In this tuturial we are going to see the scope resolution operator (::)

int c = 50; // global variable

int main() {

int a,b,c;
cout<<"enter the value of a"<<endl;
cin>>a;
cout<<"enter the value of b"<<endl;
cin>>b;
c = a+b;
cout<<"the value  of c is "<<c<<endl;

// by usinig scope resolution operator we acces the global variable 
cout<<"the value of global c is "<<::c<<endl;    
cout<<endl;

//*****litrerals***
// float, double and long doubble literals 
// the default value of any literal is double
// we decalre this literals by there data type or by putting f,F for float 
//,L,l for long double after the value 

float d = 66.6f;
long double h = 10.8l;
cout<<"the value of d is "<<d<<endl<<"the value of h is "<<h<<endl;
cout<<endl;

cout<<"the value  of 40.5 is "<<sizeof(40.5)<<endl;
cout<<"the value  of 40.5F is "<<sizeof(40.5F)<<endl;
cout<<"the value  of 40.5L is "<<sizeof(40.5L)<<endl;
cout<<"the value  of 40.5l is "<<sizeof(40.5l)<<endl;
cout<<endl;

// Refrence variables
// calling the same variable by diifrent names
// eg car----<----four wheeler
// we can create the refrence variable using & 

float x = 60.5;
float & y = x;

cout<<"the value of x is "<<endl;
cout<<"the value of y is "<<endl;
cout<<endl;
// hence the value of x and y are same   

//Typecasting 
// it is used to change the data type of variabe for eg int to double, float to long, double to int
// there are two difftrent ways are available for typecasting

int p = 10;
float o = 40.20; 

cout<<"the value of p is "<<(float)p<<endl; // 1 way int to float
cout<<"the value of p is "<<float(p)<<endl; // 2 way int to float
cout<<endl;
cout<<"the value of o is "<<(int)o<<endl; // 1 way float to int
cout<<"the value of o is "<<int(o)<<endl; // 2 way float to int
cout<<endl;
// to understand more let see the expressions
cout<<"the value of 1 expression is "<<p+o<<endl; 
//  1 expression 10+40.20 = 50.2
cout<<"the value of 2 expression is "<<p+(int)o<<endl; 
// 2 expression 10 + 40 = 50 in these we have use int o so the value of o is 40
}