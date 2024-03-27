#include <iostream>
#include <string>
using namespace std;

const int n = 5;

// Custom Bubble Sort function for strings
void bubbleSort(string arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap if out of order
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    string arr[n];

    // Input
    cout << "Enter " << n << " strings:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "String " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Sorting in lexicographical order using custom Bubble Sort
    bubbleSort(arr, n);

    // Output
    cout << "Sorted strings in lexicographical order:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
