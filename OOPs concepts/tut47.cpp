// This pointer in c++
// “this” is a keyword that is an implicit pointer. 
// “this” pointer points to the object which calls the member function.

#include<iostream>
using namespace std;


class A{
    int a;

    public:
    
    // A &  setdata(int a){
    void setdata(int a){
        this->a = a;
        // return *this;
    }

    void getdata(){
        cout<<"the value of a is:"<<a<<endl;
    }

};

int main(){

    A a;
    // a.setdata(10).getdata();
    a.setdata(10);
    a.getdata();
}

