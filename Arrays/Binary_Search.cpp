#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n, mid, start, end, loc = -1;
    start = 0;
    end = 9;
    cout << "The Given array: " << endl;
    for (int i = 0; i < 10; i++)
        cout << arr[i] << "\t";
    cout << endl;
    cout << "Enter value to be Search: ";
    cin >> n;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == n)
        {
            loc = mid;
            break;
        }
        else if (n > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    if (loc == -1)
        cout << "Value not found " << endl;
    else
        cout << "Value found at index " << loc << endl;
}