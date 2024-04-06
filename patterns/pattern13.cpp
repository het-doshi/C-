#include <iostream>
using namespace std;

int main()
{

    /*

        pattern

        *                 *
        * *             * *
        * * *         * * *
        * * * *     * * * *
        * * * * * * * * * *
        * * * *     * * * *
        * * *         * * *
        * *             * *
        *                 *

        concept:
        For upper part
        1 right angle triangle
        2 inverted space triangle * 2
        3 right angle triangle

        For Lower part
        1 inverted right angle triangle 
        2 right angle triangle with space * 2
        3 inverted right angle triangle 
    */


    // upper part

    for (int row = 1; row <= 5; row++)
        
    {
        for (int col = 1; col <= row; col++) // right angle triangle
        {
            cout << "*";
        }

        for (int space = 1; space <= 5 - row; space++) // inverted space triangle
        {
            cout << " ";
        }

         for (int space = 1; space <= 5 - row; space++) // inverted space triangle
        {
            cout << " ";
        }

        for (int col = 1; col <= row; col++) // right angle triangle
        {
            cout << "*";
        }

        cout << endl;
    }


    // lower part

    for (int row = 4; row >=1; row--)    
    {
        for (int col = 1; col <=row; col++) // inverted right angle triangle
        {
            cout << "*";
        }

        for (int space = 0; space <5 - row; space++) // right angle triangle with space
        {
            cout << " ";
        }

         for (int space = 0; space <5 - row; space++) // right angle triangle with space
        {
            cout << " ";
        }

        for (int col = 1; col <=row; col++) // inverted right angle triangle
        {
            cout << "*";
        }

        cout << endl;
    }
}