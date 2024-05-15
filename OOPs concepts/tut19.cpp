/*  OOPs - Classes and objects revised !
1.  C++ --> initially called --> C with classes by stroustroup
2. class --> extension of structures (in C)
3.  structures had limitations
     - members are public
      - No methods
4. classes --> structures + more
5. classes --> can have methods and properties
6. classes --> can make few members as private & few as public
7. structures in C++ are typedefed
8. you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } het, rohan, alex; */
// 9. alex.markes = 80 makes no sense if marks is private 


// topic of this tutorial is Nesting of member functions

#include<iostream>
#include<string>

using namespace std;

class binary {
    string s;
    int i;

    private:
    void chkbn (void);

    public :
      void read (void);
      void ones (void);
      void display(void);
};

void binary :: read (void) {
     
    cout<<"enter the number"<<endl;
    cin>>s;
    cout<<"the number entered by you is "<<s<<endl;
}

void binary :: chkbn (void){
    for ( i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0'  && s.at(i)!='1') 
        {
            cout<<"entered number is not correct binary"<<endl;
            exit(0);  
        }
    } 
}

void binary :: ones(void){

     chkbn(); // nesting of function . the function call another function

   cout<<"display the one's complement of "<<s<<" is "<<endl;

    for ( i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='1')
        {
            s.at(i)='0';
        }
        else if (s.at(i)=='0')
        {
            s.at(i)='1';
        }
    }
}

void binary :: display (void)
{ 
    for ( i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    } 
}


int main(){
    binary b;
    b.read();
    // b.chkbn(); this will create an error here becuase this function is declared as private 
    // privalte variable and functions cannot be accesed ddirectly. 
    b.ones();
    b.display();
}


