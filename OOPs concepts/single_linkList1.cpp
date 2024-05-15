#include <iostream>
using namespace std;

class Impliment; // forward declaration

class node
{
public:
    int data;
    node *next;

    // defining constructor for creating new node
    node(int d)
    {
        data = d;
        next = NULL;
    }

    friend class Impliment; // declaring impliment as friend class of class node
};

class Impliment
{
public:
    node *head; // creating head pointer

    // Defining constructor
    Impliment()
    {
        head = NULL;
    }

    // function for inserting the node at end of link list
    int insert_end(int d)
    {
        if (head == NULL) // if head is founded null it will create the starting node
        {
            head = new node(d); // calling the node constructor for creating new node
        }
        else
        {
            node *temp = head; // creating pointer temp which points to head

            // traversal method to move temp from current node to next node
            while (temp->next != NULL)
            {
                temp = temp->next; // set the temp to the next node a -- b
            }                      //  t-->t

            // constructing a new node pointer
            node *nn = new node(d);
            temp->next = nn; // set the current temp of next to new node
        }
    }

    void Delete_after() // deleting the next node from current node 
    {
        node *temp = head;
        temp = temp->next;
        head = temp;
    }



    int display()
    {

        node *temp = head; // creating pointer temp which points to head
        while (temp->next != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data; // for printing the last dats value of temp
        if (temp->next = NULL)
        {
            cout << "it is empty";
        }
    }
};

int main()
{

    Impliment n;
    n.insert_end(10);
    n.insert_end(20);
    n.insert_end(30);
    n.Delete_after();
    n.display();
}