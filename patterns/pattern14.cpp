#include <iostream>
using namespace std;

int main()
{
    /*

     pattern

     **********
     **** ****
     ***   ***
     **     **
     *       *
     *       *
     **     **
     ***   ***
     **** ****
     **********
    
     concept:
     upper part
     1 inverted right angle triangle
     2 space pyramid
     3 inverted right angle triangle

     lower part
     1 right angle triangle
     2 inverted space pyramid
     3 right angle triangle

    */

    // upper part

    for(int row = 1; row<=5; row++)
    {

        for(int col = 1; col<=6-row; col++) // inverted right angle triangle
        {
            cout<<"*";
        }
        
        for(int space = 1; space<2*row-1; space++) // space pyramid
        {
            cout<<" ";
        }

        for(int col = 1; col<=6-row; col++) // inverted right angle triangle
        {
            cout<<"*";
        }

        cout<<endl;
    }

    
    // lower part

    for(int row = 5; row>=1; row--)
    {
        
        for(int col = 1; col<=6-row; col++) // right angle triangle
        {
            cout<<"*";
        }

        for(int space = 1; space<2*row-1; space++) // inverted space pyramid
        {
            cout<<" ";
        }

        for(int col = 1; col<=6-row; col++) // right angle triangle
        {
            cout<<"*";
        }

        cout<<endl;
    }
}