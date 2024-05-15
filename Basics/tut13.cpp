#include<iostream>
using namespace std;

// this function will not run because it only copies the actual argument 
// void swap(int a, int b)
// {                        // temp  a  b
//     int temp = a;        //  4    4  10
//      a = b;              //  4    10  10
//      b = temp;           //  4    10  4
// }

// call by refrence using pointers. in value is change because it change it's address
void swappointer(int* a, int* b)
{                          //  temp   a   b
    int temp = *a;        //    4     4   10
     *a = *b;             //    4     10  10
     *b = temp;           //    4     10   4
}

// call by refrence using c++ refrence variable
// in these a pointing to x and b is pointing to y in memory
int& swap_refrence(int &a, int &b)
{                          // temp   a   b
    int temp = a;        //    4     4   10
     a = b;             //     4     10  10
     b = temp;           //    4     10   4
     return a;
}


int main()
{
    int x = 4, y = 10;
    
    cout<<"the orignal value of x is "<<x<<" the orignal value of y is "<<y<<endl;
    cout<<endl;
    
    // this will not run
    // swap(x,y);
    // cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;

    cout<<"swap x and y using refrence pointers"<<endl;
    swappointer(&x,&y); // it will takes the address of x and y using refrence pointers
    cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;
    cout<<endl;

    cout<<"swap x and y using refrence variables"<<endl;
    swap_refrence(x,y); // it will swap using refrence variable
    cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;
    cout<<endl;

    cout<<"it will swap value of x from 4 to 78"<<endl;
    swap_refrence(x,y) = 78; // it will swap value of x from 4 to 78
    cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;
    cout<<endl;

}