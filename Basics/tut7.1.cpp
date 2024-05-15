// before this refer tut7.cpp
// in these we are going to build a basic calculator through switch case !


#include<iostream>
using namespace std;

int main () {

    int n1,n2,choice;

    cout<<"enter the first no"<<endl;
    cin>>n1;
    cout<<"enter the second no"<<endl;
    cin>>n2;
    cout<<endl;
    
    cout<<"1 addition"<<endl;
    cout<<"2 subtraction"<<endl;
    cout<<"3 multiplication"<<endl;
    cout<<"4 division"<<endl;
    cout<<endl;

    cout<<"enter your choice"<<endl;
    cin>>choice;
    cout<<endl;

    switch (choice)
    {
    case 1 :
        cout<<"the addition of "<< n1 <<" and "<< n2 << " is "<<n1+n2<<endl;
        break;
    
    case 2 :
        cout<<"the subtraction of "<< n1 <<" and "<< n2 << " is "<<n1-n2<<endl;
        break;
    
    case 3 :
        cout<<"the multiplication of "<< n1 <<" and "<< n2 << " is "<<n1*n2<<endl;
        break;
    
    case 4 :
        cout<<"the multiplication of "<< n1 <<" and "<< n2 << " is "<<n1/n2<<endl;
        break;
    
    default:
        cout<<"your choice is not availble"<<endl;
        break;
    }
    cout<<endl;
    cout<<"your calculation is completed sucessfuly!";  
}