/* 
 Vectors is a container which is dynamic in nature in terms of size
 Syntax
 vector <any datatype> vectorName
 
 1. push back() is used to insert element in vector or it use  to create empty vector 
    then it make vector. calling push_back() on an existing vector does not generate
    another vector. 
    It simply adds the new element to the end of the existing vector, modifying it in 
    place. The vector grows dynamically as elements are added.

 2. When you use emplace_back on an existing vector, it does not construct a new 
    vector. Instead, emplace_back constructs the new element directly in place at 
    the end of the vector, avoiding an unnecessary copy or move operation.


 comparison of both methods
 you can generally say that emplace_back is potentially faster than push_back because
 it avoids unnecessary copies or moves of objects when adding elements to a vector.
 
 When you use push_back, you typically create a temporary object, which then gets 
 copied or moved into the vector. This involves an extra construction step followed 
 by either a copy or a move operation, depending on the type of the object.When you 
 use push_back, you typically create a temporary object, which then gets copied or 
 moved into the vector. This involves an extra construction step followed by either 
 a copy or a move operation, depending on the type of the object.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

vector <int> v1;

// inserting elements
v1.push_back(7);
v1.emplace_back(8);
v1.push_back(9);

/*
 we can also define vector with predefined size like below but vector still can grow
 in dynamic manner  
 diffrent ways to create vectors
 1. v2(no of elements,value assign to each elements)
 2. v3(no of elements) in this case any garbase value will assign to the elements
 3. v4(v3) we can also create by copying another vector
*/
 vector <string> v2(5,"het"); 

 vector<int>v3(5);

 vector<int>v4(v3);

 // cratiing vector using pair datatatype
 vector<pair<int,string>> v5;
 // two ways to insert elements
 v5.push_back({1,"alex"});
 v5.emplace_back(2,"alex doe");

 /* Acessign values from the vector 
   1. we acess like array elements v1[0] or v1.at[0]
   2. using itrator. itrator is points to memory addres where the element is stored
*/
 
 // acessing like array
  cout<<v1[0];

 //accessing itrator 
 // syntax vector<datatype>::iterator iteratorName = vectorName.method()
 // *(iteratorName) to get value on that address

 //iterator functions
 /*
  begin - points to the first element
  end - point to memory after the last element in vector
  rbegin - points to the last element itrate vector in reverse order
  rend - point to memory before the first element in vector
  auto - it automatically define the datatypes
  erase - to delete the element from vector
 */



 vector<int>::iterator i1 = v1.end();
 i1--;
 cout<<*(i1)<<endl;

 //itrtating pair vector
 vector<pair<int,string>>::iterator i2 = v5.begin();
  cout<<(*i2).first<<" "<<(*i2).second<<endl;

  
  for (auto it = v1.begin(); it != v1.end(); it++ )
  {
    cout<<*(it)<<endl;
  } 

  //erase                                                                                                            
  //single element: erase(adrress) multiple elements in range: erase(start,end) 
  // give end element after the last element in range which you want to delete

   vector <int> v6;
   v6.push_back(10);
   v6.push_back(20);
   v6.push_back(30);
   v6.push_back(40);

   v6.erase(v6.begin()+1);
   for(auto it : v6)
   {
      cout<<it<<" ";
   }

   cout<<endl;
   
   v6.erase(v6.begin(), v6.end()-2);
   for(auto it : v6)
   {
      cout<<it<<" ";
   }

   // insert function 
   vector<int>v7;

   //insert single element syntax: insert(address, value)
   v7.insert(v7.begin(),10);

   //insert multiple element syntax: insert(address, no of elements, value)
   v7.insert(v7.begin()+1,2,20);

   //insert elements from another vector 
   // syntax: insert(address, start, end) start & postion of another vector 
   v7.insert(v7.begin()+3, v1.begin(), v1.end());

  //size function returns the no of elements in the vectors
  int vs = v7.size();
  cout<<vs;
   
  // pop_back pop the last element from vector
  v7.pop_back();

  cout<<"before swap v1"<<endl;
     for(auto it : v1)
   {
      cout<<it<<" "<<endl;
   }

  cout<<"before swap v7"<<endl;
       for(auto it : v7)
   {
      cout<<it<<" "<<endl;
   }


 //swap() it swaps the elements of vectors with each other
 v1.swap(v7);

 
  cout<<"after swap v1"<<endl;
     for(auto it : v1)
   {
      cout<<it<<" "<<endl;
   }

  cout<<"after swap v7"<<endl;
       for(auto it : v7)
   {
      cout<<it<<" "<<endl;
   }

 // clear - will erase entire elements of the vectors 
 v1.clear();

 /* empty() will check wether vector is empty or not it returns true when vector is 
  empty return 1 for empty &  0 for not empty vector*/
 bool res = v1.empty();
 cout<<"res "<<res;

} 