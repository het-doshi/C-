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
             
 //  concept 1:

 pyramid pattern
 condition for space --> space <= n
 condition for column --> column <= 2*row-1

 Reverse pyramid pattern
 condition for space --> space <= n - row
 condition for column --> column <= 2*row-1
 */

    int n;
    cout << "how much row you want?";
    cin >> n;

    // pyramid pattern:

    for (int row = 1; row < n; row++)
    {
        for (int space = 1; space <= n-row; space++)
        {
            cout << " ";
        }

        for (int col = 0; col < 2 * row - 1; col++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // reverse pyramid

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