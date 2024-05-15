#include<iostream>
using namespace std;

int main() {

// what is pointer ? 
// data type which hold the address of other data types

// syntax eg here we making the b as pointer of a. we store the address of a into b
int a = 7;
int* b = &a;

// & (Address of) operator
cout<<"/****pointer***/"<<endl;
cout<<endl;

cout<<"printing the Address of pointer"<<endl;
cout<<"the address of a is "<<b<<endl;
cout<<"the address of a by printing &a is "<<&a<<endl; // & to store adress of variable
cout<<"the address are same"<<endl;
cout<<endl;

//* (value at) operator / derefrence operator / used to print the stored value in pointer
cout<<"printing the value of pointer"<<endl;
cout<<"the value of pointer *b is "<<*b<<endl;
cout<<endl;

// pointer to pointer  - it stores the address of another pointer
cout<<"/***pointer to pointer***/"<<endl;
cout<<endl;

int** c = &b;
cout<<"printing the Address of pointer"<<endl;
cout<<"the address of b by printing &b is "<<&b<<endl;
cout<<"the address of b by printing c is "<<c<<endl;
cout<<endl;

cout<<"printing the value of pointer to pointer"<<endl;
cout<<"the value of c by printing *c is "<<*c<<endl;
cout<<"the value of pointer b by printing **c is "<<**c<<endl;
}
