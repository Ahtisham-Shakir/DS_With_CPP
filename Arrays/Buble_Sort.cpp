#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int temp, i, j;
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
        for (j = 0; j < 5; j++)
            if (arr[j] > arr[j + 1])
            {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
    // Array after soting
    cout << "Array after sorting" << endl;
    for (i = 0; i < 5; i++)
        cout << arr[i] << "\t";
}