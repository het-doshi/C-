#include<iostream>
using namespace std;

int facto(int x)
{
    int fact = 1;
    for (int i = 1; i<=x; i++)
    {
        fact = fact * i;
    }

    return fact;
    
}

int permutation(int n,int r)
{
    int equ1 = fact(n);
    int equ2 = fact(r)*fact(n-r);


     return equ1/equ2;


}

int main()
{
    int a;
    cout<<"A is: "<<endl;
    cin>>a;

    int b;
    cout<<"B is: "<<endl;
    cin>>b;


    cout<<permutation(a,b);
}
