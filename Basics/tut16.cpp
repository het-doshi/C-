#include<iostream>
using namespace std;

// Function overloading
// because c++ uses the polymorphisim, means same name function perform diffrent operations
// function of same name do more than one operation

int add(int a, int b)
{
    cout<<"the function is using 2 arguments"<<endl;
    return a+b;
}

int add(int a, int b, int c)
{
    cout<<"the functioin is using 3 arguments"<<endl;
    return a+b+c;
}

int volume(double r, int h) {
     cout<<"the functioin is using volume of cylinder"<<endl;
    return (3.14 * r * r * h);
}

int volume(double l, int b, int h) {
     cout<<"the functioin is using volume of rectangle "<<endl;
    return (l * b * h);
}

int volume(int a) {
     cout<<"the functioin is using area of cube"<<endl;
    return (a*a*a);
}

int main()
{

    cout<<"the sum of 5 and 6 is "<<add(5,6)<<endl;
    cout<<endl;

    cout<<"the sum of 5,6 and 6 is "<<add(5,6,6)<<endl;
    cout<<endl;

    cout<<"the volume of cylinder is "<<volume(2,4)<<endl;
    cout<<endl;

    cout<<"the volume of rectangle is "<<volume(2,2,5)<<endl;
    cout<<endl;

    cout<<"the area of cube is "<<volume(2)<<endl;
    cout<<endl;

    cout<<"the sum of 5,6 and 6 is "<<add(5,6,6)<<endl;
    cout<<endl;

    cout<<"the sum of 5,6  is "<<add(5,6)<<endl;
    cout<<endl;

}