// creating pointer of object 
// Arrow operator 
// creating pointer of object using Arrow operator 
// creating the array of objects

#include<iostream>
using namespace std;

class complex{
    int real;
    int imaginary;

    public:

    void setdata(int a, int b){
        real = a;
        imaginary = b;    
    }

    void getdata(){
        cout<<"the value of real is: "<<real<<endl;
        cout<<"the value of imaginary is: "<<imaginary<<endl;
    }
};

int main(){

   // simple object creation 
   complex c1;
   c1.setdata(4,5);
   c1.getdata();

   // creating the object using pointer
   complex c2;
   complex *p = &c2;
   // complex *p = new complex; we can also create the pointer of object in this way
   (*p).setdata(5,6);
   (*p).getdata();

   // Arrow operator: it is also dereffrence the pointer as same as * 
   // creating the pointer of object using Arrow operator
   complex *h = new complex; // we can also create the pointer of object in this way
   h->setdata(10,6);
   h->getdata();

   // creating the array of objects
   complex *arr = new complex[3]; // pointer arr points to array of three objects
   arr->setdata(1,1);
   arr->getdata();
   (arr+1)->setdata(2,2);
   (arr+1)->getdata();

}