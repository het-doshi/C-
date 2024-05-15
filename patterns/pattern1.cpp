/*
>	Greater than
<	Less than
>=	Greater than or equal to
<=	Less than or equal to
==	Equal to
!=	Not equal to
*/

/* simple pattern
 * * * *   4 row
 * * * *   4 column
 * * * *
 * * * *
 */

#include <iostream>
using namespace std;

int main()
{
    for (int row = 0; row <= 4; row++)
    {
        for (int col = 0; col <= 4; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

     for (int row = 1; row <=3; row++) {

            for(int space = 1; space <=3-row; space-- ){
                  cout<<" ";
            }

            for (int col = 0; col <row; col++) {
                cout<<"*";
            }

            cout<<endl;
        }
};

