// creating program using array of objects using pointers

#include <iostream>
using namespace std;

class shop
{
    int id;
    int price;
    string name;

public:
    void setdata(int a, int n, string fg)
    {
        id = a;
        price = n;
        name = fg;
    }
    void getdata()
    {
        cout << "the id of item is: " << id << endl;
        cout << "the price of item is: " << price << endl;
        cout << "the name of item is: " << name << endl;
        cout << endl;
    }
};

// reaseaon to create tempptr
/* working of array pointer
1          2        3
|                   |
|                   |
|                   |
|                   |
|                   |
v                   v
ptr-start          ptr ---> end postion of ptr after excecuting loop
|  postion       
tempptr 

postion of ptr after excecuting loop is 3. if we use same pointer in next loop then it will point to 
diffrent address so we store the address of first array element in tempptr by copy the address of pointer 
when it pointes to first element of array */

int main()
{
    shop *ptr = new shop[3];
    shop *tempptr = ptr;

    int p, q, i, z;
    string r;

    cout << "enter the products you want to store";
    cin >> z;

    for (i = 0; i < z; i++)
    {
        cout << "Enter product id and price of item no: " << i + 1 << endl;
        cout << "enter product id" << endl;
        cin >> p;
        cout << "enter product price" << endl;
        cin >> q;
        cout << "enter product name" << endl;
        cin >> r;
        cout << endl;

        ptr->setdata(p, q, r);
        ptr++;
    }

    for (i = 0; i < z; i++)
    {
        cout << "the details of item no: " << i + 1 << endl;
        tempptr->getdata();
        tempptr++;
    }
}