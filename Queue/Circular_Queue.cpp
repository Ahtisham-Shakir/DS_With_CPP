#include <iostream>
using namespace std;
class que
{
    int q[10], f, r;

public:
    // constructor to initialize f and r
    que()
    {
        f = r = -1;
    }

    // Member function to insert value
    void insert(int n)
    {
        if (f == 0 && r == 9)
        {
            cout << "Circular Queue is full " << endl;
            exit(0);
        }
        else if (f == -1)
            f = r = 0;
        else if (r == 9)
            r = 0;
        else
            r++;
        q[r] = n;
    }

    // Member function to delete value
    int del()
    {
        int data;
        if (f == -1)
        {

            cout << "Queue is empty " << endl;
            exit(0);
        }
        data = q[f];
        if (f == r)
            f = r = -1;
        else if (f == 9)
            f == 0;
        else
            f++;
        return data;
    }

    //Member function to print value
    void print()
    {
        if (f == -1)
        {
            cout << "Queue is empty " << endl;
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
    que obj;
    int val, opt = 1;
    while (opt != 3)
    {

        cout << "1: Enter value in the Queue " << endl;
        cout << "2: Delete value from the Queue " << endl;
        cout << "3: Exit " << endl;
        cout << "Enter choice: ";
        cin >> opt;
        switch (opt)
        {
        case 1:
            cout << "Enter value to insert: ";
            cin >> val;
            obj.insert(val);
            cout << "Queue after insertion " << endl;
            obj.print();
            break;

        case 2:
            cout << "value " << obj.del() << " is Deleted from the Queue " << endl;
            cout << "Queue after deletion: " << endl;
            obj.print();
            break;
        }
    }
    return 0;
}
