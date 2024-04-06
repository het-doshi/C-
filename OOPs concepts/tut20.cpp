// using of array in class

#include <iostream>
using namespace std;

string Shopname;
int items;
int counter;

class shop
{
    int itemid[10];
    int itemprice[10];
    string product[10];

 public:
    void initcounter(void) { counter = 0; }
    void setdetail(void);
    void getdetail(void);
};

void shop ::setdetail(void)
{
    cout << "enter the name for product " << counter + 1 << endl;
    cin >> product[counter];
    cout << "enter the item id for product " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter the price for product " << counter + 1 << endl;
    cin >> itemprice[counter];
    counter++;
    cout << endl;
}

void shop ::getdetail(void)
{
    int i = 0;
    for (i = 0; i < items; i++)
    {
        cout << "product id: " << itemid[i] << endl;
        cout << "product name: " << product[i] << endl;
        cout << "product price: " << itemprice[i] << endl;
        cout << endl;
    }
}

int main()
{

    cout << "enter the name of your shop"<<endl;
    cin >> Shopname;
    int k;
    cout << "enter the no of products you want to store" << endl;
    cin >> items;
    cout << endl;

    shop Shopname;
    Shopname.initcounter();

    for (k = 0; k < items; k++)
    {
        Shopname.setdetail();
    }

    cout << endl;
    cout << endl;

    cout << "the name of your shop is " << ::Shopname << endl;
    cout << "you have store the details of " << items << " products" << endl<<endl;
    cout << "------Your Details Are Stored Sucessfully!------" << endl;
    cout << endl;

    cout << "Details of all stored products are below" << endl;
    cout << endl;
    
    Shopname.getdetail();
}