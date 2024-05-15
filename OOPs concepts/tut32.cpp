// Destructor !
// Destructor never takes an argument nor does it return any value 

#include<iostream>
using namespace std;

int count = 0;

class no{

    public:
    
    no(){
        count++;
        cout<<"this time the constructor is called for object "<<count<<endl<<endl;
    }

    // Destructor
    ~no(){
        cout<<"this time the destructor is called for object "<<count<<endl;
        count--;
    }
};

int main(){
    cout<<"this is our main function"<<endl<<endl;
  
   // the objects which are created under the bolck are imidately destroyed when the block is exited
    no n1;
    {
    cout<<"Entering the block"<<endl<<endl;
    cout<<"creating two more objects n2 and n3"<<endl<<endl;
    cout<<"creating the n2 object"<<endl<<endl;
    no n2;
    cout<<"creating the n3 object"<<endl<<endl;
    no n3;
    cout<<"Exiting from this block"<<endl<<endl;       
    }

    cout<<"go back to main"<<endl;

    // here destructor id called automaticlly for n1
    
}