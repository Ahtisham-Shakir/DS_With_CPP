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
    // Member Function to make circular list
    void make_circular()
    {
        cur = start;
        while (cur->link != NULL)
            cur = cur->link;
        cur->link = start;
    }
    // Member Function to print data from nodes
    void print()
    {
        cur = start;
        cout << "\nData in the list\n";
        cout<<cur->data<<endl;
        cur=cur->link;
        while (cur->link != start)
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
    int val;
    cout << "Enter ten values in the list " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter a value: ";
        cin >> val;
        obj.insert(val);
    }
    obj.make_circular();
    obj.print();
    return 0;
}
