/*
>	Greater than
<	Less than
>=	Greater than or equal to
<=	Less than or equal to
==	Equal to
!=	Not equal to
*/

/* simple pattern
                   total 6 row    row  | colum    condition for colum --> (row <= column )
 1                                 1   |    1
 2 3                               2   |    2
 4 5 6                             3   |    3
 7 8 9 10                          4   |    4
 11 12 13 14 15                    5   |    5
*/

#include <iostream>
using namespace std;

int main()
{

    int number = 1;

    for (int row = 1; row <= 5; row++) // --> loop for row
    {
        for (int col = 1; col <= row; col++) // --> loop for column
        {
            cout << number << " "; // here we another variable which value is 1 so every time it increase it's value
            number++;
        }
        cout << endl;
    }

    cout << endl;

    /*

     1
     1 2
     1 2 3
     1 2 3 4
     1 2 3 4 5

    */

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col;
        }
        cout << endl;
    }

    cout << endl;

    /*

        1      1
        12    21
        123  321
        12344321

    */

    for (int row = 1; row <= 4; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col;
        }

        for (int space = 1; space <= 4 - row; space++)
        {
            cout << " ";
        }

        for (int space = 1; space <= 4 - row; space++)
        {
            cout << " ";
        }

        for (int col = 1; col <= row; col++)
        {
            cout << (row - col) + 1; // condition for reverse printing
        }

        cout << endl;
    }

    cout << endl;

    /*

              1
            2 1 2
          3 2 1 2 3
        4 3 2 1 2 3 4
      5 4 3 2 1 2 3 4 5

    */

    for (int row = 1; row <= 5; row++)
    {

        for(int space = 1; space<=6-row; space++)
        {
           cout<<" ";
        } 

        for (int col = 1; col <= row; col++)
        {
            cout << (row - col) + 1;
        }

        for (int col = 2; col<=row; col++)
        {
            cout <<col;
        }

        cout << endl;
    }
}