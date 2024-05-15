// !Resolution of Ambiguous function
// Ambiguous error will occur when the same name diffrent functions present in different classes while
// we calling in it derived class

#include <iostream>
using namespace std;

class morning
{
public:
    void greet()
    {
        cout << "hello good morning" << endl;
    }
};

class afternoon
{
public:
    void greet()
    {
        cout << "hello good afternoon" << endl;
    }
};

class evening
{
public:
    void greet()
    {
        cout << "hello good evening" << endl;
    }
};

class say : public morning, public afternoon, public evening
{
public:
    void greet()
    {
        morning::greet();
    }

    // if you call the grret function without morning::greet(); compiler will give ambiguous error
    // to solve we have to declare in derived class that which class of greet function we want to use
};

int main()
{
    say s1;
    s1.greet();
}