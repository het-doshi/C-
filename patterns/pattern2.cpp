/*
>	Greater than
<	Less than
>=	Greater than or equal to
<=	Less than or equal to
==	Equal to
!=	Not equal to
*/

/*

 right triangle

 *            total 5 row    row |  colum     condition --> row = column
 *  *                          1 |    1
 *  *  *                       2 |    2
 *  *  *  *                    3 |    4
 *  *  *  *  *                 4 |    4
                               5 |    5    */

#include <iostream>
using namespace std;

int main()
{
    for (int row = 0; row <= 5; row++) // --> loop for row
    {
        for (int col = 0; col <= row; col++) // --> loop for column
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int row = 1; row <= 5; row++) // --> loop for row
    {
        for (int col = 1; col <= row; col++) // --> loop for column
        {
            cout << col;
        }
        cout << endl;
    }
}