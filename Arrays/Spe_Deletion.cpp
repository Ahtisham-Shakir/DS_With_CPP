#include <iostream>
using namespace std;
int main()
{
    int arr[10], pos, size;
    cout << "Enter the size of Array: ";
    cin >> size;
    if (size > 10 || size < 1)
    {
        cout << "You Entered Invalid size" << endl;
        cout << "Size must be between 1 to 10" << endl;
        exit(0);
    }
    else
    {
        for (int i = 0; i < size; i++)
        {

            cout << "Enter an integer: ";
            cin >> arr[i];
        }
    }
    cout << "Enter postion to at which you want to delete value";
    cin >> pos;
    for (int i = pos - 1; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << "Array after insertion" << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << "\t";
    return 0;
}