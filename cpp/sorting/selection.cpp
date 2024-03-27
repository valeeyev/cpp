#include <iostream>
#include <algorithm>
using namespace std;
const int n = 10;

int main()
{
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n - 1; j++)
    {
        int small = j;

        for (int k = j + 1; k < n; k++)
        {
            if (arr[k] < arr[small])
            {
                small = k;
            }
        }
        if (small != j)
        {
            swap(arr[j], arr[small]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}