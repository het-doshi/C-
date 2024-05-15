#include<iostream>
using namespace std;

// RECURSION 
// The function call itself
// The function will call itself till its base condition is getting satisfied
// Eg factorial of number
// 6 = 6*5*4*3*2*1 till get the 1

factorial (int n)
{
    if (n<1){
        return 1; // base condition
    }
    return n * factorial(n -1); 
}

fib (int n)
{
    if (n<2){
        return 1; // base condition
    }
    return fib(n -2) + fib(n-1); 
}

int main()
{
   
    int a; 
    cout<<"enter the number for factorial"<<endl;
    cin>>a;
    cout<<"the factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<endl;

    int b; 
    cout<<"enter the number for fibonaci"<<endl;
    cin>>b;
    cout<<"the fibonaci of "<<b<<" is "<<fib(b)<<endl;


}