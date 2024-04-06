// intialization of objects dynamically
// intialization of object during runtime

#include <iostream>
using namespace std;

class bankDeposit
{

 public:
    int principal;
    int years;
    float intrestRate;
    float returnValue;


    bankDeposit(){}
    bankDeposit(int p, int y, float R);
    bankDeposit(int p, int y, int r);
    void show();
};

bankDeposit ::bankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    intrestRate = float(r) / 100;
    returnValue = principal;
    int i;


    for (i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}

bankDeposit::bankDeposit(int p, int k, float R)
{
    principal = p;
    years = k;
    intrestRate = R;
    returnValue = principal;
    int i;
    
    
    for (i = 0; i < k; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}

void bankDeposit :: show(){
    cout<<endl<<"Principal amount was "<<principal
        << ". Return value after "<<years
        << " years is "<<returnValue<<endl;
        cout<<endl;
}

int main(){
   
   bankDeposit b1, b2, b3;

    int p,y,k;
    float R;
    int r;

    cout<<"enter the principal amount "<<endl;
    cin>>p;
    cout<<"enter the years"<<endl;
    cin>>y;
    cout<<"enter the intrest rate in percentage"<<endl;
    cin>>r;
    b1 = bankDeposit(p,y,r);
    b1.show();

    cout<<"enter the principal amount"<<endl;
    cin>>p;
    cout<<"enter the years"<<endl;
    cin>>k;
    cout<<"enter the intrestrate in no"<<endl;
    cin>>R;
    b2 = bankDeposit(p,k,R);
    b2.show(); 
}