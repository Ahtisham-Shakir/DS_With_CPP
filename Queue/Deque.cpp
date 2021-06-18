#include <iostream>
using namespace std;
class deque
{
private:
    int f, r;
    int q[10];

public:
    // Constructor to initialize f and r
    deque()
    {
        f = r = -1;
    }
    // Member Function to add value from front
    void add_front(int n)
    {
        if (f == 0 && r == 9)
        {
            cout << "DeQueue is full" << endl;
            exit(0);
        }
        if (f == -1 && r == -1)
        {
            f = r = 0;
            q[f] = n;
        }
        else if (f > 0)
        {
            f--;
            q[f] = n;
        }
        else
        {
            cout << "No space from the front side" << endl;
            exit(0);
        }
    }
    // Member Function to add value from rear
    void add_rear(int n)
    {
        if (f == 0 && r == 9)
        {
            cout << "DeQueue is full" << endl;
            exit(0);
        }
        if (f == -1 && r == -1)
        {
            f = r = 0;
            q[r] = n;
        }
        else if (r < 9)
        {
            r++;
            q[r] = n;
        }
        else
        {
            cout << "No space from Rear side" << endl;
            exit(0);
        }
    }
    // Member Function to delete value from front
    void del_front()
    {
        if (f == -1 && r == -1)
        {
            cout << "Dequeue is empty" << endl;
            exit(0);
        }
        if (f == r)
        {
            f = r = -1;
        }
        else if (f == 9)
            f = -1;
        else
            f++;
    }
    // Member Function to delete value from rear
    void del_rear()
    {
        if (f == -1 && r == -1)
        {
            cout << "Dequeue is empty" << endl;
            exit(0);
        }
        if (f == r)
            f = r = -1;
        else
            r--;
    }
    // Member Function to print Dequeue
    void print()
    {
        if (f == -1 && r == -1)
        {
            cout << "Dequeue is empty" << endl;
            exit(0);
        }
        else
            for (int i = f; i <= r; i++)
            {
                cout << q[i] << "\t";
            }
        cout << endl;
    }
};
int main()
{
    deque obj;
    int val, opt = 1;
    while (opt != 5)
    {
        cout << "1: Enter value from front: " << endl;
        cout << "2: Enter value from rear: " << endl;
        cout << "3: Delete value from front: " << endl;
        cout << "4: Delete value from rear: " << endl;
        cout << "Enter choice: " << endl;
        cin >> opt;
        switch (opt)
        {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            obj.add_front(val);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> val;
            obj.add_rear(val);
            break;
        case 3:
            obj.del_front();
            break;
        case 4:
            obj.del_rear();
            break;
        }
        cout << "Dequeue After Operations " << endl;
        obj.print();
    }
}