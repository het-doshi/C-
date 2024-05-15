#include <iostream>
using namespace std;

int main()
{

    /*  Diamond pattern

                *
              * * *
            * * * * *
          * * * * * * *
            * * * * *
              * * *
                *

    //  concept 2:

    Pyramid pattern:
    Decrease space pattern
    Increase star pattern
    increase star pattern

    Reverse Pyramid pattern:
    Increase space pattern
    Decrease star pattern
    Decrease star pattern
    */

    // pyramid pattern

    for (int row = 1; row <= 5; row++)
    {
        for (int space = 1; space <= 5 - row; space++) // Decrease pattern
        {
            cout << " ";
        }

        for (int col = 1; col < row; col++) // Increase star pattern
        {
            cout << "*";
        }
        for (int col = 1; col <= row; col++) // Increase star pattern
        {
            cout << "*";
        }

        cout << endl;
    }

    // Reverse pyramid pattern

    for (int row = 4; row >= 1; row--)
    {

        for (int space = 0; space <= 4 - row; space++) // Increase space pattern
        {
            cout << " ";
        }

        for (int col = 1; col < row; col++) // Decrease star pattern
        {
            cout << "*";
        }

        for (int col = 1; col <= row; col++) // Decrease star pattern
        {
            cout << "*";
        }

        cout << endl;
    }
}