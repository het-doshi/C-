/*
  queue works on FIFO principal
  queue syntax: queue<datatype> QueueName
  queue have some functions like
  PUSH --> insert element 
  POP --> delete element
  front --> retrive first element from queue
  back --> retrive last element from queue
  size() swap() empty() same as stack
  all the operations on queue works on O(1) constant
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
   
  queue<int>q1;
  q1.push(1);
  q1.push(2);
  q1.push(3);

  cout<<q1.front()<<endl;
  cout<<q1.back()<<endl;

  //itrating queue
  do{
     cout<<q1.front()<<" ";
     q1.pop();
  }while(q1.size()!=0);
  
}