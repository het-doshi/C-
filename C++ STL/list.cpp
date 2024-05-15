/* 
  List is same as vector and dynamic in nature
  List additionaly gives us to front operations
  In list internal operation is doubbly linklist and for vector is singly linklist
*/

// list syntax: list<datatype>  ListName

#include<bits/stdc++.h>
using namespace std;

int main(){

    list<string> names;
    names.push_back("alex");
    names.emplace_back("alex doe");

    for(auto it : names)
    {
        cout<<it<<" ";
    }

    cout<<endl;

    names.push_front("roy");
    names.emplace_front("hello");

    for(auto it : names)
    {
        cout<<it<<" ";
    }

    // rest of all other functions are same as vector 
    // Deque also simillar as list & vector

}