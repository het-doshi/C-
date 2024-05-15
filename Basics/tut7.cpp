#include<iostream>
using namespace std;

// In these tutorial we are going to see control statements

int main() {

// selection control structure : if - else statement or if-else ladder
int age,age1;
cout<<"enter your age to check your vote elegiblity"<<endl;
cin>>age;

if((age<18) && (age>0))
{
    cout<<"you are not elegible to vote"<<endl;
}
else if (age == 18)
{
   cout<<"now you are elegible to apply for voting id"<<endl;
}
else if (age == 0)
{
   cout<<" to vote come to earth first"<<endl;
}
else
{
    cout<<"your age is "<<age<<" and you are able to vote"<<endl;
}
cout<<endl;

// selection control structure : switch case statement
cout<<"enter your age to check your vote elegiblity through switch statement"<<endl;
cin>>age1;
switch (age1)
{
case 18:
   cout<<"now you are elegible to apply for voting id";
    break;

case 20:
   cout<<"you are elegible to vote";
    break;

case 0:
   cout<<" to vote come to earth first";
    break;

default:
   cout<<"there are no more cases related to your age";
    break;
}

}