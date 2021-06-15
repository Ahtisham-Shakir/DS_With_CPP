#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n, loc = -1;
    cout << "The Given array is: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    cout << "Enter value to be Search: ";
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == n)
            loc = i;
    }
    if (loc == -1)
        cout << "Value not found " << endl;
    else
        cout << "Value found at index " << loc << endl;
}