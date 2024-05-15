#include<bits/stdc++.h>
using namespace std;

// stl functions

//custom comparator 
bool custom_comp(pair<int,int>p1,pair<int,int>p2)
{
  if(p1.second>p2.second)return true;
  if(p1.second<p2.second)return false;
  if(p1.first>p2.first)return true;
  return false;
}

int main(){

  //sort
  // array sort(a,a+n)
  // container(start,end)
  // for customize sorting syntax sort(start,end,comparator)

  int a[] = {10,20,40,80,90};
  sort(a,a+4);
  for(auto sorta : a)
  {
    cout<<sorta<<" ";
  }

  vector<pair<int,int>> v1;
  v1.push_back({4,5});
  v1.push_back({1,1});
  v1.push_back({2,3});
  v1.push_back({4,7});
  
  cout<<"before sorting"<<endl;
  for(auto it1 : v1)
  {
    cout<<it1.first<<" "<<it1.second<<endl;
  }

  //sort using built in comparator
  sort(v1.begin(),v1.end(), greater<pair<int,int>>());
   
  cout<<"after sorting"<<endl;
  for(auto it2 : v1)
  {
    cout<<it2.first<<" "<<it2.second<<endl;
  }

  // sort using custom comparator
  // sort it acoording second element in pair in acending order 
  // if in both pairs second element is same then 
  // sort the pair using first element in decending order

  // how comparator works
  // in our case it will compare two pairs using it's second element 
  // if first.second < second.second then it returns true and remains pair as it is 
  // if first.second > second.second then it returns false are swapped both the pairs
  // if first.second = second.second then it will compare using first element in
  // decending order  

  sort(v1.begin(),v1.end(),custom_comp);
  
  cout<<"after sorting using custom comparator"<<endl;
  for(auto it3 : v1)
  {
    cout<<it3.first<<" "<<it3.second<<endl;
  }
  
  // _builtin_popcount() it return no of set bits require to present no in binary
  int x = 7;
  int setbit = __builtin_popcount(x); 
  cout<<"setbit: "<<setbit<<endl;

  // binary_search() syntax binary_search(start,end,element to be search)
  // it will return true / 1 if present if not then it will return false / 0
  bool res = binary_search(a,a+4,80);
  cout<<res<<endl;

  //  lower_bound(start,end,element to find)
  //  if element is pesent it will return itrator pointes to that element
  //  if element is not present it will return itratoter points to immideatete next higher element 
  //  if want index instead of itrator then we have to - with begin iterator

  cout<<"lower bound"<<endl;
  int p =  lower_bound(a,a+4,90)-a;
  cout<<"present element index: "<<p<<endl;
  int q =  lower_bound(a,a+4,70)-a;
  cout<<"not present element index: "<<q<<endl;

  // upper_bound 
  // if element is present it will return itratoter points to immideatete next higher element

  cout<<"upper bound"<<endl;
  int p1 =  upper_bound(a,a+4,80)-a;
  cout<<"present element index: "<<p<<endl;
  int q1 =  upper_bound(a,a+4,70)-a;
  cout<<"not present element index: "<<q<<endl;
 
}