#include<iostream>
using namespace std;

int main() {

// Arrays 
// there are diffrent types to intializ the arrays

int first [4] = {10,20,30,40}; // first type of intialization

cout<<"first type of intialization"<<endl;

// printing the first array

cout<<first[0]<<endl;
cout<<first[1]<<endl;
cout<<first[2]<<endl;
cout<<"we can also modify the value of array here we replace 40 to 1 "<<endl;
first[3] = 1; 
cout<<first[3]<<endl;
cout<<endl;

cout<<"second type of intialization"<<endl;

int second [4]; // second type of intialization
second[0]=101;
second[1]=102;
second[2]=103;
second[3]=104;

// printing the second array
cout<<second[0]<<endl;
cout<<second[1]<<endl;
cout<<second[2]<<endl;
cout<<second[3]<<endl;
cout<<endl;

// printing the array using loops

int het [4] = {11,12,13,14}; 

cout<<"printing the array using loop"<<endl;

int i,k;

for ( i = 0; i < 4; i++)
{
    cout<<"the value of het "<<i<<" is "<<het[i]<<endl;
}
cout<<endl;

cout<<"printing the first array using loop"<<endl;

for (k = 0; k<4;k++)
{
    cout<<"the value of first "<<k<<" is "<<first[k]<<endl;
}
cout<<endl;


// pointers and arrays

int* p = first; // here we create the p as a pointer of fist array

// print the array using pointer 
cout<<"print the array using pointer"<<endl;

cout<<"the value of *p is "<<*p<<endl;
cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
cout<<"the value of *(p+3) is "<<*(p+3)<<endl;
cout<<endl;


cout<<*p<<endl; // 10
*p++; // 10 -- 20
*++p; // 20 -- 30
cout<<*p<<endl; // 30

}