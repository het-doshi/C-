// printing the array using while and do while loop!

#include<iostream>
using namespace std;

int main() {

int i=0,k=0;

int het [5] = {10,20,30,40,50}; // intializ the array

//printing the array using while loop
cout<<"printing the array using while loop"<<endl; 

while(i < 5)
{
    cout<<"the value of het "<<i<<" is "<<het[i]<<endl;
    i++;
}

cout<<endl;

//printing the array using do while loop
cout<<"printing the array using do while loop"<<endl;

do {
    cout<<"the value of het "<<k<<" is "<<het[k]<<endl;
    k++;
} 
while(k<5);

}