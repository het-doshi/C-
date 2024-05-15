#include<iostream>
using namespace std;

/* Syntax for initialization list in constructor:
   constructor (argument-list) : initilization-section
{
    assignment + other code;
}   */

class hello{

    int a;
    int b;

    public:
     
     /* 
     hello(int x, int y) : a(x), b(x+y)
     hello(int x, int y) : a(x), b(a+y)
     hello(int x, int y) : b(y), a(x) 
     */

    hello(int x, int y) : b(y), a(x+y){
        cout<<"constructor is bieng excecuted"<<endl;
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }

};

int main(){

    hello h1(4,10);
}