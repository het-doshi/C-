#include <iostream>
using namespace std;

int main()
{

    /*
    alphabet pattern

    A
    A B
    A B C
    A B C D
    A B C D E

    CONCEPT
    Right angle triange
    to print character in loop we print value of character variable instead of column
    */

    char character = 'A';
    int number = 64;

    char charc = 'A';
    int num = 65;

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            char character = char(number + col);
            cout << character << " ";
            character++;
        }
        cout << endl;
    }

    cout << endl;

    /*

       alphabet pattern

       A
       B B
       C C C
       D D D D
       E E E E E

       CONCEPT
       Right angle triange
       to print character in column loop we print value of character variable
       */

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << character << " ";
        }
        character++; // here the value of character changed
        cout << endl;
    }

    cout << endl;

    /*
       alphabet pattern

       A B C D E
       A B C D
       A B C
       A B
       A

       CONCEPT
       Inverted Right angle triange
       to print character in column loop we print value of character variable
       */

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5 - row; col++)
        {
            char character = char(number + col);
            cout << character << " ";
            character++;
        }
        cout << endl;
    }

    /*

       E
       D E
       C D E
       B C D E
       A B C D E

    */

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << ((char)(70 - col));
        }

        cout << endl;
    }

    cout << endl;

    /*

    E D C B A
    D C B A
    C B A
    B A
    A

    */

    for (int row = 1; row <= 5; row++)
    {
        for (int col = row; col <= 5; col++)
        {
            cout << ((char)(70 - col));
        }
        cout << endl;
    }

    cout << endl;

    /*

    a
    B c
    D e F
    g H i J
    k L m N o

    */

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << charc << " ";
            charc++;
        }

        cout << endl;
    }
}
