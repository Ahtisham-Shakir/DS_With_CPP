#include <iostream>
using namespace std;
class temp
{
private:
    int arr[5] = {10, 20, 30, 40};

public:
    // Member function to insert value at specified positoin
    void in(int pos, int val)
    {
        for (int i = 3; i >= pos - 1; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos - 1] = val;
    }
    // Member Function to print values
    void print(int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << "\t";
        }
        cout << endl;
    }
};
int main()
{
    temp obj;
    int p, n;
    cout << "Value before insertion" << endl;
    obj.print(4);
    cout << "Enter value to insert in the Array: ";
    cin >> n;
    cout << "Enter position: ";
    cin >> p;
    if (p > 5 || p < 1)
        cout << "You Entered Invalid Position" << endl;
    else
    {
        obj.in(p, n);
    }
cout<<"Values After Insertion "<<endl;
    obj.print(5);
}