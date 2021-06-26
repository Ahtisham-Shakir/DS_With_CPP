#include <iostream>
#include <conio.h>
using namespace std;
struct node
{
    int data;
    node *link;
};
class list
{
private:
    node *start, *cur, *temp;

public:
    list()
    {
        start = NULL;
    }
    // Member Function to insert data
    void insert(int n)
    {
        if (start == NULL)
        {
            start = new node;
            start->data = n;
            start->link = NULL;
        }
        else
        {
            cur = start;
            // go to the end of the list
            while (cur->link != NULL)
                cur = cur->link;
            // Create and add new node at the end
            temp = new node;
            temp->data = n;
            temp->link = NULL;
            cur->link = temp;
        }
    }
    // Member Function to insert value at Specified Position
    void spe_insert(int n, int p)
    {
        cur = start;
        // go to specified position
        for (int i = 1; i < p - 1; i++)
            cur = cur->link;
        if (cur->link == NULL)
        {
            cout << "Invalid Position" << endl;
            exit(0);
        }
        else
        {
            temp = new node;
            temp->data = n;
            temp->link = cur->link;
            cur->link = temp;
        }
    }
    // Member Function to print data from nodes
    void print()
    {
        cur = start;
        cout << "\nData in the list\n";
        while (cur->link != NULL)
        {
            cout << cur->data << endl;
            cur = cur->link;
        }
        // Print last element of list
        cout << cur->data << endl;
    }
};
int main()
{
    list obj;
    int val, pos;
    cout << "Enter five values in the list " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a value: ";
        cin >> val;
        obj.insert(val);
    }
    cout << "Enter value to insert at specified position: ";
    cin >> val;
    cout << "Enter Position: ";
    cin >> pos;
    obj.spe_insert(val, pos);
    obj.print();
    return 0;
}
