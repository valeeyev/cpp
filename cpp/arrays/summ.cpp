#include <iostream>
using namespace std;
int main()
{
    int arr[3] = {1, 2, 3};

    cout << "actual: " << &arr << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << &arr[i] << endl;
    }

    return 0;
}