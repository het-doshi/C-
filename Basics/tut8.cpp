// In these tutuorial we are going to see the diffrent loops
// In c++ there are three types of loops:
// 1. For Loop
// 2. While Loop
// 3. Do-While Loop

// 1. For Loop
// syntax :
//  For (intialization; condition; increment/decrement/updation) 
// {
//     Loop body(c++ code)
// }

// 2. While Loop
// syntax :
//  While (condition) 
// {
//     Loop body(c++ code)
//      increment;
// }

// 3. Do-While Loop
// syntax :
//  do  {
//     Loop body(c++ code)
// } while(condition);

# include<iostream>
using namespace std;

int main () 
{
    // for Loop
    int i;
    for ( i = 0; i < 10; i++)
    {
        cout<<i<<endl;
    }

    // While Loop
    int j = 1;
    while(j<=40)
    {
        cout<<j<<endl;
        j++;
    }


    // Do-While Loop
    int h = 1;
    do {
        cout<<h<<endl;
        h++;
    }while(h<=10);
    
}