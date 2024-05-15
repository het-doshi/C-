// extra example

#include <iostream>
using namespace std;
int price;
string g;

class macd
{
    int gst = 18;
    int bill;
    int total;

 public:
    int pcs;
    string burger;

    macd() {}
    macd(int c, int price, string g);
    void showbill();
};

macd::macd(int c, int price, string g)
{
    pcs = c;
    total = price * pcs;
    bill = price * pcs + gst;
}

void macd::showbill()
{
    cout << "YOUR BILL:" << endl;
    cout << "Burger Name: " << g << endl;
    cout << "Burger pcs: " << pcs << "pc * " << price << " rs = " << total << " rs" << endl;
    cout << "Included GST: " << gst << " rs" << endl;
    cout << "Total Amount: " << bill << " rs" << endl;
    cout << "----Thankyou Visit Again----" << endl;
    cout << endl;
}

int main()
{

    int id;
    int c;

    macd m1;

    cout << endl;
    cout << "Welcome To Macd India!"<< endl;
    cout << endl;
    cout << "please select the burgur id: " << endl;
    cout << "1 Simple Burger | price is Rs 50" << endl;
    cout << "2 Exotic Burger | price is Rs 100" << endl;
    cout << "Enter The Burger id: " << endl;
    cin >> id;

    switch (id)
    {
     case 1:
        cout << "you have selected simple burger" << endl<<endl;
        g = "Simple Burger";
        price = 50;
        break;

     case 2:
        cout << "you have selected exotic burger" << endl<<endl;
        g = "Exotic Burger";
        price = 100;
        break;

     default:
        cout << "this id is not available" << endl;
        break;
    }

    if (id < 3)
    {
        cout << "How many pcs you want" << endl;
        cin >> c;
        cout << endl;
        m1 = macd(c, price, g);
        m1.showbill();
    }
    else if (id > 3)
    {
        cout << "Go Back To Main Menu";
    }
}