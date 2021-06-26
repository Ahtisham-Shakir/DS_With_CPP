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
    // Member Functiont to delete values from list
    void del(int n)
    {
        // Delete Starting node
        if(start->data==n)
        {
            start=start->link;
        }
        // go to specified node
        cur = temp = start;
        while (cur->link != NULL)
        {
            if (cur->data == n)
            {
                temp->link = cur->link;
                delete cur;
                break;
            }
            temp = cur;
            cur = cur->link;
        }
        // Delete Last node
        if(cur->data==n)
        {
            temp->link=NULL;
            delete cur;
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
    int val;
    cout << "Enter five values in the list " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a value: ";
        cin >> val;
        obj.insert(val);
    }
    obj.print();
    cout << "Enter value you want to delete: ";
    cin >> val;
    obj.del(val);
    cout << "Values in the list after deletion: ";
    obj.print();
    return 0;
}
