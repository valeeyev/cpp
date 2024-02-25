#include <iostream>
#include <stdint.h>

using namespace std;

int main()
{
    uint8_t *arr = new uint8_t[3];

    if (arr == nullptr)
    {
        cerr << "Memory allocation failed!" << endl;
        return 1;
    }

    arr[0] = 'h';
    arr[1] = 'i';
    arr[2] = '!';

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl; // Print value at index i
    }

    delete[] arr;

    return 0;
}
