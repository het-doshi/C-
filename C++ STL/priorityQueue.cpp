/*
 inside this tree data structure is maintained 
 pop -- it takes log(n) & topmost  element is poped 
 push it takes log(n)  & insert element
 top it takes O(1)  & retrive topmost element
 by default priority greater (max heap)
 syntax: priority_queue<datatype> queueName
 size() swap() empty() same as stack
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

 // priority queue (Max heap)
 priority_queue<int> pq1;
 pq1.push(20);
 pq1.push(50);
 pq1.push(150);

 // it stores element in decending order in a tree formate at top high value element
 cout<<"top element:"<<pq1.top()<<endl;

 // Itrate priority queue
 do{
     cout<<pq1.top()<<" ";
     pq1.pop();
  }while(pq1.size()!=0);

  cout<<endl;
 
 // priority queue (Mean heap)
 // Priority queue of integers with min-heap behavior
 // Syntax : priority_queue<queueDataType, container<DataType>, comparator<DataType>>
 priority_queue<int, vector<int>, greater<int>> pq2; 
 pq2.push(80);
 pq2.push(70);
 pq2.emplace(10);

 cout<<"top element:"<<pq2.top()<<endl;

 // Itrate priority queue
  do{
     cout<<pq2.top()<<" ";
     pq2.pop();
  }while(pq2.size()!=0);
 
}