#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    int target;
    cin >> target;

    int n = 20;

    int arr[n] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};

    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            cout << mid << endl;
            return 0;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "not found";
    return 0;
}