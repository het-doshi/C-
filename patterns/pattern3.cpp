/*

inverted triangle

                   row | column
 * * * * *           1  |   5
 * * * *             2  |   4
 * * *               3  |   3
 * *                 4  |   2
 *                   5  |   1

 */

#include <iostream>
using namespace std;

int main()
{

    for (int row = 5; row >= 1; row--) // loop for row
    {

        for (int col = 1; col <= row; col++) // loop for column
        {
            cout << "*";
        }
        cout << endl;
    }
}