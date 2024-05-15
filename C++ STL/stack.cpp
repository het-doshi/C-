/*
  stack works on LIFO principal
  stack syntax: stack<datatype> StackName
  stack does not have indexing

  stack have some functions like
  PUSH --> insert element 
  POP --> delete element
  TOP --> retrive top element from stack
  size --> returns no of elements in stack
  empty() check wether stack is empty or not
  swap() it swaps the elements of satcks with each other
  all the operations on stack works on O(1) constant
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    stack<int>s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);

    stack<int>s2;
    s2.push(40);
    s2.push(50);
    s2.push(60);
    s2.pop();
    s2.swap(s1);

    cout<<s1.size()<<endl;
    cout<<s1.top()<<endl;
    cout<<s2.top()<<endl;
    cout<<s1.empty()<<endl;
}