/*
 map stores data in key value pairs keys are uique
 syntax : map<key datatype, value datatype>
 it  stores unique keys in sorted order
 lower & upper bound
 takes log(n)
 find() method same as set syntax:   auto iterator = m1.find(keyToFind);  
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
   
   //map 

   map<int,string>m1;
   m1.insert({1,"alex"});
   m1.emplace(2, "alexa doe");

   // we can access map values like pairs
   // key ---> map.first
   // value ---> map.second

  for(auto it : m1)
  {
     cout<<"key: "<<it.first<<" value: "<<it.second<<endl;
  }

  cout<<m1[1]<<endl;  // acessing value index start from 1 in map 

   // Using find() to search for the key and value
   auto it1 = m1.find(1);
   cout<<"key: "<<it1->first<<" value: "<<it1->second<<endl;

   //lower bounnd from stl function
   auto it2 = m1.lower_bound(1);
   cout<<"key: "<<it2->first<<" value: "<<it2->second<<endl;
   cout<<endl;

  //MultiMap
  // everything is same as map but it can stores duplicate keys in sorted order
  // here canot use map[key]
   
   cout<<"Multimap"<<endl;

   multimap<int,string>m2;
   m2.insert({1,"alex"});
   m2.emplace(1, "alexa doe");
   
  for(auto it : m2)
  {
     cout<<"key: "<<it.first<<" value: "<<it.second<<endl;
  }

   //unorderd Map
  // unorded same  as map but keys are not stored in sorted manner but all are unique
  // takes O(1) in worst case it takes O(n)

   

}