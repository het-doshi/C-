// Revisiting to the pointers
// with two new keywords
// 1. New | 2. Delete

#include <iostream>
using namespace std;

int main()
{

    // basic pointer example
    int a = 10;
    int *p = &a;

    cout << "the value of a is: " << *(p) << endl;
    cout << a;
    cout << endl;

    // New keyword or operator
    int *pointer = new int(50);
    cout << "the value of pointer is: " << *(pointer) << endl;
    cout << endl;

    // creating array of pointer using neew keyword
    int *arr = new int[4];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    *(arr + 1) = 4; // we can also assign array in this way also

    // Delete Keyword or oprerator
    //  it is used to delete the memory whole array or pointer
    // delete[] arr;

    cout << "printing the pointer's array arr[]" << endl;
    cout << "the value of arr[0] is: " << arr[0] << endl;
    cout << "the value of arr[1] is: " << arr[1] << endl;
    cout << "the value of arr[2] is: " << arr[2] << endl;
    cout << "the value of arr[3] is: " << arr[3] << endl;
}
