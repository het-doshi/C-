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

  /* pyramid pattern

concept 1:

                   total 5 row    row  | space  |  colum
          *                       1    |    4   |     1
        * * *                     2    |    3   |     3
      * * * * *                   3    |    2   |     5
    * * * * * * *                 4    |    1   |     7
  * * * * * * * * *               5    |    0   |     9

  condition for colum --> ( 2 * row - 1)
  condition for space --> (space < 5 - row)

*/

  for (int row = 0; row <= 5; row++) // this loop will print the row
  {

    for (int space = 0; space < 5 - row; space++) // this loop will print the row
    {
      cout << " ";
    }

    for (int col = 0; col < 2 * row - 1; col++) // this loop will print the star
    {
      cout << "*";
    }
    cout << endl;
  }

  cout << endl;
  cout << endl;

  /* pyramid pattern

  concept 2:

           *
         * * *
       * * * * *
     * * * * * * *
   * * * * * * * * *

   Decrease space 
   Increase space
   Increase space

 */

  for (int row = 1; row <= 5; row++)
  {

    for (int space = 1; space <= 5 - row; space++) // Decrease space
    {
      cout << " ";
    }

    for (int col = 1; col < row; col++) // increase star
    {
      cout << "*";
    }

    for (int col = 1; col <= row; col++) // increase star
    {
      cout << "*";
    }

    cout << endl;
  }
}