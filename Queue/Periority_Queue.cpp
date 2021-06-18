#include <iostream>
using namespace std;
class que
{
private:
    int f1, r1, f2, r2, f3, r3;
    int q[3][10];

public:
    que()
    {
        f1 = r1 = -1;
        f2 = r2 = -1;
        f3 = r3 = -1;
    }
    void insert(int, int);
    void add(int, int &, int &, int);
    void del(int);
    int remove(int &, int &, int);
    void print(int);
    void ppp(int &, int &, int);
};
int main()
{
    que obj;
    int val, opt = 1, pro;
    while (opt != 3)
    {
        cout << "1: Enter value " << endl;
        cout << "2: Delete value " << endl;
        cout << "3: Exit" << endl;
        cin >> opt;
        switch (opt)
        {
        case 1:
            cout << "Enter value:";
            cin >> val;
            cout << "Enter Periority: ";
            cin >> pro;
            obj.insert(val, pro);
            cout << "Queue After insertion: " << endl;
            obj.print(pro);
            break;

        case 2:
            cout << "Enter Periority: ";
            cin >> pro;
            cout << "value";
            obj.del(pro);
            cout << " is Deleted " << endl;
            cout << "Queue after deletion" << endl;
            obj.print(pro);
            break;
        }
    }
}
void que ::insert(int n, int p)
{
    switch (p)
    {
    case 1:
        add(n, r1, f1, 0);
        break;
    case 2:
        add(n, r2, f2, 1);
        break;
    case 3:
        add(n, r3, f3, 2);
        break;
    }
}
void que ::add(int x, int &r, int &f, int i)
{
    if (r = 9)
    {
        cout << "Queue is full";
        exit(0);
    }
    else
    {
        r++;
        q[i][r] = x;
        if (f == -1)
            f = 0;
    }
}
void que ::del(int p)
{
    switch (p)
    {
    case 1:
        remove(r1, f1, 0);
        break;
    case 2:
        remove(r2, f2, 1);
        break;
    case 3:
        remove(r3, f3, 2);
        break;
    }
}
int que ::remove(int &r, int &f, int i)
{
    int data;
    if (f == -1)
    {
        cout << "Queue is empty";
        exit(0);
    }
    data = q[i][f];
    if (f == r)
    {
        f = r = -1;
    }
    else
        f++;
    return data;
}
void que::print(int p)
{
    switch (p)
    {
    case 1:
        ppp(r1, f1, 0);
        break;
    case 2:
        ppp(r2, f2, 1);
        break;
    case 3:
        ppp(r3, f3, 2);
        break;
    }
}
void que ::ppp(int &r, int &f, int i)
{
    if (f = -1)
    {
        cout << "Queue is empty";
        exit(0);
    }
    for (int c = f; c <= r; c++)
    {
        cout << q[i][c] << "\t";
    }
    cout << endl;
}