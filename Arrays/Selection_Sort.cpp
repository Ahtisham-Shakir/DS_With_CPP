#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int min, temp, i, j;
    // Inserting values in the Array
    cout << "Enter values in the array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter an integer: ";
        cin >> arr[i];
    }
    //Array before sorting
    cout << "Array before Sorting " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    // sorting of array
    for (i = 0; i < 5; i++)
    {
        min = i;
        for (j = i + 1; j < 5; j++)
            if (arr[j] < arr[min])
                min = j;
        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    // Array after soting
    cout << "Array after sorting" << endl;
    for (i = 0; i < 5; i++)
        cout << arr[i] << "\t";
}