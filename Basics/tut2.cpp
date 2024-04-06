#include<iostream>

using namespace std; // this is use to declare name spcace

// this is tutorial for variable data types
// scope of local and global variables 
int het = 10; // global varibale 
void hat () {
    cout<<het;
}

void nihal () {
    int het = 50;
    cout<<het;
}

int main () {
    int het = 74; // local variable with high priority
    
    int a = 5 , b = 7;
    float pi = 3.14;
    char h = 'h';
     cout<<"the value of a is "<<a<<" the value of b is " <<b<<" the vlaue of pie is "<<pi;
     cout<<"\nthe value of a is "<<h<<" ";
     hat();
     cout<<"\n"<<het<<"\n";
     nihal();
     return 0; 
}
  
