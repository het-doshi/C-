/*
>	Greater than
<	Less than
>=	Greater than or equal to
<=	Less than or equal to
==	Equal to
!=	Not equal to
*/

/* simple pattern
                   total 6 row    row  | space  |  colum    condition for colum --> (col + row <= total rows)
           *                       1   |    5   |     1
         * *                       2   |    4   |     2
       * * *                       3   |    3   |     3
     * * * *                       4   |    2   |     4
   * * * * *                       5   |    1   |     5
 * * * * * *                       6   |    0   |     6
*/

#include <iostream>
using namespace std;

int main()
{
  for (int row = 0; row <= 6; row++) // --> loop for row
  {

    for (int space = 0; space < 6 - row; space++) // -->  loop for space
    {
      cout << " ";
    }

    for (int col = 0; col <= row; col++) // -->  loop for colum
    {
      cout << "*";
    }

    cout << endl;
  }

  cout << endl;

  /*

 * * * * * *
   * * * * *
     * * * *
       * * *
         * *
           *

  */

  for (int row = 6; row >= 1; row--)

  {

    for (int space = 0; space<6-row; space++)
    {
      cout << " ";
    }

    for (int col = 1; col <= row; col++)
    {
      cout << "*";
    }

    cout << endl;
  }
}