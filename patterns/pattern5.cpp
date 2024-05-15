/*
>	Greater than
<	Less than
>=	Greater than or equal to
<=	Less than or equal to
==	Equal to
!=	Not equal to
*/

#include <iostream>
using namespace std;

int main()
{

    /* simple pattern
                      total 6 row     row  | colum    condition for colum --> (row <= column )
     1                                 1   |    1
     2 2                               2   |    2
     3 3 3                             3   |    3
     4 4 4 4                           4   |    4
     5 5 5 5 5                         5   |    5
     6 6 6 6 6 6                       6   |    6
    */

    for (int row = 1; row <= 6; row++) // --> loop for row
    {
        for (int col = 1; col <= row; col++) // --> loop for column
        {
            cout << row; // here print the value of row
        }
        cout << endl;
    }

    cout << endl;

    /*

      1 1 1 1 1 1
      2 2 2 2 2
      3 3 3 3
      4 4 4
      5 5
      6

      */

    int n = 1;

    for (int row = 6; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << n;
        }

        cout << endl;
        n++;
    }

    cout << endl;

    /*

     1
     0 1
     1 0 1
     0 1 0 1
     1 0 1 0 1

     concept:
     condition for printing 0,1 is (((col + row) % 2) == 0)
     means if sum of row and column is even then only print 1 othherwise print 0

    */

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            if (((col + row) % 2) == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }

    /*

         1 2 3 4  17 18 19 20
           5 6 7  14 15 16
             8 9  12 13
              10  11

    */
    
    
}
