// c++ stl covers 4 things
/*
    1. Containers
    2. Itrators
    3. Functions
    4. Algorithms
*/ 

// pairs is a part of  utility library
// syntax here we can choose or combine any datatype to make pairs
// Declaration: pair<val1 datatype,val2 datatype> p = <val1,val2>
// How to access pairs value: p.first, p.second to access first & second value

#include<bits/stdc++.h>
using namespace std;

int main(){

    //simple pair
    pair<int, string> p = {1,"het"};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    // we can also make pairs of n values using it's nested property
    // Nested pairs
    pair<int, pair<string,string>> p1 = {1,{"hello","Nested pairs"}};
    cout<<p1.second.first<<" "<<p1.second.second<<" "<<p1.first<<endl;

    // array of pairs Datatype so pairs can also be datatype
    pair<int, string> arr[] = { {1,"alex"}, {2,"alexa"}, {3,"alex doe"} };
    cout<< arr[1].first<<" "<<arr[1].second<<endl;
    cout<< arr[0].first<<" "<<arr[0].second<<endl;
    cout<< arr[2].first<<" "<<arr[2].second<<endl;
}
