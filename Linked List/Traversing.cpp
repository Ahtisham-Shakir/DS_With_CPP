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
    // Member Function to print data from nodes
    int count()
    {
        int c=0;
        cur = start;
        while (cur->link != NULL)
        {
            c++;
            cur = cur->link;
        }
        // counting last element of list
        c++;
        return c;
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
    cout<<"Total Number of values in the list are: "<<obj.count();
    return 0;
}
