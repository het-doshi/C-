#include <iostream>
#include <string>
using namespace std;

int main(){

string s1;
string s2;
string s3;
string g;
string h;
int a;
int b;

cout<<"enter 1 the string"<<endl; 
cin>>s1;
cout<<"enter 2 the string"<<endl;
cin>>s2;

a = s1.length();
b = s2.length();
cout<<a<<" "<<b<<endl;
s3 = s1+s2;
cout<<s3<<endl;

g = s1.at(0);
h = s2.at(0);

s1.replace(0,1,h); 
s2.replace(0,1,g); 

cout<<s1<<" "<<s2;

}