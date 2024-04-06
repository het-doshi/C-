#include <iostream>
using namespace std;

int main()
{

  // reverse pyramid pattern
  /*
    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
            *

  concept: 1
  increasing space condition --> space<=row
  decreasing star  condition --> col<n of rows-row+1
  decreasing star  condition --> col<=n of rows-row+1
  */

  for (int row = 1; row <= 5; row++)
  {

    for (int space = 1; space <= row; space++)
    {
      cout << " ";
    }

    for (int col = 1; col < 5 - row + 1; col++)
    {
      cout << "*";
    }

    for (int col = 1; col <= 5 - row + 1; col++)
    {
      cout << "*";
    }
    cout << endl;
  }

  cout << endl;
  cout << endl;

  // reverse pyramid

  /*
  concept: 2
                                  row | space | column        condition for space --> space <= n - row
    * * * * * * * * *              1  |   0   |    9          condition for column --> column <= 2*row-1
      * * * * * * *                2  |   1   |    7
        * * * * *                  3  |   2   |    5
          * * *                    4  |   3   |    3
            *                      5  |   4   |    1
  */

  int n = 5;

  for (int row = n; row >= 1; row--)
  {
    for (int space = 1; space <= n - row; space++)
    {
      cout << " ";
    }

    for (int col = 0; col < 2 * row - 1; col++)
    {
      cout << "*";
    }

    cout << endl;
  }
}