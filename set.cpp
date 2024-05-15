/*
  set stores every element in sorted manner with unique 
  internal tree data structure is maintained

  syntax set<datatype>setName

  find() returns iterator which points to element memory if it is present in set
  if not present it will iterator points to end()

  erase() delete the element | instead of value we can also pass iterator
  can also erase multiple functions erase(start, end) 

  count will resturn occurunce of elements in set

  set has also same functions like vector 

  in set everything happens in log(n) 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

  set<int>s1;
  s1.insert(20);
  s1.emplace(80);
  s1.emplace(810);

  auto it1 = s1.find(20);
  cout<<*(it1)<<endl;
  auto it2 = s1.find(100);
  --it2; // so now it will print last element of set
  cout<<*(it2)<<endl; 

  int c = s1.count(80);
  cout<<"count of 1: "<<c<<endl;

  s1.erase(810);

  // after deleting element

  for(auto it : s1)
  {
     cout<<it<<" ";
  }

  cout<<endl;

  /* multiset
      multiset it stored elements in sorted manner but not unique elements
      erase will delete all occurunces of elements if we pass value
      to delete single we have to pass iterartor
      everythig same as set
  */   

  /* unorderd set 
   unorderd set not stored elements sorted but store unique elements
   takes O(1) but in worst case it takes O(n)
   here upper & lower bound will not work
  */
}