#include<iostream>
using namespace std;

int main ()
{

// break keyword
int i;
for(i = 0; i <= 10;i++)
{
    cout<<i<<endl;
        if (i == 5)
    {
        break;
    }
}

cout<<"eg of break statement with for loop"<<endl;
cout<<endl;


// continue keyword
int j;
for(j = 0; j <= 10;j++)
{
    cout<<j<<endl;
        if (j == 5)
    {
        continue;
    }
}
cout<<"eg of continue statement with for loop";

}