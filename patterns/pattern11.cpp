#include <iostream>
using namespace std;

int main()
{
    /* pattern

     *
     * *
     * * *
     * * * *
     * * * * *
     * * * *
     * * *
     * *
     *

     concept
     Right angle triangle
     Inverted right angle triangle

     */

   

    // Right angle triangle

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Inverted right angle triangle

    for (int row = 5; row > 1; row--)
    {
        for (int col = 1; col < row; col++)
        {
            cout << "*";
        }

        cout << endl;
    }
}